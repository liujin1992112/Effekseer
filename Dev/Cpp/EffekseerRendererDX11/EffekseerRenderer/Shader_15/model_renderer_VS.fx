
cbuffer VS_ConstantBuffer : register(b0)
{
	float4x4 mCameraProj;
#ifdef DISABLE_INSTANCE
	float4x4 mModel;
	float4 fUV;
	float4 fModelColor;
#else
	float4x4 mModel[__INST__];
	float4 fUV[__INST__];
	float4 fModelColor[__INST__];
#endif
	float4 fLightDirection;
	float4 fLightColor;
	float4 fLightAmbient;
	float4 mUVInversed;
}

struct VS_Input
{
	float3 Pos : POSITION0;
	float3 Normal : NORMAL0;
	float3 Binormal : NORMAL1;
	float3 Tangent : NORMAL2;
	float2 UV : TEXCOORD0;
	float4 Color : NORMAL3;
#ifndef DISABLE_INSTANCE
	uint4 Index : BLENDINDICES0;
#endif
};

struct VS_Output
{
	float4 Pos : SV_POSITION;
	float2 UV : TEXCOORD0;
#if ENABLE_NORMAL_TEXTURE
	half3 Normal : TEXCOORD1;
	half3 Binormal : TEXCOORD2;
	half3 Tangent : TEXCOORD3;
#endif
	float4 Color : COLOR;
};

VS_Output main(const VS_Input Input)
{
#ifdef DISABLE_INSTANCE
	float4x4 matModel = mModel;
	float4 uv = fUV;
	float4 modelColor = fModelColor * Input.Color;
#else
	float4x4 matModel = mModel[Input.Index.x];
	float4 uv = fUV[Input.Index.x];
	float4 modelColor = fModelColor[Input.Index.x] * Input.Color;
#endif

	VS_Output Output = (VS_Output)0;
	float4 localPosition = {Input.Pos.x, Input.Pos.y, Input.Pos.z, 1.0};
	localPosition = mul(matModel, localPosition);
	Output.Pos = mul(mCameraProj, localPosition);
	Output.Color = modelColor;

	Output.UV.x = Input.UV.x * uv.z + uv.x;
	Output.UV.y = Input.UV.y * uv.w + uv.y;

#if ENABLE_LIGHTING
	float3x3 lightMat = (float3x3)matModel;
	//lightMat = transpose( lightMat );

	float4 localNormal = {0.0, 0.0, 0.0, 1.0};
	localNormal.xyz = normalize(mul(lightMat, Input.Normal));

	float4 localBinormal = {0.0, 0.0, 0.0, 1.0};
	localBinormal.xyz = normalize(mul(lightMat, Input.Binormal));

	float4 localTangent = {0.0, 0.0, 0.0, 1.0};
	localTangent.xyz = normalize(mul(lightMat, Input.Tangent));
	Output.Normal = localNormal.xyz;
	Output.Binormal = localBinormal.xyz;
	Output.Tangent = localTangent.xyz;
#endif

	Output.UV.y = mUVInversed.x + mUVInversed.y * Output.UV.y;

	return Output;
}

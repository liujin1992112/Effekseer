	// 7.13.3381
	 #pragma once
const uint32_t standard_renderer_PS[] = {
	0x07230203,0x00010000,0x00080007,0x00000042,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x0009000f,0x00000004,0x00000004,0x6e69616d,0x00000000,0x00000031,0x00000034,0x00000038,
	0x00000040,0x00030010,0x00000004,0x00000007,0x00030003,0x00000002,0x000001a4,0x00040005,
	0x00000004,0x6e69616d,0x00000000,0x00050005,0x00000009,0x495f5350,0x7475706e,0x00000000,
	0x00040006,0x00000009,0x00000000,0x00736f50,0x00050006,0x00000009,0x00000001,0x6f6c6f43,
	0x00000072,0x00040006,0x00000009,0x00000002,0x00005655,0x000b0005,0x0000000d,0x69616d5f,
	0x7473286e,0x74637572,0x5f53502d,0x75706e49,0x66762d74,0x66762d34,0x66762d34,0x003b3132,
	0x00040005,0x0000000c,0x75706e49,0x00000074,0x00040005,0x00000010,0x7074754f,0x00007475,
	0x00070005,0x00000018,0x706d6153,0x5f72656c,0x61735f67,0x656c706d,0x00000072,0x00040005,
	0x0000002e,0x75706e49,0x00000074,0x00060005,0x00000031,0x465f6c67,0x43676172,0x64726f6f,
	0x00000000,0x00050005,0x00000034,0x75706e49,0x6f435f74,0x00726f6c,0x00050005,0x00000038,
	0x75706e49,0x56555f74,0x00000000,0x00030005,0x0000003b,0x0035365f,0x00040005,0x0000003c,
	0x61726170,0x0000006d,0x00070005,0x00000040,0x746e655f,0x6f507972,0x4f746e69,0x75707475,
	0x00000074,0x00040047,0x00000018,0x00000022,0x00000001,0x00040047,0x00000018,0x00000021,
	0x00000001,0x00040047,0x00000031,0x0000000b,0x0000000f,0x00040047,0x00000034,0x0000001e,
	0x00000000,0x00040047,0x00000038,0x0000001e,0x00000001,0x00040047,0x00000040,0x0000001e,
	0x00000000,0x00020013,0x00000002,0x00030021,0x00000003,0x00000002,0x00030016,0x00000006,
	0x00000020,0x00040017,0x00000007,0x00000006,0x00000004,0x00040017,0x00000008,0x00000006,
	0x00000002,0x0005001e,0x00000009,0x00000007,0x00000007,0x00000008,0x00040020,0x0000000a,
	0x00000007,0x00000009,0x00040021,0x0000000b,0x00000007,0x0000000a,0x00040020,0x0000000f,
	0x00000007,0x00000007,0x00040015,0x00000011,0x00000020,0x00000001,0x0004002b,0x00000011,
	0x00000012,0x00000001,0x00090019,0x00000015,0x00000006,0x00000001,0x00000000,0x00000000,
	0x00000000,0x00000001,0x00000000,0x0003001b,0x00000016,0x00000015,0x00040020,0x00000017,
	0x00000000,0x00000016,0x0004003b,0x00000017,0x00000018,0x00000000,0x0004002b,0x00000011,
	0x0000001a,0x00000002,0x00040020,0x0000001b,0x00000007,0x00000008,0x00040015,0x00000020,
	0x00000020,0x00000000,0x0004002b,0x00000020,0x00000021,0x00000003,0x00040020,0x00000022,
	0x00000007,0x00000006,0x0004002b,0x00000006,0x00000025,0x00000000,0x00020014,0x00000026,
	0x0004002b,0x00000011,0x0000002f,0x00000000,0x00040020,0x00000030,0x00000001,0x00000007,
	0x0004003b,0x00000030,0x00000031,0x00000001,0x0004003b,0x00000030,0x00000034,0x00000001,
	0x00040020,0x00000037,0x00000001,0x00000008,0x0004003b,0x00000037,0x00000038,0x00000001,
	0x00040020,0x0000003f,0x00000003,0x00000007,0x0004003b,0x0000003f,0x00000040,0x00000003,
	0x00050036,0x00000002,0x00000004,0x00000000,0x00000003,0x000200f8,0x00000005,0x0004003b,
	0x0000000a,0x0000002e,0x00000007,0x0004003b,0x0000000f,0x0000003b,0x00000007,0x0004003b,
	0x0000000a,0x0000003c,0x00000007,0x0004003d,0x00000007,0x00000032,0x00000031,0x00050041,
	0x0000000f,0x00000033,0x0000002e,0x0000002f,0x0003003e,0x00000033,0x00000032,0x0004003d,
	0x00000007,0x00000035,0x00000034,0x00050041,0x0000000f,0x00000036,0x0000002e,0x00000012,
	0x0003003e,0x00000036,0x00000035,0x0004003d,0x00000008,0x00000039,0x00000038,0x00050041,
	0x0000001b,0x0000003a,0x0000002e,0x0000001a,0x0003003e,0x0000003a,0x00000039,0x0004003d,
	0x00000009,0x0000003d,0x0000002e,0x0003003e,0x0000003c,0x0000003d,0x00050039,0x00000007,
	0x0000003e,0x0000000d,0x0000003c,0x0003003e,0x0000003b,0x0000003e,0x0004003d,0x00000007,
	0x00000041,0x0000003b,0x0003003e,0x00000040,0x00000041,0x000100fd,0x00010038,0x00050036,
	0x00000007,0x0000000d,0x00000000,0x0000000b,0x00030037,0x0000000a,0x0000000c,0x000200f8,
	0x0000000e,0x0004003b,0x0000000f,0x00000010,0x00000007,0x00050041,0x0000000f,0x00000013,
	0x0000000c,0x00000012,0x0004003d,0x00000007,0x00000014,0x00000013,0x0004003d,0x00000016,
	0x00000019,0x00000018,0x00050041,0x0000001b,0x0000001c,0x0000000c,0x0000001a,0x0004003d,
	0x00000008,0x0000001d,0x0000001c,0x00050057,0x00000007,0x0000001e,0x00000019,0x0000001d,
	0x00050085,0x00000007,0x0000001f,0x00000014,0x0000001e,0x0003003e,0x00000010,0x0000001f,
	0x00050041,0x00000022,0x00000023,0x00000010,0x00000021,0x0004003d,0x00000006,0x00000024,
	0x00000023,0x000500b4,0x00000026,0x00000027,0x00000024,0x00000025,0x000300f7,0x00000029,
	0x00000000,0x000400fa,0x00000027,0x00000028,0x00000029,0x000200f8,0x00000028,0x000100fc,
	0x000200f8,0x00000029,0x0004003d,0x00000007,0x0000002b,0x00000010,0x000200fe,0x0000002b,
	0x00010038
};
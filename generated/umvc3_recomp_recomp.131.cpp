#include "umvc3_recomp_init.h"

__attribute__((alias("__imp__sub_83033FF0"))) PPC_WEAK_FUNC(sub_83033FF0);
PPC_FUNC_IMPL(__imp__sub_83033FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,5328
	ctx.r3.s64 = ctx.r31.s64 + 5328;
	// addi r4,r10,-4508
	ctx.r4.s64 = ctx.r10.s64 + -4508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8303402C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4680
	ctx.r11.s64 = ctx.r11.s64 + -4680;
	// addi r3,r9,31168
	ctx.r3.s64 = ctx.r9.s64 + 31168;
	// stw r11,5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034044;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034058"))) PPC_WEAK_FUNC(sub_83034058);
PPC_FUNC_IMPL(__imp__sub_83034058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5296
	ctx.r3.s64 = ctx.r31.s64 + 5296;
	// addi r4,r10,-4504
	ctx.r4.s64 = ctx.r10.s64 + -4504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83034094;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4688
	ctx.r11.s64 = ctx.r11.s64 + -4688;
	// addi r3,r9,31192
	ctx.r3.s64 = ctx.r9.s64 + 31192;
	// stw r11,5296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830340AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830340C0"))) PPC_WEAK_FUNC(sub_830340C0);
PPC_FUNC_IMPL(__imp__sub_830340C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5360
	ctx.r3.s64 = ctx.r31.s64 + 5360;
	// addi r4,r10,-4476
	ctx.r4.s64 = ctx.r10.s64 + -4476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x830340FC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4716
	ctx.r11.s64 = ctx.r11.s64 + -4716;
	// addi r3,r9,31216
	ctx.r3.s64 = ctx.r9.s64 + 31216;
	// stw r11,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034114;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034128"))) PPC_WEAK_FUNC(sub_83034128);
PPC_FUNC_IMPL(__imp__sub_83034128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,5392
	ctx.r3.s64 = ctx.r31.s64 + 5392;
	// addi r4,r10,-4288
	ctx.r4.s64 = ctx.r10.s64 + -4288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x83034164;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4388
	ctx.r11.s64 = ctx.r11.s64 + -4388;
	// addi r3,r9,31240
	ctx.r3.s64 = ctx.r9.s64 + 31240;
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303417C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034190"))) PPC_WEAK_FUNC(sub_83034190);
PPC_FUNC_IMPL(__imp__sub_83034190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,5424
	ctx.r3.s64 = ctx.r31.s64 + 5424;
	// addi r4,r10,-4280
	ctx.r4.s64 = ctx.r10.s64 + -4280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x830341CC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4444
	ctx.r11.s64 = ctx.r11.s64 + -4444;
	// addi r3,r9,31264
	ctx.r3.s64 = ctx.r9.s64 + 31264;
	// stw r11,5424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830341E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830341F8"))) PPC_WEAK_FUNC(sub_830341F8);
PPC_FUNC_IMPL(__imp__sub_830341F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,5456
	ctx.r3.s64 = ctx.r31.s64 + 5456;
	// addi r4,r10,-4264
	ctx.r4.s64 = ctx.r10.s64 + -4264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83034234;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4416
	ctx.r11.s64 = ctx.r11.s64 + -4416;
	// addi r3,r9,31288
	ctx.r3.s64 = ctx.r9.s64 + 31288;
	// stw r11,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303424C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034260"))) PPC_WEAK_FUNC(sub_83034260);
PPC_FUNC_IMPL(__imp__sub_83034260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,5488
	ctx.r3.s64 = ctx.r31.s64 + 5488;
	// addi r4,r10,-4200
	ctx.r4.s64 = ctx.r10.s64 + -4200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x8303429C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4244
	ctx.r11.s64 = ctx.r11.s64 + -4244;
	// addi r3,r9,31312
	ctx.r3.s64 = ctx.r9.s64 + 31312;
	// stw r11,5488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830342B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830342C8"))) PPC_WEAK_FUNC(sub_830342C8);
PPC_FUNC_IMPL(__imp__sub_830342C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5528
	ctx.r3.s64 = ctx.r31.s64 + 5528;
	// addi r4,r10,-28800
	ctx.r4.s64 = ctx.r10.s64 + -28800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x83034304;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4188
	ctx.r11.s64 = ctx.r11.s64 + -4188;
	// addi r3,r9,31336
	ctx.r3.s64 = ctx.r9.s64 + 31336;
	// stw r11,5528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303431C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034330"))) PPC_WEAK_FUNC(sub_83034330);
PPC_FUNC_IMPL(__imp__sub_83034330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,5560
	ctx.r3.s64 = ctx.r31.s64 + 5560;
	// addi r4,r10,-4140
	ctx.r4.s64 = ctx.r10.s64 + -4140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,132
	ctx.r6.s64 = 132;
	// bl 0x82b38290
	ctx.lr = 0x8303436C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4180
	ctx.r11.s64 = ctx.r11.s64 + -4180;
	// addi r3,r9,31360
	ctx.r3.s64 = ctx.r9.s64 + 31360;
	// stw r11,5560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034384;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034398"))) PPC_WEAK_FUNC(sub_83034398);
PPC_FUNC_IMPL(__imp__sub_83034398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5592
	ctx.r3.s64 = ctx.r31.s64 + 5592;
	// addi r4,r10,-29732
	ctx.r4.s64 = ctx.r10.s64 + -29732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,140
	ctx.r6.s64 = 140;
	// bl 0x82b38290
	ctx.lr = 0x830343D4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4124
	ctx.r11.s64 = ctx.r11.s64 + -4124;
	// addi r3,r9,31384
	ctx.r3.s64 = ctx.r9.s64 + 31384;
	// stw r11,5592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830343EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034400"))) PPC_WEAK_FUNC(sub_83034400);
PPC_FUNC_IMPL(__imp__sub_83034400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,5624
	ctx.r3.s64 = ctx.r31.s64 + 5624;
	// addi r4,r10,-4068
	ctx.r4.s64 = ctx.r10.s64 + -4068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8303443C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// addi r3,r9,31408
	ctx.r3.s64 = ctx.r9.s64 + 31408;
	// stw r11,5624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034454;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034468"))) PPC_WEAK_FUNC(sub_83034468);
PPC_FUNC_IMPL(__imp__sub_83034468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,5656
	ctx.r3.s64 = ctx.r31.s64 + 5656;
	// addi r4,r10,-4012
	ctx.r4.s64 = ctx.r10.s64 + -4012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x830344A4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4052
	ctx.r11.s64 = ctx.r11.s64 + -4052;
	// addi r3,r9,31432
	ctx.r3.s64 = ctx.r9.s64 + 31432;
	// stw r11,5656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830344BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830344D0"))) PPC_WEAK_FUNC(sub_830344D0);
PPC_FUNC_IMPL(__imp__sub_830344D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,5688
	ctx.r3.s64 = ctx.r31.s64 + 5688;
	// addi r4,r10,-3952
	ctx.r4.s64 = ctx.r10.s64 + -3952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8303450C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3992
	ctx.r11.s64 = ctx.r11.s64 + -3992;
	// addi r3,r9,31456
	ctx.r3.s64 = ctx.r9.s64 + 31456;
	// stw r11,5688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034524;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034538"))) PPC_WEAK_FUNC(sub_83034538);
PPC_FUNC_IMPL(__imp__sub_83034538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5856
	ctx.r3.s64 = ctx.r31.s64 + 5856;
	// addi r4,r10,-29104
	ctx.r4.s64 = ctx.r10.s64 + -29104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82b38290
	ctx.lr = 0x83034574;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3508
	ctx.r11.s64 = ctx.r11.s64 + -3508;
	// addi r3,r9,31480
	ctx.r3.s64 = ctx.r9.s64 + 31480;
	// stw r11,5856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303458C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830345A0"))) PPC_WEAK_FUNC(sub_830345A0);
PPC_FUNC_IMPL(__imp__sub_830345A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5760
	ctx.r3.s64 = ctx.r31.s64 + 5760;
	// addi r4,r10,-2536
	ctx.r4.s64 = ctx.r10.s64 + -2536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x830345DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3532
	ctx.r11.s64 = ctx.r11.s64 + -3532;
	// addi r3,r9,31504
	ctx.r3.s64 = ctx.r9.s64 + 31504;
	// stw r11,5760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830345F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034608"))) PPC_WEAK_FUNC(sub_83034608);
PPC_FUNC_IMPL(__imp__sub_83034608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5824
	ctx.r3.s64 = ctx.r31.s64 + 5824;
	// addi r4,r10,-2516
	ctx.r4.s64 = ctx.r10.s64 + -2516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// bl 0x82b38290
	ctx.lr = 0x83034644;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3524
	ctx.r11.s64 = ctx.r11.s64 + -3524;
	// addi r3,r9,31528
	ctx.r3.s64 = ctx.r9.s64 + 31528;
	// stw r11,5824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303465C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034670"))) PPC_WEAK_FUNC(sub_83034670);
PPC_FUNC_IMPL(__imp__sub_83034670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,5792
	ctx.r3.s64 = ctx.r31.s64 + 5792;
	// addi r4,r10,-2492
	ctx.r4.s64 = ctx.r10.s64 + -2492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x830346AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3516
	ctx.r11.s64 = ctx.r11.s64 + -3516;
	// addi r3,r9,31552
	ctx.r3.s64 = ctx.r9.s64 + 31552;
	// stw r11,5792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830346C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830346D8"))) PPC_WEAK_FUNC(sub_830346D8);
PPC_FUNC_IMPL(__imp__sub_830346D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,5728
	ctx.r3.s64 = ctx.r31.s64 + 5728;
	// addi r4,r10,-2476
	ctx.r4.s64 = ctx.r10.s64 + -2476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3904
	ctx.r6.s64 = 3904;
	// bl 0x82b38290
	ctx.lr = 0x83034714;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3540
	ctx.r11.s64 = ctx.r11.s64 + -3540;
	// addi r3,r9,31576
	ctx.r3.s64 = ctx.r9.s64 + 31576;
	// stw r11,5728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303472C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034740"))) PPC_WEAK_FUNC(sub_83034740);
PPC_FUNC_IMPL(__imp__sub_83034740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,5888
	ctx.r3.s64 = ctx.r31.s64 + 5888;
	// addi r4,r10,-1828
	ctx.r4.s64 = ctx.r10.s64 + -1828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x8303477C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2468
	ctx.r11.s64 = ctx.r11.s64 + -2468;
	// addi r3,r9,31600
	ctx.r3.s64 = ctx.r9.s64 + 31600;
	// stw r11,5888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830347A8"))) PPC_WEAK_FUNC(sub_830347A8);
PPC_FUNC_IMPL(__imp__sub_830347A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5888
	ctx.r5.s64 = ctx.r11.s64 + 5888;
	// addi r3,r31,6016
	ctx.r3.s64 = ctx.r31.s64 + 6016;
	// addi r4,r10,-1812
	ctx.r4.s64 = ctx.r10.s64 + -1812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x830347E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2460
	ctx.r11.s64 = ctx.r11.s64 + -2460;
	// addi r3,r9,31624
	ctx.r3.s64 = ctx.r9.s64 + 31624;
	// stw r11,6016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830347FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034810"))) PPC_WEAK_FUNC(sub_83034810);
PPC_FUNC_IMPL(__imp__sub_83034810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6016
	ctx.r5.s64 = ctx.r11.s64 + 6016;
	// addi r3,r31,5984
	ctx.r3.s64 = ctx.r31.s64 + 5984;
	// addi r4,r10,-1796
	ctx.r4.s64 = ctx.r10.s64 + -1796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x8303484C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2452
	ctx.r11.s64 = ctx.r11.s64 + -2452;
	// addi r3,r9,31648
	ctx.r3.s64 = ctx.r9.s64 + 31648;
	// stw r11,5984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034864;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034878"))) PPC_WEAK_FUNC(sub_83034878);
PPC_FUNC_IMPL(__imp__sub_83034878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5984
	ctx.r5.s64 = ctx.r11.s64 + 5984;
	// addi r3,r31,6080
	ctx.r3.s64 = ctx.r31.s64 + 6080;
	// addi r4,r10,-1776
	ctx.r4.s64 = ctx.r10.s64 + -1776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x830348B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2444
	ctx.r11.s64 = ctx.r11.s64 + -2444;
	// addi r3,r9,31672
	ctx.r3.s64 = ctx.r9.s64 + 31672;
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830348CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830348E0"))) PPC_WEAK_FUNC(sub_830348E0);
PPC_FUNC_IMPL(__imp__sub_830348E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6016
	ctx.r5.s64 = ctx.r11.s64 + 6016;
	// addi r3,r31,6112
	ctx.r3.s64 = ctx.r31.s64 + 6112;
	// addi r4,r10,-1744
	ctx.r4.s64 = ctx.r10.s64 + -1744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x8303491C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2436
	ctx.r11.s64 = ctx.r11.s64 + -2436;
	// addi r3,r9,31696
	ctx.r3.s64 = ctx.r9.s64 + 31696;
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034934;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034948"))) PPC_WEAK_FUNC(sub_83034948);
PPC_FUNC_IMPL(__imp__sub_83034948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6112
	ctx.r5.s64 = ctx.r11.s64 + 6112;
	// addi r3,r31,6048
	ctx.r3.s64 = ctx.r31.s64 + 6048;
	// addi r4,r10,-1720
	ctx.r4.s64 = ctx.r10.s64 + -1720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x83034984;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// addi r3,r9,31720
	ctx.r3.s64 = ctx.r9.s64 + 31720;
	// stw r11,6048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303499C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830349B0"))) PPC_WEAK_FUNC(sub_830349B0);
PPC_FUNC_IMPL(__imp__sub_830349B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6016
	ctx.r5.s64 = ctx.r11.s64 + 6016;
	// addi r3,r31,5952
	ctx.r3.s64 = ctx.r31.s64 + 5952;
	// addi r4,r10,-1684
	ctx.r4.s64 = ctx.r10.s64 + -1684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x830349EC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2420
	ctx.r11.s64 = ctx.r11.s64 + -2420;
	// addi r3,r9,31744
	ctx.r3.s64 = ctx.r9.s64 + 31744;
	// stw r11,5952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034A04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034A18"))) PPC_WEAK_FUNC(sub_83034A18);
PPC_FUNC_IMPL(__imp__sub_83034A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5952
	ctx.r5.s64 = ctx.r11.s64 + 5952;
	// addi r3,r31,5920
	ctx.r3.s64 = ctx.r31.s64 + 5920;
	// addi r4,r10,-1668
	ctx.r4.s64 = ctx.r10.s64 + -1668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x83034A54;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2412
	ctx.r11.s64 = ctx.r11.s64 + -2412;
	// addi r3,r9,31768
	ctx.r3.s64 = ctx.r9.s64 + 31768;
	// stw r11,5920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034A6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034A80"))) PPC_WEAK_FUNC(sub_83034A80);
PPC_FUNC_IMPL(__imp__sub_83034A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,6144
	ctx.r3.s64 = ctx.r31.s64 + 6144;
	// addi r4,r10,-1440
	ctx.r4.s64 = ctx.r10.s64 + -1440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x83034ABC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1640
	ctx.r11.s64 = ctx.r11.s64 + -1640;
	// addi r3,r9,31792
	ctx.r3.s64 = ctx.r9.s64 + 31792;
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034AD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034AE8"))) PPC_WEAK_FUNC(sub_83034AE8);
PPC_FUNC_IMPL(__imp__sub_83034AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,6304
	ctx.r3.s64 = ctx.r31.s64 + 6304;
	// addi r4,r10,-1000
	ctx.r4.s64 = ctx.r10.s64 + -1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x83034B24;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1420
	ctx.r11.s64 = ctx.r11.s64 + -1420;
	// addi r3,r9,31816
	ctx.r3.s64 = ctx.r9.s64 + 31816;
	// stw r11,6304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034B3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034B50"))) PPC_WEAK_FUNC(sub_83034B50);
PPC_FUNC_IMPL(__imp__sub_83034B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,6272
	ctx.r3.s64 = ctx.r31.s64 + 6272;
	// addi r4,r10,-988
	ctx.r4.s64 = ctx.r10.s64 + -988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83034B8C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1412
	ctx.r11.s64 = ctx.r11.s64 + -1412;
	// addi r3,r9,31840
	ctx.r3.s64 = ctx.r9.s64 + 31840;
	// stw r11,6272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034BA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034BB8"))) PPC_WEAK_FUNC(sub_83034BB8);
PPC_FUNC_IMPL(__imp__sub_83034BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,6240
	ctx.r3.s64 = ctx.r31.s64 + 6240;
	// addi r4,r10,-972
	ctx.r4.s64 = ctx.r10.s64 + -972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83034BF4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1384
	ctx.r11.s64 = ctx.r11.s64 + -1384;
	// addi r3,r9,31864
	ctx.r3.s64 = ctx.r9.s64 + 31864;
	// stw r11,6240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034C0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034C20"))) PPC_WEAK_FUNC(sub_83034C20);
PPC_FUNC_IMPL(__imp__sub_83034C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5392
	ctx.r5.s64 = ctx.r11.s64 + 5392;
	// addi r3,r31,6368
	ctx.r3.s64 = ctx.r31.s64 + 6368;
	// addi r4,r10,-956
	ctx.r4.s64 = ctx.r10.s64 + -956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83034C5C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1356
	ctx.r11.s64 = ctx.r11.s64 + -1356;
	// addi r3,r9,31888
	ctx.r3.s64 = ctx.r9.s64 + 31888;
	// stw r11,6368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034C74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034C88"))) PPC_WEAK_FUNC(sub_83034C88);
PPC_FUNC_IMPL(__imp__sub_83034C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6208
	ctx.r3.s64 = ctx.r31.s64 + 6208;
	// addi r4,r10,-944
	ctx.r4.s64 = ctx.r10.s64 + -944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83034CC4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1348
	ctx.r11.s64 = ctx.r11.s64 + -1348;
	// addi r3,r9,31912
	ctx.r3.s64 = ctx.r9.s64 + 31912;
	// stw r11,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034CDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034CF0"))) PPC_WEAK_FUNC(sub_83034CF0);
PPC_FUNC_IMPL(__imp__sub_83034CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6208
	ctx.r5.s64 = ctx.r11.s64 + 6208;
	// addi r3,r31,6464
	ctx.r3.s64 = ctx.r31.s64 + 6464;
	// addi r4,r10,-928
	ctx.r4.s64 = ctx.r10.s64 + -928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83034D2C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1340
	ctx.r11.s64 = ctx.r11.s64 + -1340;
	// addi r3,r9,31936
	ctx.r3.s64 = ctx.r9.s64 + 31936;
	// stw r11,6464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034D44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034D58"))) PPC_WEAK_FUNC(sub_83034D58);
PPC_FUNC_IMPL(__imp__sub_83034D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6368
	ctx.r5.s64 = ctx.r11.s64 + 6368;
	// addi r3,r31,6432
	ctx.r3.s64 = ctx.r31.s64 + 6432;
	// addi r4,r10,-912
	ctx.r4.s64 = ctx.r10.s64 + -912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// bl 0x82b38290
	ctx.lr = 0x83034D94;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1332
	ctx.r11.s64 = ctx.r11.s64 + -1332;
	// addi r3,r9,31960
	ctx.r3.s64 = ctx.r9.s64 + 31960;
	// stw r11,6432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034DAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034DC0"))) PPC_WEAK_FUNC(sub_83034DC0);
PPC_FUNC_IMPL(__imp__sub_83034DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5392
	ctx.r5.s64 = ctx.r11.s64 + 5392;
	// addi r3,r31,6400
	ctx.r3.s64 = ctx.r31.s64 + 6400;
	// addi r4,r10,-900
	ctx.r4.s64 = ctx.r10.s64 + -900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x83034DFC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1284
	ctx.r11.s64 = ctx.r11.s64 + -1284;
	// addi r3,r9,31984
	ctx.r3.s64 = ctx.r9.s64 + 31984;
	// stw r11,6400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034E14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034E28"))) PPC_WEAK_FUNC(sub_83034E28);
PPC_FUNC_IMPL(__imp__sub_83034E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// addi r4,r10,-888
	ctx.r4.s64 = ctx.r10.s64 + -888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83034E64;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1276
	ctx.r11.s64 = ctx.r11.s64 + -1276;
	// addi r3,r9,32008
	ctx.r3.s64 = ctx.r9.s64 + 32008;
	// stw r11,6336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034E7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034E90"))) PPC_WEAK_FUNC(sub_83034E90);
PPC_FUNC_IMPL(__imp__sub_83034E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6400
	ctx.r5.s64 = ctx.r11.s64 + 6400;
	// addi r3,r31,6176
	ctx.r3.s64 = ctx.r31.s64 + 6176;
	// addi r4,r10,-868
	ctx.r4.s64 = ctx.r10.s64 + -868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x83034ECC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1268
	ctx.r11.s64 = ctx.r11.s64 + -1268;
	// addi r3,r9,32032
	ctx.r3.s64 = ctx.r9.s64 + 32032;
	// stw r11,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034EE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034EF8"))) PPC_WEAK_FUNC(sub_83034EF8);
PPC_FUNC_IMPL(__imp__sub_83034EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,6496
	ctx.r3.s64 = ctx.r31.s64 + 6496;
	// addi r4,r10,-784
	ctx.r4.s64 = ctx.r10.s64 + -784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83034F34;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-856
	ctx.r11.s64 = ctx.r11.s64 + -856;
	// addi r3,r9,32056
	ctx.r3.s64 = ctx.r9.s64 + 32056;
	// stw r11,6496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034F4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034F60"))) PPC_WEAK_FUNC(sub_83034F60);
PPC_FUNC_IMPL(__imp__sub_83034F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7840
	ctx.r5.s64 = ctx.r11.s64 + 7840;
	// addi r3,r31,6560
	ctx.r3.s64 = ctx.r31.s64 + 6560;
	// addi r4,r10,364
	ctx.r4.s64 = ctx.r10.s64 + 364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1512
	ctx.r6.s64 = 1512;
	// bl 0x82b38290
	ctx.lr = 0x83034F9C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// addi r3,r9,32080
	ctx.r3.s64 = ctx.r9.s64 + 32080;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83034FB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83034FC8"))) PPC_WEAK_FUNC(sub_83034FC8);
PPC_FUNC_IMPL(__imp__sub_83034FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6528
	ctx.r3.s64 = ctx.r31.s64 + 6528;
	// addi r4,r10,376
	ctx.r4.s64 = ctx.r10.s64 + 376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83035004;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-760
	ctx.r11.s64 = ctx.r11.s64 + -760;
	// addi r3,r9,32104
	ctx.r3.s64 = ctx.r9.s64 + 32104;
	// stw r11,6528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303501C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035030"))) PPC_WEAK_FUNC(sub_83035030);
PPC_FUNC_IMPL(__imp__sub_83035030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6560
	ctx.r5.s64 = ctx.r11.s64 + 6560;
	// addi r3,r31,6624
	ctx.r3.s64 = ctx.r31.s64 + 6624;
	// addi r4,r10,408
	ctx.r4.s64 = ctx.r10.s64 + 408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1712
	ctx.r6.s64 = 1712;
	// bl 0x82b38290
	ctx.lr = 0x8303506C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-752
	ctx.r11.s64 = ctx.r11.s64 + -752;
	// addi r3,r9,32128
	ctx.r3.s64 = ctx.r9.s64 + 32128;
	// stw r11,6624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035084;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035098"))) PPC_WEAK_FUNC(sub_83035098);
PPC_FUNC_IMPL(__imp__sub_83035098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6560
	ctx.r5.s64 = ctx.r11.s64 + 6560;
	// addi r3,r31,6592
	ctx.r3.s64 = ctx.r31.s64 + 6592;
	// addi r4,r10,428
	ctx.r4.s64 = ctx.r10.s64 + 428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1792
	ctx.r6.s64 = 1792;
	// bl 0x82b38290
	ctx.lr = 0x830350D4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-744
	ctx.r11.s64 = ctx.r11.s64 + -744;
	// addi r3,r9,32152
	ctx.r3.s64 = ctx.r9.s64 + 32152;
	// stw r11,6592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830350EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035100"))) PPC_WEAK_FUNC(sub_83035100);
PPC_FUNC_IMPL(__imp__sub_83035100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6560
	ctx.r5.s64 = ctx.r11.s64 + 6560;
	// addi r3,r31,6688
	ctx.r3.s64 = ctx.r31.s64 + 6688;
	// addi r4,r10,444
	ctx.r4.s64 = ctx.r10.s64 + 444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1648
	ctx.r6.s64 = 1648;
	// bl 0x82b38290
	ctx.lr = 0x8303513C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-736
	ctx.r11.s64 = ctx.r11.s64 + -736;
	// addi r3,r9,32176
	ctx.r3.s64 = ctx.r9.s64 + 32176;
	// stw r11,6688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035154;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035168"))) PPC_WEAK_FUNC(sub_83035168);
PPC_FUNC_IMPL(__imp__sub_83035168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6560
	ctx.r5.s64 = ctx.r11.s64 + 6560;
	// addi r3,r31,6656
	ctx.r3.s64 = ctx.r31.s64 + 6656;
	// addi r4,r10,460
	ctx.r4.s64 = ctx.r10.s64 + 460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1536
	ctx.r6.s64 = 1536;
	// bl 0x82b38290
	ctx.lr = 0x830351A4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-728
	ctx.r11.s64 = ctx.r11.s64 + -728;
	// addi r3,r9,32200
	ctx.r3.s64 = ctx.r9.s64 + 32200;
	// stw r11,6656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830351BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830351D0"))) PPC_WEAK_FUNC(sub_830351D0);
PPC_FUNC_IMPL(__imp__sub_830351D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// addi r4,r10,924
	ctx.r4.s64 = ctx.r10.s64 + 924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8303520C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,488
	ctx.r11.s64 = ctx.r11.s64 + 488;
	// addi r3,r9,32224
	ctx.r3.s64 = ctx.r9.s64 + 32224;
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035224;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035238"))) PPC_WEAK_FUNC(sub_83035238);
PPC_FUNC_IMPL(__imp__sub_83035238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6784
	ctx.r3.s64 = ctx.r31.s64 + 6784;
	// addi r4,r10,944
	ctx.r4.s64 = ctx.r10.s64 + 944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83035274;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// addi r3,r9,32248
	ctx.r3.s64 = ctx.r9.s64 + 32248;
	// stw r11,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303528C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830352A0"))) PPC_WEAK_FUNC(sub_830352A0);
PPC_FUNC_IMPL(__imp__sub_830352A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,6720
	ctx.r3.s64 = ctx.r31.s64 + 6720;
	// addi r4,r10,964
	ctx.r4.s64 = ctx.r10.s64 + 964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830352DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,504
	ctx.r11.s64 = ctx.r11.s64 + 504;
	// addi r3,r9,32272
	ctx.r3.s64 = ctx.r9.s64 + 32272;
	// stw r11,6720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830352F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035308"))) PPC_WEAK_FUNC(sub_83035308);
PPC_FUNC_IMPL(__imp__sub_83035308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,6752
	ctx.r3.s64 = ctx.r31.s64 + 6752;
	// addi r4,r10,988
	ctx.r4.s64 = ctx.r10.s64 + 988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83035344;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
	// addi r3,r9,32296
	ctx.r3.s64 = ctx.r9.s64 + 32296;
	// stw r11,6752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303535C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035370"))) PPC_WEAK_FUNC(sub_83035370);
PPC_FUNC_IMPL(__imp__sub_83035370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,6848
	ctx.r3.s64 = ctx.r31.s64 + 6848;
	// addi r4,r10,1084
	ctx.r4.s64 = ctx.r10.s64 + 1084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x830353AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1008
	ctx.r11.s64 = ctx.r11.s64 + 1008;
	// addi r3,r9,32320
	ctx.r3.s64 = ctx.r9.s64 + 32320;
	// stw r11,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830353C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830353D8"))) PPC_WEAK_FUNC(sub_830353D8);
PPC_FUNC_IMPL(__imp__sub_830353D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,6880
	ctx.r3.s64 = ctx.r31.s64 + 6880;
	// addi r4,r10,1428
	ctx.r4.s64 = ctx.r10.s64 + 1428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83035414;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1108
	ctx.r11.s64 = ctx.r11.s64 + 1108;
	// addi r3,r9,32344
	ctx.r3.s64 = ctx.r9.s64 + 32344;
	// stw r11,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303542C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035440"))) PPC_WEAK_FUNC(sub_83035440);
PPC_FUNC_IMPL(__imp__sub_83035440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6944
	ctx.r3.s64 = ctx.r31.s64 + 6944;
	// addi r4,r10,1452
	ctx.r4.s64 = ctx.r10.s64 + 1452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8303547C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1116
	ctx.r11.s64 = ctx.r11.s64 + 1116;
	// addi r3,r9,32368
	ctx.r3.s64 = ctx.r9.s64 + 32368;
	// stw r11,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035494;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830354A8"))) PPC_WEAK_FUNC(sub_830354A8);
PPC_FUNC_IMPL(__imp__sub_830354A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,6912
	ctx.r3.s64 = ctx.r31.s64 + 6912;
	// addi r4,r10,1472
	ctx.r4.s64 = ctx.r10.s64 + 1472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x830354E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1100
	ctx.r11.s64 = ctx.r11.s64 + 1100;
	// addi r3,r9,32392
	ctx.r3.s64 = ctx.r9.s64 + 32392;
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830354FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035510"))) PPC_WEAK_FUNC(sub_83035510);
PPC_FUNC_IMPL(__imp__sub_83035510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,6976
	ctx.r3.s64 = ctx.r31.s64 + 6976;
	// addi r4,r10,1604
	ctx.r4.s64 = ctx.r10.s64 + 1604;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8303554C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1488
	ctx.r11.s64 = ctx.r11.s64 + 1488;
	// addi r3,r9,32416
	ctx.r3.s64 = ctx.r9.s64 + 32416;
	// stw r11,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035564;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035578"))) PPC_WEAK_FUNC(sub_83035578);
PPC_FUNC_IMPL(__imp__sub_83035578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7008
	ctx.r3.s64 = ctx.r31.s64 + 7008;
	// addi r4,r10,1724
	ctx.r4.s64 = ctx.r10.s64 + 1724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830355B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1616
	ctx.r11.s64 = ctx.r11.s64 + 1616;
	// addi r3,r9,32440
	ctx.r3.s64 = ctx.r9.s64 + 32440;
	// stw r11,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830355CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830355E0"))) PPC_WEAK_FUNC(sub_830355E0);
PPC_FUNC_IMPL(__imp__sub_830355E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7040
	ctx.r3.s64 = ctx.r31.s64 + 7040;
	// addi r4,r10,1872
	ctx.r4.s64 = ctx.r10.s64 + 1872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8303561C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1736
	ctx.r11.s64 = ctx.r11.s64 + 1736;
	// addi r3,r9,32464
	ctx.r3.s64 = ctx.r9.s64 + 32464;
	// stw r11,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035634;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035648"))) PPC_WEAK_FUNC(sub_83035648);
PPC_FUNC_IMPL(__imp__sub_83035648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7072
	ctx.r3.s64 = ctx.r31.s64 + 7072;
	// addi r4,r10,1964
	ctx.r4.s64 = ctx.r10.s64 + 1964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83035684;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1884
	ctx.r11.s64 = ctx.r11.s64 + 1884;
	// addi r3,r9,32488
	ctx.r3.s64 = ctx.r9.s64 + 32488;
	// stw r11,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303569C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830356B0"))) PPC_WEAK_FUNC(sub_830356B0);
PPC_FUNC_IMPL(__imp__sub_830356B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7104
	ctx.r3.s64 = ctx.r31.s64 + 7104;
	// addi r4,r10,2052
	ctx.r4.s64 = ctx.r10.s64 + 2052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830356EC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1976
	ctx.r11.s64 = ctx.r11.s64 + 1976;
	// addi r3,r9,32512
	ctx.r3.s64 = ctx.r9.s64 + 32512;
	// stw r11,7104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035704;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035718"))) PPC_WEAK_FUNC(sub_83035718);
PPC_FUNC_IMPL(__imp__sub_83035718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7136
	ctx.r3.s64 = ctx.r31.s64 + 7136;
	// addi r4,r10,2148
	ctx.r4.s64 = ctx.r10.s64 + 2148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83035754;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2072
	ctx.r11.s64 = ctx.r11.s64 + 2072;
	// addi r3,r9,32536
	ctx.r3.s64 = ctx.r9.s64 + 32536;
	// stw r11,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303576C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035780"))) PPC_WEAK_FUNC(sub_83035780);
PPC_FUNC_IMPL(__imp__sub_83035780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7168
	ctx.r3.s64 = ctx.r31.s64 + 7168;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x830357BC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2164
	ctx.r11.s64 = ctx.r11.s64 + 2164;
	// addi r3,r9,32560
	ctx.r3.s64 = ctx.r9.s64 + 32560;
	// stw r11,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830357D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830357E8"))) PPC_WEAK_FUNC(sub_830357E8);
PPC_FUNC_IMPL(__imp__sub_830357E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7200
	ctx.r3.s64 = ctx.r31.s64 + 7200;
	// addi r4,r10,2660
	ctx.r4.s64 = ctx.r10.s64 + 2660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83035824;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// addi r3,r9,32584
	ctx.r3.s64 = ctx.r9.s64 + 32584;
	// stw r11,7200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303583C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035850"))) PPC_WEAK_FUNC(sub_83035850);
PPC_FUNC_IMPL(__imp__sub_83035850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,4464
	ctx.r5.s64 = ctx.r11.s64 + 4464;
	// addi r3,r31,7232
	ctx.r3.s64 = ctx.r31.s64 + 7232;
	// addi r4,r10,2680
	ctx.r4.s64 = ctx.r10.s64 + 2680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,816
	ctx.r6.s64 = 816;
	// bl 0x82b38290
	ctx.lr = 0x8303588C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2316
	ctx.r11.s64 = ctx.r11.s64 + 2316;
	// addi r3,r9,32608
	ctx.r3.s64 = ctx.r9.s64 + 32608;
	// stw r11,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830358A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830358B8"))) PPC_WEAK_FUNC(sub_830358B8);
PPC_FUNC_IMPL(__imp__sub_830358B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,7296
	ctx.r3.s64 = ctx.r31.s64 + 7296;
	// addi r4,r10,3032
	ctx.r4.s64 = ctx.r10.s64 + 3032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830358F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2688
	ctx.r11.s64 = ctx.r11.s64 + 2688;
	// addi r3,r9,32632
	ctx.r3.s64 = ctx.r9.s64 + 32632;
	// stw r11,7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303590C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035920"))) PPC_WEAK_FUNC(sub_83035920);
PPC_FUNC_IMPL(__imp__sub_83035920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7328
	ctx.r3.s64 = ctx.r31.s64 + 7328;
	// addi r4,r10,3044
	ctx.r4.s64 = ctx.r10.s64 + 3044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,108
	ctx.r6.s64 = 108;
	// bl 0x82b38290
	ctx.lr = 0x8303595C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2696
	ctx.r11.s64 = ctx.r11.s64 + 2696;
	// addi r3,r9,32656
	ctx.r3.s64 = ctx.r9.s64 + 32656;
	// stw r11,7328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035974;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035988"))) PPC_WEAK_FUNC(sub_83035988);
PPC_FUNC_IMPL(__imp__sub_83035988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7296
	ctx.r5.s64 = ctx.r11.s64 + 7296;
	// addi r3,r31,7264
	ctx.r3.s64 = ctx.r31.s64 + 7264;
	// addi r4,r10,3068
	ctx.r4.s64 = ctx.r10.s64 + 3068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x830359C4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2704
	ctx.r11.s64 = ctx.r11.s64 + 2704;
	// addi r3,r9,32680
	ctx.r3.s64 = ctx.r9.s64 + 32680;
	// stw r11,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830359DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830359F0"))) PPC_WEAK_FUNC(sub_830359F0);
PPC_FUNC_IMPL(__imp__sub_830359F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,7360
	ctx.r3.s64 = ctx.r31.s64 + 7360;
	// addi r4,r10,3264
	ctx.r4.s64 = ctx.r10.s64 + 3264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x83035A2C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3108
	ctx.r11.s64 = ctx.r11.s64 + 3108;
	// addi r3,r9,32704
	ctx.r3.s64 = ctx.r9.s64 + 32704;
	// stw r11,7360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035A44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035A58"))) PPC_WEAK_FUNC(sub_83035A58);
PPC_FUNC_IMPL(__imp__sub_83035A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,7488
	ctx.r3.s64 = ctx.r31.s64 + 7488;
	// addi r4,r10,4688
	ctx.r4.s64 = ctx.r10.s64 + 4688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83035A94;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3284
	ctx.r11.s64 = ctx.r11.s64 + 3284;
	// addi r3,r9,32728
	ctx.r3.s64 = ctx.r9.s64 + 32728;
	// stw r11,7488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035AAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035AC0"))) PPC_WEAK_FUNC(sub_83035AC0);
PPC_FUNC_IMPL(__imp__sub_83035AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4684
	ctx.r5.s64 = ctx.r11.s64 + -4684;
	// addi r3,r31,7680
	ctx.r3.s64 = ctx.r31.s64 + 7680;
	// addi r4,r10,4700
	ctx.r4.s64 = ctx.r10.s64 + 4700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83035AFC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3292
	ctx.r11.s64 = ctx.r11.s64 + 3292;
	// addi r3,r9,32752
	ctx.r3.s64 = ctx.r9.s64 + 32752;
	// stw r11,7680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035B14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035B28"))) PPC_WEAK_FUNC(sub_83035B28);
PPC_FUNC_IMPL(__imp__sub_83035B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,7392
	ctx.r3.s64 = ctx.r31.s64 + 7392;
	// addi r4,r10,4724
	ctx.r4.s64 = ctx.r10.s64 + 4724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83035B64;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3388
	ctx.r11.s64 = ctx.r11.s64 + 3388;
	// addi r3,r9,-32760
	ctx.r3.s64 = ctx.r9.s64 + -32760;
	// stw r11,7392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035B7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035B90"))) PPC_WEAK_FUNC(sub_83035B90);
PPC_FUNC_IMPL(__imp__sub_83035B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7552
	ctx.r3.s64 = ctx.r31.s64 + 7552;
	// addi r4,r10,4744
	ctx.r4.s64 = ctx.r10.s64 + 4744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83035BCC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3300
	ctx.r11.s64 = ctx.r11.s64 + 3300;
	// addi r3,r9,-32736
	ctx.r3.s64 = ctx.r9.s64 + -32736;
	// stw r11,7552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035BE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035BF8"))) PPC_WEAK_FUNC(sub_83035BF8);
PPC_FUNC_IMPL(__imp__sub_83035BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7456
	ctx.r3.s64 = ctx.r31.s64 + 7456;
	// addi r4,r10,4776
	ctx.r4.s64 = ctx.r10.s64 + 4776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83035C34;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3308
	ctx.r11.s64 = ctx.r11.s64 + 3308;
	// addi r3,r9,-32712
	ctx.r3.s64 = ctx.r9.s64 + -32712;
	// stw r11,7456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035C4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035C60"))) PPC_WEAK_FUNC(sub_83035C60);
PPC_FUNC_IMPL(__imp__sub_83035C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7648
	ctx.r3.s64 = ctx.r31.s64 + 7648;
	// addi r4,r10,4804
	ctx.r4.s64 = ctx.r10.s64 + 4804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83035C9C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3324
	ctx.r11.s64 = ctx.r11.s64 + 3324;
	// addi r3,r9,-32688
	ctx.r3.s64 = ctx.r9.s64 + -32688;
	// stw r11,7648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035CB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035CC8"))) PPC_WEAK_FUNC(sub_83035CC8);
PPC_FUNC_IMPL(__imp__sub_83035CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7424
	ctx.r3.s64 = ctx.r31.s64 + 7424;
	// addi r4,r10,4836
	ctx.r4.s64 = ctx.r10.s64 + 4836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83035D04;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3316
	ctx.r11.s64 = ctx.r11.s64 + 3316;
	// addi r3,r9,-32664
	ctx.r3.s64 = ctx.r9.s64 + -32664;
	// stw r11,7424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035D1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035D30"))) PPC_WEAK_FUNC(sub_83035D30);
PPC_FUNC_IMPL(__imp__sub_83035D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7712
	ctx.r3.s64 = ctx.r31.s64 + 7712;
	// addi r4,r10,4884
	ctx.r4.s64 = ctx.r10.s64 + 4884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83035D6C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3332
	ctx.r11.s64 = ctx.r11.s64 + 3332;
	// addi r3,r9,-32640
	ctx.r3.s64 = ctx.r9.s64 + -32640;
	// stw r11,7712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035D84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035D98"))) PPC_WEAK_FUNC(sub_83035D98);
PPC_FUNC_IMPL(__imp__sub_83035D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7744
	ctx.r3.s64 = ctx.r31.s64 + 7744;
	// addi r4,r10,4916
	ctx.r4.s64 = ctx.r10.s64 + 4916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83035DD4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3340
	ctx.r11.s64 = ctx.r11.s64 + 3340;
	// addi r3,r9,-32616
	ctx.r3.s64 = ctx.r9.s64 + -32616;
	// stw r11,7744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035DEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035E00"))) PPC_WEAK_FUNC(sub_83035E00);
PPC_FUNC_IMPL(__imp__sub_83035E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7584
	ctx.r3.s64 = ctx.r31.s64 + 7584;
	// addi r4,r10,4948
	ctx.r4.s64 = ctx.r10.s64 + 4948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83035E3C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3348
	ctx.r11.s64 = ctx.r11.s64 + 3348;
	// addi r3,r9,-32592
	ctx.r3.s64 = ctx.r9.s64 + -32592;
	// stw r11,7584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035E54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035E68"))) PPC_WEAK_FUNC(sub_83035E68);
PPC_FUNC_IMPL(__imp__sub_83035E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7520
	ctx.r3.s64 = ctx.r31.s64 + 7520;
	// addi r4,r10,4980
	ctx.r4.s64 = ctx.r10.s64 + 4980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83035EA4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3356
	ctx.r11.s64 = ctx.r11.s64 + 3356;
	// addi r3,r9,-32568
	ctx.r3.s64 = ctx.r9.s64 + -32568;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035EBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035ED0"))) PPC_WEAK_FUNC(sub_83035ED0);
PPC_FUNC_IMPL(__imp__sub_83035ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7616
	ctx.r3.s64 = ctx.r31.s64 + 7616;
	// addi r4,r10,5012
	ctx.r4.s64 = ctx.r10.s64 + 5012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83035F0C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3364
	ctx.r11.s64 = ctx.r11.s64 + 3364;
	// addi r3,r9,-32544
	ctx.r3.s64 = ctx.r9.s64 + -32544;
	// stw r11,7616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035F24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035F38"))) PPC_WEAK_FUNC(sub_83035F38);
PPC_FUNC_IMPL(__imp__sub_83035F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,7680
	ctx.r5.s64 = ctx.r11.s64 + 7680;
	// addi r3,r31,7808
	ctx.r3.s64 = ctx.r31.s64 + 7808;
	// addi r4,r10,5048
	ctx.r4.s64 = ctx.r10.s64 + 5048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83035F74;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3372
	ctx.r11.s64 = ctx.r11.s64 + 3372;
	// addi r3,r9,-32520
	ctx.r3.s64 = ctx.r9.s64 + -32520;
	// stw r11,7808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035F8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83035FA0"))) PPC_WEAK_FUNC(sub_83035FA0);
PPC_FUNC_IMPL(__imp__sub_83035FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// addi r4,r10,5080
	ctx.r4.s64 = ctx.r10.s64 + 5080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83035FDC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,3380
	ctx.r11.s64 = ctx.r11.s64 + 3380;
	// addi r3,r9,-32496
	ctx.r3.s64 = ctx.r9.s64 + -32496;
	// stw r11,7776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83035FF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036008"))) PPC_WEAK_FUNC(sub_83036008);
PPC_FUNC_IMPL(__imp__sub_83036008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,7840
	ctx.r3.s64 = ctx.r31.s64 + 7840;
	// addi r4,r10,5192
	ctx.r4.s64 = ctx.r10.s64 + 5192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1488
	ctx.r6.s64 = 1488;
	// bl 0x82b38290
	ctx.lr = 0x83036044;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,5108
	ctx.r11.s64 = ctx.r11.s64 + 5108;
	// addi r3,r9,-32472
	ctx.r3.s64 = ctx.r9.s64 + -32472;
	// stw r11,7840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303605C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036070"))) PPC_WEAK_FUNC(sub_83036070);
PPC_FUNC_IMPL(__imp__sub_83036070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// addi r3,r31,7872
	ctx.r3.s64 = ctx.r31.s64 + 7872;
	// addi r4,r10,5256
	ctx.r4.s64 = ctx.r10.s64 + 5256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x830360AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,5208
	ctx.r11.s64 = ctx.r11.s64 + 5208;
	// addi r3,r9,-32448
	ctx.r3.s64 = ctx.r9.s64 + -32448;
	// stw r11,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830360C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830360D8"))) PPC_WEAK_FUNC(sub_830360D8);
PPC_FUNC_IMPL(__imp__sub_830360D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,196
	ctx.r5.s64 = ctx.r11.s64 + 196;
	// addi r3,r31,7904
	ctx.r3.s64 = ctx.r31.s64 + 7904;
	// addi r4,r10,5940
	ctx.r4.s64 = ctx.r10.s64 + 5940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83036114;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,5848
	ctx.r11.s64 = ctx.r11.s64 + 5848;
	// addi r3,r9,-32424
	ctx.r3.s64 = ctx.r9.s64 + -32424;
	// stw r11,7904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303612C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036140"))) PPC_WEAK_FUNC(sub_83036140);
PPC_FUNC_IMPL(__imp__sub_83036140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,196
	ctx.r5.s64 = ctx.r11.s64 + 196;
	// addi r3,r31,7936
	ctx.r3.s64 = ctx.r31.s64 + 7936;
	// addi r4,r10,6060
	ctx.r4.s64 = ctx.r10.s64 + 6060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8303617C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,5964
	ctx.r11.s64 = ctx.r11.s64 + 5964;
	// addi r3,r9,-32400
	ctx.r3.s64 = ctx.r9.s64 + -32400;
	// stw r11,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036194;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830361A8"))) PPC_WEAK_FUNC(sub_830361A8);
PPC_FUNC_IMPL(__imp__sub_830361A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7772
	ctx.r5.s64 = ctx.r11.s64 + -7772;
	// addi r3,r31,7968
	ctx.r3.s64 = ctx.r31.s64 + 7968;
	// addi r4,r10,6340
	ctx.r4.s64 = ctx.r10.s64 + 6340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x830361E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,6084
	ctx.r11.s64 = ctx.r11.s64 + 6084;
	// addi r3,r9,-32376
	ctx.r3.s64 = ctx.r9.s64 + -32376;
	// stw r11,7968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830361FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036210"))) PPC_WEAK_FUNC(sub_83036210);
PPC_FUNC_IMPL(__imp__sub_83036210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8356
	ctx.r5.s64 = ctx.r11.s64 + 8356;
	// addi r3,r31,8000
	ctx.r3.s64 = ctx.r31.s64 + 8000;
	// addi r4,r10,7056
	ctx.r4.s64 = ctx.r10.s64 + 7056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8303624C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,6360
	ctx.r11.s64 = ctx.r11.s64 + 6360;
	// addi r3,r9,-32352
	ctx.r3.s64 = ctx.r9.s64 + -32352;
	// stw r11,8000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036264;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036278"))) PPC_WEAK_FUNC(sub_83036278);
PPC_FUNC_IMPL(__imp__sub_83036278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8356
	ctx.r5.s64 = ctx.r11.s64 + 8356;
	// addi r3,r31,8032
	ctx.r3.s64 = ctx.r31.s64 + 8032;
	// addi r4,r10,7316
	ctx.r4.s64 = ctx.r10.s64 + 7316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x830362B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,7076
	ctx.r11.s64 = ctx.r11.s64 + 7076;
	// addi r3,r9,-32328
	ctx.r3.s64 = ctx.r9.s64 + -32328;
	// stw r11,8032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830362CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830362E0"))) PPC_WEAK_FUNC(sub_830362E0);
PPC_FUNC_IMPL(__imp__sub_830362E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8356
	ctx.r5.s64 = ctx.r11.s64 + 8356;
	// addi r3,r31,8064
	ctx.r3.s64 = ctx.r31.s64 + 8064;
	// addi r4,r10,7592
	ctx.r4.s64 = ctx.r10.s64 + 7592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8303631C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,7352
	ctx.r11.s64 = ctx.r11.s64 + 7352;
	// addi r3,r9,-32304
	ctx.r3.s64 = ctx.r9.s64 + -32304;
	// stw r11,8064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036334;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036348"))) PPC_WEAK_FUNC(sub_83036348);
PPC_FUNC_IMPL(__imp__sub_83036348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,8096
	ctx.r3.s64 = ctx.r31.s64 + 8096;
	// addi r4,r10,7696
	ctx.r4.s64 = ctx.r10.s64 + 7696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x83036384;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,7624
	ctx.r11.s64 = ctx.r11.s64 + 7624;
	// addi r3,r9,-32280
	ctx.r3.s64 = ctx.r9.s64 + -32280;
	// stw r11,8096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303639C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830363B0"))) PPC_WEAK_FUNC(sub_830363B0);
PPC_FUNC_IMPL(__imp__sub_830363B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// addi r3,r31,8128
	ctx.r3.s64 = ctx.r31.s64 + 8128;
	// addi r4,r10,7996
	ctx.r4.s64 = ctx.r10.s64 + 7996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x830363EC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,7824
	ctx.r11.s64 = ctx.r11.s64 + 7824;
	// addi r3,r9,-32256
	ctx.r3.s64 = ctx.r9.s64 + -32256;
	// stw r11,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036404;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036418"))) PPC_WEAK_FUNC(sub_83036418);
PPC_FUNC_IMPL(__imp__sub_83036418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// addi r3,r31,8160
	ctx.r3.s64 = ctx.r31.s64 + 8160;
	// addi r4,r10,8320
	ctx.r4.s64 = ctx.r10.s64 + 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83036454;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,8060
	ctx.r11.s64 = ctx.r11.s64 + 8060;
	// addi r3,r9,-32232
	ctx.r3.s64 = ctx.r9.s64 + -32232;
	// stw r11,8160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303646C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036480"))) PPC_WEAK_FUNC(sub_83036480);
PPC_FUNC_IMPL(__imp__sub_83036480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8224
	ctx.r3.s64 = ctx.r31.s64 + 8224;
	// addi r4,r10,9112
	ctx.r4.s64 = ctx.r10.s64 + 9112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x830364BC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r3,r9,-32208
	ctx.r3.s64 = ctx.r9.s64 + -32208;
	// stw r11,8224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830364D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830364E8"))) PPC_WEAK_FUNC(sub_830364E8);
PPC_FUNC_IMPL(__imp__sub_830364E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8192
	ctx.r3.s64 = ctx.r31.s64 + 8192;
	// addi r4,r10,9148
	ctx.r4.s64 = ctx.r10.s64 + 9148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x83036524;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,8352
	ctx.r11.s64 = ctx.r11.s64 + 8352;
	// addi r3,r9,-32184
	ctx.r3.s64 = ctx.r9.s64 + -32184;
	// stw r11,8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303653C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036550"))) PPC_WEAK_FUNC(sub_83036550);
PPC_FUNC_IMPL(__imp__sub_83036550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// addi r3,r31,8256
	ctx.r3.s64 = ctx.r31.s64 + 8256;
	// addi r4,r10,9188
	ctx.r4.s64 = ctx.r10.s64 + 9188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x8303658C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,8336
	ctx.r11.s64 = ctx.r11.s64 + 8336;
	// addi r3,r9,-32160
	ctx.r3.s64 = ctx.r9.s64 + -32160;
	// stw r11,8256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830365A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830365B8"))) PPC_WEAK_FUNC(sub_830365B8);
PPC_FUNC_IMPL(__imp__sub_830365B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,9028
	ctx.r5.s64 = ctx.r11.s64 + 9028;
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// addi r4,r10,9344
	ctx.r4.s64 = ctx.r10.s64 + 9344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x830365F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,9208
	ctx.r11.s64 = ctx.r11.s64 + 9208;
	// addi r3,r9,-32136
	ctx.r3.s64 = ctx.r9.s64 + -32136;
	// stw r11,8288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303660C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036620"))) PPC_WEAK_FUNC(sub_83036620);
PPC_FUNC_IMPL(__imp__sub_83036620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,8324
	ctx.r3.s64 = ctx.r31.s64 + 8324;
	// addi r4,r10,9400
	ctx.r4.s64 = ctx.r10.s64 + 9400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,168
	ctx.r6.s64 = 168;
	// bl 0x82b38290
	ctx.lr = 0x8303665C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,9356
	ctx.r11.s64 = ctx.r11.s64 + 9356;
	// addi r3,r9,-32112
	ctx.r3.s64 = ctx.r9.s64 + -32112;
	// stw r11,8324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036674;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036688"))) PPC_WEAK_FUNC(sub_83036688);
PPC_FUNC_IMPL(__imp__sub_83036688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,8356
	ctx.r3.s64 = ctx.r31.s64 + 8356;
	// addi r4,r10,9792
	ctx.r4.s64 = ctx.r10.s64 + 9792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x830366C4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,9716
	ctx.r11.s64 = ctx.r11.s64 + 9716;
	// addi r3,r9,-32088
	ctx.r3.s64 = ctx.r9.s64 + -32088;
	// stw r11,8356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830366DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830366F0"))) PPC_WEAK_FUNC(sub_830366F0);
PPC_FUNC_IMPL(__imp__sub_830366F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8420
	ctx.r3.s64 = ctx.r31.s64 + 8420;
	// addi r4,r10,9972
	ctx.r4.s64 = ctx.r10.s64 + 9972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8303672C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,9812
	ctx.r11.s64 = ctx.r11.s64 + 9812;
	// addi r3,r9,-32064
	ctx.r3.s64 = ctx.r9.s64 + -32064;
	// stw r11,8420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036744;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036758"))) PPC_WEAK_FUNC(sub_83036758);
PPC_FUNC_IMPL(__imp__sub_83036758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8388
	ctx.r3.s64 = ctx.r31.s64 + 8388;
	// addi r4,r10,10004
	ctx.r4.s64 = ctx.r10.s64 + 10004;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83036794;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,9820
	ctx.r11.s64 = ctx.r11.s64 + 9820;
	// addi r3,r9,-32040
	ctx.r3.s64 = ctx.r9.s64 + -32040;
	// stw r11,8388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830367AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830367C0"))) PPC_WEAK_FUNC(sub_830367C0);
PPC_FUNC_IMPL(__imp__sub_830367C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// addi r3,r31,8484
	ctx.r3.s64 = ctx.r31.s64 + 8484;
	// addi r4,r10,10652
	ctx.r4.s64 = ctx.r10.s64 + 10652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x830367FC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// addi r3,r9,-32016
	ctx.r3.s64 = ctx.r9.s64 + -32016;
	// stw r11,8484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036814;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036828"))) PPC_WEAK_FUNC(sub_83036828);
PPC_FUNC_IMPL(__imp__sub_83036828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7484
	ctx.r5.s64 = ctx.r11.s64 + -7484;
	// addi r3,r31,8452
	ctx.r3.s64 = ctx.r31.s64 + 8452;
	// addi r4,r10,10676
	ctx.r4.s64 = ctx.r10.s64 + 10676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83036864;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10056
	ctx.r11.s64 = ctx.r11.s64 + 10056;
	// addi r3,r9,-31992
	ctx.r3.s64 = ctx.r9.s64 + -31992;
	// stw r11,8452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303687C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036890"))) PPC_WEAK_FUNC(sub_83036890);
PPC_FUNC_IMPL(__imp__sub_83036890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,8516
	ctx.r3.s64 = ctx.r31.s64 + 8516;
	// addi r4,r10,9332
	ctx.r4.s64 = ctx.r10.s64 + 9332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830368CC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10040
	ctx.r11.s64 = ctx.r11.s64 + 10040;
	// addi r3,r9,-31968
	ctx.r3.s64 = ctx.r9.s64 + -31968;
	// stw r11,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830368E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830368F8"))) PPC_WEAK_FUNC(sub_830368F8);
PPC_FUNC_IMPL(__imp__sub_830368F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,8548
	ctx.r3.s64 = ctx.r31.s64 + 8548;
	// addi r4,r10,10796
	ctx.r4.s64 = ctx.r10.s64 + 10796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x83036934;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10708
	ctx.r11.s64 = ctx.r11.s64 + 10708;
	// addi r3,r9,-31944
	ctx.r3.s64 = ctx.r9.s64 + -31944;
	// stw r11,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303694C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036960"))) PPC_WEAK_FUNC(sub_83036960);
PPC_FUNC_IMPL(__imp__sub_83036960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8740
	ctx.r3.s64 = ctx.r31.s64 + 8740;
	// addi r4,r10,-29040
	ctx.r4.s64 = ctx.r10.s64 + -29040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8303699C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10812
	ctx.r11.s64 = ctx.r11.s64 + 10812;
	// addi r3,r9,-31920
	ctx.r3.s64 = ctx.r9.s64 + -31920;
	// stw r11,8740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830369B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830369C8"))) PPC_WEAK_FUNC(sub_830369C8);
PPC_FUNC_IMPL(__imp__sub_830369C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8900
	ctx.r3.s64 = ctx.r31.s64 + 8900;
	// addi r4,r10,11416
	ctx.r4.s64 = ctx.r10.s64 + 11416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82b38290
	ctx.lr = 0x83036A04;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10820
	ctx.r11.s64 = ctx.r11.s64 + 10820;
	// addi r3,r9,-31896
	ctx.r3.s64 = ctx.r9.s64 + -31896;
	// stw r11,8900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036A1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036A30"))) PPC_WEAK_FUNC(sub_83036A30);
PPC_FUNC_IMPL(__imp__sub_83036A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8644
	ctx.r3.s64 = ctx.r31.s64 + 8644;
	// addi r4,r10,11440
	ctx.r4.s64 = ctx.r10.s64 + 11440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83036A6C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10828
	ctx.r11.s64 = ctx.r11.s64 + 10828;
	// addi r3,r9,-31872
	ctx.r3.s64 = ctx.r9.s64 + -31872;
	// stw r11,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036A84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036A98"))) PPC_WEAK_FUNC(sub_83036A98);
PPC_FUNC_IMPL(__imp__sub_83036A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8772
	ctx.r3.s64 = ctx.r31.s64 + 8772;
	// addi r4,r10,11464
	ctx.r4.s64 = ctx.r10.s64 + 11464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,140
	ctx.r6.s64 = 140;
	// bl 0x82b38290
	ctx.lr = 0x83036AD4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10836
	ctx.r11.s64 = ctx.r11.s64 + 10836;
	// addi r3,r9,-31848
	ctx.r3.s64 = ctx.r9.s64 + -31848;
	// stw r11,8772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036AEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036B00"))) PPC_WEAK_FUNC(sub_83036B00);
PPC_FUNC_IMPL(__imp__sub_83036B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8708
	ctx.r3.s64 = ctx.r31.s64 + 8708;
	// addi r4,r10,11488
	ctx.r4.s64 = ctx.r10.s64 + 11488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83036B3C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10844
	ctx.r11.s64 = ctx.r11.s64 + 10844;
	// addi r3,r9,-31824
	ctx.r3.s64 = ctx.r9.s64 + -31824;
	// stw r11,8708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036B54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036B68"))) PPC_WEAK_FUNC(sub_83036B68);
PPC_FUNC_IMPL(__imp__sub_83036B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8580
	ctx.r3.s64 = ctx.r31.s64 + 8580;
	// addi r4,r10,11516
	ctx.r4.s64 = ctx.r10.s64 + 11516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83036BA4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10852
	ctx.r11.s64 = ctx.r11.s64 + 10852;
	// addi r3,r9,-31800
	ctx.r3.s64 = ctx.r9.s64 + -31800;
	// stw r11,8580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036BBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036BD0"))) PPC_WEAK_FUNC(sub_83036BD0);
PPC_FUNC_IMPL(__imp__sub_83036BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8676
	ctx.r3.s64 = ctx.r31.s64 + 8676;
	// addi r4,r10,11540
	ctx.r4.s64 = ctx.r10.s64 + 11540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83036C0C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10860
	ctx.r11.s64 = ctx.r11.s64 + 10860;
	// addi r3,r9,-31776
	ctx.r3.s64 = ctx.r9.s64 + -31776;
	// stw r11,8676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036C24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036C38"))) PPC_WEAK_FUNC(sub_83036C38);
PPC_FUNC_IMPL(__imp__sub_83036C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8804
	ctx.r3.s64 = ctx.r31.s64 + 8804;
	// addi r4,r10,11564
	ctx.r4.s64 = ctx.r10.s64 + 11564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83036C74;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10868
	ctx.r11.s64 = ctx.r11.s64 + 10868;
	// addi r3,r9,-31752
	ctx.r3.s64 = ctx.r9.s64 + -31752;
	// stw r11,8804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036C8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036CA0"))) PPC_WEAK_FUNC(sub_83036CA0);
PPC_FUNC_IMPL(__imp__sub_83036CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8836
	ctx.r3.s64 = ctx.r31.s64 + 8836;
	// addi r4,r10,11588
	ctx.r4.s64 = ctx.r10.s64 + 11588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83036CDC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10876
	ctx.r11.s64 = ctx.r11.s64 + 10876;
	// addi r3,r9,-31728
	ctx.r3.s64 = ctx.r9.s64 + -31728;
	// stw r11,8836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036CF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036D08"))) PPC_WEAK_FUNC(sub_83036D08);
PPC_FUNC_IMPL(__imp__sub_83036D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8868
	ctx.r3.s64 = ctx.r31.s64 + 8868;
	// addi r4,r10,11612
	ctx.r4.s64 = ctx.r10.s64 + 11612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83036D44;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10884
	ctx.r11.s64 = ctx.r11.s64 + 10884;
	// addi r3,r9,-31704
	ctx.r3.s64 = ctx.r9.s64 + -31704;
	// stw r11,8868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036D5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036D70"))) PPC_WEAK_FUNC(sub_83036D70);
PPC_FUNC_IMPL(__imp__sub_83036D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,8740
	ctx.r5.s64 = ctx.r11.s64 + 8740;
	// addi r3,r31,8612
	ctx.r3.s64 = ctx.r31.s64 + 8612;
	// addi r4,r10,11640
	ctx.r4.s64 = ctx.r10.s64 + 11640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83036DAC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,10892
	ctx.r11.s64 = ctx.r11.s64 + 10892;
	// addi r3,r9,-31680
	ctx.r3.s64 = ctx.r9.s64 + -31680;
	// stw r11,8612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036DC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036DD8"))) PPC_WEAK_FUNC(sub_83036DD8);
PPC_FUNC_IMPL(__imp__sub_83036DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8932
	ctx.r3.s64 = ctx.r31.s64 + 8932;
	// addi r4,r10,-29768
	ctx.r4.s64 = ctx.r10.s64 + -29768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83036E14;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,11668
	ctx.r11.s64 = ctx.r11.s64 + 11668;
	// addi r3,r9,-31656
	ctx.r3.s64 = ctx.r9.s64 + -31656;
	// stw r11,8932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036E2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036E40"))) PPC_WEAK_FUNC(sub_83036E40);
PPC_FUNC_IMPL(__imp__sub_83036E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,8964
	ctx.r3.s64 = ctx.r31.s64 + 8964;
	// addi r4,r10,11836
	ctx.r4.s64 = ctx.r10.s64 + 11836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83036E7C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,11708
	ctx.r11.s64 = ctx.r11.s64 + 11708;
	// addi r3,r9,-31632
	ctx.r3.s64 = ctx.r9.s64 + -31632;
	// stw r11,8964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036E94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036EA8"))) PPC_WEAK_FUNC(sub_83036EA8);
PPC_FUNC_IMPL(__imp__sub_83036EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,8996
	ctx.r3.s64 = ctx.r31.s64 + 8996;
	// addi r4,r10,11992
	ctx.r4.s64 = ctx.r10.s64 + 11992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83036EE4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,11852
	ctx.r11.s64 = ctx.r11.s64 + 11852;
	// addi r3,r9,-31608
	ctx.r3.s64 = ctx.r9.s64 + -31608;
	// stw r11,8996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036EFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036F10"))) PPC_WEAK_FUNC(sub_83036F10);
PPC_FUNC_IMPL(__imp__sub_83036F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,9028
	ctx.r3.s64 = ctx.r31.s64 + 9028;
	// addi r4,r10,12080
	ctx.r4.s64 = ctx.r10.s64 + 12080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x83036F4C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12004
	ctx.r11.s64 = ctx.r11.s64 + 12004;
	// addi r3,r9,-31584
	ctx.r3.s64 = ctx.r9.s64 + -31584;
	// stw r11,9028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036F64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036F78"))) PPC_WEAK_FUNC(sub_83036F78);
PPC_FUNC_IMPL(__imp__sub_83036F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,3016
	ctx.r5.s64 = ctx.r11.s64 + 3016;
	// addi r3,r31,9060
	ctx.r3.s64 = ctx.r31.s64 + 9060;
	// addi r4,r10,12484
	ctx.r4.s64 = ctx.r10.s64 + 12484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83036FB4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12096
	ctx.r11.s64 = ctx.r11.s64 + 12096;
	// addi r3,r9,-31560
	ctx.r3.s64 = ctx.r9.s64 + -31560;
	// stw r11,9060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83036FCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83036FE0"))) PPC_WEAK_FUNC(sub_83036FE0);
PPC_FUNC_IMPL(__imp__sub_83036FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,3016
	ctx.r5.s64 = ctx.r11.s64 + 3016;
	// addi r3,r31,9092
	ctx.r3.s64 = ctx.r31.s64 + 9092;
	// addi r4,r10,12504
	ctx.r4.s64 = ctx.r10.s64 + 12504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8303701C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12104
	ctx.r11.s64 = ctx.r11.s64 + 12104;
	// addi r3,r9,-31536
	ctx.r3.s64 = ctx.r9.s64 + -31536;
	// stw r11,9092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037034;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037048"))) PPC_WEAK_FUNC(sub_83037048);
PPC_FUNC_IMPL(__imp__sub_83037048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-3412
	ctx.r5.s64 = ctx.r11.s64 + -3412;
	// addi r3,r31,9156
	ctx.r3.s64 = ctx.r31.s64 + 9156;
	// addi r4,r10,-29476
	ctx.r4.s64 = ctx.r10.s64 + -29476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,624
	ctx.r6.s64 = 624;
	// bl 0x82b38290
	ctx.lr = 0x83037084;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12528
	ctx.r11.s64 = ctx.r11.s64 + 12528;
	// addi r3,r9,-31512
	ctx.r3.s64 = ctx.r9.s64 + -31512;
	// stw r11,9156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303709C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830370B0"))) PPC_WEAK_FUNC(sub_830370B0);
PPC_FUNC_IMPL(__imp__sub_830370B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6592
	ctx.r5.s64 = ctx.r11.s64 + 6592;
	// addi r3,r31,9124
	ctx.r3.s64 = ctx.r31.s64 + 9124;
	// addi r4,r10,-29500
	ctx.r4.s64 = ctx.r10.s64 + -29500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1888
	ctx.r6.s64 = 1888;
	// bl 0x82b38290
	ctx.lr = 0x830370EC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12536
	ctx.r11.s64 = ctx.r11.s64 + 12536;
	// addi r3,r9,-31488
	ctx.r3.s64 = ctx.r9.s64 + -31488;
	// stw r11,9124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037104;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037118"))) PPC_WEAK_FUNC(sub_83037118);
PPC_FUNC_IMPL(__imp__sub_83037118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6624
	ctx.r5.s64 = ctx.r11.s64 + 6624;
	// addi r3,r31,9220
	ctx.r3.s64 = ctx.r31.s64 + 9220;
	// addi r4,r10,-29528
	ctx.r4.s64 = ctx.r10.s64 + -29528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1808
	ctx.r6.s64 = 1808;
	// bl 0x82b38290
	ctx.lr = 0x83037154;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12544
	ctx.r11.s64 = ctx.r11.s64 + 12544;
	// addi r3,r9,-31464
	ctx.r3.s64 = ctx.r9.s64 + -31464;
	// stw r11,9220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303716C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037180"))) PPC_WEAK_FUNC(sub_83037180);
PPC_FUNC_IMPL(__imp__sub_83037180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6688
	ctx.r5.s64 = ctx.r11.s64 + 6688;
	// addi r3,r31,9188
	ctx.r3.s64 = ctx.r31.s64 + 9188;
	// addi r4,r10,-29552
	ctx.r4.s64 = ctx.r10.s64 + -29552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1744
	ctx.r6.s64 = 1744;
	// bl 0x82b38290
	ctx.lr = 0x830371BC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12552
	ctx.r11.s64 = ctx.r11.s64 + 12552;
	// addi r3,r9,-31440
	ctx.r3.s64 = ctx.r9.s64 + -31440;
	// stw r11,9188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830371D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830371E8"))) PPC_WEAK_FUNC(sub_830371E8);
PPC_FUNC_IMPL(__imp__sub_830371E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// addi r3,r31,9252
	ctx.r3.s64 = ctx.r31.s64 + 9252;
	// addi r4,r10,-29420
	ctx.r4.s64 = ctx.r10.s64 + -29420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,800
	ctx.r6.s64 = 800;
	// bl 0x82b38290
	ctx.lr = 0x83037224;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12652
	ctx.r11.s64 = ctx.r11.s64 + 12652;
	// addi r3,r9,-31416
	ctx.r3.s64 = ctx.r9.s64 + -31416;
	// stw r11,9252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303723C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037250"))) PPC_WEAK_FUNC(sub_83037250);
PPC_FUNC_IMPL(__imp__sub_83037250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// addi r3,r31,9316
	ctx.r3.s64 = ctx.r31.s64 + 9316;
	// addi r4,r10,-29440
	ctx.r4.s64 = ctx.r10.s64 + -29440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,864
	ctx.r6.s64 = 864;
	// bl 0x82b38290
	ctx.lr = 0x8303728C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12660
	ctx.r11.s64 = ctx.r11.s64 + 12660;
	// addi r3,r9,-31392
	ctx.r3.s64 = ctx.r9.s64 + -31392;
	// stw r11,9316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830372A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830372B8"))) PPC_WEAK_FUNC(sub_830372B8);
PPC_FUNC_IMPL(__imp__sub_830372B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-692
	ctx.r5.s64 = ctx.r11.s64 + -692;
	// addi r3,r31,9284
	ctx.r3.s64 = ctx.r31.s64 + 9284;
	// addi r4,r10,-29460
	ctx.r4.s64 = ctx.r10.s64 + -29460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x830372F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12668
	ctx.r11.s64 = ctx.r11.s64 + 12668;
	// addi r3,r9,-31368
	ctx.r3.s64 = ctx.r9.s64 + -31368;
	// stw r11,9284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303730C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037320"))) PPC_WEAK_FUNC(sub_83037320);
PPC_FUNC_IMPL(__imp__sub_83037320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,9348
	ctx.r3.s64 = ctx.r31.s64 + 9348;
	// addi r4,r10,13168
	ctx.r4.s64 = ctx.r10.s64 + 13168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8303735C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12968
	ctx.r11.s64 = ctx.r11.s64 + 12968;
	// addi r3,r9,-31344
	ctx.r3.s64 = ctx.r9.s64 + -31344;
	// stw r11,9348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037374;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037388"))) PPC_WEAK_FUNC(sub_83037388);
PPC_FUNC_IMPL(__imp__sub_83037388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,9348
	ctx.r5.s64 = ctx.r11.s64 + 9348;
	// addi r3,r31,9380
	ctx.r3.s64 = ctx.r31.s64 + 9380;
	// addi r4,r10,-29572
	ctx.r4.s64 = ctx.r10.s64 + -29572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82b38290
	ctx.lr = 0x830373C4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,12976
	ctx.r11.s64 = ctx.r11.s64 + 12976;
	// addi r3,r9,-31320
	ctx.r3.s64 = ctx.r9.s64 + -31320;
	// stw r11,9380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830373DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830373F0"))) PPC_WEAK_FUNC(sub_830373F0);
PPC_FUNC_IMPL(__imp__sub_830373F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,10032
	ctx.r3.s64 = ctx.r11.s64 + 10032;
	// bl 0x83048c64
	ctx.lr = 0x83037408;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r3,r10,-31296
	ctx.r3.s64 = ctx.r10.s64 + -31296;
	// bl 0x82f06a08
	ctx.lr = 0x83037414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037428"))) PPC_WEAK_FUNC(sub_83037428);
PPC_FUNC_IMPL(__imp__sub_83037428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r30,r11,9940
	ctx.r30.s64 = ctx.r11.s64 + 9940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b95dd0
	ctx.lr = 0x8303744C;
	sub_82B95DD0(ctx, base);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r31,r11,10032
	ctx.r31.s64 = ctx.r11.s64 + 10032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83048c44
	ctx.lr = 0x8303745C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r9,-31983
	ctx.r9.s64 = -2096037888;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r9,9416
	ctx.r11.s64 = ctx.r9.s64 + 9416;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83037474:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83037474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83037474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83048c54
	ctx.lr = 0x83037484;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// bl 0x82f06a08
	ctx.lr = 0x83037490;
	sub_82F06A08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830374A8"))) PPC_WEAK_FUNC(sub_830374A8);
PPC_FUNC_IMPL(__imp__sub_830374A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// li r4,4357
	ctx.r4.s64 = 4357;
	// addi r3,r11,10064
	ctx.r3.s64 = ctx.r11.s64 + 10064;
	// b 0x82b372e0
	sub_82B372E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830374B8"))) PPC_WEAK_FUNC(sub_830374B8);
PPC_FUNC_IMPL(__imp__sub_830374B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830374C8"))) PPC_WEAK_FUNC(sub_830374C8);
PPC_FUNC_IMPL(__imp__sub_830374C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11192
	ctx.r6.s64 = ctx.r7.s64 + 11192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11192(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11192);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11192(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11192, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830374F8"))) PPC_WEAK_FUNC(sub_830374F8);
PPC_FUNC_IMPL(__imp__sub_830374F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11128
	ctx.r6.s64 = ctx.r7.s64 + 11128;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11128(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11128);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11128, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037528"))) PPC_WEAK_FUNC(sub_83037528);
PPC_FUNC_IMPL(__imp__sub_83037528) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11216
	ctx.r6.s64 = ctx.r7.s64 + 11216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11216(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11216);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11216, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037558"))) PPC_WEAK_FUNC(sub_83037558);
PPC_FUNC_IMPL(__imp__sub_83037558) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11232
	ctx.r6.s64 = ctx.r7.s64 + 11232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11232(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11232);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11232(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11232, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037588"))) PPC_WEAK_FUNC(sub_83037588);
PPC_FUNC_IMPL(__imp__sub_83037588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11124
	ctx.r6.s64 = ctx.r7.s64 + 11124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11124(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11124);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11124(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11124, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830375B8"))) PPC_WEAK_FUNC(sub_830375B8);
PPC_FUNC_IMPL(__imp__sub_830375B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11136
	ctx.r6.s64 = ctx.r7.s64 + 11136;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11136(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11136);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11136(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11136, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830375E8"))) PPC_WEAK_FUNC(sub_830375E8);
PPC_FUNC_IMPL(__imp__sub_830375E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11212
	ctx.r6.s64 = ctx.r7.s64 + 11212;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11212(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11212);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11212(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11212, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037618"))) PPC_WEAK_FUNC(sub_83037618);
PPC_FUNC_IMPL(__imp__sub_83037618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11176
	ctx.r6.s64 = ctx.r7.s64 + 11176;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11176(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11176);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11176(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11176, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037648"))) PPC_WEAK_FUNC(sub_83037648);
PPC_FUNC_IMPL(__imp__sub_83037648) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11168
	ctx.r6.s64 = ctx.r7.s64 + 11168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11168(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11168);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11168(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11168, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037678"))) PPC_WEAK_FUNC(sub_83037678);
PPC_FUNC_IMPL(__imp__sub_83037678) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r6,r7,11184
	ctx.r6.s64 = ctx.r7.s64 + 11184;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,128
	ctx.r8.s64 = 128;
	// lwz r11,11184(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11184);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11184, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830376A8"))) PPC_WEAK_FUNC(sub_830376A8);
PPC_FUNC_IMPL(__imp__sub_830376A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,192
	ctx.r10.s64 = 192;
	// addi r6,r7,11204
	ctx.r6.s64 = ctx.r7.s64 + 11204;
	// li r9,192
	ctx.r9.s64 = 192;
	// li r8,192
	ctx.r8.s64 = 192;
	// lwz r11,11204(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11204);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11204(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11204, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830376D8"))) PPC_WEAK_FUNC(sub_830376D8);
PPC_FUNC_IMPL(__imp__sub_830376D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r6,r7,11148
	ctx.r6.s64 = ctx.r7.s64 + 11148;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r11,11148(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11148);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11148(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11148, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037708"))) PPC_WEAK_FUNC(sub_83037708);
PPC_FUNC_IMPL(__imp__sub_83037708) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r6,r7,11228
	ctx.r6.s64 = ctx.r7.s64 + 11228;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r11,11228(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11228);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11228(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11228, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037738"))) PPC_WEAK_FUNC(sub_83037738);
PPC_FUNC_IMPL(__imp__sub_83037738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,11240
	ctx.r6.s64 = ctx.r7.s64 + 11240;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,64
	ctx.r8.s64 = 64;
	// lwz r11,11240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11240);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11240, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037768"))) PPC_WEAK_FUNC(sub_83037768);
PPC_FUNC_IMPL(__imp__sub_83037768) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r6,r7,11180
	ctx.r6.s64 = ctx.r7.s64 + 11180;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11180);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11180(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11180, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037798"))) PPC_WEAK_FUNC(sub_83037798);
PPC_FUNC_IMPL(__imp__sub_83037798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11236
	ctx.r6.s64 = ctx.r7.s64 + 11236;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11236(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11236);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11236, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830377C8"))) PPC_WEAK_FUNC(sub_830377C8);
PPC_FUNC_IMPL(__imp__sub_830377C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,139
	ctx.r10.s64 = 139;
	// addi r6,r7,11196
	ctx.r6.s64 = ctx.r7.s64 + 11196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11196(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11196);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11196, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830377F8"))) PPC_WEAK_FUNC(sub_830377F8);
PPC_FUNC_IMPL(__imp__sub_830377F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11160
	ctx.r6.s64 = ctx.r7.s64 + 11160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,139
	ctx.r8.s64 = 139;
	// lwz r11,11160(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11160);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11160(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11160, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037828"))) PPC_WEAK_FUNC(sub_83037828);
PPC_FUNC_IMPL(__imp__sub_83037828) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11220
	ctx.r6.s64 = ctx.r7.s64 + 11220;
	// li r9,140
	ctx.r9.s64 = 140;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11220(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11220);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11220, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037858"))) PPC_WEAK_FUNC(sub_83037858);
PPC_FUNC_IMPL(__imp__sub_83037858) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,139
	ctx.r10.s64 = 139;
	// addi r6,r7,11132
	ctx.r6.s64 = ctx.r7.s64 + 11132;
	// li r9,139
	ctx.r9.s64 = 139;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11132(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11132);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11132(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11132, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037888"))) PPC_WEAK_FUNC(sub_83037888);
PPC_FUNC_IMPL(__imp__sub_83037888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,11120
	ctx.r6.s64 = ctx.r7.s64 + 11120;
	// li r9,165
	ctx.r9.s64 = 165;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11120(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11120);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11120(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11120, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830378B8"))) PPC_WEAK_FUNC(sub_830378B8);
PPC_FUNC_IMPL(__imp__sub_830378B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,147
	ctx.r10.s64 = 147;
	// addi r6,r7,11140
	ctx.r6.s64 = ctx.r7.s64 + 11140;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,11140(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11140);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11140, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830378E8"))) PPC_WEAK_FUNC(sub_830378E8);
PPC_FUNC_IMPL(__imp__sub_830378E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,235
	ctx.r10.s64 = 235;
	// addi r6,r7,11156
	ctx.r6.s64 = ctx.r7.s64 + 11156;
	// li r9,206
	ctx.r9.s64 = 206;
	// li r8,135
	ctx.r8.s64 = 135;
	// lwz r11,11156(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11156);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11156(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11156, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037918"))) PPC_WEAK_FUNC(sub_83037918);
PPC_FUNC_IMPL(__imp__sub_83037918) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,225
	ctx.r10.s64 = 225;
	// addi r6,r7,11224
	ctx.r6.s64 = ctx.r7.s64 + 11224;
	// li r9,105
	ctx.r9.s64 = 105;
	// li r8,65
	ctx.r8.s64 = 65;
	// lwz r11,11224(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11224);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11224, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037948"))) PPC_WEAK_FUNC(sub_83037948);
PPC_FUNC_IMPL(__imp__sub_83037948) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r6,r7,11152
	ctx.r6.s64 = ctx.r7.s64 + 11152;
	// li r9,25
	ctx.r9.s64 = 25;
	// li r8,25
	ctx.r8.s64 = 25;
	// lwz r11,11152(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11152);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11152, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037978"))) PPC_WEAK_FUNC(sub_83037978);
PPC_FUNC_IMPL(__imp__sub_83037978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,130
	ctx.r10.s64 = 130;
	// addi r6,r7,11144
	ctx.r6.s64 = ctx.r7.s64 + 11144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,75
	ctx.r8.s64 = 75;
	// lwz r11,11144(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11144);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11144(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11144, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830379A8"))) PPC_WEAK_FUNC(sub_830379A8);
PPC_FUNC_IMPL(__imp__sub_830379A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r6,r7,11188
	ctx.r6.s64 = ctx.r7.s64 + 11188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,11188(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11188);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11188(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11188, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830379D8"))) PPC_WEAK_FUNC(sub_830379D8);
PPC_FUNC_IMPL(__imp__sub_830379D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,42
	ctx.r10.s64 = 42;
	// addi r6,r7,11208
	ctx.r6.s64 = ctx.r7.s64 + 11208;
	// li r9,42
	ctx.r9.s64 = 42;
	// li r8,165
	ctx.r8.s64 = 165;
	// lwz r11,11208(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11208);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11208(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11208, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037A08"))) PPC_WEAK_FUNC(sub_83037A08);
PPC_FUNC_IMPL(__imp__sub_83037A08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,60
	ctx.r10.s64 = 60;
	// addi r6,r7,11164
	ctx.r6.s64 = ctx.r7.s64 + 11164;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,220
	ctx.r8.s64 = 220;
	// lwz r11,11164(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11164);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11164, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037A38"))) PPC_WEAK_FUNC(sub_83037A38);
PPC_FUNC_IMPL(__imp__sub_83037A38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r6,r7,11200
	ctx.r6.s64 = ctx.r7.s64 + 11200;
	// li r9,139
	ctx.r9.s64 = 139;
	// li r8,34
	ctx.r8.s64 = 34;
	// lwz r11,11200(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11200);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11200(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11200, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037A68"))) PPC_WEAK_FUNC(sub_83037A68);
PPC_FUNC_IMPL(__imp__sub_83037A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31983
	ctx.r7.s64 = -2096037888;
	// li r10,87
	ctx.r10.s64 = 87;
	// addi r6,r7,11172
	ctx.r6.s64 = ctx.r7.s64 + 11172;
	// li r9,139
	ctx.r9.s64 = 139;
	// li r8,46
	ctx.r8.s64 = 46;
	// lwz r11,11172(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11172);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,11172(r7)
	PPC_STORE_U32(ctx.r7.u32 + 11172, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037A98"))) PPC_WEAK_FUNC(sub_83037A98);
PPC_FUNC_IMPL(__imp__sub_83037A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r4,r11,13264
	ctx.r4.s64 = ctx.r11.s64 + 13264;
	// addi r3,r31,11244
	ctx.r3.s64 = ctx.r31.s64 + 11244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b38290
	ctx.lr = 0x83037AD0;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r11,r11,13244
	ctx.r11.s64 = ctx.r11.s64 + 13244;
	// addi r3,r10,-31240
	ctx.r3.s64 = ctx.r10.s64 + -31240;
	// stw r11,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037AE8;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037B00"))) PPC_WEAK_FUNC(sub_83037B00);
PPC_FUNC_IMPL(__imp__sub_83037B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11336
	ctx.r3.s64 = ctx.r31.s64 + 11336;
	// addi r4,r10,-28508
	ctx.r4.s64 = ctx.r10.s64 + -28508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83037B3C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13276
	ctx.r11.s64 = ctx.r11.s64 + 13276;
	// addi r3,r9,-31216
	ctx.r3.s64 = ctx.r9.s64 + -31216;
	// stw r11,11336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037B54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037B68"))) PPC_WEAK_FUNC(sub_83037B68);
PPC_FUNC_IMPL(__imp__sub_83037B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8192
	ctx.r10.s64 = 8192;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r11,r11,11336
	ctx.r11.s64 = ctx.r11.s64 + 11336;
	// addi r9,r9,21368
	ctx.r9.s64 = ctx.r9.s64 + 21368;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83037B88:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stwu r10,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83037b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83037B88;
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037BC8"))) PPC_WEAK_FUNC(sub_83037BC8);
PPC_FUNC_IMPL(__imp__sub_83037BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,11308
	ctx.r3.s64 = ctx.r11.s64 + 11308;
	// bl 0x83048c64
	ctx.lr = 0x83037BE0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r3,r10,-31192
	ctx.r3.s64 = ctx.r10.s64 + -31192;
	// bl 0x82f06a08
	ctx.lr = 0x83037BEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037C00"))) PPC_WEAK_FUNC(sub_83037C00);
PPC_FUNC_IMPL(__imp__sub_83037C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31978
	ctx.r11.s64 = -2095710208;
	// addi r3,r11,11376
	ctx.r3.s64 = ctx.r11.s64 + 11376;
	// bl 0x82b3c770
	ctx.lr = 0x83037C18;
	sub_82B3C770(ctx, base);
	// lis r10,-31995
	ctx.r10.s64 = -2096824320;
	// addi r3,r10,-31176
	ctx.r3.s64 = ctx.r10.s64 + -31176;
	// bl 0x82f06a08
	ctx.lr = 0x83037C24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037C38"))) PPC_WEAK_FUNC(sub_83037C38);
PPC_FUNC_IMPL(__imp__sub_83037C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,15540
	ctx.r3.s64 = ctx.r31.s64 + 15540;
	// addi r4,r10,-28316
	ctx.r4.s64 = ctx.r10.s64 + -28316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83037C74;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// addi r3,r9,-31168
	ctx.r3.s64 = ctx.r9.s64 + -31168;
	// stw r11,15540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037C8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037CA0"))) PPC_WEAK_FUNC(sub_83037CA0);
PPC_FUNC_IMPL(__imp__sub_83037CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31978
	ctx.r11.s64 = -2095710208;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,15540
	ctx.r5.s64 = ctx.r11.s64 + 15540;
	// addi r3,r31,15476
	ctx.r3.s64 = ctx.r31.s64 + 15476;
	// addi r4,r10,13616
	ctx.r4.s64 = ctx.r10.s64 + 13616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83037CDC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// addi r3,r9,-31144
	ctx.r3.s64 = ctx.r9.s64 + -31144;
	// stw r11,15476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037CF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037D08"))) PPC_WEAK_FUNC(sub_83037D08);
PPC_FUNC_IMPL(__imp__sub_83037D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,15604
	ctx.r3.s64 = ctx.r31.s64 + 15604;
	// addi r4,r10,-28332
	ctx.r4.s64 = ctx.r10.s64 + -28332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2056
	ctx.r6.s64 = 2056;
	// bl 0x82b38290
	ctx.lr = 0x83037D44;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13456
	ctx.r11.s64 = ctx.r11.s64 + 13456;
	// addi r3,r9,-31120
	ctx.r3.s64 = ctx.r9.s64 + -31120;
	// stw r11,15604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037D5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037D70"))) PPC_WEAK_FUNC(sub_83037D70);
PPC_FUNC_IMPL(__imp__sub_83037D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,15572
	ctx.r3.s64 = ctx.r31.s64 + 15572;
	// addi r4,r10,13628
	ctx.r4.s64 = ctx.r10.s64 + 13628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83037DAC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13492
	ctx.r11.s64 = ctx.r11.s64 + 13492;
	// addi r3,r9,-31096
	ctx.r3.s64 = ctx.r9.s64 + -31096;
	// stw r11,15572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037DC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037DD8"))) PPC_WEAK_FUNC(sub_83037DD8);
PPC_FUNC_IMPL(__imp__sub_83037DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31978
	ctx.r31.s64 = -2095710208;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,15508
	ctx.r3.s64 = ctx.r31.s64 + 15508;
	// addi r4,r10,-28324
	ctx.r4.s64 = ctx.r10.s64 + -28324;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83037E14;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,13484
	ctx.r11.s64 = ctx.r11.s64 + 13484;
	// addi r3,r9,-31072
	ctx.r3.s64 = ctx.r9.s64 + -31072;
	// stw r11,15508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037E2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037E40"))) PPC_WEAK_FUNC(sub_83037E40);
PPC_FUNC_IMPL(__imp__sub_83037E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// b 0x82b3f5a0
	sub_82B3F5A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037E50"))) PPC_WEAK_FUNC(sub_83037E50);
PPC_FUNC_IMPL(__imp__sub_83037E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,8388
	ctx.r9.s64 = ctx.r11.s64 + 8388;
	// addi r8,r10,-16800
	ctx.r8.s64 = ctx.r10.s64 + -16800;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037E70"))) PPC_WEAK_FUNC(sub_83037E70);
PPC_FUNC_IMPL(__imp__sub_83037E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2200
	ctx.r9.s64 = ctx.r11.s64 + 2200;
	// addi r8,r10,-16768
	ctx.r8.s64 = ctx.r10.s64 + -16768;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037E90"))) PPC_WEAK_FUNC(sub_83037E90);
PPC_FUNC_IMPL(__imp__sub_83037E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2232
	ctx.r9.s64 = ctx.r11.s64 + 2232;
	// addi r8,r10,-16816
	ctx.r8.s64 = ctx.r10.s64 + -16816;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037EB0"))) PPC_WEAK_FUNC(sub_83037EB0);
PPC_FUNC_IMPL(__imp__sub_83037EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2264
	ctx.r9.s64 = ctx.r11.s64 + 2264;
	// addi r8,r10,-16848
	ctx.r8.s64 = ctx.r10.s64 + -16848;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037ED0"))) PPC_WEAK_FUNC(sub_83037ED0);
PPC_FUNC_IMPL(__imp__sub_83037ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,6856
	ctx.r9.s64 = ctx.r11.s64 + 6856;
	// addi r8,r10,-16880
	ctx.r8.s64 = ctx.r10.s64 + -16880;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037EF0"))) PPC_WEAK_FUNC(sub_83037EF0);
PPC_FUNC_IMPL(__imp__sub_83037EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,10256
	ctx.r9.s64 = ctx.r11.s64 + 10256;
	// addi r8,r10,-16864
	ctx.r8.s64 = ctx.r10.s64 + -16864;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037F10"))) PPC_WEAK_FUNC(sub_83037F10);
PPC_FUNC_IMPL(__imp__sub_83037F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,8388
	ctx.r9.s64 = ctx.r11.s64 + 8388;
	// addi r8,r10,-16832
	ctx.r8.s64 = ctx.r10.s64 + -16832;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037F30"))) PPC_WEAK_FUNC(sub_83037F30);
PPC_FUNC_IMPL(__imp__sub_83037F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-31048
	ctx.r3.s64 = ctx.r11.s64 + -31048;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83037F40"))) PPC_WEAK_FUNC(sub_83037F40);
PPC_FUNC_IMPL(__imp__sub_83037F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-16656
	ctx.r3.s64 = ctx.r31.s64 + -16656;
	// addi r4,r10,-28412
	ctx.r4.s64 = ctx.r10.s64 + -28412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83037F7C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,14264
	ctx.r11.s64 = ctx.r11.s64 + 14264;
	// addi r3,r9,-31040
	ctx.r3.s64 = ctx.r9.s64 + -31040;
	// stw r11,-16656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037F94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83037FA8"))) PPC_WEAK_FUNC(sub_83037FA8);
PPC_FUNC_IMPL(__imp__sub_83037FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-16688
	ctx.r3.s64 = ctx.r31.s64 + -16688;
	// addi r4,r10,14288
	ctx.r4.s64 = ctx.r10.s64 + 14288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83037FE4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,14272
	ctx.r11.s64 = ctx.r11.s64 + 14272;
	// addi r3,r9,-31016
	ctx.r3.s64 = ctx.r9.s64 + -31016;
	// stw r11,-16688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83037FFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038010"))) PPC_WEAK_FUNC(sub_83038010);
PPC_FUNC_IMPL(__imp__sub_83038010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-16624
	ctx.r3.s64 = ctx.r31.s64 + -16624;
	// addi r4,r10,14344
	ctx.r4.s64 = ctx.r10.s64 + 14344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8303804C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,14304
	ctx.r11.s64 = ctx.r11.s64 + 14304;
	// addi r3,r9,-30992
	ctx.r3.s64 = ctx.r9.s64 + -30992;
	// stw r11,-16624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038064;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038078"))) PPC_WEAK_FUNC(sub_83038078);
PPC_FUNC_IMPL(__imp__sub_83038078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4113
	ctx.r9.s64 = 269549568;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r7,r11,-16496
	ctx.r7.s64 = ctx.r11.s64 + -16496;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r6,r9,4627
	ctx.r6.u64 = ctx.r9.u64 | 4627;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830380B0"))) PPC_WEAK_FUNC(sub_830380B0);
PPC_FUNC_IMPL(__imp__sub_830380B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,4113
	ctx.r8.s64 = 269549568;
	// lis r7,5141
	ctx.r7.s64 = 336920576;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16032
	ctx.r5.s64 = ctx.r11.s64 + -16032;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,4627
	ctx.r11.u64 = ctx.r8.u64 | 4627;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,5655
	ctx.r10.u64 = ctx.r7.u64 | 5655;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830380F8"))) PPC_WEAK_FUNC(sub_830380F8);
PPC_FUNC_IMPL(__imp__sub_830380F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,4113
	ctx.r10.s64 = 269549568;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16272
	ctx.r5.s64 = ctx.r11.s64 + -16272;
	// ori r4,r10,4627
	ctx.r4.u64 = ctx.r10.u64 | 4627;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038140"))) PPC_WEAK_FUNC(sub_83038140);
PPC_FUNC_IMPL(__imp__sub_83038140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,5141
	ctx.r10.s64 = 336920576;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16224
	ctx.r5.s64 = ctx.r11.s64 + -16224;
	// ori r4,r10,5655
	ctx.r4.u64 = ctx.r10.u64 | 5655;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038188"))) PPC_WEAK_FUNC(sub_83038188);
PPC_FUNC_IMPL(__imp__sub_83038188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,6169
	ctx.r10.s64 = 404291584;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-15920
	ctx.r5.s64 = ctx.r11.s64 + -15920;
	// ori r4,r10,6683
	ctx.r4.u64 = ctx.r10.u64 | 6683;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830381D0"))) PPC_WEAK_FUNC(sub_830381D0);
PPC_FUNC_IMPL(__imp__sub_830381D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,7197
	ctx.r10.s64 = 471662592;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16576
	ctx.r5.s64 = ctx.r11.s64 + -16576;
	// ori r4,r10,7711
	ctx.r4.u64 = ctx.r10.u64 | 7711;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038218"))) PPC_WEAK_FUNC(sub_83038218);
PPC_FUNC_IMPL(__imp__sub_83038218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4113
	ctx.r9.s64 = 269549568;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16560
	ctx.r5.s64 = ctx.r11.s64 + -16560;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,4627
	ctx.r3.u64 = ctx.r9.u64 | 4627;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038260"))) PPC_WEAK_FUNC(sub_83038260);
PPC_FUNC_IMPL(__imp__sub_83038260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5141
	ctx.r9.s64 = 336920576;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16592
	ctx.r5.s64 = ctx.r11.s64 + -16592;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,5655
	ctx.r3.u64 = ctx.r9.u64 | 5655;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830382A8"))) PPC_WEAK_FUNC(sub_830382A8);
PPC_FUNC_IMPL(__imp__sub_830382A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,6169
	ctx.r9.s64 = 404291584;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,6683
	ctx.r3.u64 = ctx.r9.u64 | 6683;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830382F0"))) PPC_WEAK_FUNC(sub_830382F0);
PPC_FUNC_IMPL(__imp__sub_830382F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,7197
	ctx.r9.s64 = 471662592;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16336
	ctx.r5.s64 = ctx.r11.s64 + -16336;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,7711
	ctx.r3.u64 = ctx.r9.u64 | 7711;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038338"))) PPC_WEAK_FUNC(sub_83038338);
PPC_FUNC_IMPL(__imp__sub_83038338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,4113
	ctx.r8.s64 = 269549568;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16080
	ctx.r5.s64 = ctx.r11.s64 + -16080;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,4627
	ctx.r11.u64 = ctx.r8.u64 | 4627;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038380"))) PPC_WEAK_FUNC(sub_83038380);
PPC_FUNC_IMPL(__imp__sub_83038380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,5141
	ctx.r8.s64 = 336920576;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16160
	ctx.r5.s64 = ctx.r11.s64 + -16160;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,5655
	ctx.r11.u64 = ctx.r8.u64 | 5655;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830383C8"))) PPC_WEAK_FUNC(sub_830383C8);
PPC_FUNC_IMPL(__imp__sub_830383C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,6169
	ctx.r8.s64 = 404291584;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-15904
	ctx.r5.s64 = ctx.r11.s64 + -15904;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,6683
	ctx.r11.u64 = ctx.r8.u64 | 6683;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038410"))) PPC_WEAK_FUNC(sub_83038410);
PPC_FUNC_IMPL(__imp__sub_83038410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,7197
	ctx.r8.s64 = 471662592;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16400
	ctx.r5.s64 = ctx.r11.s64 + -16400;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,7711
	ctx.r11.u64 = ctx.r8.u64 | 7711;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038458"))) PPC_WEAK_FUNC(sub_83038458);
PPC_FUNC_IMPL(__imp__sub_83038458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,4113
	ctx.r7.s64 = 269549568;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16544
	ctx.r5.s64 = ctx.r11.s64 + -16544;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,4627
	ctx.r10.u64 = ctx.r7.u64 | 4627;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830384A0"))) PPC_WEAK_FUNC(sub_830384A0);
PPC_FUNC_IMPL(__imp__sub_830384A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,5141
	ctx.r7.s64 = 336920576;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16512
	ctx.r5.s64 = ctx.r11.s64 + -16512;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,5655
	ctx.r10.u64 = ctx.r7.u64 | 5655;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830384E8"))) PPC_WEAK_FUNC(sub_830384E8);
PPC_FUNC_IMPL(__imp__sub_830384E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,6169
	ctx.r7.s64 = 404291584;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-16528
	ctx.r5.s64 = ctx.r11.s64 + -16528;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,6683
	ctx.r10.u64 = ctx.r7.u64 | 6683;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038530"))) PPC_WEAK_FUNC(sub_83038530);
PPC_FUNC_IMPL(__imp__sub_83038530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,7197
	ctx.r7.s64 = 471662592;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-15936
	ctx.r5.s64 = ctx.r11.s64 + -15936;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,1543
	ctx.r3.u64 = ctx.r9.u64 | 1543;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7711
	ctx.r10.u64 = ctx.r7.u64 | 7711;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038578"))) PPC_WEAK_FUNC(sub_83038578);
PPC_FUNC_IMPL(__imp__sub_83038578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4113
	ctx.r9.s64 = 269549568;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r7,r11,-16016
	ctx.r7.s64 = ctx.r11.s64 + -16016;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r6,r9,4627
	ctx.r6.u64 = ctx.r9.u64 | 4627;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830385B0"))) PPC_WEAK_FUNC(sub_830385B0);
PPC_FUNC_IMPL(__imp__sub_830385B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,5141
	ctx.r8.s64 = 336920576;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16048
	ctx.r6.s64 = ctx.r11.s64 + -16048;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,1543
	ctx.r5.u64 = ctx.r9.u64 | 1543;
	// ori r4,r8,5655
	ctx.r4.u64 = ctx.r8.u64 | 5655;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830385F0"))) PPC_WEAK_FUNC(sub_830385F0);
PPC_FUNC_IMPL(__imp__sub_830385F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2057
	ctx.r9.s64 = 134807552;
	// lis r8,6169
	ctx.r8.s64 = 404291584;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16240
	ctx.r6.s64 = ctx.r11.s64 + -16240;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,2571
	ctx.r5.u64 = ctx.r9.u64 | 2571;
	// ori r4,r8,6683
	ctx.r4.u64 = ctx.r8.u64 | 6683;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038630"))) PPC_WEAK_FUNC(sub_83038630);
PPC_FUNC_IMPL(__imp__sub_83038630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,4113
	ctx.r8.s64 = 269549568;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16064
	ctx.r6.s64 = ctx.r11.s64 + -16064;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,1543
	ctx.r5.u64 = ctx.r9.u64 | 1543;
	// ori r4,r8,4627
	ctx.r4.u64 = ctx.r8.u64 | 4627;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038670"))) PPC_WEAK_FUNC(sub_83038670);
PPC_FUNC_IMPL(__imp__sub_83038670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,5141
	ctx.r8.s64 = 336920576;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16320
	ctx.r6.s64 = ctx.r11.s64 + -16320;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,1543
	ctx.r5.u64 = ctx.r9.u64 | 1543;
	// ori r4,r8,5655
	ctx.r4.u64 = ctx.r8.u64 | 5655;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830386B0"))) PPC_WEAK_FUNC(sub_830386B0);
PPC_FUNC_IMPL(__imp__sub_830386B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,6169
	ctx.r8.s64 = 404291584;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16256
	ctx.r6.s64 = ctx.r11.s64 + -16256;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,1543
	ctx.r5.u64 = ctx.r9.u64 | 1543;
	// ori r4,r8,6683
	ctx.r4.u64 = ctx.r8.u64 | 6683;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830386F0"))) PPC_WEAK_FUNC(sub_830386F0);
PPC_FUNC_IMPL(__imp__sub_830386F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,7197
	ctx.r8.s64 = 471662592;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16000
	ctx.r6.s64 = ctx.r11.s64 + -16000;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,1543
	ctx.r5.u64 = ctx.r9.u64 | 1543;
	// ori r4,r8,7711
	ctx.r4.u64 = ctx.r8.u64 | 7711;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038730"))) PPC_WEAK_FUNC(sub_83038730);
PPC_FUNC_IMPL(__imp__sub_83038730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5141
	ctx.r9.s64 = 336920576;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,7197
	ctx.r7.s64 = 471662592;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// addi r5,r11,-15984
	ctx.r5.s64 = ctx.r11.s64 + -15984;
	// ori r4,r10,515
	ctx.r4.u64 = ctx.r10.u64 | 515;
	// ori r3,r9,5655
	ctx.r3.u64 = ctx.r9.u64 | 5655;
	// ori r11,r8,2571
	ctx.r11.u64 = ctx.r8.u64 | 2571;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// ori r10,r7,7711
	ctx.r10.u64 = ctx.r7.u64 | 7711;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038778"))) PPC_WEAK_FUNC(sub_83038778);
PPC_FUNC_IMPL(__imp__sub_83038778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,3085
	ctx.r9.s64 = 202178560;
	// lis r8,7197
	ctx.r8.s64 = 471662592;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r11,-16096
	ctx.r6.s64 = ctx.r11.s64 + -16096;
	// ori r11,r10,515
	ctx.r11.u64 = ctx.r10.u64 | 515;
	// ori r5,r9,3599
	ctx.r5.u64 = ctx.r9.u64 | 3599;
	// ori r4,r8,7711
	ctx.r4.u64 = ctx.r8.u64 | 7711;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830387B8"))) PPC_WEAK_FUNC(sub_830387B8);
PPC_FUNC_IMPL(__imp__sub_830387B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16208
	ctx.r9.s64 = ctx.r11.s64 + -16208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830387E8"))) PPC_WEAK_FUNC(sub_830387E8);
PPC_FUNC_IMPL(__imp__sub_830387E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16368
	ctx.r9.s64 = ctx.r11.s64 + -16368;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038818"))) PPC_WEAK_FUNC(sub_83038818);
PPC_FUNC_IMPL(__imp__sub_83038818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16432
	ctx.r9.s64 = ctx.r11.s64 + -16432;
	// li r8,4113
	ctx.r8.s64 = 4113;
	// li r7,4627
	ctx.r7.s64 = 4627;
	// li r6,5141
	ctx.r6.s64 = 5141;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// li r5,5655
	ctx.r5.s64 = 5655;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038850"))) PPC_WEAK_FUNC(sub_83038850);
PPC_FUNC_IMPL(__imp__sub_83038850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16112
	ctx.r9.s64 = ctx.r11.s64 + -16112;
	// li r8,6169
	ctx.r8.s64 = 6169;
	// li r7,6683
	ctx.r7.s64 = 6683;
	// li r6,7197
	ctx.r6.s64 = 7197;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// li r5,7711
	ctx.r5.s64 = 7711;
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// stw r5,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038888"))) PPC_WEAK_FUNC(sub_83038888);
PPC_FUNC_IMPL(__imp__sub_83038888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-15968
	ctx.r9.s64 = ctx.r11.s64 + -15968;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830388B8"))) PPC_WEAK_FUNC(sub_830388B8);
PPC_FUNC_IMPL(__imp__sub_830388B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-16352
	ctx.r9.s64 = ctx.r11.s64 + -16352;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830388E8"))) PPC_WEAK_FUNC(sub_830388E8);
PPC_FUNC_IMPL(__imp__sub_830388E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2200
	ctx.r9.s64 = ctx.r11.s64 + 2200;
	// addi r8,r10,-16448
	ctx.r8.s64 = ctx.r10.s64 + -16448;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038908"))) PPC_WEAK_FUNC(sub_83038908);
PPC_FUNC_IMPL(__imp__sub_83038908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2232
	ctx.r9.s64 = ctx.r11.s64 + 2232;
	// addi r8,r10,-16304
	ctx.r8.s64 = ctx.r10.s64 + -16304;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038928"))) PPC_WEAK_FUNC(sub_83038928);
PPC_FUNC_IMPL(__imp__sub_83038928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2264
	ctx.r9.s64 = ctx.r11.s64 + 2264;
	// addi r8,r10,-16480
	ctx.r8.s64 = ctx.r10.s64 + -16480;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038948"))) PPC_WEAK_FUNC(sub_83038948);
PPC_FUNC_IMPL(__imp__sub_83038948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2224
	ctx.r9.s64 = ctx.r11.s64 + 2224;
	// addi r8,r10,-16288
	ctx.r8.s64 = ctx.r10.s64 + -16288;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038968"))) PPC_WEAK_FUNC(sub_83038968);
PPC_FUNC_IMPL(__imp__sub_83038968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,11508
	ctx.r9.s64 = ctx.r11.s64 + 11508;
	// addi r8,r10,-16144
	ctx.r8.s64 = ctx.r10.s64 + -16144;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038988"))) PPC_WEAK_FUNC(sub_83038988);
PPC_FUNC_IMPL(__imp__sub_83038988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,19964
	ctx.r9.s64 = ctx.r11.s64 + 19964;
	// addi r8,r10,-16192
	ctx.r8.s64 = ctx.r10.s64 + -16192;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830389A8"))) PPC_WEAK_FUNC(sub_830389A8);
PPC_FUNC_IMPL(__imp__sub_830389A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,8388
	ctx.r9.s64 = ctx.r11.s64 + 8388;
	// addi r8,r10,-16176
	ctx.r8.s64 = ctx.r10.s64 + -16176;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830389C8"))) PPC_WEAK_FUNC(sub_830389C8);
PPC_FUNC_IMPL(__imp__sub_830389C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,29820
	ctx.r9.s64 = ctx.r11.s64 + 29820;
	// addi r8,r10,-16128
	ctx.r8.s64 = ctx.r10.s64 + -16128;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830389E8"))) PPC_WEAK_FUNC(sub_830389E8);
PPC_FUNC_IMPL(__imp__sub_830389E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,-7388
	ctx.r9.s64 = ctx.r11.s64 + -7388;
	// addi r8,r10,-16416
	ctx.r8.s64 = ctx.r10.s64 + -16416;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038A08"))) PPC_WEAK_FUNC(sub_83038A08);
PPC_FUNC_IMPL(__imp__sub_83038A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,-11676
	ctx.r9.s64 = ctx.r11.s64 + -11676;
	// addi r8,r10,-16464
	ctx.r8.s64 = ctx.r10.s64 + -16464;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038A28"))) PPC_WEAK_FUNC(sub_83038A28);
PPC_FUNC_IMPL(__imp__sub_83038A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,-15844
	ctx.r9.s64 = ctx.r11.s64 + -15844;
	// addi r8,r10,-15952
	ctx.r8.s64 = ctx.r10.s64 + -15952;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038A48"))) PPC_WEAK_FUNC(sub_83038A48);
PPC_FUNC_IMPL(__imp__sub_83038A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-15888
	ctx.r3.s64 = ctx.r31.s64 + -15888;
	// addi r4,r10,14436
	ctx.r4.s64 = ctx.r10.s64 + 14436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83038A84;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,14380
	ctx.r11.s64 = ctx.r11.s64 + 14380;
	// addi r3,r9,-30968
	ctx.r3.s64 = ctx.r9.s64 + -30968;
	// stw r11,-15888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038A9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038AB0"))) PPC_WEAK_FUNC(sub_83038AB0);
PPC_FUNC_IMPL(__imp__sub_83038AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83038AC0"))) PPC_WEAK_FUNC(sub_83038AC0);
PPC_FUNC_IMPL(__imp__sub_83038AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15588
	ctx.r3.s64 = ctx.r31.s64 + -15588;
	// addi r4,r10,-28780
	ctx.r4.s64 = ctx.r10.s64 + -28780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83038AFC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17752
	ctx.r11.s64 = ctx.r11.s64 + 17752;
	// addi r3,r9,-30936
	ctx.r3.s64 = ctx.r9.s64 + -30936;
	// stw r11,-15588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038B14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038B28"))) PPC_WEAK_FUNC(sub_83038B28);
PPC_FUNC_IMPL(__imp__sub_83038B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15556
	ctx.r3.s64 = ctx.r31.s64 + -15556;
	// addi r4,r10,-28760
	ctx.r4.s64 = ctx.r10.s64 + -28760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82b38290
	ctx.lr = 0x83038B64;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17744
	ctx.r11.s64 = ctx.r11.s64 + 17744;
	// addi r3,r9,-30912
	ctx.r3.s64 = ctx.r9.s64 + -30912;
	// stw r11,-15556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038B7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038B90"))) PPC_WEAK_FUNC(sub_83038B90);
PPC_FUNC_IMPL(__imp__sub_83038B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15456
	ctx.r3.s64 = ctx.r31.s64 + -15456;
	// addi r4,r10,-28656
	ctx.r4.s64 = ctx.r10.s64 + -28656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x83038BCC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17944
	ctx.r11.s64 = ctx.r11.s64 + 17944;
	// addi r3,r9,-30888
	ctx.r3.s64 = ctx.r9.s64 + -30888;
	// stw r11,-15456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038BE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038BF8"))) PPC_WEAK_FUNC(sub_83038BF8);
PPC_FUNC_IMPL(__imp__sub_83038BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15488
	ctx.r3.s64 = ctx.r31.s64 + -15488;
	// addi r4,r10,18540
	ctx.r4.s64 = ctx.r10.s64 + 18540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x83038C34;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17952
	ctx.r11.s64 = ctx.r11.s64 + 17952;
	// addi r3,r9,-30864
	ctx.r3.s64 = ctx.r9.s64 + -30864;
	// stw r11,-15488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038C4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038C60"))) PPC_WEAK_FUNC(sub_83038C60);
PPC_FUNC_IMPL(__imp__sub_83038C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15360
	ctx.r3.s64 = ctx.r31.s64 + -15360;
	// addi r4,r10,18560
	ctx.r4.s64 = ctx.r10.s64 + 18560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,680
	ctx.r6.s64 = 680;
	// bl 0x82b38290
	ctx.lr = 0x83038C9C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17960
	ctx.r11.s64 = ctx.r11.s64 + 17960;
	// addi r3,r9,-30840
	ctx.r3.s64 = ctx.r9.s64 + -30840;
	// stw r11,-15360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038CB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038CC8"))) PPC_WEAK_FUNC(sub_83038CC8);
PPC_FUNC_IMPL(__imp__sub_83038CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15520
	ctx.r3.s64 = ctx.r31.s64 + -15520;
	// addi r4,r10,18576
	ctx.r4.s64 = ctx.r10.s64 + 18576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83038D04;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17968
	ctx.r11.s64 = ctx.r11.s64 + 17968;
	// addi r3,r9,-30816
	ctx.r3.s64 = ctx.r9.s64 + -30816;
	// stw r11,-15520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038D1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038D30"))) PPC_WEAK_FUNC(sub_83038D30);
PPC_FUNC_IMPL(__imp__sub_83038D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15424
	ctx.r3.s64 = ctx.r31.s64 + -15424;
	// addi r4,r10,18596
	ctx.r4.s64 = ctx.r10.s64 + 18596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x83038D6C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17976
	ctx.r11.s64 = ctx.r11.s64 + 17976;
	// addi r3,r9,-30792
	ctx.r3.s64 = ctx.r9.s64 + -30792;
	// stw r11,-15424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038D84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038D98"))) PPC_WEAK_FUNC(sub_83038D98);
PPC_FUNC_IMPL(__imp__sub_83038D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15392
	ctx.r3.s64 = ctx.r31.s64 + -15392;
	// addi r4,r10,18616
	ctx.r4.s64 = ctx.r10.s64 + 18616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,700
	ctx.r6.s64 = 700;
	// bl 0x82b38290
	ctx.lr = 0x83038DD4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17984
	ctx.r11.s64 = ctx.r11.s64 + 17984;
	// addi r3,r9,-30768
	ctx.r3.s64 = ctx.r9.s64 + -30768;
	// stw r11,-15392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038DEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038E00"))) PPC_WEAK_FUNC(sub_83038E00);
PPC_FUNC_IMPL(__imp__sub_83038E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15456
	ctx.r5.s64 = ctx.r11.s64 + -15456;
	// addi r3,r31,-15328
	ctx.r3.s64 = ctx.r31.s64 + -15328;
	// addi r4,r10,19108
	ctx.r4.s64 = ctx.r10.s64 + 19108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1268
	ctx.r6.s64 = 1268;
	// bl 0x82b38290
	ctx.lr = 0x83038E3C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,18644
	ctx.r11.s64 = ctx.r11.s64 + 18644;
	// addi r3,r9,-30744
	ctx.r3.s64 = ctx.r9.s64 + -30744;
	// stw r11,-15328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038E54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038E68"))) PPC_WEAK_FUNC(sub_83038E68);
PPC_FUNC_IMPL(__imp__sub_83038E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15296
	ctx.r3.s64 = ctx.r31.s64 + -15296;
	// addi r4,r10,-28728
	ctx.r4.s64 = ctx.r10.s64 + -28728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,268
	ctx.r6.s64 = 268;
	// bl 0x82b38290
	ctx.lr = 0x83038EA4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19152
	ctx.r11.s64 = ctx.r11.s64 + 19152;
	// addi r3,r9,-30720
	ctx.r3.s64 = ctx.r9.s64 + -30720;
	// stw r11,-15296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038EBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038ED0"))) PPC_WEAK_FUNC(sub_83038ED0);
PPC_FUNC_IMPL(__imp__sub_83038ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-30696
	ctx.r3.s64 = ctx.r11.s64 + -30696;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83038EE0"))) PPC_WEAK_FUNC(sub_83038EE0);
PPC_FUNC_IMPL(__imp__sub_83038EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15216
	ctx.r3.s64 = ctx.r31.s64 + -15216;
	// addi r4,r10,-28752
	ctx.r4.s64 = ctx.r10.s64 + -28752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83038F1C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19924
	ctx.r11.s64 = ctx.r11.s64 + 19924;
	// addi r3,r9,-30672
	ctx.r3.s64 = ctx.r9.s64 + -30672;
	// stw r11,-15216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038F34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038F48"))) PPC_WEAK_FUNC(sub_83038F48);
PPC_FUNC_IMPL(__imp__sub_83038F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15112
	ctx.r3.s64 = ctx.r31.s64 + -15112;
	// addi r4,r10,-28548
	ctx.r4.s64 = ctx.r10.s64 + -28548;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x83038F84;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19956
	ctx.r11.s64 = ctx.r11.s64 + 19956;
	// addi r3,r9,-30648
	ctx.r3.s64 = ctx.r9.s64 + -30648;
	// stw r11,-15112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83038F9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83038FB0"))) PPC_WEAK_FUNC(sub_83038FB0);
PPC_FUNC_IMPL(__imp__sub_83038FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15176
	ctx.r3.s64 = ctx.r31.s64 + -15176;
	// addi r4,r10,-28524
	ctx.r4.s64 = ctx.r10.s64 + -28524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83038FEC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19964
	ctx.r11.s64 = ctx.r11.s64 + 19964;
	// addi r3,r9,-30624
	ctx.r3.s64 = ctx.r9.s64 + -30624;
	// stw r11,-15176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039004;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039018"))) PPC_WEAK_FUNC(sub_83039018);
PPC_FUNC_IMPL(__imp__sub_83039018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-15144
	ctx.r3.s64 = ctx.r31.s64 + -15144;
	// addi r4,r10,-28568
	ctx.r4.s64 = ctx.r10.s64 + -28568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83039054;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19972
	ctx.r11.s64 = ctx.r11.s64 + 19972;
	// addi r3,r9,-30600
	ctx.r3.s64 = ctx.r9.s64 + -30600;
	// stw r11,-15144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303906C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039080"))) PPC_WEAK_FUNC(sub_83039080);
PPC_FUNC_IMPL(__imp__sub_83039080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14864
	ctx.r3.s64 = ctx.r31.s64 + -14864;
	// addi r4,r10,-28740
	ctx.r4.s64 = ctx.r10.s64 + -28740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x830390BC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,16604
	ctx.r11.s64 = ctx.r11.s64 + 16604;
	// addi r3,r9,-30576
	ctx.r3.s64 = ctx.r9.s64 + -30576;
	// stw r11,-14864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830390D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830390E8"))) PPC_WEAK_FUNC(sub_830390E8);
PPC_FUNC_IMPL(__imp__sub_830390E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-14896
	ctx.r3.s64 = ctx.r31.s64 + -14896;
	// addi r4,r10,17004
	ctx.r4.s64 = ctx.r10.s64 + 17004;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83039124;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,16612
	ctx.r11.s64 = ctx.r11.s64 + 16612;
	// addi r3,r9,-30552
	ctx.r3.s64 = ctx.r9.s64 + -30552;
	// stw r11,-14896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303913C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039150"))) PPC_WEAK_FUNC(sub_83039150);
PPC_FUNC_IMPL(__imp__sub_83039150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-14992
	ctx.r3.s64 = ctx.r31.s64 + -14992;
	// addi r4,r10,17020
	ctx.r4.s64 = ctx.r10.s64 + 17020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8303918C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,16628
	ctx.r11.s64 = ctx.r11.s64 + 16628;
	// addi r3,r9,-30528
	ctx.r3.s64 = ctx.r9.s64 + -30528;
	// stw r11,-14992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830391A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830391B8"))) PPC_WEAK_FUNC(sub_830391B8);
PPC_FUNC_IMPL(__imp__sub_830391B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-14928
	ctx.r3.s64 = ctx.r31.s64 + -14928;
	// addi r4,r10,17040
	ctx.r4.s64 = ctx.r10.s64 + 17040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x830391F4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,16720
	ctx.r11.s64 = ctx.r11.s64 + 16720;
	// addi r3,r9,-30504
	ctx.r3.s64 = ctx.r9.s64 + -30504;
	// stw r11,-14928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303920C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039220"))) PPC_WEAK_FUNC(sub_83039220);
PPC_FUNC_IMPL(__imp__sub_83039220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-14960
	ctx.r3.s64 = ctx.r31.s64 + -14960;
	// addi r4,r10,17056
	ctx.r4.s64 = ctx.r10.s64 + 17056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8303925C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,16620
	ctx.r11.s64 = ctx.r11.s64 + 16620;
	// addi r3,r9,-30480
	ctx.r3.s64 = ctx.r9.s64 + -30480;
	// stw r11,-14960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039274;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039288"))) PPC_WEAK_FUNC(sub_83039288);
PPC_FUNC_IMPL(__imp__sub_83039288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-14832
	ctx.r3.s64 = ctx.r31.s64 + -14832;
	// addi r4,r10,17312
	ctx.r4.s64 = ctx.r10.s64 + 17312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x830392C4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17256
	ctx.r11.s64 = ctx.r11.s64 + 17256;
	// addi r3,r9,-30456
	ctx.r3.s64 = ctx.r9.s64 + -30456;
	// stw r11,-14832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830392DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830392F0"))) PPC_WEAK_FUNC(sub_830392F0);
PPC_FUNC_IMPL(__imp__sub_830392F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-14800
	ctx.r3.s64 = ctx.r31.s64 + -14800;
	// addi r4,r10,17372
	ctx.r4.s64 = ctx.r10.s64 + 17372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8303932C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17332
	ctx.r11.s64 = ctx.r11.s64 + 17332;
	// addi r3,r9,-30432
	ctx.r3.s64 = ctx.r9.s64 + -30432;
	// stw r11,-14800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039344;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039358"))) PPC_WEAK_FUNC(sub_83039358);
PPC_FUNC_IMPL(__imp__sub_83039358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-14768
	ctx.r3.s64 = ctx.r31.s64 + -14768;
	// addi r4,r10,17424
	ctx.r4.s64 = ctx.r10.s64 + 17424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83039394;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17384
	ctx.r11.s64 = ctx.r11.s64 + 17384;
	// addi r3,r9,-30408
	ctx.r3.s64 = ctx.r9.s64 + -30408;
	// stw r11,-14768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830393AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830393C0"))) PPC_WEAK_FUNC(sub_830393C0);
PPC_FUNC_IMPL(__imp__sub_830393C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-14736
	ctx.r3.s64 = ctx.r31.s64 + -14736;
	// addi r4,r10,17456
	ctx.r4.s64 = ctx.r10.s64 + 17456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830393FC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17436
	ctx.r11.s64 = ctx.r11.s64 + 17436;
	// addi r3,r9,-30384
	ctx.r3.s64 = ctx.r9.s64 + -30384;
	// stw r11,-14736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039428"))) PPC_WEAK_FUNC(sub_83039428);
PPC_FUNC_IMPL(__imp__sub_83039428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,10256
	ctx.r9.s64 = ctx.r11.s64 + 10256;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,-14672
	ctx.r7.s64 = ctx.r10.s64 + -14672;
	// addi r6,r8,6856
	ctx.r6.s64 = ctx.r8.s64 + 6856;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stvx128 v63,r7,r5
	ea = (ctx.r7.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039460"))) PPC_WEAK_FUNC(sub_83039460);
PPC_FUNC_IMPL(__imp__sub_83039460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r9,r11,2200
	ctx.r9.s64 = ctx.r11.s64 + 2200;
	// addi r8,r10,-14704
	ctx.r8.s64 = ctx.r10.s64 + -14704;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039488"))) PPC_WEAK_FUNC(sub_83039488);
PPC_FUNC_IMPL(__imp__sub_83039488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-14640
	ctx.r3.s64 = ctx.r31.s64 + -14640;
	// addi r4,r10,17748
	ctx.r4.s64 = ctx.r10.s64 + 17748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830394C4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17680
	ctx.r11.s64 = ctx.r11.s64 + 17680;
	// addi r3,r9,-30360
	ctx.r3.s64 = ctx.r9.s64 + -30360;
	// stw r11,-14640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830394DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830394F0"))) PPC_WEAK_FUNC(sub_830394F0);
PPC_FUNC_IMPL(__imp__sub_830394F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-15888
	ctx.r5.s64 = ctx.r11.s64 + -15888;
	// addi r3,r31,-14608
	ctx.r3.s64 = ctx.r31.s64 + -14608;
	// addi r4,r10,17772
	ctx.r4.s64 = ctx.r10.s64 + 17772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8303952C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17764
	ctx.r11.s64 = ctx.r11.s64 + 17764;
	// addi r3,r9,-30336
	ctx.r3.s64 = ctx.r9.s64 + -30336;
	// stw r11,-14608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039544;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039558"))) PPC_WEAK_FUNC(sub_83039558);
PPC_FUNC_IMPL(__imp__sub_83039558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14476
	ctx.r3.s64 = ctx.r31.s64 + -14476;
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// bl 0x82b38290
	ctx.lr = 0x83039594;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17796
	ctx.r11.s64 = ctx.r11.s64 + 17796;
	// addi r3,r9,-30312
	ctx.r3.s64 = ctx.r9.s64 + -30312;
	// stw r11,-14476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830395AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830395C0"))) PPC_WEAK_FUNC(sub_830395C0);
PPC_FUNC_IMPL(__imp__sub_830395C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31978
	ctx.r11.s64 = -2095710208;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,15540
	ctx.r5.s64 = ctx.r11.s64 + 15540;
	// addi r3,r31,-14252
	ctx.r3.s64 = ctx.r31.s64 + -14252;
	// addi r4,r10,18716
	ctx.r4.s64 = ctx.r10.s64 + 18716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x830395FC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17804
	ctx.r11.s64 = ctx.r11.s64 + 17804;
	// addi r3,r9,-30288
	ctx.r3.s64 = ctx.r9.s64 + -30288;
	// stw r11,-14252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039614;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039628"))) PPC_WEAK_FUNC(sub_83039628);
PPC_FUNC_IMPL(__imp__sub_83039628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14572
	ctx.r3.s64 = ctx.r31.s64 + -14572;
	// addi r4,r10,18748
	ctx.r4.s64 = ctx.r10.s64 + 18748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83039664;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17812
	ctx.r11.s64 = ctx.r11.s64 + 17812;
	// addi r3,r9,-30264
	ctx.r3.s64 = ctx.r9.s64 + -30264;
	// stw r11,-14572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303967C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039690"))) PPC_WEAK_FUNC(sub_83039690);
PPC_FUNC_IMPL(__imp__sub_83039690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14412
	ctx.r3.s64 = ctx.r31.s64 + -14412;
	// addi r4,r10,18780
	ctx.r4.s64 = ctx.r10.s64 + 18780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x830396CC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17820
	ctx.r11.s64 = ctx.r11.s64 + 17820;
	// addi r3,r9,-30240
	ctx.r3.s64 = ctx.r9.s64 + -30240;
	// stw r11,-14412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830396E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830396F8"))) PPC_WEAK_FUNC(sub_830396F8);
PPC_FUNC_IMPL(__imp__sub_830396F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14380
	ctx.r3.s64 = ctx.r31.s64 + -14380;
	// addi r4,r10,18808
	ctx.r4.s64 = ctx.r10.s64 + 18808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83039734;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17828
	ctx.r11.s64 = ctx.r11.s64 + 17828;
	// addi r3,r9,-30216
	ctx.r3.s64 = ctx.r9.s64 + -30216;
	// stw r11,-14380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303974C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039760"))) PPC_WEAK_FUNC(sub_83039760);
PPC_FUNC_IMPL(__imp__sub_83039760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14348
	ctx.r3.s64 = ctx.r31.s64 + -14348;
	// addi r4,r10,18832
	ctx.r4.s64 = ctx.r10.s64 + 18832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8303979C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17836
	ctx.r11.s64 = ctx.r11.s64 + 17836;
	// addi r3,r9,-30192
	ctx.r3.s64 = ctx.r9.s64 + -30192;
	// stw r11,-14348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830397B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830397C8"))) PPC_WEAK_FUNC(sub_830397C8);
PPC_FUNC_IMPL(__imp__sub_830397C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14284
	ctx.r3.s64 = ctx.r31.s64 + -14284;
	// addi r4,r10,18860
	ctx.r4.s64 = ctx.r10.s64 + 18860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83039804;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17844
	ctx.r11.s64 = ctx.r11.s64 + 17844;
	// addi r3,r9,-30168
	ctx.r3.s64 = ctx.r9.s64 + -30168;
	// stw r11,-14284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303981C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039830"))) PPC_WEAK_FUNC(sub_83039830);
PPC_FUNC_IMPL(__imp__sub_83039830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14188
	ctx.r3.s64 = ctx.r31.s64 + -14188;
	// addi r4,r10,18888
	ctx.r4.s64 = ctx.r10.s64 + 18888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8303986C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17852
	ctx.r11.s64 = ctx.r11.s64 + 17852;
	// addi r3,r9,-30144
	ctx.r3.s64 = ctx.r9.s64 + -30144;
	// stw r11,-14188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039884;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039898"))) PPC_WEAK_FUNC(sub_83039898);
PPC_FUNC_IMPL(__imp__sub_83039898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14508
	ctx.r3.s64 = ctx.r31.s64 + -14508;
	// addi r4,r10,18916
	ctx.r4.s64 = ctx.r10.s64 + 18916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x830398D4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17860
	ctx.r11.s64 = ctx.r11.s64 + 17860;
	// addi r3,r9,-30120
	ctx.r3.s64 = ctx.r9.s64 + -30120;
	// stw r11,-14508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830398EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039900"))) PPC_WEAK_FUNC(sub_83039900);
PPC_FUNC_IMPL(__imp__sub_83039900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14220
	ctx.r3.s64 = ctx.r31.s64 + -14220;
	// addi r4,r10,18948
	ctx.r4.s64 = ctx.r10.s64 + 18948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8303993C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17868
	ctx.r11.s64 = ctx.r11.s64 + 17868;
	// addi r3,r9,-30096
	ctx.r3.s64 = ctx.r9.s64 + -30096;
	// stw r11,-14220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039954;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039968"))) PPC_WEAK_FUNC(sub_83039968);
PPC_FUNC_IMPL(__imp__sub_83039968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-13808
	ctx.r5.s64 = ctx.r11.s64 + -13808;
	// addi r3,r31,-14540
	ctx.r3.s64 = ctx.r31.s64 + -14540;
	// addi r4,r10,18980
	ctx.r4.s64 = ctx.r10.s64 + 18980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x830399A4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17876
	ctx.r11.s64 = ctx.r11.s64 + 17876;
	// addi r3,r9,-30072
	ctx.r3.s64 = ctx.r9.s64 + -30072;
	// stw r11,-14540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830399BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830399D0"))) PPC_WEAK_FUNC(sub_830399D0);
PPC_FUNC_IMPL(__imp__sub_830399D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-14540
	ctx.r5.s64 = ctx.r11.s64 + -14540;
	// addi r3,r31,-14316
	ctx.r3.s64 = ctx.r31.s64 + -14316;
	// addi r4,r10,19024
	ctx.r4.s64 = ctx.r10.s64 + 19024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83039A0C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17884
	ctx.r11.s64 = ctx.r11.s64 + 17884;
	// addi r3,r9,-30048
	ctx.r3.s64 = ctx.r9.s64 + -30048;
	// stw r11,-14316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039A24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039A38"))) PPC_WEAK_FUNC(sub_83039A38);
PPC_FUNC_IMPL(__imp__sub_83039A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14444
	ctx.r3.s64 = ctx.r31.s64 + -14444;
	// addi r4,r10,19056
	ctx.r4.s64 = ctx.r10.s64 + 19056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83039A74;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17892
	ctx.r11.s64 = ctx.r11.s64 + 17892;
	// addi r3,r9,-30024
	ctx.r3.s64 = ctx.r9.s64 + -30024;
	// stw r11,-14444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039A8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039AA0"))) PPC_WEAK_FUNC(sub_83039AA0);
PPC_FUNC_IMPL(__imp__sub_83039AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14124
	ctx.r3.s64 = ctx.r31.s64 + -14124;
	// addi r4,r10,19088
	ctx.r4.s64 = ctx.r10.s64 + 19088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83039ADC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17900
	ctx.r11.s64 = ctx.r11.s64 + 17900;
	// addi r3,r9,-30000
	ctx.r3.s64 = ctx.r9.s64 + -30000;
	// stw r11,-14124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039AF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039B08"))) PPC_WEAK_FUNC(sub_83039B08);
PPC_FUNC_IMPL(__imp__sub_83039B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31978
	ctx.r11.s64 = -2095710208;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,15508
	ctx.r5.s64 = ctx.r11.s64 + 15508;
	// addi r3,r31,-14156
	ctx.r3.s64 = ctx.r31.s64 + -14156;
	// addi r4,r10,19112
	ctx.r4.s64 = ctx.r10.s64 + 19112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83039B44;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,17908
	ctx.r11.s64 = ctx.r11.s64 + 17908;
	// addi r3,r9,-29976
	ctx.r3.s64 = ctx.r9.s64 + -29976;
	// stw r11,-14156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039B5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039B70"))) PPC_WEAK_FUNC(sub_83039B70);
PPC_FUNC_IMPL(__imp__sub_83039B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-14032
	ctx.r3.s64 = ctx.r31.s64 + -14032;
	// addi r4,r10,19200
	ctx.r4.s64 = ctx.r10.s64 + 19200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83039BAC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19184
	ctx.r11.s64 = ctx.r11.s64 + 19184;
	// addi r3,r9,-29952
	ctx.r3.s64 = ctx.r9.s64 + -29952;
	// stw r11,-14032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039BC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039BD8"))) PPC_WEAK_FUNC(sub_83039BD8);
PPC_FUNC_IMPL(__imp__sub_83039BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-14000
	ctx.r3.s64 = ctx.r31.s64 + -14000;
	// addi r4,r10,-28428
	ctx.r4.s64 = ctx.r10.s64 + -28428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,464
	ctx.r6.s64 = 464;
	// bl 0x82b38290
	ctx.lr = 0x83039C14;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19216
	ctx.r11.s64 = ctx.r11.s64 + 19216;
	// addi r3,r9,-29928
	ctx.r3.s64 = ctx.r9.s64 + -29928;
	// stw r11,-14000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039C2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039C40"))) PPC_WEAK_FUNC(sub_83039C40);
PPC_FUNC_IMPL(__imp__sub_83039C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-13936
	ctx.r3.s64 = ctx.r31.s64 + -13936;
	// addi r4,r10,-28868
	ctx.r4.s64 = ctx.r10.s64 + -28868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x83039C7C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19232
	ctx.r11.s64 = ctx.r11.s64 + 19232;
	// addi r3,r9,-29904
	ctx.r3.s64 = ctx.r9.s64 + -29904;
	// stw r11,-13936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039C94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039CA8"))) PPC_WEAK_FUNC(sub_83039CA8);
PPC_FUNC_IMPL(__imp__sub_83039CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-13968
	ctx.r3.s64 = ctx.r31.s64 + -13968;
	// addi r4,r10,-28852
	ctx.r4.s64 = ctx.r10.s64 + -28852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83039CE4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19224
	ctx.r11.s64 = ctx.r11.s64 + 19224;
	// addi r3,r9,-29880
	ctx.r3.s64 = ctx.r9.s64 + -29880;
	// stw r11,-13968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039CFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039D10"))) PPC_WEAK_FUNC(sub_83039D10);
PPC_FUNC_IMPL(__imp__sub_83039D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-13872
	ctx.r3.s64 = ctx.r31.s64 + -13872;
	// addi r4,r10,19444
	ctx.r4.s64 = ctx.r10.s64 + 19444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x83039D4C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19368
	ctx.r11.s64 = ctx.r11.s64 + 19368;
	// addi r3,r9,-29856
	ctx.r3.s64 = ctx.r9.s64 + -29856;
	// stw r11,-13872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039D64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039D78"))) PPC_WEAK_FUNC(sub_83039D78);
PPC_FUNC_IMPL(__imp__sub_83039D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-13904
	ctx.r3.s64 = ctx.r31.s64 + -13904;
	// addi r4,r10,19456
	ctx.r4.s64 = ctx.r10.s64 + 19456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83039DB4;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19376
	ctx.r11.s64 = ctx.r11.s64 + 19376;
	// addi r3,r9,-29832
	ctx.r3.s64 = ctx.r9.s64 + -29832;
	// stw r11,-13904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039DCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039DE0"))) PPC_WEAK_FUNC(sub_83039DE0);
PPC_FUNC_IMPL(__imp__sub_83039DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,-13840
	ctx.r3.s64 = ctx.r31.s64 + -13840;
	// addi r4,r10,19492
	ctx.r4.s64 = ctx.r10.s64 + 19492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83039E1C;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19468
	ctx.r11.s64 = ctx.r11.s64 + 19468;
	// addi r3,r9,-29808
	ctx.r3.s64 = ctx.r9.s64 + -29808;
	// stw r11,-13840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039E34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039E48"))) PPC_WEAK_FUNC(sub_83039E48);
PPC_FUNC_IMPL(__imp__sub_83039E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-13808
	ctx.r3.s64 = ctx.r31.s64 + -13808;
	// addi r4,r10,-28360
	ctx.r4.s64 = ctx.r10.s64 + -28360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83039E84;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19512
	ctx.r11.s64 = ctx.r11.s64 + 19512;
	// addi r3,r9,-29784
	ctx.r3.s64 = ctx.r9.s64 + -29784;
	// stw r11,-13808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039E9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039EB0"))) PPC_WEAK_FUNC(sub_83039EB0);
PPC_FUNC_IMPL(__imp__sub_83039EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-13776
	ctx.r3.s64 = ctx.r31.s64 + -13776;
	// addi r4,r10,-28444
	ctx.r4.s64 = ctx.r10.s64 + -28444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83039EEC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19592
	ctx.r11.s64 = ctx.r11.s64 + 19592;
	// addi r3,r9,-29760
	ctx.r3.s64 = ctx.r9.s64 + -29760;
	// stw r11,-13776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039F04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039F18"))) PPC_WEAK_FUNC(sub_83039F18);
PPC_FUNC_IMPL(__imp__sub_83039F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-13744
	ctx.r3.s64 = ctx.r31.s64 + -13744;
	// addi r4,r10,19688
	ctx.r4.s64 = ctx.r10.s64 + 19688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x83039F54;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19648
	ctx.r11.s64 = ctx.r11.s64 + 19648;
	// addi r3,r9,-29736
	ctx.r3.s64 = ctx.r9.s64 + -29736;
	// stw r11,-13744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039F6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039F80"))) PPC_WEAK_FUNC(sub_83039F80);
PPC_FUNC_IMPL(__imp__sub_83039F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-13712
	ctx.r3.s64 = ctx.r31.s64 + -13712;
	// addi r4,r10,19928
	ctx.r4.s64 = ctx.r10.s64 + 19928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83039FBC;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19700
	ctx.r11.s64 = ctx.r11.s64 + 19700;
	// addi r3,r9,-29712
	ctx.r3.s64 = ctx.r9.s64 + -29712;
	// stw r11,-13712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83039FD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83039FE8"))) PPC_WEAK_FUNC(sub_83039FE8);
PPC_FUNC_IMPL(__imp__sub_83039FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r31,-31977
	ctx.r31.s64 = -2095644672;
	// addi r5,r11,-16656
	ctx.r5.s64 = ctx.r11.s64 + -16656;
	// addi r3,r31,-13680
	ctx.r3.s64 = ctx.r31.s64 + -13680;
	// addi r4,r10,19940
	ctx.r4.s64 = ctx.r10.s64 + 19940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8303A024;
	sub_82B38290(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-31995
	ctx.r9.s64 = -2096824320;
	// addi r11,r11,19708
	ctx.r11.s64 = ctx.r11.s64 + 19708;
	// addi r3,r9,-29688
	ctx.r3.s64 = ctx.r9.s64 + -29688;
	// stw r11,-13680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303A03C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A050"))) PPC_WEAK_FUNC(sub_8303A050);
PPC_FUNC_IMPL(__imp__sub_8303A050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18896
	ctx.r3.s64 = ctx.r11.s64 + 18896;
	// b 0x82caf908
	sub_82CAF908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A060"))) PPC_WEAK_FUNC(sub_8303A060);
PPC_FUNC_IMPL(__imp__sub_8303A060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// addi r11,r11,30096
	ctx.r11.s64 = ctx.r11.s64 + 30096;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83048c64
	ctx.lr = 0x8303A07C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// bl 0x82f06a08
	ctx.lr = 0x8303A088;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A098"))) PPC_WEAK_FUNC(sub_8303A098);
PPC_FUNC_IMPL(__imp__sub_8303A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// li r4,114
	ctx.r4.s64 = 114;
	// addi r3,r11,31652
	ctx.r3.s64 = ctx.r11.s64 + 31652;
	// b 0x82e60a48
	sub_82E60A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A0A8"))) PPC_WEAK_FUNC(sub_8303A0A8);
PPC_FUNC_IMPL(__imp__sub_8303A0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// addi r4,r11,31652
	ctx.r4.s64 = ctx.r11.s64 + 31652;
	// addi r3,r10,31696
	ctx.r3.s64 = ctx.r10.s64 + 31696;
	// b 0x82e61748
	sub_82E61748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A0C0"))) PPC_WEAK_FUNC(sub_8303A0C0);
PPC_FUNC_IMPL(__imp__sub_8303A0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-13800
	ctx.r31.s64 = ctx.r11.s64 + -13800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82f06d60
	ctx.lr = 0x8303A0E8;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A0FC;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A10C;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A150"))) PPC_WEAK_FUNC(sub_8303A150);
PPC_FUNC_IMPL(__imp__sub_8303A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-12728
	ctx.r31.s64 = ctx.r11.s64 + -12728;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = ctx.r31.s64 + 26;
	// bl 0x82f06d60
	ctx.lr = 0x8303A178;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A18C;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A19C;
	sub_82F06D60(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A1E0"))) PPC_WEAK_FUNC(sub_8303A1E0);
PPC_FUNC_IMPL(__imp__sub_8303A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-11656
	ctx.r31.s64 = ctx.r11.s64 + -11656;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82f06d60
	ctx.lr = 0x8303A208;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A21C;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A22C;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A270"))) PPC_WEAK_FUNC(sub_8303A270);
PPC_FUNC_IMPL(__imp__sub_8303A270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-10584
	ctx.r31.s64 = ctx.r11.s64 + -10584;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f06d60
	ctx.lr = 0x8303A298;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A2AC;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A2BC;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A300"))) PPC_WEAK_FUNC(sub_8303A300);
PPC_FUNC_IMPL(__imp__sub_8303A300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,484
	ctx.r5.s64 = 484;
	// addi r31,r11,-9512
	ctx.r31.s64 = ctx.r11.s64 + -9512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82f06d60
	ctx.lr = 0x8303A328;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A33C;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A34C;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A390"))) PPC_WEAK_FUNC(sub_8303A390);
PPC_FUNC_IMPL(__imp__sub_8303A390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-8440
	ctx.r31.s64 = ctx.r11.s64 + -8440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82f06d60
	ctx.lr = 0x8303A3B8;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A3CC;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A3DC;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A420"))) PPC_WEAK_FUNC(sub_8303A420);
PPC_FUNC_IMPL(__imp__sub_8303A420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-7368
	ctx.r31.s64 = ctx.r11.s64 + -7368;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x82f06d60
	ctx.lr = 0x8303A448;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A45C;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A46C;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A4B0"))) PPC_WEAK_FUNC(sub_8303A4B0);
PPC_FUNC_IMPL(__imp__sub_8303A4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f06d60
	sub_82F06D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8303A4C8"))) PPC_WEAK_FUNC(sub_8303A4C8);
PPC_FUNC_IMPL(__imp__sub_8303A4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,22712
	ctx.r31.s64 = ctx.r11.s64 + 22712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82f06d60
	ctx.lr = 0x8303A4F0;
	sub_82F06D60(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,2096
	ctx.r4.s64 = ctx.r11.s64 + 2096;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82f06370
	ctx.lr = 0x8303A504;
	sub_82F06370(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x82f06d60
	ctx.lr = 0x8303A514;
	sub_82F06D60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,31
	ctx.r9.s64 = 31;
	// stw r10,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A558"))) PPC_WEAK_FUNC(sub_8303A558);
PPC_FUNC_IMPL(__imp__sub_8303A558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// bl 0x82f06128
	ctx.lr = 0x8303A570;
	sub_82F06128(ctx, base);
	// lis r11,-31995
	ctx.r11.s64 = -2096824320;
	// addi r3,r11,-29640
	ctx.r3.s64 = ctx.r11.s64 + -29640;
	// bl 0x82f06a08
	ctx.lr = 0x8303A57C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A590"))) PPC_WEAK_FUNC(sub_8303A590);
PPC_FUNC_IMPL(__imp__sub_8303A590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24856, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5A8"))) PPC_WEAK_FUNC(sub_8303A5A8);
PPC_FUNC_IMPL(__imp__sub_8303A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5C0"))) PPC_WEAK_FUNC(sub_8303A5C0);
PPC_FUNC_IMPL(__imp__sub_8303A5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5D8"))) PPC_WEAK_FUNC(sub_8303A5D8);
PPC_FUNC_IMPL(__imp__sub_8303A5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24824, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A5F0"))) PPC_WEAK_FUNC(sub_8303A5F0);
PPC_FUNC_IMPL(__imp__sub_8303A5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A608"))) PPC_WEAK_FUNC(sub_8303A608);
PPC_FUNC_IMPL(__imp__sub_8303A608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A620"))) PPC_WEAK_FUNC(sub_8303A620);
PPC_FUNC_IMPL(__imp__sub_8303A620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A638"))) PPC_WEAK_FUNC(sub_8303A638);
PPC_FUNC_IMPL(__imp__sub_8303A638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A650"))) PPC_WEAK_FUNC(sub_8303A650);
PPC_FUNC_IMPL(__imp__sub_8303A650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A668"))) PPC_WEAK_FUNC(sub_8303A668);
PPC_FUNC_IMPL(__imp__sub_8303A668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A680"))) PPC_WEAK_FUNC(sub_8303A680);
PPC_FUNC_IMPL(__imp__sub_8303A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A698"))) PPC_WEAK_FUNC(sub_8303A698);
PPC_FUNC_IMPL(__imp__sub_8303A698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6B0"))) PPC_WEAK_FUNC(sub_8303A6B0);
PPC_FUNC_IMPL(__imp__sub_8303A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24568, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6C8"))) PPC_WEAK_FUNC(sub_8303A6C8);
PPC_FUNC_IMPL(__imp__sub_8303A6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24504, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6E0"))) PPC_WEAK_FUNC(sub_8303A6E0);
PPC_FUNC_IMPL(__imp__sub_8303A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24472, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A6F8"))) PPC_WEAK_FUNC(sub_8303A6F8);
PPC_FUNC_IMPL(__imp__sub_8303A6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24440, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A710"))) PPC_WEAK_FUNC(sub_8303A710);
PPC_FUNC_IMPL(__imp__sub_8303A710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A728"))) PPC_WEAK_FUNC(sub_8303A728);
PPC_FUNC_IMPL(__imp__sub_8303A728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A740"))) PPC_WEAK_FUNC(sub_8303A740);
PPC_FUNC_IMPL(__imp__sub_8303A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A758"))) PPC_WEAK_FUNC(sub_8303A758);
PPC_FUNC_IMPL(__imp__sub_8303A758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24312, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A770"))) PPC_WEAK_FUNC(sub_8303A770);
PPC_FUNC_IMPL(__imp__sub_8303A770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-24280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A788"))) PPC_WEAK_FUNC(sub_8303A788);
PPC_FUNC_IMPL(__imp__sub_8303A788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17664, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7A0"))) PPC_WEAK_FUNC(sub_8303A7A0);
PPC_FUNC_IMPL(__imp__sub_8303A7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17632, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7B8"))) PPC_WEAK_FUNC(sub_8303A7B8);
PPC_FUNC_IMPL(__imp__sub_8303A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17600, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7D0"))) PPC_WEAK_FUNC(sub_8303A7D0);
PPC_FUNC_IMPL(__imp__sub_8303A7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7D8"))) PPC_WEAK_FUNC(sub_8303A7D8);
PPC_FUNC_IMPL(__imp__sub_8303A7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A7F0"))) PPC_WEAK_FUNC(sub_8303A7F0);
PPC_FUNC_IMPL(__imp__sub_8303A7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A808"))) PPC_WEAK_FUNC(sub_8303A808);
PPC_FUNC_IMPL(__imp__sub_8303A808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A820"))) PPC_WEAK_FUNC(sub_8303A820);
PPC_FUNC_IMPL(__imp__sub_8303A820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A838"))) PPC_WEAK_FUNC(sub_8303A838);
PPC_FUNC_IMPL(__imp__sub_8303A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A850"))) PPC_WEAK_FUNC(sub_8303A850);
PPC_FUNC_IMPL(__imp__sub_8303A850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A868"))) PPC_WEAK_FUNC(sub_8303A868);
PPC_FUNC_IMPL(__imp__sub_8303A868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A880"))) PPC_WEAK_FUNC(sub_8303A880);
PPC_FUNC_IMPL(__imp__sub_8303A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A898"))) PPC_WEAK_FUNC(sub_8303A898);
PPC_FUNC_IMPL(__imp__sub_8303A898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A8B0"))) PPC_WEAK_FUNC(sub_8303A8B0);
PPC_FUNC_IMPL(__imp__sub_8303A8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A8C8"))) PPC_WEAK_FUNC(sub_8303A8C8);
PPC_FUNC_IMPL(__imp__sub_8303A8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17208, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A8E0"))) PPC_WEAK_FUNC(sub_8303A8E0);
PPC_FUNC_IMPL(__imp__sub_8303A8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17176, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A8F8"))) PPC_WEAK_FUNC(sub_8303A8F8);
PPC_FUNC_IMPL(__imp__sub_8303A8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A910"))) PPC_WEAK_FUNC(sub_8303A910);
PPC_FUNC_IMPL(__imp__sub_8303A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A928"))) PPC_WEAK_FUNC(sub_8303A928);
PPC_FUNC_IMPL(__imp__sub_8303A928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A940"))) PPC_WEAK_FUNC(sub_8303A940);
PPC_FUNC_IMPL(__imp__sub_8303A940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A958"))) PPC_WEAK_FUNC(sub_8303A958);
PPC_FUNC_IMPL(__imp__sub_8303A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-17008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A970"))) PPC_WEAK_FUNC(sub_8303A970);
PPC_FUNC_IMPL(__imp__sub_8303A970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A988"))) PPC_WEAK_FUNC(sub_8303A988);
PPC_FUNC_IMPL(__imp__sub_8303A988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9A0"))) PPC_WEAK_FUNC(sub_8303A9A0);
PPC_FUNC_IMPL(__imp__sub_8303A9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9B8"))) PPC_WEAK_FUNC(sub_8303A9B8);
PPC_FUNC_IMPL(__imp__sub_8303A9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16880, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9D0"))) PPC_WEAK_FUNC(sub_8303A9D0);
PPC_FUNC_IMPL(__imp__sub_8303A9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303A9E8"))) PPC_WEAK_FUNC(sub_8303A9E8);
PPC_FUNC_IMPL(__imp__sub_8303A9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16812, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA00"))) PPC_WEAK_FUNC(sub_8303AA00);
PPC_FUNC_IMPL(__imp__sub_8303AA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA18"))) PPC_WEAK_FUNC(sub_8303AA18);
PPC_FUNC_IMPL(__imp__sub_8303AA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA30"))) PPC_WEAK_FUNC(sub_8303AA30);
PPC_FUNC_IMPL(__imp__sub_8303AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16684, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA48"))) PPC_WEAK_FUNC(sub_8303AA48);
PPC_FUNC_IMPL(__imp__sub_8303AA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA60"))) PPC_WEAK_FUNC(sub_8303AA60);
PPC_FUNC_IMPL(__imp__sub_8303AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16652, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA78"))) PPC_WEAK_FUNC(sub_8303AA78);
PPC_FUNC_IMPL(__imp__sub_8303AA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AA90"))) PPC_WEAK_FUNC(sub_8303AA90);
PPC_FUNC_IMPL(__imp__sub_8303AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AAA8"))) PPC_WEAK_FUNC(sub_8303AAA8);
PPC_FUNC_IMPL(__imp__sub_8303AAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AAC0"))) PPC_WEAK_FUNC(sub_8303AAC0);
PPC_FUNC_IMPL(__imp__sub_8303AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AAD8"))) PPC_WEAK_FUNC(sub_8303AAD8);
PPC_FUNC_IMPL(__imp__sub_8303AAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16492, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AAF0"))) PPC_WEAK_FUNC(sub_8303AAF0);
PPC_FUNC_IMPL(__imp__sub_8303AAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16460, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB08"))) PPC_WEAK_FUNC(sub_8303AB08);
PPC_FUNC_IMPL(__imp__sub_8303AB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB20"))) PPC_WEAK_FUNC(sub_8303AB20);
PPC_FUNC_IMPL(__imp__sub_8303AB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB38"))) PPC_WEAK_FUNC(sub_8303AB38);
PPC_FUNC_IMPL(__imp__sub_8303AB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB50"))) PPC_WEAK_FUNC(sub_8303AB50);
PPC_FUNC_IMPL(__imp__sub_8303AB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB68"))) PPC_WEAK_FUNC(sub_8303AB68);
PPC_FUNC_IMPL(__imp__sub_8303AB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB80"))) PPC_WEAK_FUNC(sub_8303AB80);
PPC_FUNC_IMPL(__imp__sub_8303AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16268, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AB98"))) PPC_WEAK_FUNC(sub_8303AB98);
PPC_FUNC_IMPL(__imp__sub_8303AB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16236, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ABB0"))) PPC_WEAK_FUNC(sub_8303ABB0);
PPC_FUNC_IMPL(__imp__sub_8303ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ABC8"))) PPC_WEAK_FUNC(sub_8303ABC8);
PPC_FUNC_IMPL(__imp__sub_8303ABC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16172, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ABE0"))) PPC_WEAK_FUNC(sub_8303ABE0);
PPC_FUNC_IMPL(__imp__sub_8303ABE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ABF8"))) PPC_WEAK_FUNC(sub_8303ABF8);
PPC_FUNC_IMPL(__imp__sub_8303ABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16108, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC10"))) PPC_WEAK_FUNC(sub_8303AC10);
PPC_FUNC_IMPL(__imp__sub_8303AC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16076, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC28"))) PPC_WEAK_FUNC(sub_8303AC28);
PPC_FUNC_IMPL(__imp__sub_8303AC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16044, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC40"))) PPC_WEAK_FUNC(sub_8303AC40);
PPC_FUNC_IMPL(__imp__sub_8303AC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-16012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16012, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC58"))) PPC_WEAK_FUNC(sub_8303AC58);
PPC_FUNC_IMPL(__imp__sub_8303AC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15980, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC70"))) PPC_WEAK_FUNC(sub_8303AC70);
PPC_FUNC_IMPL(__imp__sub_8303AC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15948, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AC88"))) PPC_WEAK_FUNC(sub_8303AC88);
PPC_FUNC_IMPL(__imp__sub_8303AC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACA0"))) PPC_WEAK_FUNC(sub_8303ACA0);
PPC_FUNC_IMPL(__imp__sub_8303ACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15884, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACB8"))) PPC_WEAK_FUNC(sub_8303ACB8);
PPC_FUNC_IMPL(__imp__sub_8303ACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACD0"))) PPC_WEAK_FUNC(sub_8303ACD0);
PPC_FUNC_IMPL(__imp__sub_8303ACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ACE8"))) PPC_WEAK_FUNC(sub_8303ACE8);
PPC_FUNC_IMPL(__imp__sub_8303ACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15788, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD00"))) PPC_WEAK_FUNC(sub_8303AD00);
PPC_FUNC_IMPL(__imp__sub_8303AD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD18"))) PPC_WEAK_FUNC(sub_8303AD18);
PPC_FUNC_IMPL(__imp__sub_8303AD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15724, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD30"))) PPC_WEAK_FUNC(sub_8303AD30);
PPC_FUNC_IMPL(__imp__sub_8303AD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15692, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD48"))) PPC_WEAK_FUNC(sub_8303AD48);
PPC_FUNC_IMPL(__imp__sub_8303AD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD60"))) PPC_WEAK_FUNC(sub_8303AD60);
PPC_FUNC_IMPL(__imp__sub_8303AD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15628, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD78"))) PPC_WEAK_FUNC(sub_8303AD78);
PPC_FUNC_IMPL(__imp__sub_8303AD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AD90"))) PPC_WEAK_FUNC(sub_8303AD90);
PPC_FUNC_IMPL(__imp__sub_8303AD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ADA8"))) PPC_WEAK_FUNC(sub_8303ADA8);
PPC_FUNC_IMPL(__imp__sub_8303ADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15532, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ADC0"))) PPC_WEAK_FUNC(sub_8303ADC0);
PPC_FUNC_IMPL(__imp__sub_8303ADC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ADD8"))) PPC_WEAK_FUNC(sub_8303ADD8);
PPC_FUNC_IMPL(__imp__sub_8303ADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15468, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303ADF0"))) PPC_WEAK_FUNC(sub_8303ADF0);
PPC_FUNC_IMPL(__imp__sub_8303ADF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE08"))) PPC_WEAK_FUNC(sub_8303AE08);
PPC_FUNC_IMPL(__imp__sub_8303AE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15404, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE20"))) PPC_WEAK_FUNC(sub_8303AE20);
PPC_FUNC_IMPL(__imp__sub_8303AE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15372, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE38"))) PPC_WEAK_FUNC(sub_8303AE38);
PPC_FUNC_IMPL(__imp__sub_8303AE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15340, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE50"))) PPC_WEAK_FUNC(sub_8303AE50);
PPC_FUNC_IMPL(__imp__sub_8303AE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15308, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE68"))) PPC_WEAK_FUNC(sub_8303AE68);
PPC_FUNC_IMPL(__imp__sub_8303AE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE80"))) PPC_WEAK_FUNC(sub_8303AE80);
PPC_FUNC_IMPL(__imp__sub_8303AE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15244, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AE98"))) PPC_WEAK_FUNC(sub_8303AE98);
PPC_FUNC_IMPL(__imp__sub_8303AE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEB0"))) PPC_WEAK_FUNC(sub_8303AEB0);
PPC_FUNC_IMPL(__imp__sub_8303AEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEC8"))) PPC_WEAK_FUNC(sub_8303AEC8);
PPC_FUNC_IMPL(__imp__sub_8303AEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15148, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEE0"))) PPC_WEAK_FUNC(sub_8303AEE0);
PPC_FUNC_IMPL(__imp__sub_8303AEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15116, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AEF8"))) PPC_WEAK_FUNC(sub_8303AEF8);
PPC_FUNC_IMPL(__imp__sub_8303AEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15084, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF10"))) PPC_WEAK_FUNC(sub_8303AF10);
PPC_FUNC_IMPL(__imp__sub_8303AF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15052, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF28"))) PPC_WEAK_FUNC(sub_8303AF28);
PPC_FUNC_IMPL(__imp__sub_8303AF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-15020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15020, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF40"))) PPC_WEAK_FUNC(sub_8303AF40);
PPC_FUNC_IMPL(__imp__sub_8303AF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14988, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF58"))) PPC_WEAK_FUNC(sub_8303AF58);
PPC_FUNC_IMPL(__imp__sub_8303AF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14956, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF70"))) PPC_WEAK_FUNC(sub_8303AF70);
PPC_FUNC_IMPL(__imp__sub_8303AF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AF88"))) PPC_WEAK_FUNC(sub_8303AF88);
PPC_FUNC_IMPL(__imp__sub_8303AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFA0"))) PPC_WEAK_FUNC(sub_8303AFA0);
PPC_FUNC_IMPL(__imp__sub_8303AFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14860, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFB8"))) PPC_WEAK_FUNC(sub_8303AFB8);
PPC_FUNC_IMPL(__imp__sub_8303AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14828, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFD0"))) PPC_WEAK_FUNC(sub_8303AFD0);
PPC_FUNC_IMPL(__imp__sub_8303AFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14796, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303AFE8"))) PPC_WEAK_FUNC(sub_8303AFE8);
PPC_FUNC_IMPL(__imp__sub_8303AFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14764, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B000"))) PPC_WEAK_FUNC(sub_8303B000);
PPC_FUNC_IMPL(__imp__sub_8303B000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B018"))) PPC_WEAK_FUNC(sub_8303B018);
PPC_FUNC_IMPL(__imp__sub_8303B018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14700, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B030"))) PPC_WEAK_FUNC(sub_8303B030);
PPC_FUNC_IMPL(__imp__sub_8303B030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14668, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B048"))) PPC_WEAK_FUNC(sub_8303B048);
PPC_FUNC_IMPL(__imp__sub_8303B048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14636, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B060"))) PPC_WEAK_FUNC(sub_8303B060);
PPC_FUNC_IMPL(__imp__sub_8303B060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B078"))) PPC_WEAK_FUNC(sub_8303B078);
PPC_FUNC_IMPL(__imp__sub_8303B078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14572, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B090"))) PPC_WEAK_FUNC(sub_8303B090);
PPC_FUNC_IMPL(__imp__sub_8303B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14540, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0A8"))) PPC_WEAK_FUNC(sub_8303B0A8);
PPC_FUNC_IMPL(__imp__sub_8303B0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14508, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0C0"))) PPC_WEAK_FUNC(sub_8303B0C0);
PPC_FUNC_IMPL(__imp__sub_8303B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14476, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0D8"))) PPC_WEAK_FUNC(sub_8303B0D8);
PPC_FUNC_IMPL(__imp__sub_8303B0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14444, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B0F0"))) PPC_WEAK_FUNC(sub_8303B0F0);
PPC_FUNC_IMPL(__imp__sub_8303B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B108"))) PPC_WEAK_FUNC(sub_8303B108);
PPC_FUNC_IMPL(__imp__sub_8303B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B120"))) PPC_WEAK_FUNC(sub_8303B120);
PPC_FUNC_IMPL(__imp__sub_8303B120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14348, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B138"))) PPC_WEAK_FUNC(sub_8303B138);
PPC_FUNC_IMPL(__imp__sub_8303B138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B150"))) PPC_WEAK_FUNC(sub_8303B150);
PPC_FUNC_IMPL(__imp__sub_8303B150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14284, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B168"))) PPC_WEAK_FUNC(sub_8303B168);
PPC_FUNC_IMPL(__imp__sub_8303B168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14252, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B180"))) PPC_WEAK_FUNC(sub_8303B180);
PPC_FUNC_IMPL(__imp__sub_8303B180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B198"))) PPC_WEAK_FUNC(sub_8303B198);
PPC_FUNC_IMPL(__imp__sub_8303B198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1B0"))) PPC_WEAK_FUNC(sub_8303B1B0);
PPC_FUNC_IMPL(__imp__sub_8303B1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1C8"))) PPC_WEAK_FUNC(sub_8303B1C8);
PPC_FUNC_IMPL(__imp__sub_8303B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1E0"))) PPC_WEAK_FUNC(sub_8303B1E0);
PPC_FUNC_IMPL(__imp__sub_8303B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14092, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B1F8"))) PPC_WEAK_FUNC(sub_8303B1F8);
PPC_FUNC_IMPL(__imp__sub_8303B1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14060, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B210"))) PPC_WEAK_FUNC(sub_8303B210);
PPC_FUNC_IMPL(__imp__sub_8303B210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-14028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14028, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B228"))) PPC_WEAK_FUNC(sub_8303B228);
PPC_FUNC_IMPL(__imp__sub_8303B228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13996, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B240"))) PPC_WEAK_FUNC(sub_8303B240);
PPC_FUNC_IMPL(__imp__sub_8303B240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13964, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B258"))) PPC_WEAK_FUNC(sub_8303B258);
PPC_FUNC_IMPL(__imp__sub_8303B258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B270"))) PPC_WEAK_FUNC(sub_8303B270);
PPC_FUNC_IMPL(__imp__sub_8303B270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13900, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B288"))) PPC_WEAK_FUNC(sub_8303B288);
PPC_FUNC_IMPL(__imp__sub_8303B288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13868, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B2A0"))) PPC_WEAK_FUNC(sub_8303B2A0);
PPC_FUNC_IMPL(__imp__sub_8303B2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B2B8"))) PPC_WEAK_FUNC(sub_8303B2B8);
PPC_FUNC_IMPL(__imp__sub_8303B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13804, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B2D0"))) PPC_WEAK_FUNC(sub_8303B2D0);
PPC_FUNC_IMPL(__imp__sub_8303B2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B2E8"))) PPC_WEAK_FUNC(sub_8303B2E8);
PPC_FUNC_IMPL(__imp__sub_8303B2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B300"))) PPC_WEAK_FUNC(sub_8303B300);
PPC_FUNC_IMPL(__imp__sub_8303B300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B318"))) PPC_WEAK_FUNC(sub_8303B318);
PPC_FUNC_IMPL(__imp__sub_8303B318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B330"))) PPC_WEAK_FUNC(sub_8303B330);
PPC_FUNC_IMPL(__imp__sub_8303B330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13676, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B348"))) PPC_WEAK_FUNC(sub_8303B348);
PPC_FUNC_IMPL(__imp__sub_8303B348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13608, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B360"))) PPC_WEAK_FUNC(sub_8303B360);
PPC_FUNC_IMPL(__imp__sub_8303B360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B378"))) PPC_WEAK_FUNC(sub_8303B378);
PPC_FUNC_IMPL(__imp__sub_8303B378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B390"))) PPC_WEAK_FUNC(sub_8303B390);
PPC_FUNC_IMPL(__imp__sub_8303B390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13512, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3A8"))) PPC_WEAK_FUNC(sub_8303B3A8);
PPC_FUNC_IMPL(__imp__sub_8303B3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13480, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3C0"))) PPC_WEAK_FUNC(sub_8303B3C0);
PPC_FUNC_IMPL(__imp__sub_8303B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3D8"))) PPC_WEAK_FUNC(sub_8303B3D8);
PPC_FUNC_IMPL(__imp__sub_8303B3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B3F0"))) PPC_WEAK_FUNC(sub_8303B3F0);
PPC_FUNC_IMPL(__imp__sub_8303B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B408"))) PPC_WEAK_FUNC(sub_8303B408);
PPC_FUNC_IMPL(__imp__sub_8303B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B420"))) PPC_WEAK_FUNC(sub_8303B420);
PPC_FUNC_IMPL(__imp__sub_8303B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13352, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B438"))) PPC_WEAK_FUNC(sub_8303B438);
PPC_FUNC_IMPL(__imp__sub_8303B438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13288, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B450"))) PPC_WEAK_FUNC(sub_8303B450);
PPC_FUNC_IMPL(__imp__sub_8303B450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B468"))) PPC_WEAK_FUNC(sub_8303B468);
PPC_FUNC_IMPL(__imp__sub_8303B468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B480"))) PPC_WEAK_FUNC(sub_8303B480);
PPC_FUNC_IMPL(__imp__sub_8303B480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13320, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B498"))) PPC_WEAK_FUNC(sub_8303B498);
PPC_FUNC_IMPL(__imp__sub_8303B498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13256, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B4B0"))) PPC_WEAK_FUNC(sub_8303B4B0);
PPC_FUNC_IMPL(__imp__sub_8303B4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B4C8"))) PPC_WEAK_FUNC(sub_8303B4C8);
PPC_FUNC_IMPL(__imp__sub_8303B4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13096, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B4E0"))) PPC_WEAK_FUNC(sub_8303B4E0);
PPC_FUNC_IMPL(__imp__sub_8303B4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13064, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B4F8"))) PPC_WEAK_FUNC(sub_8303B4F8);
PPC_FUNC_IMPL(__imp__sub_8303B4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12776, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B510"))) PPC_WEAK_FUNC(sub_8303B510);
PPC_FUNC_IMPL(__imp__sub_8303B510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12872, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B528"))) PPC_WEAK_FUNC(sub_8303B528);
PPC_FUNC_IMPL(__imp__sub_8303B528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12904, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B540"))) PPC_WEAK_FUNC(sub_8303B540);
PPC_FUNC_IMPL(__imp__sub_8303B540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13032, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B558"))) PPC_WEAK_FUNC(sub_8303B558);
PPC_FUNC_IMPL(__imp__sub_8303B558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12936, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B570"))) PPC_WEAK_FUNC(sub_8303B570);
PPC_FUNC_IMPL(__imp__sub_8303B570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B588"))) PPC_WEAK_FUNC(sub_8303B588);
PPC_FUNC_IMPL(__imp__sub_8303B588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12968, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5A0"))) PPC_WEAK_FUNC(sub_8303B5A0);
PPC_FUNC_IMPL(__imp__sub_8303B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-13000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13000, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5B8"))) PPC_WEAK_FUNC(sub_8303B5B8);
PPC_FUNC_IMPL(__imp__sub_8303B5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12808, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5D0"))) PPC_WEAK_FUNC(sub_8303B5D0);
PPC_FUNC_IMPL(__imp__sub_8303B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B5E8"))) PPC_WEAK_FUNC(sub_8303B5E8);
PPC_FUNC_IMPL(__imp__sub_8303B5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B600"))) PPC_WEAK_FUNC(sub_8303B600);
PPC_FUNC_IMPL(__imp__sub_8303B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12680, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B618"))) PPC_WEAK_FUNC(sub_8303B618);
PPC_FUNC_IMPL(__imp__sub_8303B618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B630"))) PPC_WEAK_FUNC(sub_8303B630);
PPC_FUNC_IMPL(__imp__sub_8303B630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12616, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B648"))) PPC_WEAK_FUNC(sub_8303B648);
PPC_FUNC_IMPL(__imp__sub_8303B648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B660"))) PPC_WEAK_FUNC(sub_8303B660);
PPC_FUNC_IMPL(__imp__sub_8303B660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B678"))) PPC_WEAK_FUNC(sub_8303B678);
PPC_FUNC_IMPL(__imp__sub_8303B678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B690"))) PPC_WEAK_FUNC(sub_8303B690);
PPC_FUNC_IMPL(__imp__sub_8303B690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6A8"))) PPC_WEAK_FUNC(sub_8303B6A8);
PPC_FUNC_IMPL(__imp__sub_8303B6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12456, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6C0"))) PPC_WEAK_FUNC(sub_8303B6C0);
PPC_FUNC_IMPL(__imp__sub_8303B6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12424, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6D8"))) PPC_WEAK_FUNC(sub_8303B6D8);
PPC_FUNC_IMPL(__imp__sub_8303B6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12392, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B6F0"))) PPC_WEAK_FUNC(sub_8303B6F0);
PPC_FUNC_IMPL(__imp__sub_8303B6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12360, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B708"))) PPC_WEAK_FUNC(sub_8303B708);
PPC_FUNC_IMPL(__imp__sub_8303B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B720"))) PPC_WEAK_FUNC(sub_8303B720);
PPC_FUNC_IMPL(__imp__sub_8303B720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B738"))) PPC_WEAK_FUNC(sub_8303B738);
PPC_FUNC_IMPL(__imp__sub_8303B738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12264, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B750"))) PPC_WEAK_FUNC(sub_8303B750);
PPC_FUNC_IMPL(__imp__sub_8303B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B768"))) PPC_WEAK_FUNC(sub_8303B768);
PPC_FUNC_IMPL(__imp__sub_8303B768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12200, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B780"))) PPC_WEAK_FUNC(sub_8303B780);
PPC_FUNC_IMPL(__imp__sub_8303B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B798"))) PPC_WEAK_FUNC(sub_8303B798);
PPC_FUNC_IMPL(__imp__sub_8303B798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7B0"))) PPC_WEAK_FUNC(sub_8303B7B0);
PPC_FUNC_IMPL(__imp__sub_8303B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7C8"))) PPC_WEAK_FUNC(sub_8303B7C8);
PPC_FUNC_IMPL(__imp__sub_8303B7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12072, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7E0"))) PPC_WEAK_FUNC(sub_8303B7E0);
PPC_FUNC_IMPL(__imp__sub_8303B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12040, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B7F8"))) PPC_WEAK_FUNC(sub_8303B7F8);
PPC_FUNC_IMPL(__imp__sub_8303B7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-12008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12008, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B810"))) PPC_WEAK_FUNC(sub_8303B810);
PPC_FUNC_IMPL(__imp__sub_8303B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-11976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11976, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8303B828"))) PPC_WEAK_FUNC(sub_8303B828);
PPC_FUNC_IMPL(__imp__sub_8303B828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// stw r11,-11944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11944, ctx.r11.u32);
	// blr 
	return;
}


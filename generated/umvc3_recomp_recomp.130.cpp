#include "umvc3_recomp_init.h"

__attribute__((alias("__imp__sub_830277B0"))) PPC_WEAK_FUNC(sub_830277B0);
PPC_FUNC_IMPL(__imp__sub_830277B0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12604
	ctx.r3.s64 = ctx.r31.s64 + -12604;
	// addi r4,r10,-20768
	ctx.r4.s64 = ctx.r10.s64 + -20768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830277EC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25512
	ctx.r11.s64 = ctx.r11.s64 + -25512;
	// addi r3,r9,19456
	ctx.r3.s64 = ctx.r9.s64 + 19456;
	// stw r11,-12604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027804;
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

__attribute__((alias("__imp__sub_83027818"))) PPC_WEAK_FUNC(sub_83027818);
PPC_FUNC_IMPL(__imp__sub_83027818) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12060
	ctx.r3.s64 = ctx.r31.s64 + -12060;
	// addi r4,r10,-20728
	ctx.r4.s64 = ctx.r10.s64 + -20728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027854;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25504
	ctx.r11.s64 = ctx.r11.s64 + -25504;
	// addi r3,r9,19480
	ctx.r3.s64 = ctx.r9.s64 + 19480;
	// stw r11,-12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302786C;
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

__attribute__((alias("__imp__sub_83027880"))) PPC_WEAK_FUNC(sub_83027880);
PPC_FUNC_IMPL(__imp__sub_83027880) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11932
	ctx.r3.s64 = ctx.r31.s64 + -11932;
	// addi r4,r10,-20688
	ctx.r4.s64 = ctx.r10.s64 + -20688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830278BC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25496
	ctx.r11.s64 = ctx.r11.s64 + -25496;
	// addi r3,r9,19504
	ctx.r3.s64 = ctx.r9.s64 + 19504;
	// stw r11,-11932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830278D4;
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

__attribute__((alias("__imp__sub_830278E8"))) PPC_WEAK_FUNC(sub_830278E8);
PPC_FUNC_IMPL(__imp__sub_830278E8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11740
	ctx.r3.s64 = ctx.r31.s64 + -11740;
	// addi r4,r10,-20648
	ctx.r4.s64 = ctx.r10.s64 + -20648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027924;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// addi r3,r9,19528
	ctx.r3.s64 = ctx.r9.s64 + 19528;
	// stw r11,-11740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302793C;
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

__attribute__((alias("__imp__sub_83027950"))) PPC_WEAK_FUNC(sub_83027950);
PPC_FUNC_IMPL(__imp__sub_83027950) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12412
	ctx.r3.s64 = ctx.r31.s64 + -12412;
	// addi r4,r10,-20608
	ctx.r4.s64 = ctx.r10.s64 + -20608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302798C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25480
	ctx.r11.s64 = ctx.r11.s64 + -25480;
	// addi r3,r9,19552
	ctx.r3.s64 = ctx.r9.s64 + 19552;
	// stw r11,-12412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830279A4;
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

__attribute__((alias("__imp__sub_830279B8"))) PPC_WEAK_FUNC(sub_830279B8);
PPC_FUNC_IMPL(__imp__sub_830279B8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12956
	ctx.r3.s64 = ctx.r31.s64 + -12956;
	// addi r4,r10,-20568
	ctx.r4.s64 = ctx.r10.s64 + -20568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830279F4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25472
	ctx.r11.s64 = ctx.r11.s64 + -25472;
	// addi r3,r9,19576
	ctx.r3.s64 = ctx.r9.s64 + 19576;
	// stw r11,-12956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12956, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027A0C;
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

__attribute__((alias("__imp__sub_83027A20"))) PPC_WEAK_FUNC(sub_83027A20);
PPC_FUNC_IMPL(__imp__sub_83027A20) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12252
	ctx.r3.s64 = ctx.r31.s64 + -12252;
	// addi r4,r10,-20528
	ctx.r4.s64 = ctx.r10.s64 + -20528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027A5C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25464
	ctx.r11.s64 = ctx.r11.s64 + -25464;
	// addi r3,r9,19600
	ctx.r3.s64 = ctx.r9.s64 + 19600;
	// stw r11,-12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027A74;
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

__attribute__((alias("__imp__sub_83027A88"))) PPC_WEAK_FUNC(sub_83027A88);
PPC_FUNC_IMPL(__imp__sub_83027A88) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12988
	ctx.r3.s64 = ctx.r31.s64 + -12988;
	// addi r4,r10,-20488
	ctx.r4.s64 = ctx.r10.s64 + -20488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027AC4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25456
	ctx.r11.s64 = ctx.r11.s64 + -25456;
	// addi r3,r9,19624
	ctx.r3.s64 = ctx.r9.s64 + 19624;
	// stw r11,-12988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12988, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027ADC;
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

__attribute__((alias("__imp__sub_83027AF0"))) PPC_WEAK_FUNC(sub_83027AF0);
PPC_FUNC_IMPL(__imp__sub_83027AF0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11644
	ctx.r3.s64 = ctx.r31.s64 + -11644;
	// addi r4,r10,-20452
	ctx.r4.s64 = ctx.r10.s64 + -20452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027B2C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25448
	ctx.r11.s64 = ctx.r11.s64 + -25448;
	// addi r3,r9,19648
	ctx.r3.s64 = ctx.r9.s64 + 19648;
	// stw r11,-11644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027B44;
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

__attribute__((alias("__imp__sub_83027B58"))) PPC_WEAK_FUNC(sub_83027B58);
PPC_FUNC_IMPL(__imp__sub_83027B58) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12636
	ctx.r3.s64 = ctx.r31.s64 + -12636;
	// addi r4,r10,-20412
	ctx.r4.s64 = ctx.r10.s64 + -20412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027B94;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25440
	ctx.r11.s64 = ctx.r11.s64 + -25440;
	// addi r3,r9,19672
	ctx.r3.s64 = ctx.r9.s64 + 19672;
	// stw r11,-12636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027BAC;
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

__attribute__((alias("__imp__sub_83027BC0"))) PPC_WEAK_FUNC(sub_83027BC0);
PPC_FUNC_IMPL(__imp__sub_83027BC0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11548
	ctx.r3.s64 = ctx.r31.s64 + -11548;
	// addi r4,r10,-20372
	ctx.r4.s64 = ctx.r10.s64 + -20372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027BFC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25432
	ctx.r11.s64 = ctx.r11.s64 + -25432;
	// addi r3,r9,19696
	ctx.r3.s64 = ctx.r9.s64 + 19696;
	// stw r11,-11548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027C14;
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

__attribute__((alias("__imp__sub_83027C28"))) PPC_WEAK_FUNC(sub_83027C28);
PPC_FUNC_IMPL(__imp__sub_83027C28) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11868
	ctx.r3.s64 = ctx.r31.s64 + -11868;
	// addi r4,r10,-20332
	ctx.r4.s64 = ctx.r10.s64 + -20332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027C64;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25424
	ctx.r11.s64 = ctx.r11.s64 + -25424;
	// addi r3,r9,19720
	ctx.r3.s64 = ctx.r9.s64 + 19720;
	// stw r11,-11868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027C7C;
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

__attribute__((alias("__imp__sub_83027C90"))) PPC_WEAK_FUNC(sub_83027C90);
PPC_FUNC_IMPL(__imp__sub_83027C90) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11708
	ctx.r3.s64 = ctx.r31.s64 + -11708;
	// addi r4,r10,-20296
	ctx.r4.s64 = ctx.r10.s64 + -20296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027CCC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25416
	ctx.r11.s64 = ctx.r11.s64 + -25416;
	// addi r3,r9,19744
	ctx.r3.s64 = ctx.r9.s64 + 19744;
	// stw r11,-11708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027CE4;
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

__attribute__((alias("__imp__sub_83027CF8"))) PPC_WEAK_FUNC(sub_83027CF8);
PPC_FUNC_IMPL(__imp__sub_83027CF8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11996
	ctx.r3.s64 = ctx.r31.s64 + -11996;
	// addi r4,r10,-20260
	ctx.r4.s64 = ctx.r10.s64 + -20260;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027D34;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25408
	ctx.r11.s64 = ctx.r11.s64 + -25408;
	// addi r3,r9,19768
	ctx.r3.s64 = ctx.r9.s64 + 19768;
	// stw r11,-11996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027D4C;
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

__attribute__((alias("__imp__sub_83027D60"))) PPC_WEAK_FUNC(sub_83027D60);
PPC_FUNC_IMPL(__imp__sub_83027D60) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12700
	ctx.r3.s64 = ctx.r31.s64 + -12700;
	// addi r4,r10,-20220
	ctx.r4.s64 = ctx.r10.s64 + -20220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027D9C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25400
	ctx.r11.s64 = ctx.r11.s64 + -25400;
	// addi r3,r9,19792
	ctx.r3.s64 = ctx.r9.s64 + 19792;
	// stw r11,-12700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027DB4;
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

__attribute__((alias("__imp__sub_83027DC8"))) PPC_WEAK_FUNC(sub_83027DC8);
PPC_FUNC_IMPL(__imp__sub_83027DC8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11612
	ctx.r3.s64 = ctx.r31.s64 + -11612;
	// addi r4,r10,-20184
	ctx.r4.s64 = ctx.r10.s64 + -20184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027E04;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25392
	ctx.r11.s64 = ctx.r11.s64 + -25392;
	// addi r3,r9,19816
	ctx.r3.s64 = ctx.r9.s64 + 19816;
	// stw r11,-11612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027E1C;
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

__attribute__((alias("__imp__sub_83027E30"))) PPC_WEAK_FUNC(sub_83027E30);
PPC_FUNC_IMPL(__imp__sub_83027E30) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11580
	ctx.r3.s64 = ctx.r31.s64 + -11580;
	// addi r4,r10,-20148
	ctx.r4.s64 = ctx.r10.s64 + -20148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027E6C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25384
	ctx.r11.s64 = ctx.r11.s64 + -25384;
	// addi r3,r9,19840
	ctx.r3.s64 = ctx.r9.s64 + 19840;
	// stw r11,-11580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027E84;
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

__attribute__((alias("__imp__sub_83027E98"))) PPC_WEAK_FUNC(sub_83027E98);
PPC_FUNC_IMPL(__imp__sub_83027E98) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12380
	ctx.r3.s64 = ctx.r31.s64 + -12380;
	// addi r4,r10,-20108
	ctx.r4.s64 = ctx.r10.s64 + -20108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027ED4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25376
	ctx.r11.s64 = ctx.r11.s64 + -25376;
	// addi r3,r9,19864
	ctx.r3.s64 = ctx.r9.s64 + 19864;
	// stw r11,-12380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027EEC;
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

__attribute__((alias("__imp__sub_83027F00"))) PPC_WEAK_FUNC(sub_83027F00);
PPC_FUNC_IMPL(__imp__sub_83027F00) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11836
	ctx.r3.s64 = ctx.r31.s64 + -11836;
	// addi r4,r10,-20068
	ctx.r4.s64 = ctx.r10.s64 + -20068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027F3C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25368
	ctx.r11.s64 = ctx.r11.s64 + -25368;
	// addi r3,r9,19888
	ctx.r3.s64 = ctx.r9.s64 + 19888;
	// stw r11,-11836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027F54;
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

__attribute__((alias("__imp__sub_83027F68"))) PPC_WEAK_FUNC(sub_83027F68);
PPC_FUNC_IMPL(__imp__sub_83027F68) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11772
	ctx.r3.s64 = ctx.r31.s64 + -11772;
	// addi r4,r10,-20032
	ctx.r4.s64 = ctx.r10.s64 + -20032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027FA4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25360
	ctx.r11.s64 = ctx.r11.s64 + -25360;
	// addi r3,r9,19912
	ctx.r3.s64 = ctx.r9.s64 + 19912;
	// stw r11,-11772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027FBC;
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

__attribute__((alias("__imp__sub_83027FD0"))) PPC_WEAK_FUNC(sub_83027FD0);
PPC_FUNC_IMPL(__imp__sub_83027FD0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12540
	ctx.r3.s64 = ctx.r31.s64 + -12540;
	// addi r4,r10,-19988
	ctx.r4.s64 = ctx.r10.s64 + -19988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302800C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25352
	ctx.r11.s64 = ctx.r11.s64 + -25352;
	// addi r3,r9,19936
	ctx.r3.s64 = ctx.r9.s64 + 19936;
	// stw r11,-12540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028024;
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

__attribute__((alias("__imp__sub_83028038"))) PPC_WEAK_FUNC(sub_83028038);
PPC_FUNC_IMPL(__imp__sub_83028038) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12924
	ctx.r3.s64 = ctx.r31.s64 + -12924;
	// addi r4,r10,-19948
	ctx.r4.s64 = ctx.r10.s64 + -19948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83028074;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25344
	ctx.r11.s64 = ctx.r11.s64 + -25344;
	// addi r3,r9,19960
	ctx.r3.s64 = ctx.r9.s64 + 19960;
	// stw r11,-12924(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12924, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302808C;
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

__attribute__((alias("__imp__sub_830280A0"))) PPC_WEAK_FUNC(sub_830280A0);
PPC_FUNC_IMPL(__imp__sub_830280A0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12572
	ctx.r3.s64 = ctx.r31.s64 + -12572;
	// addi r4,r10,-19912
	ctx.r4.s64 = ctx.r10.s64 + -19912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830280DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25336
	ctx.r11.s64 = ctx.r11.s64 + -25336;
	// addi r3,r9,19984
	ctx.r3.s64 = ctx.r9.s64 + 19984;
	// stw r11,-12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830280F4;
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

__attribute__((alias("__imp__sub_83028108"))) PPC_WEAK_FUNC(sub_83028108);
PPC_FUNC_IMPL(__imp__sub_83028108) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-11900
	ctx.r3.s64 = ctx.r31.s64 + -11900;
	// addi r4,r10,-19876
	ctx.r4.s64 = ctx.r10.s64 + -19876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83028144;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25328
	ctx.r11.s64 = ctx.r11.s64 + -25328;
	// addi r3,r9,20008
	ctx.r3.s64 = ctx.r9.s64 + 20008;
	// stw r11,-11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302815C;
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

__attribute__((alias("__imp__sub_83028170"))) PPC_WEAK_FUNC(sub_83028170);
PPC_FUNC_IMPL(__imp__sub_83028170) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12092
	ctx.r3.s64 = ctx.r31.s64 + -12092;
	// addi r4,r10,-19836
	ctx.r4.s64 = ctx.r10.s64 + -19836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830281AC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25320
	ctx.r11.s64 = ctx.r11.s64 + -25320;
	// addi r3,r9,20032
	ctx.r3.s64 = ctx.r9.s64 + 20032;
	// stw r11,-12092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830281C4;
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

__attribute__((alias("__imp__sub_830281D8"))) PPC_WEAK_FUNC(sub_830281D8);
PPC_FUNC_IMPL(__imp__sub_830281D8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12028
	ctx.r3.s64 = ctx.r31.s64 + -12028;
	// addi r4,r10,-19796
	ctx.r4.s64 = ctx.r10.s64 + -19796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83028214;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25312
	ctx.r11.s64 = ctx.r11.s64 + -25312;
	// addi r3,r9,20056
	ctx.r3.s64 = ctx.r9.s64 + 20056;
	// stw r11,-12028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302822C;
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

__attribute__((alias("__imp__sub_83028240"))) PPC_WEAK_FUNC(sub_83028240);
PPC_FUNC_IMPL(__imp__sub_83028240) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12220
	ctx.r3.s64 = ctx.r31.s64 + -12220;
	// addi r4,r10,-19756
	ctx.r4.s64 = ctx.r10.s64 + -19756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302827C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// addi r3,r9,20080
	ctx.r3.s64 = ctx.r9.s64 + 20080;
	// stw r11,-12220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028294;
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

__attribute__((alias("__imp__sub_830282A8"))) PPC_WEAK_FUNC(sub_830282A8);
PPC_FUNC_IMPL(__imp__sub_830282A8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12732
	ctx.r3.s64 = ctx.r31.s64 + -12732;
	// addi r4,r10,-19716
	ctx.r4.s64 = ctx.r10.s64 + -19716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830282E4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25296
	ctx.r11.s64 = ctx.r11.s64 + -25296;
	// addi r3,r9,20104
	ctx.r3.s64 = ctx.r9.s64 + 20104;
	// stw r11,-12732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12732, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830282FC;
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

__attribute__((alias("__imp__sub_83028310"))) PPC_WEAK_FUNC(sub_83028310);
PPC_FUNC_IMPL(__imp__sub_83028310) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// addi r3,r31,-12124
	ctx.r3.s64 = ctx.r31.s64 + -12124;
	// addi r4,r10,-19676
	ctx.r4.s64 = ctx.r10.s64 + -19676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302834C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25288
	ctx.r11.s64 = ctx.r11.s64 + -25288;
	// addi r3,r9,20128
	ctx.r3.s64 = ctx.r9.s64 + 20128;
	// stw r11,-12124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028364;
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

__attribute__((alias("__imp__sub_83028378"))) PPC_WEAK_FUNC(sub_83028378);
PPC_FUNC_IMPL(__imp__sub_83028378) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,-11452
	ctx.r3.s64 = ctx.r31.s64 + -11452;
	// addi r4,r10,-19508
	ctx.r4.s64 = ctx.r10.s64 + -19508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x830283B4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19636
	ctx.r11.s64 = ctx.r11.s64 + -19636;
	// addi r3,r9,20152
	ctx.r3.s64 = ctx.r9.s64 + 20152;
	// stw r11,-11452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830283CC;
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

__attribute__((alias("__imp__sub_830283E0"))) PPC_WEAK_FUNC(sub_830283E0);
PPC_FUNC_IMPL(__imp__sub_830283E0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-11408
	ctx.r3.s64 = ctx.r31.s64 + -11408;
	// addi r4,r10,-14800
	ctx.r4.s64 = ctx.r10.s64 + -14800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2160
	ctx.r6.s64 = 2160;
	// bl 0x82b38290
	ctx.lr = 0x8302841C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16040
	ctx.r11.s64 = ctx.r11.s64 + -16040;
	// addi r3,r9,20176
	ctx.r3.s64 = ctx.r9.s64 + 20176;
	// stw r11,-11408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028434;
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

__attribute__((alias("__imp__sub_83028448"))) PPC_WEAK_FUNC(sub_83028448);
PPC_FUNC_IMPL(__imp__sub_83028448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31989
	ctx.r11.s64 = -2096431104;
	// lis r9,-31983
	ctx.r9.s64 = -2096037888;
	// addi r8,r11,21840
	ctx.r8.s64 = ctx.r11.s64 + 21840;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,240
	ctx.r6.s64 = 240;
	// addi r5,r9,-11376
	ctx.r5.s64 = ctx.r9.s64 + -11376;
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r11,272(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 272);
	// li r3,48
	ctx.r3.s64 = 48;
	// ld r10,280(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 280);
	// lvx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)PPC_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,192(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r5)
	PPC_STORE_U64(ctx.r5.u32 + 80, ctx.r11.u64);
	// stfs f0,-11376(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -11376, temp.u32);
	// std r10,88(r5)
	PPC_STORE_U64(ctx.r5.u32 + 88, ctx.r10.u64);
	// stfs f13,32(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f12,64(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// stvx128 v63,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)PPC_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830284A8"))) PPC_WEAK_FUNC(sub_830284A8);
PPC_FUNC_IMPL(__imp__sub_830284A8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11184
	ctx.r5.s64 = ctx.r11.s64 + -11184;
	// addi r3,r31,-11280
	ctx.r3.s64 = ctx.r31.s64 + -11280;
	// addi r4,r10,-14352
	ctx.r4.s64 = ctx.r10.s64 + -14352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x830284E4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14620
	ctx.r11.s64 = ctx.r11.s64 + -14620;
	// addi r3,r9,20200
	ctx.r3.s64 = ctx.r9.s64 + 20200;
	// stw r11,-11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830284FC;
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

__attribute__((alias("__imp__sub_83028510"))) PPC_WEAK_FUNC(sub_83028510);
PPC_FUNC_IMPL(__imp__sub_83028510) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11216
	ctx.r5.s64 = ctx.r11.s64 + -11216;
	// addi r3,r31,-11248
	ctx.r3.s64 = ctx.r31.s64 + -11248;
	// addi r4,r10,-13988
	ctx.r4.s64 = ctx.r10.s64 + -13988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x8302854C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14340
	ctx.r11.s64 = ctx.r11.s64 + -14340;
	// addi r3,r9,20224
	ctx.r3.s64 = ctx.r9.s64 + 20224;
	// stw r11,-11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028564;
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

__attribute__((alias("__imp__sub_83028578"))) PPC_WEAK_FUNC(sub_83028578);
PPC_FUNC_IMPL(__imp__sub_83028578) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11452
	ctx.r5.s64 = ctx.r11.s64 + -11452;
	// addi r3,r31,-11216
	ctx.r3.s64 = ctx.r31.s64 + -11216;
	// addi r4,r10,-13480
	ctx.r4.s64 = ctx.r10.s64 + -13480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,168
	ctx.r6.s64 = 168;
	// bl 0x82b38290
	ctx.lr = 0x830285B4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13940
	ctx.r11.s64 = ctx.r11.s64 + -13940;
	// addi r3,r9,20248
	ctx.r3.s64 = ctx.r9.s64 + 20248;
	// stw r11,-11216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830285CC;
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

__attribute__((alias("__imp__sub_830285E0"))) PPC_WEAK_FUNC(sub_830285E0);
PPC_FUNC_IMPL(__imp__sub_830285E0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11216
	ctx.r5.s64 = ctx.r11.s64 + -11216;
	// addi r3,r31,-11184
	ctx.r3.s64 = ctx.r31.s64 + -11184;
	// addi r4,r10,-13244
	ctx.r4.s64 = ctx.r10.s64 + -13244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x8302861C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13464
	ctx.r11.s64 = ctx.r11.s64 + -13464;
	// addi r3,r9,20272
	ctx.r3.s64 = ctx.r9.s64 + 20272;
	// stw r11,-11184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028634;
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

__attribute__((alias("__imp__sub_83028648"))) PPC_WEAK_FUNC(sub_83028648);
PPC_FUNC_IMPL(__imp__sub_83028648) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-11152
	ctx.r3.s64 = ctx.r31.s64 + -11152;
	// addi r4,r10,-10776
	ctx.r4.s64 = ctx.r10.s64 + -10776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7624
	ctx.r6.s64 = 7624;
	// bl 0x82b38290
	ctx.lr = 0x83028684;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12588
	ctx.r11.s64 = ctx.r11.s64 + -12588;
	// addi r3,r9,20296
	ctx.r3.s64 = ctx.r9.s64 + 20296;
	// stw r11,-11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302869C;
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

__attribute__((alias("__imp__sub_830286B0"))) PPC_WEAK_FUNC(sub_830286B0);
PPC_FUNC_IMPL(__imp__sub_830286B0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11184
	ctx.r5.s64 = ctx.r11.s64 + -11184;
	// addi r3,r31,-11120
	ctx.r3.s64 = ctx.r31.s64 + -11120;
	// addi r4,r10,-10496
	ctx.r4.s64 = ctx.r10.s64 + -10496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x830286EC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10760
	ctx.r11.s64 = ctx.r11.s64 + -10760;
	// addi r3,r9,20320
	ctx.r3.s64 = ctx.r9.s64 + 20320;
	// stw r11,-11120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028704;
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

__attribute__((alias("__imp__sub_83028718"))) PPC_WEAK_FUNC(sub_83028718);
PPC_FUNC_IMPL(__imp__sub_83028718) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11184
	ctx.r5.s64 = ctx.r11.s64 + -11184;
	// addi r3,r31,-11088
	ctx.r3.s64 = ctx.r31.s64 + -11088;
	// addi r4,r10,-10148
	ctx.r4.s64 = ctx.r10.s64 + -10148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x83028754;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10480
	ctx.r11.s64 = ctx.r11.s64 + -10480;
	// addi r3,r9,20344
	ctx.r3.s64 = ctx.r9.s64 + 20344;
	// stw r11,-11088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302876C;
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

__attribute__((alias("__imp__sub_83028780"))) PPC_WEAK_FUNC(sub_83028780);
PPC_FUNC_IMPL(__imp__sub_83028780) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-11056
	ctx.r3.s64 = ctx.r31.s64 + -11056;
	// addi r4,r10,-10136
	ctx.r4.s64 = ctx.r10.s64 + -10136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x830287BC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10472
	ctx.r11.s64 = ctx.r11.s64 + -10472;
	// addi r3,r9,20368
	ctx.r3.s64 = ctx.r9.s64 + 20368;
	// stw r11,-11056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830287D4;
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

__attribute__((alias("__imp__sub_830287E8"))) PPC_WEAK_FUNC(sub_830287E8);
PPC_FUNC_IMPL(__imp__sub_830287E8) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,-11024
	ctx.r3.s64 = ctx.r31.s64 + -11024;
	// addi r4,r10,-9984
	ctx.r4.s64 = ctx.r10.s64 + -9984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,13256
	ctx.r6.s64 = 13256;
	// bl 0x82b38290
	ctx.lr = 0x83028824;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10080
	ctx.r11.s64 = ctx.r11.s64 + -10080;
	// addi r3,r9,20392
	ctx.r3.s64 = ctx.r9.s64 + 20392;
	// stw r11,-11024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302883C;
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

__attribute__((alias("__imp__sub_83028850"))) PPC_WEAK_FUNC(sub_83028850);
PPC_FUNC_IMPL(__imp__sub_83028850) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,-10992
	ctx.r3.s64 = ctx.r31.s64 + -10992;
	// addi r4,r10,-8812
	ctx.r4.s64 = ctx.r10.s64 + -8812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302888C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9136
	ctx.r11.s64 = ctx.r11.s64 + -9136;
	// addi r3,r9,20416
	ctx.r3.s64 = ctx.r9.s64 + 20416;
	// stw r11,-10992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830288A4;
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

__attribute__((alias("__imp__sub_830288B8"))) PPC_WEAK_FUNC(sub_830288B8);
PPC_FUNC_IMPL(__imp__sub_830288B8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-11452
	ctx.r5.s64 = ctx.r11.s64 + -11452;
	// addi r3,r31,-10960
	ctx.r3.s64 = ctx.r31.s64 + -10960;
	// addi r4,r10,-8692
	ctx.r4.s64 = ctx.r10.s64 + -8692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x830288F4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8796
	ctx.r11.s64 = ctx.r11.s64 + -8796;
	// addi r3,r9,20440
	ctx.r3.s64 = ctx.r9.s64 + 20440;
	// stw r11,-10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302890C;
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

__attribute__((alias("__imp__sub_83028920"))) PPC_WEAK_FUNC(sub_83028920);
PPC_FUNC_IMPL(__imp__sub_83028920) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4264
	ctx.r5.s64 = ctx.r11.s64 + -4264;
	// addi r3,r31,-10928
	ctx.r3.s64 = ctx.r31.s64 + -10928;
	// addi r4,r10,-8380
	ctx.r4.s64 = ctx.r10.s64 + -8380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x8302895C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8680
	ctx.r11.s64 = ctx.r11.s64 + -8680;
	// addi r3,r9,20464
	ctx.r3.s64 = ctx.r9.s64 + 20464;
	// stw r11,-10928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028974;
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

__attribute__((alias("__imp__sub_83028988"))) PPC_WEAK_FUNC(sub_83028988);
PPC_FUNC_IMPL(__imp__sub_83028988) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,15320
	ctx.r5.s64 = ctx.r11.s64 + 15320;
	// addi r3,r31,-10896
	ctx.r3.s64 = ctx.r31.s64 + -10896;
	// addi r4,r10,-8252
	ctx.r4.s64 = ctx.r10.s64 + -8252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x830289C4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8368
	ctx.r11.s64 = ctx.r11.s64 + -8368;
	// addi r3,r9,20488
	ctx.r3.s64 = ctx.r9.s64 + 20488;
	// stw r11,-10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830289DC;
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

__attribute__((alias("__imp__sub_830289F0"))) PPC_WEAK_FUNC(sub_830289F0);
PPC_FUNC_IMPL(__imp__sub_830289F0) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,-10864
	ctx.r3.s64 = ctx.r31.s64 + -10864;
	// addi r4,r10,-8032
	ctx.r4.s64 = ctx.r10.s64 + -8032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3456
	ctx.r6.s64 = 3456;
	// bl 0x82b38290
	ctx.lr = 0x83028A2C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8236
	ctx.r11.s64 = ctx.r11.s64 + -8236;
	// addi r3,r9,20512
	ctx.r3.s64 = ctx.r9.s64 + 20512;
	// stw r11,-10864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028A44;
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

__attribute__((alias("__imp__sub_83028A58"))) PPC_WEAK_FUNC(sub_83028A58);
PPC_FUNC_IMPL(__imp__sub_83028A58) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-9484
	ctx.r5.s64 = ctx.r11.s64 + -9484;
	// addi r3,r31,-10832
	ctx.r3.s64 = ctx.r31.s64 + -10832;
	// addi r4,r10,-7944
	ctx.r4.s64 = ctx.r10.s64 + -7944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83028A94;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8020
	ctx.r11.s64 = ctx.r11.s64 + -8020;
	// addi r3,r9,20536
	ctx.r3.s64 = ctx.r9.s64 + 20536;
	// stw r11,-10832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028AAC;
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

__attribute__((alias("__imp__sub_83028AC0"))) PPC_WEAK_FUNC(sub_83028AC0);
PPC_FUNC_IMPL(__imp__sub_83028AC0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-10800
	ctx.r3.s64 = ctx.r31.s64 + -10800;
	// addi r4,r10,-7836
	ctx.r4.s64 = ctx.r10.s64 + -7836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83028AFC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7932
	ctx.r11.s64 = ctx.r11.s64 + -7932;
	// addi r3,r9,20560
	ctx.r3.s64 = ctx.r9.s64 + 20560;
	// stw r11,-10800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028B14;
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

__attribute__((alias("__imp__sub_83028B28"))) PPC_WEAK_FUNC(sub_83028B28);
PPC_FUNC_IMPL(__imp__sub_83028B28) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10768
	ctx.r3.s64 = ctx.r31.s64 + -10768;
	// addi r4,r10,-7352
	ctx.r4.s64 = ctx.r10.s64 + -7352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x83028B64;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7820
	ctx.r11.s64 = ctx.r11.s64 + -7820;
	// addi r3,r9,20584
	ctx.r3.s64 = ctx.r9.s64 + 20584;
	// stw r11,-10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028B7C;
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

__attribute__((alias("__imp__sub_83028B90"))) PPC_WEAK_FUNC(sub_83028B90);
PPC_FUNC_IMPL(__imp__sub_83028B90) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,-10736
	ctx.r3.s64 = ctx.r31.s64 + -10736;
	// addi r4,r10,-6896
	ctx.r4.s64 = ctx.r10.s64 + -6896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,344
	ctx.r6.s64 = 344;
	// bl 0x82b38290
	ctx.lr = 0x83028BCC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7048
	ctx.r11.s64 = ctx.r11.s64 + -7048;
	// addi r3,r9,20608
	ctx.r3.s64 = ctx.r9.s64 + 20608;
	// stw r11,-10736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028BE4;
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

__attribute__((alias("__imp__sub_83028BF8"))) PPC_WEAK_FUNC(sub_83028BF8);
PPC_FUNC_IMPL(__imp__sub_83028BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// addi r8,r9,-25556
	ctx.r8.s64 = ctx.r9.s64 + -25556;
	// lfs f0,-25620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,27260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27260);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83028C38"))) PPC_WEAK_FUNC(sub_83028C38);
PPC_FUNC_IMPL(__imp__sub_83028C38) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-10700
	ctx.r3.s64 = ctx.r31.s64 + -10700;
	// addi r4,r10,-1328
	ctx.r4.s64 = ctx.r10.s64 + -1328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12624
	ctx.r6.s64 = 12624;
	// bl 0x82b38290
	ctx.lr = 0x83028C74;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2088
	ctx.r11.s64 = ctx.r11.s64 + -2088;
	// addi r3,r9,20632
	ctx.r3.s64 = ctx.r9.s64 + 20632;
	// stw r11,-10700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028C8C;
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

__attribute__((alias("__imp__sub_83028CA0"))) PPC_WEAK_FUNC(sub_83028CA0);
PPC_FUNC_IMPL(__imp__sub_83028CA0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-10668
	ctx.r3.s64 = ctx.r31.s64 + -10668;
	// addi r4,r10,-508
	ctx.r4.s64 = ctx.r10.s64 + -508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2752
	ctx.r6.s64 = 2752;
	// bl 0x82b38290
	ctx.lr = 0x83028CDC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1236
	ctx.r11.s64 = ctx.r11.s64 + -1236;
	// addi r3,r9,20656
	ctx.r3.s64 = ctx.r9.s64 + 20656;
	// stw r11,-10668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028CF4;
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

__attribute__((alias("__imp__sub_83028D08"))) PPC_WEAK_FUNC(sub_83028D08);
PPC_FUNC_IMPL(__imp__sub_83028D08) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,15032
	ctx.r5.s64 = ctx.r11.s64 + 15032;
	// addi r3,r31,-10636
	ctx.r3.s64 = ctx.r31.s64 + -10636;
	// addi r4,r10,-272
	ctx.r4.s64 = ctx.r10.s64 + -272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x83028D44;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-492
	ctx.r11.s64 = ctx.r11.s64 + -492;
	// addi r3,r9,20680
	ctx.r3.s64 = ctx.r9.s64 + 20680;
	// stw r11,-10636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028D5C;
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

__attribute__((alias("__imp__sub_83028D70"))) PPC_WEAK_FUNC(sub_83028D70);
PPC_FUNC_IMPL(__imp__sub_83028D70) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-10604
	ctx.r3.s64 = ctx.r31.s64 + -10604;
	// addi r4,r10,-176
	ctx.r4.s64 = ctx.r10.s64 + -176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83028DAC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-248
	ctx.r11.s64 = ctx.r11.s64 + -248;
	// addi r3,r9,20704
	ctx.r3.s64 = ctx.r9.s64 + 20704;
	// stw r11,-10604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028DC4;
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

__attribute__((alias("__imp__sub_83028DD8"))) PPC_WEAK_FUNC(sub_83028DD8);
PPC_FUNC_IMPL(__imp__sub_83028DD8) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14936
	ctx.r5.s64 = ctx.r11.s64 + 14936;
	// addi r3,r31,-10572
	ctx.r3.s64 = ctx.r31.s64 + -10572;
	// addi r4,r10,-28
	ctx.r4.s64 = ctx.r10.s64 + -28;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3488
	ctx.r6.s64 = 3488;
	// bl 0x82b38290
	ctx.lr = 0x83028E14;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// addi r3,r9,20728
	ctx.r3.s64 = ctx.r9.s64 + 20728;
	// stw r11,-10572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028E2C;
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

__attribute__((alias("__imp__sub_83028E40"))) PPC_WEAK_FUNC(sub_83028E40);
PPC_FUNC_IMPL(__imp__sub_83028E40) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,-10540
	ctx.r3.s64 = ctx.r31.s64 + -10540;
	// addi r4,r10,208
	ctx.r4.s64 = ctx.r10.s64 + 208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3648
	ctx.r6.s64 = 3648;
	// bl 0x82b38290
	ctx.lr = 0x83028E7C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r3,r9,20752
	ctx.r3.s64 = ctx.r9.s64 + 20752;
	// stw r11,-10540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028E94;
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

__attribute__((alias("__imp__sub_83028EA8"))) PPC_WEAK_FUNC(sub_83028EA8);
PPC_FUNC_IMPL(__imp__sub_83028EA8) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,-10508
	ctx.r3.s64 = ctx.r31.s64 + -10508;
	// addi r4,r10,448
	ctx.r4.s64 = ctx.r10.s64 + 448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3456
	ctx.r6.s64 = 3456;
	// bl 0x82b38290
	ctx.lr = 0x83028EE4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// addi r3,r9,20776
	ctx.r3.s64 = ctx.r9.s64 + 20776;
	// stw r11,-10508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028EFC;
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

__attribute__((alias("__imp__sub_83028F10"))) PPC_WEAK_FUNC(sub_83028F10);
PPC_FUNC_IMPL(__imp__sub_83028F10) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,-10476
	ctx.r3.s64 = ctx.r31.s64 + -10476;
	// addi r4,r10,616
	ctx.r4.s64 = ctx.r10.s64 + 616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3488
	ctx.r6.s64 = 3488;
	// bl 0x82b38290
	ctx.lr = 0x83028F4C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,460
	ctx.r11.s64 = ctx.r11.s64 + 460;
	// addi r3,r9,20800
	ctx.r3.s64 = ctx.r9.s64 + 20800;
	// stw r11,-10476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028F64;
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

__attribute__((alias("__imp__sub_83028F78"))) PPC_WEAK_FUNC(sub_83028F78);
PPC_FUNC_IMPL(__imp__sub_83028F78) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10444
	ctx.r3.s64 = ctx.r31.s64 + -10444;
	// addi r4,r10,940
	ctx.r4.s64 = ctx.r10.s64 + 940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x83028FB4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,652
	ctx.r11.s64 = ctx.r11.s64 + 652;
	// addi r3,r9,20824
	ctx.r3.s64 = ctx.r9.s64 + 20824;
	// stw r11,-10444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83028FCC;
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

__attribute__((alias("__imp__sub_83028FE0"))) PPC_WEAK_FUNC(sub_83028FE0);
PPC_FUNC_IMPL(__imp__sub_83028FE0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10380
	ctx.r3.s64 = ctx.r31.s64 + -10380;
	// addi r4,r10,1852
	ctx.r4.s64 = ctx.r10.s64 + 1852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9800
	ctx.r6.s64 = 9800;
	// bl 0x82b38290
	ctx.lr = 0x8302901C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1004
	ctx.r11.s64 = ctx.r11.s64 + 1004;
	// addi r3,r9,20848
	ctx.r3.s64 = ctx.r9.s64 + 20848;
	// stw r11,-10380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029034;
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

__attribute__((alias("__imp__sub_83029048"))) PPC_WEAK_FUNC(sub_83029048);
PPC_FUNC_IMPL(__imp__sub_83029048) {
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
	// addi r3,r31,-10412
	ctx.r3.s64 = ctx.r31.s64 + -10412;
	// addi r4,r10,-30072
	ctx.r4.s64 = ctx.r10.s64 + -30072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83029084;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1012
	ctx.r11.s64 = ctx.r11.s64 + 1012;
	// addi r3,r9,20872
	ctx.r3.s64 = ctx.r9.s64 + 20872;
	// stw r11,-10412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302909C;
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

__attribute__((alias("__imp__sub_830290B0"))) PPC_WEAK_FUNC(sub_830290B0);
PPC_FUNC_IMPL(__imp__sub_830290B0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10348
	ctx.r3.s64 = ctx.r31.s64 + -10348;
	// addi r4,r10,6940
	ctx.r4.s64 = ctx.r10.s64 + 6940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x830290EC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6804
	ctx.r11.s64 = ctx.r11.s64 + 6804;
	// addi r3,r9,20896
	ctx.r3.s64 = ctx.r9.s64 + 20896;
	// stw r11,-10348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029104;
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

__attribute__((alias("__imp__sub_83029118"))) PPC_WEAK_FUNC(sub_83029118);
PPC_FUNC_IMPL(__imp__sub_83029118) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10316
	ctx.r3.s64 = ctx.r31.s64 + -10316;
	// addi r4,r10,11884
	ctx.r4.s64 = ctx.r10.s64 + 11884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3480
	ctx.r6.s64 = 3480;
	// bl 0x82b38290
	ctx.lr = 0x83029154;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6960
	ctx.r11.s64 = ctx.r11.s64 + 6960;
	// addi r3,r9,20920
	ctx.r3.s64 = ctx.r9.s64 + 20920;
	// stw r11,-10316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302916C;
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

__attribute__((alias("__imp__sub_83029180"))) PPC_WEAK_FUNC(sub_83029180);
PPC_FUNC_IMPL(__imp__sub_83029180) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10284
	ctx.r3.s64 = ctx.r31.s64 + -10284;
	// addi r4,r10,12116
	ctx.r4.s64 = ctx.r10.s64 + 12116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x830291BC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11904
	ctx.r11.s64 = ctx.r11.s64 + 11904;
	// addi r3,r9,20944
	ctx.r3.s64 = ctx.r9.s64 + 20944;
	// stw r11,-10284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830291D4;
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

__attribute__((alias("__imp__sub_830291E8"))) PPC_WEAK_FUNC(sub_830291E8);
PPC_FUNC_IMPL(__imp__sub_830291E8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10252
	ctx.r3.s64 = ctx.r31.s64 + -10252;
	// addi r4,r10,12356
	ctx.r4.s64 = ctx.r10.s64 + 12356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// bl 0x82b38290
	ctx.lr = 0x83029224;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12164
	ctx.r11.s64 = ctx.r11.s64 + 12164;
	// addi r3,r9,20968
	ctx.r3.s64 = ctx.r9.s64 + 20968;
	// stw r11,-10252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302923C;
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

__attribute__((alias("__imp__sub_83029250"))) PPC_WEAK_FUNC(sub_83029250);
PPC_FUNC_IMPL(__imp__sub_83029250) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10220
	ctx.r3.s64 = ctx.r31.s64 + -10220;
	// addi r4,r10,12724
	ctx.r4.s64 = ctx.r10.s64 + 12724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x8302928C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12552
	ctx.r11.s64 = ctx.r11.s64 + 12552;
	// addi r3,r9,20992
	ctx.r3.s64 = ctx.r9.s64 + 20992;
	// stw r11,-10220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830292A4;
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

__attribute__((alias("__imp__sub_830292B8"))) PPC_WEAK_FUNC(sub_830292B8);
PPC_FUNC_IMPL(__imp__sub_830292B8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10188
	ctx.r3.s64 = ctx.r31.s64 + -10188;
	// addi r4,r10,16016
	ctx.r4.s64 = ctx.r10.s64 + 16016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3632
	ctx.r6.s64 = 3632;
	// bl 0x82b38290
	ctx.lr = 0x830292F4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13060
	ctx.r11.s64 = ctx.r11.s64 + 13060;
	// addi r3,r9,21016
	ctx.r3.s64 = ctx.r9.s64 + 21016;
	// stw r11,-10188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302930C;
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

__attribute__((alias("__imp__sub_83029320"))) PPC_WEAK_FUNC(sub_83029320);
PPC_FUNC_IMPL(__imp__sub_83029320) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10156
	ctx.r3.s64 = ctx.r31.s64 + -10156;
	// addi r4,r10,16400
	ctx.r4.s64 = ctx.r10.s64 + 16400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x8302935C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16096
	ctx.r11.s64 = ctx.r11.s64 + 16096;
	// addi r3,r9,21040
	ctx.r3.s64 = ctx.r9.s64 + 21040;
	// stw r11,-10156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029374;
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

__attribute__((alias("__imp__sub_83029388"))) PPC_WEAK_FUNC(sub_83029388);
PPC_FUNC_IMPL(__imp__sub_83029388) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10124
	ctx.r3.s64 = ctx.r31.s64 + -10124;
	// addi r4,r10,17636
	ctx.r4.s64 = ctx.r10.s64 + 17636;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1160
	ctx.r6.s64 = 1160;
	// bl 0x82b38290
	ctx.lr = 0x830293C4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16736
	ctx.r11.s64 = ctx.r11.s64 + 16736;
	// addi r3,r9,21064
	ctx.r3.s64 = ctx.r9.s64 + 21064;
	// stw r11,-10124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830293DC;
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

__attribute__((alias("__imp__sub_830293F0"))) PPC_WEAK_FUNC(sub_830293F0);
PPC_FUNC_IMPL(__imp__sub_830293F0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10092
	ctx.r3.s64 = ctx.r31.s64 + -10092;
	// addi r4,r10,18000
	ctx.r4.s64 = ctx.r10.s64 + 18000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x8302942C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17832
	ctx.r11.s64 = ctx.r11.s64 + 17832;
	// addi r3,r9,21088
	ctx.r3.s64 = ctx.r9.s64 + 21088;
	// stw r11,-10092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029444;
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

__attribute__((alias("__imp__sub_83029458"))) PPC_WEAK_FUNC(sub_83029458);
PPC_FUNC_IMPL(__imp__sub_83029458) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10060
	ctx.r3.s64 = ctx.r31.s64 + -10060;
	// addi r4,r10,18292
	ctx.r4.s64 = ctx.r10.s64 + 18292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82b38290
	ctx.lr = 0x83029494;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18056
	ctx.r11.s64 = ctx.r11.s64 + 18056;
	// addi r3,r9,21112
	ctx.r3.s64 = ctx.r9.s64 + 21112;
	// stw r11,-10060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830294AC;
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

__attribute__((alias("__imp__sub_830294C0"))) PPC_WEAK_FUNC(sub_830294C0);
PPC_FUNC_IMPL(__imp__sub_830294C0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-10028
	ctx.r3.s64 = ctx.r31.s64 + -10028;
	// addi r4,r10,18900
	ctx.r4.s64 = ctx.r10.s64 + 18900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,464
	ctx.r6.s64 = 464;
	// bl 0x82b38290
	ctx.lr = 0x830294FC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18308
	ctx.r11.s64 = ctx.r11.s64 + 18308;
	// addi r3,r9,21136
	ctx.r3.s64 = ctx.r9.s64 + 21136;
	// stw r11,-10028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -10028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029514;
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

__attribute__((alias("__imp__sub_83029528"))) PPC_WEAK_FUNC(sub_83029528);
PPC_FUNC_IMPL(__imp__sub_83029528) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9996
	ctx.r3.s64 = ctx.r31.s64 + -9996;
	// addi r4,r10,19744
	ctx.r4.s64 = ctx.r10.s64 + 19744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,416
	ctx.r6.s64 = 416;
	// bl 0x82b38290
	ctx.lr = 0x83029564;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19436
	ctx.r11.s64 = ctx.r11.s64 + 19436;
	// addi r3,r9,21160
	ctx.r3.s64 = ctx.r9.s64 + 21160;
	// stw r11,-9996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302957C;
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

__attribute__((alias("__imp__sub_83029590"))) PPC_WEAK_FUNC(sub_83029590);
PPC_FUNC_IMPL(__imp__sub_83029590) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9964
	ctx.r3.s64 = ctx.r31.s64 + -9964;
	// addi r4,r10,20052
	ctx.r4.s64 = ctx.r10.s64 + 20052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x830295CC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19768
	ctx.r11.s64 = ctx.r11.s64 + 19768;
	// addi r3,r9,21184
	ctx.r3.s64 = ctx.r9.s64 + 21184;
	// stw r11,-9964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830295E4;
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

__attribute__((alias("__imp__sub_830295F8"))) PPC_WEAK_FUNC(sub_830295F8);
PPC_FUNC_IMPL(__imp__sub_830295F8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9932
	ctx.r3.s64 = ctx.r31.s64 + -9932;
	// addi r4,r10,20316
	ctx.r4.s64 = ctx.r10.s64 + 20316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x83029634;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20072
	ctx.r11.s64 = ctx.r11.s64 + 20072;
	// addi r3,r9,21208
	ctx.r3.s64 = ctx.r9.s64 + 21208;
	// stw r11,-9932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302964C;
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

__attribute__((alias("__imp__sub_83029660"))) PPC_WEAK_FUNC(sub_83029660);
PPC_FUNC_IMPL(__imp__sub_83029660) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9900
	ctx.r3.s64 = ctx.r31.s64 + -9900;
	// addi r4,r10,20996
	ctx.r4.s64 = ctx.r10.s64 + 20996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x8302969C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20340
	ctx.r11.s64 = ctx.r11.s64 + 20340;
	// addi r3,r9,21232
	ctx.r3.s64 = ctx.r9.s64 + 21232;
	// stw r11,-9900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830296B4;
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

__attribute__((alias("__imp__sub_830296C8"))) PPC_WEAK_FUNC(sub_830296C8);
PPC_FUNC_IMPL(__imp__sub_830296C8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9868
	ctx.r3.s64 = ctx.r31.s64 + -9868;
	// addi r4,r10,21196
	ctx.r4.s64 = ctx.r10.s64 + 21196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,184
	ctx.r6.s64 = 184;
	// bl 0x82b38290
	ctx.lr = 0x83029704;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21016
	ctx.r11.s64 = ctx.r11.s64 + 21016;
	// addi r3,r9,21256
	ctx.r3.s64 = ctx.r9.s64 + 21256;
	// stw r11,-9868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302971C;
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

__attribute__((alias("__imp__sub_83029730"))) PPC_WEAK_FUNC(sub_83029730);
PPC_FUNC_IMPL(__imp__sub_83029730) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-9836
	ctx.r3.s64 = ctx.r31.s64 + -9836;
	// addi r4,r10,21532
	ctx.r4.s64 = ctx.r10.s64 + 21532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1128
	ctx.r6.s64 = 1128;
	// bl 0x82b38290
	ctx.lr = 0x8302976C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21304
	ctx.r11.s64 = ctx.r11.s64 + 21304;
	// addi r3,r9,21280
	ctx.r3.s64 = ctx.r9.s64 + 21280;
	// stw r11,-9836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029784;
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

__attribute__((alias("__imp__sub_83029798"))) PPC_WEAK_FUNC(sub_83029798);
PPC_FUNC_IMPL(__imp__sub_83029798) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-9804
	ctx.r3.s64 = ctx.r31.s64 + -9804;
	// addi r4,r10,21736
	ctx.r4.s64 = ctx.r10.s64 + 21736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x830297D4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21552
	ctx.r11.s64 = ctx.r11.s64 + 21552;
	// addi r3,r9,21304
	ctx.r3.s64 = ctx.r9.s64 + 21304;
	// stw r11,-9804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830297EC;
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

__attribute__((alias("__imp__sub_83029800"))) PPC_WEAK_FUNC(sub_83029800);
PPC_FUNC_IMPL(__imp__sub_83029800) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-9772
	ctx.r3.s64 = ctx.r31.s64 + -9772;
	// addi r4,r10,21940
	ctx.r4.s64 = ctx.r10.s64 + 21940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302983C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21752
	ctx.r11.s64 = ctx.r11.s64 + 21752;
	// addi r3,r9,21328
	ctx.r3.s64 = ctx.r9.s64 + 21328;
	// stw r11,-9772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029854;
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

__attribute__((alias("__imp__sub_83029868"))) PPC_WEAK_FUNC(sub_83029868);
PPC_FUNC_IMPL(__imp__sub_83029868) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6032
	ctx.r5.s64 = ctx.r11.s64 + -6032;
	// addi r3,r31,-9740
	ctx.r3.s64 = ctx.r31.s64 + -9740;
	// addi r4,r10,22060
	ctx.r4.s64 = ctx.r10.s64 + 22060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x830298A4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// addi r3,r9,21352
	ctx.r3.s64 = ctx.r9.s64 + 21352;
	// stw r11,-9740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830298BC;
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

__attribute__((alias("__imp__sub_830298D0"))) PPC_WEAK_FUNC(sub_830298D0);
PPC_FUNC_IMPL(__imp__sub_830298D0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-9708
	ctx.r3.s64 = ctx.r31.s64 + -9708;
	// addi r4,r10,22252
	ctx.r4.s64 = ctx.r10.s64 + 22252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302990C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22076
	ctx.r11.s64 = ctx.r11.s64 + 22076;
	// addi r3,r9,21376
	ctx.r3.s64 = ctx.r9.s64 + 21376;
	// stw r11,-9708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029924;
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

__attribute__((alias("__imp__sub_83029938"))) PPC_WEAK_FUNC(sub_83029938);
PPC_FUNC_IMPL(__imp__sub_83029938) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9676
	ctx.r3.s64 = ctx.r31.s64 + -9676;
	// addi r4,r10,22512
	ctx.r4.s64 = ctx.r10.s64 + 22512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// bl 0x82b38290
	ctx.lr = 0x83029974;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22264
	ctx.r11.s64 = ctx.r11.s64 + 22264;
	// addi r3,r9,21400
	ctx.r3.s64 = ctx.r9.s64 + 21400;
	// stw r11,-9676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302998C;
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

__attribute__((alias("__imp__sub_830299A0"))) PPC_WEAK_FUNC(sub_830299A0);
PPC_FUNC_IMPL(__imp__sub_830299A0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-9356
	ctx.r5.s64 = ctx.r11.s64 + -9356;
	// addi r3,r31,-9644
	ctx.r3.s64 = ctx.r31.s64 + -9644;
	// addi r4,r10,22520
	ctx.r4.s64 = ctx.r10.s64 + 22520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x830299DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22272
	ctx.r11.s64 = ctx.r11.s64 + 22272;
	// addi r3,r9,21424
	ctx.r3.s64 = ctx.r9.s64 + 21424;
	// stw r11,-9644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830299F4;
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

__attribute__((alias("__imp__sub_83029A08"))) PPC_WEAK_FUNC(sub_83029A08);
PPC_FUNC_IMPL(__imp__sub_83029A08) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9612
	ctx.r3.s64 = ctx.r31.s64 + -9612;
	// addi r4,r10,22616
	ctx.r4.s64 = ctx.r10.s64 + 22616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83029A44;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22540
	ctx.r11.s64 = ctx.r11.s64 + 22540;
	// addi r3,r9,21448
	ctx.r3.s64 = ctx.r9.s64 + 21448;
	// stw r11,-9612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029A5C;
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

__attribute__((alias("__imp__sub_83029A70"))) PPC_WEAK_FUNC(sub_83029A70);
PPC_FUNC_IMPL(__imp__sub_83029A70) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-9580
	ctx.r3.s64 = ctx.r31.s64 + -9580;
	// addi r4,r10,22760
	ctx.r4.s64 = ctx.r10.s64 + 22760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83029AAC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22636
	ctx.r11.s64 = ctx.r11.s64 + 22636;
	// addi r3,r9,21472
	ctx.r3.s64 = ctx.r9.s64 + 21472;
	// stw r11,-9580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029AC4;
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

__attribute__((alias("__imp__sub_83029AD8"))) PPC_WEAK_FUNC(sub_83029AD8);
PPC_FUNC_IMPL(__imp__sub_83029AD8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9548
	ctx.r3.s64 = ctx.r31.s64 + -9548;
	// addi r4,r10,22888
	ctx.r4.s64 = ctx.r10.s64 + 22888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,368
	ctx.r6.s64 = 368;
	// bl 0x82b38290
	ctx.lr = 0x83029B14;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22780
	ctx.r11.s64 = ctx.r11.s64 + 22780;
	// addi r3,r9,21496
	ctx.r3.s64 = ctx.r9.s64 + 21496;
	// stw r11,-9548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029B2C;
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

__attribute__((alias("__imp__sub_83029B40"))) PPC_WEAK_FUNC(sub_83029B40);
PPC_FUNC_IMPL(__imp__sub_83029B40) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5360
	ctx.r5.s64 = ctx.r11.s64 + -5360;
	// addi r3,r31,-9516
	ctx.r3.s64 = ctx.r31.s64 + -9516;
	// addi r4,r10,22972
	ctx.r4.s64 = ctx.r10.s64 + 22972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83029B7C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22896
	ctx.r11.s64 = ctx.r11.s64 + 22896;
	// addi r3,r9,21520
	ctx.r3.s64 = ctx.r9.s64 + 21520;
	// stw r11,-9516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029B94;
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

__attribute__((alias("__imp__sub_83029BA8"))) PPC_WEAK_FUNC(sub_83029BA8);
PPC_FUNC_IMPL(__imp__sub_83029BA8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-9484
	ctx.r3.s64 = ctx.r31.s64 + -9484;
	// addi r4,r10,23116
	ctx.r4.s64 = ctx.r10.s64 + 23116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83029BE4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22988
	ctx.r11.s64 = ctx.r11.s64 + 22988;
	// addi r3,r9,21544
	ctx.r3.s64 = ctx.r9.s64 + 21544;
	// stw r11,-9484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029BFC;
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

__attribute__((alias("__imp__sub_83029C10"))) PPC_WEAK_FUNC(sub_83029C10);
PPC_FUNC_IMPL(__imp__sub_83029C10) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9452
	ctx.r3.s64 = ctx.r31.s64 + -9452;
	// addi r4,r10,23280
	ctx.r4.s64 = ctx.r10.s64 + 23280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83029C4C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23132
	ctx.r11.s64 = ctx.r11.s64 + 23132;
	// addi r3,r9,21568
	ctx.r3.s64 = ctx.r9.s64 + 21568;
	// stw r11,-9452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029C64;
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

__attribute__((alias("__imp__sub_83029C78"))) PPC_WEAK_FUNC(sub_83029C78);
PPC_FUNC_IMPL(__imp__sub_83029C78) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-9420
	ctx.r3.s64 = ctx.r31.s64 + -9420;
	// addi r4,r10,23516
	ctx.r4.s64 = ctx.r10.s64 + 23516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83029CB4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23292
	ctx.r11.s64 = ctx.r11.s64 + 23292;
	// addi r3,r9,21592
	ctx.r3.s64 = ctx.r9.s64 + 21592;
	// stw r11,-9420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029CCC;
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

__attribute__((alias("__imp__sub_83029CE0"))) PPC_WEAK_FUNC(sub_83029CE0);
PPC_FUNC_IMPL(__imp__sub_83029CE0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7320
	ctx.r5.s64 = ctx.r11.s64 + -7320;
	// addi r3,r31,-9388
	ctx.r3.s64 = ctx.r31.s64 + -9388;
	// addi r4,r10,23552
	ctx.r4.s64 = ctx.r10.s64 + 23552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1592
	ctx.r6.s64 = 1592;
	// bl 0x82b38290
	ctx.lr = 0x83029D1C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23300
	ctx.r11.s64 = ctx.r11.s64 + 23300;
	// addi r3,r9,21616
	ctx.r3.s64 = ctx.r9.s64 + 21616;
	// stw r11,-9388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029D34;
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

__attribute__((alias("__imp__sub_83029D48"))) PPC_WEAK_FUNC(sub_83029D48);
PPC_FUNC_IMPL(__imp__sub_83029D48) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// addi r3,r31,-9356
	ctx.r3.s64 = ctx.r31.s64 + -9356;
	// addi r4,r10,23660
	ctx.r4.s64 = ctx.r10.s64 + 23660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82b38290
	ctx.lr = 0x83029D84;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23572
	ctx.r11.s64 = ctx.r11.s64 + 23572;
	// addi r3,r9,21640
	ctx.r3.s64 = ctx.r9.s64 + 21640;
	// stw r11,-9356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029D9C;
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

__attribute__((alias("__imp__sub_83029DB0"))) PPC_WEAK_FUNC(sub_83029DB0);
PPC_FUNC_IMPL(__imp__sub_83029DB0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4072
	ctx.r5.s64 = ctx.r11.s64 + -4072;
	// addi r3,r31,-9324
	ctx.r3.s64 = ctx.r31.s64 + -9324;
	// addi r4,r10,23808
	ctx.r4.s64 = ctx.r10.s64 + 23808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x83029DEC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// addi r3,r9,21664
	ctx.r3.s64 = ctx.r9.s64 + 21664;
	// stw r11,-9324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029E04;
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

__attribute__((alias("__imp__sub_83029E18"))) PPC_WEAK_FUNC(sub_83029E18);
PPC_FUNC_IMPL(__imp__sub_83029E18) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,28216
	ctx.r5.s64 = ctx.r11.s64 + 28216;
	// addi r3,r31,-9292
	ctx.r3.s64 = ctx.r31.s64 + -9292;
	// addi r4,r10,23948
	ctx.r4.s64 = ctx.r10.s64 + 23948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x83029E54;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23832
	ctx.r11.s64 = ctx.r11.s64 + 23832;
	// addi r3,r9,21688
	ctx.r3.s64 = ctx.r9.s64 + 21688;
	// stw r11,-9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9292, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029E6C;
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

__attribute__((alias("__imp__sub_83029E80"))) PPC_WEAK_FUNC(sub_83029E80);
PPC_FUNC_IMPL(__imp__sub_83029E80) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9260
	ctx.r3.s64 = ctx.r31.s64 + -9260;
	// addi r4,r10,24076
	ctx.r4.s64 = ctx.r10.s64 + 24076;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83029EBC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23964
	ctx.r11.s64 = ctx.r11.s64 + 23964;
	// addi r3,r9,21712
	ctx.r3.s64 = ctx.r9.s64 + 21712;
	// stw r11,-9260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9260, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029ED4;
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

__attribute__((alias("__imp__sub_83029EE8"))) PPC_WEAK_FUNC(sub_83029EE8);
PPC_FUNC_IMPL(__imp__sub_83029EE8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,-9228
	ctx.r3.s64 = ctx.r31.s64 + -9228;
	// addi r4,r10,24340
	ctx.r4.s64 = ctx.r10.s64 + 24340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3440
	ctx.r6.s64 = 3440;
	// bl 0x82b38290
	ctx.lr = 0x83029F24;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24088
	ctx.r11.s64 = ctx.r11.s64 + 24088;
	// addi r3,r9,21736
	ctx.r3.s64 = ctx.r9.s64 + 21736;
	// stw r11,-9228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9228, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029F3C;
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

__attribute__((alias("__imp__sub_83029F50"))) PPC_WEAK_FUNC(sub_83029F50);
PPC_FUNC_IMPL(__imp__sub_83029F50) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-9196
	ctx.r3.s64 = ctx.r31.s64 + -9196;
	// addi r4,r10,24352
	ctx.r4.s64 = ctx.r10.s64 + 24352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83029F8C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24096
	ctx.r11.s64 = ctx.r11.s64 + 24096;
	// addi r3,r9,21760
	ctx.r3.s64 = ctx.r9.s64 + 21760;
	// stw r11,-9196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83029FA4;
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

__attribute__((alias("__imp__sub_83029FB8"))) PPC_WEAK_FUNC(sub_83029FB8);
PPC_FUNC_IMPL(__imp__sub_83029FB8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9164
	ctx.r3.s64 = ctx.r31.s64 + -9164;
	// addi r4,r10,24928
	ctx.r4.s64 = ctx.r10.s64 + 24928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x83029FF4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24376
	ctx.r11.s64 = ctx.r11.s64 + 24376;
	// addi r3,r9,21784
	ctx.r3.s64 = ctx.r9.s64 + 21784;
	// stw r11,-9164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A00C;
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

__attribute__((alias("__imp__sub_8302A020"))) PPC_WEAK_FUNC(sub_8302A020);
PPC_FUNC_IMPL(__imp__sub_8302A020) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-9132
	ctx.r3.s64 = ctx.r31.s64 + -9132;
	// addi r4,r10,25084
	ctx.r4.s64 = ctx.r10.s64 + 25084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x8302A05C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// addi r3,r9,21808
	ctx.r3.s64 = ctx.r9.s64 + 21808;
	// stw r11,-9132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A074;
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

__attribute__((alias("__imp__sub_8302A088"))) PPC_WEAK_FUNC(sub_8302A088);
PPC_FUNC_IMPL(__imp__sub_8302A088) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-9132
	ctx.r5.s64 = ctx.r11.s64 + -9132;
	// addi r3,r31,-9100
	ctx.r3.s64 = ctx.r31.s64 + -9100;
	// addi r4,r10,25272
	ctx.r4.s64 = ctx.r10.s64 + 25272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302A0C4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25096
	ctx.r11.s64 = ctx.r11.s64 + 25096;
	// addi r3,r9,21832
	ctx.r3.s64 = ctx.r9.s64 + 21832;
	// stw r11,-9100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A0DC;
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

__attribute__((alias("__imp__sub_8302A0F0"))) PPC_WEAK_FUNC(sub_8302A0F0);
PPC_FUNC_IMPL(__imp__sub_8302A0F0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-9068
	ctx.r3.s64 = ctx.r31.s64 + -9068;
	// addi r4,r10,25360
	ctx.r4.s64 = ctx.r10.s64 + 25360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302A12C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25284
	ctx.r11.s64 = ctx.r11.s64 + 25284;
	// addi r3,r9,21856
	ctx.r3.s64 = ctx.r9.s64 + 21856;
	// stw r11,-9068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9068, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A144;
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

__attribute__((alias("__imp__sub_8302A158"))) PPC_WEAK_FUNC(sub_8302A158);
PPC_FUNC_IMPL(__imp__sub_8302A158) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-9004
	ctx.r3.s64 = ctx.r31.s64 + -9004;
	// addi r4,r10,25516
	ctx.r4.s64 = ctx.r10.s64 + 25516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302A194;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25380
	ctx.r11.s64 = ctx.r11.s64 + 25380;
	// addi r3,r9,21880
	ctx.r3.s64 = ctx.r9.s64 + 21880;
	// stw r11,-9004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A1AC;
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

__attribute__((alias("__imp__sub_8302A1C0"))) PPC_WEAK_FUNC(sub_8302A1C0);
PPC_FUNC_IMPL(__imp__sub_8302A1C0) {
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
	// addi r5,r11,-9004
	ctx.r5.s64 = ctx.r11.s64 + -9004;
	// addi r3,r31,-8972
	ctx.r3.s64 = ctx.r31.s64 + -8972;
	// addi r4,r10,-30000
	ctx.r4.s64 = ctx.r10.s64 + -30000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302A1FC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25388
	ctx.r11.s64 = ctx.r11.s64 + 25388;
	// addi r3,r9,21904
	ctx.r3.s64 = ctx.r9.s64 + 21904;
	// stw r11,-8972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A214;
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

__attribute__((alias("__imp__sub_8302A228"))) PPC_WEAK_FUNC(sub_8302A228);
PPC_FUNC_IMPL(__imp__sub_8302A228) {
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
	// addi r5,r11,-9004
	ctx.r5.s64 = ctx.r11.s64 + -9004;
	// addi r3,r31,-9036
	ctx.r3.s64 = ctx.r31.s64 + -9036;
	// addi r4,r10,-30008
	ctx.r4.s64 = ctx.r10.s64 + -30008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8302A264;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25396
	ctx.r11.s64 = ctx.r11.s64 + 25396;
	// addi r3,r9,21928
	ctx.r3.s64 = ctx.r9.s64 + 21928;
	// stw r11,-9036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A27C;
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

__attribute__((alias("__imp__sub_8302A290"))) PPC_WEAK_FUNC(sub_8302A290);
PPC_FUNC_IMPL(__imp__sub_8302A290) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8940
	ctx.r3.s64 = ctx.r31.s64 + -8940;
	// addi r4,r10,25552
	ctx.r4.s64 = ctx.r10.s64 + 25552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8302A2CC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25524
	ctx.r11.s64 = ctx.r11.s64 + 25524;
	// addi r3,r9,21952
	ctx.r3.s64 = ctx.r9.s64 + 21952;
	// stw r11,-8940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A2E4;
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

__attribute__((alias("__imp__sub_8302A2F8"))) PPC_WEAK_FUNC(sub_8302A2F8);
PPC_FUNC_IMPL(__imp__sub_8302A2F8) {
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
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r3,r31,-8904
	ctx.r3.s64 = ctx.r31.s64 + -8904;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-28612
	ctx.r4.s64 = ctx.r10.s64 + -28612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,49592
	ctx.r6.u64 = ctx.r6.u64 | 49592;
	// bl 0x82b38290
	ctx.lr = 0x8302A338;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25768
	ctx.r11.s64 = ctx.r11.s64 + 25768;
	// addi r3,r9,21976
	ctx.r3.s64 = ctx.r9.s64 + 21976;
	// stw r11,-8904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A350;
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

__attribute__((alias("__imp__sub_8302A368"))) PPC_WEAK_FUNC(sub_8302A368);
PPC_FUNC_IMPL(__imp__sub_8302A368) {
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
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8860
	ctx.r3.s64 = ctx.r31.s64 + -8860;
	// addi r4,r10,-28620
	ctx.r4.s64 = ctx.r10.s64 + -28620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9272
	ctx.r6.s64 = 9272;
	// bl 0x82b38290
	ctx.lr = 0x8302A3A4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26568
	ctx.r11.s64 = ctx.r11.s64 + 26568;
	// addi r3,r9,22000
	ctx.r3.s64 = ctx.r9.s64 + 22000;
	// stw r11,-8860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A3BC;
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

__attribute__((alias("__imp__sub_8302A3D0"))) PPC_WEAK_FUNC(sub_8302A3D0);
PPC_FUNC_IMPL(__imp__sub_8302A3D0) {
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
	// addi r3,r31,-8828
	ctx.r3.s64 = ctx.r31.s64 + -8828;
	// addi r4,r10,-29744
	ctx.r4.s64 = ctx.r10.s64 + -29744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8302A40C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26576
	ctx.r11.s64 = ctx.r11.s64 + 26576;
	// addi r3,r9,22024
	ctx.r3.s64 = ctx.r9.s64 + 22024;
	// stw r11,-8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A424;
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

__attribute__((alias("__imp__sub_8302A438"))) PPC_WEAK_FUNC(sub_8302A438);
PPC_FUNC_IMPL(__imp__sub_8302A438) {
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
	// addi r3,r31,-8792
	ctx.r3.s64 = ctx.r31.s64 + -8792;
	// addi r4,r10,-28588
	ctx.r4.s64 = ctx.r10.s64 + -28588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302A474;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26688
	ctx.r11.s64 = ctx.r11.s64 + 26688;
	// addi r3,r9,22048
	ctx.r3.s64 = ctx.r9.s64 + 22048;
	// stw r11,-8792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A48C;
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

__attribute__((alias("__imp__sub_8302A4A0"))) PPC_WEAK_FUNC(sub_8302A4A0);
PPC_FUNC_IMPL(__imp__sub_8302A4A0) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8724
	ctx.r3.s64 = ctx.r31.s64 + -8724;
	// addi r4,r10,27232
	ctx.r4.s64 = ctx.r10.s64 + 27232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,404
	ctx.r6.s64 = 404;
	// bl 0x82b38290
	ctx.lr = 0x8302A4DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26732
	ctx.r11.s64 = ctx.r11.s64 + 26732;
	// addi r3,r9,22072
	ctx.r3.s64 = ctx.r9.s64 + 22072;
	// stw r11,-8724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8724, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A4F4;
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

__attribute__((alias("__imp__sub_8302A508"))) PPC_WEAK_FUNC(sub_8302A508);
PPC_FUNC_IMPL(__imp__sub_8302A508) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8756
	ctx.r3.s64 = ctx.r31.s64 + -8756;
	// addi r4,r10,27244
	ctx.r4.s64 = ctx.r10.s64 + 27244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1688
	ctx.r6.s64 = 1688;
	// bl 0x82b38290
	ctx.lr = 0x8302A544;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26740
	ctx.r11.s64 = ctx.r11.s64 + 26740;
	// addi r3,r9,22096
	ctx.r3.s64 = ctx.r9.s64 + 22096;
	// stw r11,-8756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A55C;
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

__attribute__((alias("__imp__sub_8302A570"))) PPC_WEAK_FUNC(sub_8302A570);
PPC_FUNC_IMPL(__imp__sub_8302A570) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8688
	ctx.r3.s64 = ctx.r31.s64 + -8688;
	// addi r4,r10,27472
	ctx.r4.s64 = ctx.r10.s64 + 27472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x8302A5AC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27252
	ctx.r11.s64 = ctx.r11.s64 + 27252;
	// addi r3,r9,22120
	ctx.r3.s64 = ctx.r9.s64 + 22120;
	// stw r11,-8688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A5C4;
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

__attribute__((alias("__imp__sub_8302A5D8"))) PPC_WEAK_FUNC(sub_8302A5D8);
PPC_FUNC_IMPL(__imp__sub_8302A5D8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8656
	ctx.r3.s64 = ctx.r31.s64 + -8656;
	// addi r4,r10,27492
	ctx.r4.s64 = ctx.r10.s64 + 27492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3312
	ctx.r6.s64 = 3312;
	// bl 0x82b38290
	ctx.lr = 0x8302A614;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27260
	ctx.r11.s64 = ctx.r11.s64 + 27260;
	// addi r3,r9,22144
	ctx.r3.s64 = ctx.r9.s64 + 22144;
	// stw r11,-8656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A62C;
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

__attribute__((alias("__imp__sub_8302A640"))) PPC_WEAK_FUNC(sub_8302A640);
PPC_FUNC_IMPL(__imp__sub_8302A640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A650"))) PPC_WEAK_FUNC(sub_8302A650);
PPC_FUNC_IMPL(__imp__sub_8302A650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A660"))) PPC_WEAK_FUNC(sub_8302A660);
PPC_FUNC_IMPL(__imp__sub_8302A660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A670"))) PPC_WEAK_FUNC(sub_8302A670);
PPC_FUNC_IMPL(__imp__sub_8302A670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A680"))) PPC_WEAK_FUNC(sub_8302A680);
PPC_FUNC_IMPL(__imp__sub_8302A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31996
	ctx.r11.s64 = -2096889856;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x82f06a08
	sub_82F06A08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302A690"))) PPC_WEAK_FUNC(sub_8302A690);
PPC_FUNC_IMPL(__imp__sub_8302A690) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8620
	ctx.r3.s64 = ctx.r31.s64 + -8620;
	// addi r4,r10,27808
	ctx.r4.s64 = ctx.r10.s64 + 27808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2128
	ctx.r6.s64 = 2128;
	// bl 0x82b38290
	ctx.lr = 0x8302A6CC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27500
	ctx.r11.s64 = ctx.r11.s64 + 27500;
	// addi r3,r9,22288
	ctx.r3.s64 = ctx.r9.s64 + 22288;
	// stw r11,-8620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A6E4;
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

__attribute__((alias("__imp__sub_8302A6F8"))) PPC_WEAK_FUNC(sub_8302A6F8);
PPC_FUNC_IMPL(__imp__sub_8302A6F8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8552
	ctx.r3.s64 = ctx.r31.s64 + -8552;
	// addi r4,r10,29152
	ctx.r4.s64 = ctx.r10.s64 + 29152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302A734;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27836
	ctx.r11.s64 = ctx.r11.s64 + 27836;
	// addi r3,r9,22312
	ctx.r3.s64 = ctx.r9.s64 + 22312;
	// stw r11,-8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A74C;
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

__attribute__((alias("__imp__sub_8302A760"))) PPC_WEAK_FUNC(sub_8302A760);
PPC_FUNC_IMPL(__imp__sub_8302A760) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8520
	ctx.r3.s64 = ctx.r31.s64 + -8520;
	// addi r4,r10,29172
	ctx.r4.s64 = ctx.r10.s64 + 29172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302A79C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27828
	ctx.r11.s64 = ctx.r11.s64 + 27828;
	// addi r3,r9,22336
	ctx.r3.s64 = ctx.r9.s64 + 22336;
	// stw r11,-8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A7B4;
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

__attribute__((alias("__imp__sub_8302A7C8"))) PPC_WEAK_FUNC(sub_8302A7C8);
PPC_FUNC_IMPL(__imp__sub_8302A7C8) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r6,19
	ctx.r6.s64 = 1245184;
	// addi r3,r31,-8584
	ctx.r3.s64 = ctx.r31.s64 + -8584;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,29188
	ctx.r4.s64 = ctx.r10.s64 + 29188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,30496
	ctx.r6.u64 = ctx.r6.u64 | 30496;
	// bl 0x82b38290
	ctx.lr = 0x8302A808;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27820
	ctx.r11.s64 = ctx.r11.s64 + 27820;
	// addi r3,r9,22360
	ctx.r3.s64 = ctx.r9.s64 + 22360;
	// stw r11,-8584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A820;
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

__attribute__((alias("__imp__sub_8302A838"))) PPC_WEAK_FUNC(sub_8302A838);
PPC_FUNC_IMPL(__imp__sub_8302A838) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r6,68
	ctx.r6.s64 = 4456448;
	// addi r3,r31,-8484
	ctx.r3.s64 = ctx.r31.s64 + -8484;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-29860
	ctx.r4.s64 = ctx.r10.s64 + -29860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,12592
	ctx.r6.u64 = ctx.r6.u64 | 12592;
	// bl 0x82b38290
	ctx.lr = 0x8302A878;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29196
	ctx.r11.s64 = ctx.r11.s64 + 29196;
	// addi r3,r9,22384
	ctx.r3.s64 = ctx.r9.s64 + 22384;
	// stw r11,-8484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A890;
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

__attribute__((alias("__imp__sub_8302A8A8"))) PPC_WEAK_FUNC(sub_8302A8A8);
PPC_FUNC_IMPL(__imp__sub_8302A8A8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8448
	ctx.r3.s64 = ctx.r31.s64 + -8448;
	// addi r4,r10,-28832
	ctx.r4.s64 = ctx.r10.s64 + -28832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,784
	ctx.r6.s64 = 784;
	// bl 0x82b38290
	ctx.lr = 0x8302A8E4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29848
	ctx.r11.s64 = ctx.r11.s64 + -29848;
	// addi r3,r9,22408
	ctx.r3.s64 = ctx.r9.s64 + 22408;
	// stw r11,-8448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A8FC;
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

__attribute__((alias("__imp__sub_8302A910"))) PPC_WEAK_FUNC(sub_8302A910);
PPC_FUNC_IMPL(__imp__sub_8302A910) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8380
	ctx.r3.s64 = ctx.r31.s64 + -8380;
	// addi r4,r10,-28704
	ctx.r4.s64 = ctx.r10.s64 + -28704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302A94C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28824
	ctx.r11.s64 = ctx.r11.s64 + -28824;
	// addi r3,r9,22432
	ctx.r3.s64 = ctx.r9.s64 + 22432;
	// stw r11,-8380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A964;
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

__attribute__((alias("__imp__sub_8302A978"))) PPC_WEAK_FUNC(sub_8302A978);
PPC_FUNC_IMPL(__imp__sub_8302A978) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-8412
	ctx.r3.s64 = ctx.r31.s64 + -8412;
	// addi r4,r10,-28688
	ctx.r4.s64 = ctx.r10.s64 + -28688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,14416
	ctx.r6.s64 = 14416;
	// bl 0x82b38290
	ctx.lr = 0x8302A9B4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28816
	ctx.r11.s64 = ctx.r11.s64 + -28816;
	// addi r3,r9,22456
	ctx.r3.s64 = ctx.r9.s64 + 22456;
	// stw r11,-8412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302A9CC;
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

__attribute__((alias("__imp__sub_8302A9E0"))) PPC_WEAK_FUNC(sub_8302A9E0);
PPC_FUNC_IMPL(__imp__sub_8302A9E0) {
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
	// addi r3,r31,-8336
	ctx.r3.s64 = ctx.r31.s64 + -8336;
	// addi r4,r10,-28820
	ctx.r4.s64 = ctx.r10.s64 + -28820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302AA1C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28664
	ctx.r11.s64 = ctx.r11.s64 + -28664;
	// addi r3,r9,22480
	ctx.r3.s64 = ctx.r9.s64 + 22480;
	// stw r11,-8336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AA34;
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

__attribute__((alias("__imp__sub_8302AA48"))) PPC_WEAK_FUNC(sub_8302AA48);
PPC_FUNC_IMPL(__imp__sub_8302AA48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-8304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8304);
	// rlwimi r11,r9,16,5,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x7FF0000) | (ctx.r11.u64 & 0xFFFFFFFFF800FFFF);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,-8304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8304, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302AA68"))) PPC_WEAK_FUNC(sub_8302AA68);
PPC_FUNC_IMPL(__imp__sub_8302AA68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31987
	ctx.r10.s64 = -2096300032;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-24216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24216);
	// rlwimi r11,r9,16,5,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x7FF0000) | (ctx.r11.u64 & 0xFFFFFFFFF800FFFF);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,-24216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24216, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302AA88"))) PPC_WEAK_FUNC(sub_8302AA88);
PPC_FUNC_IMPL(__imp__sub_8302AA88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lwz r11,-8344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8344);
	// rlwinm r11,r11,0,16,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF800FFFF;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,-8344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8344, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302AAA0"))) PPC_WEAK_FUNC(sub_8302AAA0);
PPC_FUNC_IMPL(__imp__sub_8302AAA0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8296
	ctx.r3.s64 = ctx.r31.s64 + -8296;
	// addi r4,r10,-28288
	ctx.r4.s64 = ctx.r10.s64 + -28288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x8302AADC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28580
	ctx.r11.s64 = ctx.r11.s64 + -28580;
	// addi r3,r9,22504
	ctx.r3.s64 = ctx.r9.s64 + 22504;
	// stw r11,-8296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AAF4;
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

__attribute__((alias("__imp__sub_8302AB08"))) PPC_WEAK_FUNC(sub_8302AB08);
PPC_FUNC_IMPL(__imp__sub_8302AB08) {
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
	// addi r3,r31,-8264
	ctx.r3.s64 = ctx.r31.s64 + -8264;
	// addi r4,r10,-28580
	ctx.r4.s64 = ctx.r10.s64 + -28580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302AB44;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28272
	ctx.r11.s64 = ctx.r11.s64 + -28272;
	// addi r3,r9,22528
	ctx.r3.s64 = ctx.r9.s64 + 22528;
	// stw r11,-8264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AB5C;
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

__attribute__((alias("__imp__sub_8302AB70"))) PPC_WEAK_FUNC(sub_8302AB70);
PPC_FUNC_IMPL(__imp__sub_8302AB70) {
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
	// addi r3,r31,-8192
	ctx.r3.s64 = ctx.r31.s64 + -8192;
	// addi r4,r10,-28644
	ctx.r4.s64 = ctx.r10.s64 + -28644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,212
	ctx.r6.s64 = 212;
	// bl 0x82b38290
	ctx.lr = 0x8302ABAC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28008
	ctx.r11.s64 = ctx.r11.s64 + -28008;
	// addi r3,r9,22552
	ctx.r3.s64 = ctx.r9.s64 + 22552;
	// stw r11,-8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302ABC4;
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

__attribute__((alias("__imp__sub_8302ABD8"))) PPC_WEAK_FUNC(sub_8302ABD8);
PPC_FUNC_IMPL(__imp__sub_8302ABD8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-8160
	ctx.r3.s64 = ctx.r31.s64 + -8160;
	// addi r4,r10,-27256
	ctx.r4.s64 = ctx.r10.s64 + -27256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82b38290
	ctx.lr = 0x8302AC14;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27968
	ctx.r11.s64 = ctx.r11.s64 + -27968;
	// addi r3,r9,22576
	ctx.r3.s64 = ctx.r9.s64 + 22576;
	// stw r11,-8160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AC2C;
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

__attribute__((alias("__imp__sub_8302AC40"))) PPC_WEAK_FUNC(sub_8302AC40);
PPC_FUNC_IMPL(__imp__sub_8302AC40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-8224
	ctx.r3.s64 = ctx.r31.s64 + -8224;
	// addi r4,r10,-27228
	ctx.r4.s64 = ctx.r10.s64 + -27228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302AC7C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28016
	ctx.r11.s64 = ctx.r11.s64 + -28016;
	// addi r3,r9,22600
	ctx.r3.s64 = ctx.r9.s64 + 22600;
	// stw r11,-8224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AC94;
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

__attribute__((alias("__imp__sub_8302ACA8"))) PPC_WEAK_FUNC(sub_8302ACA8);
PPC_FUNC_IMPL(__imp__sub_8302ACA8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r3,r31,-8128
	ctx.r3.s64 = ctx.r31.s64 + -8128;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-27208
	ctx.r4.s64 = ctx.r10.s64 + -27208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,20808
	ctx.r6.u64 = ctx.r6.u64 | 20808;
	// bl 0x82b38290
	ctx.lr = 0x8302ACE8;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28024
	ctx.r11.s64 = ctx.r11.s64 + -28024;
	// addi r3,r9,22624
	ctx.r3.s64 = ctx.r9.s64 + 22624;
	// stw r11,-8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AD00;
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

__attribute__((alias("__imp__sub_8302AD18"))) PPC_WEAK_FUNC(sub_8302AD18);
PPC_FUNC_IMPL(__imp__sub_8302AD18) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r3,r31,-8092
	ctx.r3.s64 = ctx.r31.s64 + -8092;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-12796
	ctx.r4.s64 = ctx.r10.s64 + -12796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,12824
	ctx.r6.u64 = ctx.r6.u64 | 12824;
	// bl 0x82b38290
	ctx.lr = 0x8302AD58;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26280
	ctx.r11.s64 = ctx.r11.s64 + -26280;
	// addi r3,r9,22648
	ctx.r3.s64 = ctx.r9.s64 + 22648;
	// stw r11,-8092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AD70;
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

__attribute__((alias("__imp__sub_8302AD88"))) PPC_WEAK_FUNC(sub_8302AD88);
PPC_FUNC_IMPL(__imp__sub_8302AD88) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,-8060
	ctx.r3.s64 = ctx.r31.s64 + -8060;
	// addi r4,r10,-12300
	ctx.r4.s64 = ctx.r10.s64 + -12300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x8302ADC4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12776
	ctx.r11.s64 = ctx.r11.s64 + -12776;
	// addi r3,r9,22672
	ctx.r3.s64 = ctx.r9.s64 + 22672;
	// stw r11,-8060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302ADDC;
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

__attribute__((alias("__imp__sub_8302ADF0"))) PPC_WEAK_FUNC(sub_8302ADF0);
PPC_FUNC_IMPL(__imp__sub_8302ADF0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8060
	ctx.r5.s64 = ctx.r11.s64 + -8060;
	// addi r3,r31,-8028
	ctx.r3.s64 = ctx.r31.s64 + -8028;
	// addi r4,r10,-11600
	ctx.r4.s64 = ctx.r10.s64 + -11600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3376
	ctx.r6.s64 = 3376;
	// bl 0x82b38290
	ctx.lr = 0x8302AE2C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12268
	ctx.r11.s64 = ctx.r11.s64 + -12268;
	// addi r3,r9,22696
	ctx.r3.s64 = ctx.r9.s64 + 22696;
	// stw r11,-8028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AE44;
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

__attribute__((alias("__imp__sub_8302AE58"))) PPC_WEAK_FUNC(sub_8302AE58);
PPC_FUNC_IMPL(__imp__sub_8302AE58) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7996
	ctx.r3.s64 = ctx.r31.s64 + -7996;
	// addi r4,r10,-11224
	ctx.r4.s64 = ctx.r10.s64 + -11224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8302AE94;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11328
	ctx.r11.s64 = ctx.r11.s64 + -11328;
	// addi r3,r9,22720
	ctx.r3.s64 = ctx.r9.s64 + 22720;
	// stw r11,-7996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AEAC;
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

__attribute__((alias("__imp__sub_8302AEC0"))) PPC_WEAK_FUNC(sub_8302AEC0);
PPC_FUNC_IMPL(__imp__sub_8302AEC0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7932
	ctx.r3.s64 = ctx.r31.s64 + -7932;
	// addi r4,r10,-11204
	ctx.r4.s64 = ctx.r10.s64 + -11204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302AEFC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11320
	ctx.r11.s64 = ctx.r11.s64 + -11320;
	// addi r3,r9,22744
	ctx.r3.s64 = ctx.r9.s64 + 22744;
	// stw r11,-7932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AF14;
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

__attribute__((alias("__imp__sub_8302AF28"))) PPC_WEAK_FUNC(sub_8302AF28);
PPC_FUNC_IMPL(__imp__sub_8302AF28) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7964
	ctx.r3.s64 = ctx.r31.s64 + -7964;
	// addi r4,r10,-11180
	ctx.r4.s64 = ctx.r10.s64 + -11180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302AF64;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11336
	ctx.r11.s64 = ctx.r11.s64 + -11336;
	// addi r3,r9,22768
	ctx.r3.s64 = ctx.r9.s64 + 22768;
	// stw r11,-7964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AF7C;
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

__attribute__((alias("__imp__sub_8302AF90"))) PPC_WEAK_FUNC(sub_8302AF90);
PPC_FUNC_IMPL(__imp__sub_8302AF90) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-7868
	ctx.r3.s64 = ctx.r31.s64 + -7868;
	// addi r4,r10,-10796
	ctx.r4.s64 = ctx.r10.s64 + -10796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4120
	ctx.r6.s64 = 4120;
	// bl 0x82b38290
	ctx.lr = 0x8302AFCC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11128
	ctx.r11.s64 = ctx.r11.s64 + -11128;
	// addi r3,r9,22792
	ctx.r3.s64 = ctx.r9.s64 + 22792;
	// stw r11,-7868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302AFE4;
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

__attribute__((alias("__imp__sub_8302AFF8"))) PPC_WEAK_FUNC(sub_8302AFF8);
PPC_FUNC_IMPL(__imp__sub_8302AFF8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-14864
	ctx.r5.s64 = ctx.r11.s64 + -14864;
	// addi r3,r31,-7900
	ctx.r3.s64 = ctx.r31.s64 + -7900;
	// addi r4,r10,-10768
	ctx.r4.s64 = ctx.r10.s64 + -10768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8302B034;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11120
	ctx.r11.s64 = ctx.r11.s64 + -11120;
	// addi r3,r9,22816
	ctx.r3.s64 = ctx.r9.s64 + 22816;
	// stw r11,-7900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B04C;
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

__attribute__((alias("__imp__sub_8302B060"))) PPC_WEAK_FUNC(sub_8302B060);
PPC_FUNC_IMPL(__imp__sub_8302B060) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-7836
	ctx.r3.s64 = ctx.r31.s64 + -7836;
	// addi r4,r10,-10740
	ctx.r4.s64 = ctx.r10.s64 + -10740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302B09C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11136
	ctx.r11.s64 = ctx.r11.s64 + -11136;
	// addi r3,r9,22840
	ctx.r3.s64 = ctx.r9.s64 + 22840;
	// stw r11,-7836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B0B4;
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

__attribute__((alias("__imp__sub_8302B0C8"))) PPC_WEAK_FUNC(sub_8302B0C8);
PPC_FUNC_IMPL(__imp__sub_8302B0C8) {
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
	// addi r3,r31,-7804
	ctx.r3.s64 = ctx.r31.s64 + -7804;
	// addi r4,r10,-28596
	ctx.r4.s64 = ctx.r10.s64 + -28596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8302B104;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10728
	ctx.r11.s64 = ctx.r11.s64 + -10728;
	// addi r3,r9,22864
	ctx.r3.s64 = ctx.r9.s64 + 22864;
	// stw r11,-7804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B11C;
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

__attribute__((alias("__imp__sub_8302B130"))) PPC_WEAK_FUNC(sub_8302B130);
PPC_FUNC_IMPL(__imp__sub_8302B130) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// addi r3,r31,-7740
	ctx.r3.s64 = ctx.r31.s64 + -7740;
	// addi r4,r10,-10292
	ctx.r4.s64 = ctx.r10.s64 + -10292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302B16C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10608
	ctx.r11.s64 = ctx.r11.s64 + -10608;
	// addi r3,r9,22888
	ctx.r3.s64 = ctx.r9.s64 + 22888;
	// stw r11,-7740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B184;
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

__attribute__((alias("__imp__sub_8302B198"))) PPC_WEAK_FUNC(sub_8302B198);
PPC_FUNC_IMPL(__imp__sub_8302B198) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// addi r3,r31,-7772
	ctx.r3.s64 = ctx.r31.s64 + -7772;
	// addi r4,r10,-10272
	ctx.r4.s64 = ctx.r10.s64 + -10272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302B1D4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10600
	ctx.r11.s64 = ctx.r11.s64 + -10600;
	// addi r3,r9,22912
	ctx.r3.s64 = ctx.r9.s64 + 22912;
	// stw r11,-7772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B1EC;
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

__attribute__((alias("__imp__sub_8302B200"))) PPC_WEAK_FUNC(sub_8302B200);
PPC_FUNC_IMPL(__imp__sub_8302B200) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7644
	ctx.r3.s64 = ctx.r31.s64 + -7644;
	// addi r4,r10,-7096
	ctx.r4.s64 = ctx.r10.s64 + -7096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302B23C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8912
	ctx.r11.s64 = ctx.r11.s64 + -8912;
	// addi r3,r9,22936
	ctx.r3.s64 = ctx.r9.s64 + 22936;
	// stw r11,-7644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B254;
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

__attribute__((alias("__imp__sub_8302B268"))) PPC_WEAK_FUNC(sub_8302B268);
PPC_FUNC_IMPL(__imp__sub_8302B268) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7548
	ctx.r3.s64 = ctx.r31.s64 + -7548;
	// addi r4,r10,-7060
	ctx.r4.s64 = ctx.r10.s64 + -7060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8302B2A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8904
	ctx.r11.s64 = ctx.r11.s64 + -8904;
	// addi r3,r9,22960
	ctx.r3.s64 = ctx.r9.s64 + 22960;
	// stw r11,-7548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B2BC;
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

__attribute__((alias("__imp__sub_8302B2D0"))) PPC_WEAK_FUNC(sub_8302B2D0);
PPC_FUNC_IMPL(__imp__sub_8302B2D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7548
	ctx.r5.s64 = ctx.r11.s64 + -7548;
	// addi r3,r31,-7452
	ctx.r3.s64 = ctx.r31.s64 + -7452;
	// addi r4,r10,-7036
	ctx.r4.s64 = ctx.r10.s64 + -7036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8302B30C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8896
	ctx.r11.s64 = ctx.r11.s64 + -8896;
	// addi r3,r9,22984
	ctx.r3.s64 = ctx.r9.s64 + 22984;
	// stw r11,-7452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B324;
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

__attribute__((alias("__imp__sub_8302B338"))) PPC_WEAK_FUNC(sub_8302B338);
PPC_FUNC_IMPL(__imp__sub_8302B338) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// addi r3,r31,-7676
	ctx.r3.s64 = ctx.r31.s64 + -7676;
	// addi r4,r10,-7012
	ctx.r4.s64 = ctx.r10.s64 + -7012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302B374;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8888
	ctx.r11.s64 = ctx.r11.s64 + -8888;
	// addi r3,r9,23008
	ctx.r3.s64 = ctx.r9.s64 + 23008;
	// stw r11,-7676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B38C;
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

__attribute__((alias("__imp__sub_8302B3A0"))) PPC_WEAK_FUNC(sub_8302B3A0);
PPC_FUNC_IMPL(__imp__sub_8302B3A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7452
	ctx.r5.s64 = ctx.r11.s64 + -7452;
	// addi r3,r31,-7708
	ctx.r3.s64 = ctx.r31.s64 + -7708;
	// addi r4,r10,-6980
	ctx.r4.s64 = ctx.r10.s64 + -6980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302B3DC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8880
	ctx.r11.s64 = ctx.r11.s64 + -8880;
	// addi r3,r9,23032
	ctx.r3.s64 = ctx.r9.s64 + 23032;
	// stw r11,-7708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B3F4;
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

__attribute__((alias("__imp__sub_8302B408"))) PPC_WEAK_FUNC(sub_8302B408);
PPC_FUNC_IMPL(__imp__sub_8302B408) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7548
	ctx.r5.s64 = ctx.r11.s64 + -7548;
	// addi r3,r31,-7484
	ctx.r3.s64 = ctx.r31.s64 + -7484;
	// addi r4,r10,-6952
	ctx.r4.s64 = ctx.r10.s64 + -6952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302B444;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8872
	ctx.r11.s64 = ctx.r11.s64 + -8872;
	// addi r3,r9,23056
	ctx.r3.s64 = ctx.r9.s64 + 23056;
	// stw r11,-7484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B45C;
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

__attribute__((alias("__imp__sub_8302B470"))) PPC_WEAK_FUNC(sub_8302B470);
PPC_FUNC_IMPL(__imp__sub_8302B470) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7484
	ctx.r5.s64 = ctx.r11.s64 + -7484;
	// addi r3,r31,-7580
	ctx.r3.s64 = ctx.r31.s64 + -7580;
	// addi r4,r10,-6924
	ctx.r4.s64 = ctx.r10.s64 + -6924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8302B4AC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8864
	ctx.r11.s64 = ctx.r11.s64 + -8864;
	// addi r3,r9,23080
	ctx.r3.s64 = ctx.r9.s64 + 23080;
	// stw r11,-7580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B4C4;
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

__attribute__((alias("__imp__sub_8302B4D8"))) PPC_WEAK_FUNC(sub_8302B4D8);
PPC_FUNC_IMPL(__imp__sub_8302B4D8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7612
	ctx.r3.s64 = ctx.r31.s64 + -7612;
	// addi r4,r10,-6888
	ctx.r4.s64 = ctx.r10.s64 + -6888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8302B514;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8856
	ctx.r11.s64 = ctx.r11.s64 + -8856;
	// addi r3,r9,23104
	ctx.r3.s64 = ctx.r9.s64 + 23104;
	// stw r11,-7612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B52C;
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

__attribute__((alias("__imp__sub_8302B540"))) PPC_WEAK_FUNC(sub_8302B540);
PPC_FUNC_IMPL(__imp__sub_8302B540) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7484
	ctx.r5.s64 = ctx.r11.s64 + -7484;
	// addi r3,r31,-7516
	ctx.r3.s64 = ctx.r31.s64 + -7516;
	// addi r4,r10,-6856
	ctx.r4.s64 = ctx.r10.s64 + -6856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8302B57C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8848
	ctx.r11.s64 = ctx.r11.s64 + -8848;
	// addi r3,r9,23128
	ctx.r3.s64 = ctx.r9.s64 + 23128;
	// stw r11,-7516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B594;
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

__attribute__((alias("__imp__sub_8302B5A8"))) PPC_WEAK_FUNC(sub_8302B5A8);
PPC_FUNC_IMPL(__imp__sub_8302B5A8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-7416
	ctx.r3.s64 = ctx.r31.s64 + -7416;
	// addi r4,r10,-6772
	ctx.r4.s64 = ctx.r10.s64 + -6772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302B5E4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6824
	ctx.r11.s64 = ctx.r11.s64 + -6824;
	// addi r3,r9,23152
	ctx.r3.s64 = ctx.r9.s64 + 23152;
	// stw r11,-7416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B5FC;
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

__attribute__((alias("__imp__sub_8302B610"))) PPC_WEAK_FUNC(sub_8302B610);
PPC_FUNC_IMPL(__imp__sub_8302B610) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-7384
	ctx.r3.s64 = ctx.r31.s64 + -7384;
	// addi r4,r10,13244
	ctx.r4.s64 = ctx.r10.s64 + 13244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x8302B64C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6760
	ctx.r11.s64 = ctx.r11.s64 + -6760;
	// addi r3,r9,23176
	ctx.r3.s64 = ctx.r9.s64 + 23176;
	// stw r11,-7384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B664;
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

__attribute__((alias("__imp__sub_8302B678"))) PPC_WEAK_FUNC(sub_8302B678);
PPC_FUNC_IMPL(__imp__sub_8302B678) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-7352
	ctx.r3.s64 = ctx.r31.s64 + -7352;
	// addi r4,r10,-6632
	ctx.r4.s64 = ctx.r10.s64 + -6632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x8302B6B4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6656
	ctx.r11.s64 = ctx.r11.s64 + -6656;
	// addi r3,r9,23200
	ctx.r3.s64 = ctx.r9.s64 + 23200;
	// stw r11,-7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B6CC;
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

__attribute__((alias("__imp__sub_8302B6E0"))) PPC_WEAK_FUNC(sub_8302B6E0);
PPC_FUNC_IMPL(__imp__sub_8302B6E0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-7288
	ctx.r3.s64 = ctx.r31.s64 + -7288;
	// addi r4,r10,-6384
	ctx.r4.s64 = ctx.r10.s64 + -6384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302B71C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// addi r3,r9,23224
	ctx.r3.s64 = ctx.r9.s64 + 23224;
	// stw r11,-7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B734;
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

__attribute__((alias("__imp__sub_8302B748"))) PPC_WEAK_FUNC(sub_8302B748);
PPC_FUNC_IMPL(__imp__sub_8302B748) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-7320
	ctx.r3.s64 = ctx.r31.s64 + -7320;
	// addi r4,r10,-6352
	ctx.r4.s64 = ctx.r10.s64 + -6352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,824
	ctx.r6.s64 = 824;
	// bl 0x82b38290
	ctx.lr = 0x8302B784;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6616
	ctx.r11.s64 = ctx.r11.s64 + -6616;
	// addi r3,r9,23248
	ctx.r3.s64 = ctx.r9.s64 + 23248;
	// stw r11,-7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B79C;
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

__attribute__((alias("__imp__sub_8302B7B0"))) PPC_WEAK_FUNC(sub_8302B7B0);
PPC_FUNC_IMPL(__imp__sub_8302B7B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7224
	ctx.r5.s64 = ctx.r11.s64 + -7224;
	// addi r3,r31,-7256
	ctx.r3.s64 = ctx.r31.s64 + -7256;
	// addi r4,r10,-5580
	ctx.r4.s64 = ctx.r10.s64 + -5580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3024
	ctx.r6.s64 = 3024;
	// bl 0x82b38290
	ctx.lr = 0x8302B7EC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6300
	ctx.r11.s64 = ctx.r11.s64 + -6300;
	// addi r3,r9,23272
	ctx.r3.s64 = ctx.r9.s64 + 23272;
	// stw r11,-7256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B804;
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

__attribute__((alias("__imp__sub_8302B818"))) PPC_WEAK_FUNC(sub_8302B818);
PPC_FUNC_IMPL(__imp__sub_8302B818) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-7224
	ctx.r3.s64 = ctx.r31.s64 + -7224;
	// addi r4,r10,-5468
	ctx.r4.s64 = ctx.r10.s64 + -5468;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302B854;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5572
	ctx.r11.s64 = ctx.r11.s64 + -5572;
	// addi r3,r9,23296
	ctx.r3.s64 = ctx.r9.s64 + 23296;
	// stw r11,-7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B86C;
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

__attribute__((alias("__imp__sub_8302B880"))) PPC_WEAK_FUNC(sub_8302B880);
PPC_FUNC_IMPL(__imp__sub_8302B880) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-7192
	ctx.r3.s64 = ctx.r31.s64 + -7192;
	// addi r4,r10,-5268
	ctx.r4.s64 = ctx.r10.s64 + -5268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,560
	ctx.r6.s64 = 560;
	// bl 0x82b38290
	ctx.lr = 0x8302B8BC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5452
	ctx.r11.s64 = ctx.r11.s64 + -5452;
	// addi r3,r9,23320
	ctx.r3.s64 = ctx.r9.s64 + 23320;
	// stw r11,-7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B8D4;
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

__attribute__((alias("__imp__sub_8302B8E8"))) PPC_WEAK_FUNC(sub_8302B8E8);
PPC_FUNC_IMPL(__imp__sub_8302B8E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-7160
	ctx.r3.s64 = ctx.r31.s64 + -7160;
	// addi r4,r10,-5188
	ctx.r4.s64 = ctx.r10.s64 + -5188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302B924;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5260
	ctx.r11.s64 = ctx.r11.s64 + -5260;
	// addi r3,r9,23344
	ctx.r3.s64 = ctx.r9.s64 + 23344;
	// stw r11,-7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302B93C;
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

__attribute__((alias("__imp__sub_8302B950"))) PPC_WEAK_FUNC(sub_8302B950);
PPC_FUNC_IMPL(__imp__sub_8302B950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lis r5,16383
	ctx.r5.s64 = 1073676288;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-7072
	ctx.r3.s64 = ctx.r10.s64 + -7072;
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x829a9510
	ctx.lr = 0x8302B99C;
	sub_829A9510(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8302B9B0"))) PPC_WEAK_FUNC(sub_8302B9B0);
PPC_FUNC_IMPL(__imp__sub_8302B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x82800e98
	sub_82800E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8302B9C0"))) PPC_WEAK_FUNC(sub_8302B9C0);
PPC_FUNC_IMPL(__imp__sub_8302B9C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,2952
	ctx.r5.s64 = ctx.r11.s64 + 2952;
	// addi r3,r31,-6880
	ctx.r3.s64 = ctx.r31.s64 + -6880;
	// addi r4,r10,-4008
	ctx.r4.s64 = ctx.r10.s64 + -4008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x8302B9FC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5120
	ctx.r11.s64 = ctx.r11.s64 + -5120;
	// addi r3,r9,23368
	ctx.r3.s64 = ctx.r9.s64 + 23368;
	// stw r11,-6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BA14;
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

__attribute__((alias("__imp__sub_8302BA28"))) PPC_WEAK_FUNC(sub_8302BA28);
PPC_FUNC_IMPL(__imp__sub_8302BA28) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-14252
	ctx.r5.s64 = ctx.r11.s64 + -14252;
	// addi r3,r31,-7116
	ctx.r3.s64 = ctx.r31.s64 + -7116;
	// addi r4,r10,-3980
	ctx.r4.s64 = ctx.r10.s64 + -3980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302BA64;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5112
	ctx.r11.s64 = ctx.r11.s64 + -5112;
	// addi r3,r9,23392
	ctx.r3.s64 = ctx.r9.s64 + 23392;
	// stw r11,-7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BA7C;
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

__attribute__((alias("__imp__sub_8302BA90"))) PPC_WEAK_FUNC(sub_8302BA90);
PPC_FUNC_IMPL(__imp__sub_8302BA90) {
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
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r3,r31,-6848
	ctx.r3.s64 = ctx.r31.s64 + -6848;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-29116
	ctx.r4.s64 = ctx.r10.s64 + -29116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,14176
	ctx.r6.u64 = ctx.r6.u64 | 14176;
	// bl 0x82b38290
	ctx.lr = 0x8302BAD0;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5128
	ctx.r11.s64 = ctx.r11.s64 + -5128;
	// addi r3,r9,23416
	ctx.r3.s64 = ctx.r9.s64 + 23416;
	// stw r11,-6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BAE8;
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

__attribute__((alias("__imp__sub_8302BB00"))) PPC_WEAK_FUNC(sub_8302BB00);
PPC_FUNC_IMPL(__imp__sub_8302BB00) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-6576
	ctx.r3.s64 = ctx.r31.s64 + -6576;
	// addi r4,r10,-3804
	ctx.r4.s64 = ctx.r10.s64 + -3804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302BB3C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3948
	ctx.r11.s64 = ctx.r11.s64 + -3948;
	// addi r3,r9,23440
	ctx.r3.s64 = ctx.r9.s64 + 23440;
	// stw r11,-6576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BB54;
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

__attribute__((alias("__imp__sub_8302BB68"))) PPC_WEAK_FUNC(sub_8302BB68);
PPC_FUNC_IMPL(__imp__sub_8302BB68) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-6544
	ctx.r3.s64 = ctx.r31.s64 + -6544;
	// addi r4,r10,-3796
	ctx.r4.s64 = ctx.r10.s64 + -3796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302BBA4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3940
	ctx.r11.s64 = ctx.r11.s64 + -3940;
	// addi r3,r9,23464
	ctx.r3.s64 = ctx.r9.s64 + 23464;
	// stw r11,-6544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BBBC;
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

__attribute__((alias("__imp__sub_8302BBD0"))) PPC_WEAK_FUNC(sub_8302BBD0);
PPC_FUNC_IMPL(__imp__sub_8302BBD0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7580
	ctx.r5.s64 = ctx.r11.s64 + -7580;
	// addi r3,r31,-6512
	ctx.r3.s64 = ctx.r31.s64 + -6512;
	// addi r4,r10,-3664
	ctx.r4.s64 = ctx.r10.s64 + -3664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8302BC0C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3784
	ctx.r11.s64 = ctx.r11.s64 + -3784;
	// addi r3,r9,23488
	ctx.r3.s64 = ctx.r9.s64 + 23488;
	// stw r11,-6512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BC24;
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

__attribute__((alias("__imp__sub_8302BC38"))) PPC_WEAK_FUNC(sub_8302BC38);
PPC_FUNC_IMPL(__imp__sub_8302BC38) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-6480
	ctx.r3.s64 = ctx.r31.s64 + -6480;
	// addi r4,r10,-3576
	ctx.r4.s64 = ctx.r10.s64 + -3576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,232
	ctx.r6.s64 = 232;
	// bl 0x82b38290
	ctx.lr = 0x8302BC74;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3644
	ctx.r11.s64 = ctx.r11.s64 + -3644;
	// addi r3,r9,23512
	ctx.r3.s64 = ctx.r9.s64 + 23512;
	// stw r11,-6480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BC8C;
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

__attribute__((alias("__imp__sub_8302BCA0"))) PPC_WEAK_FUNC(sub_8302BCA0);
PPC_FUNC_IMPL(__imp__sub_8302BCA0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-6448
	ctx.r3.s64 = ctx.r31.s64 + -6448;
	// addi r4,r10,-3476
	ctx.r4.s64 = ctx.r10.s64 + -3476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302BCDC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3564
	ctx.r11.s64 = ctx.r11.s64 + -3564;
	// addi r3,r9,23536
	ctx.r3.s64 = ctx.r9.s64 + 23536;
	// stw r11,-6448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BCF4;
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

__attribute__((alias("__imp__sub_8302BD08"))) PPC_WEAK_FUNC(sub_8302BD08);
PPC_FUNC_IMPL(__imp__sub_8302BD08) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6288
	ctx.r5.s64 = ctx.r11.s64 + -6288;
	// addi r3,r31,-6416
	ctx.r3.s64 = ctx.r31.s64 + -6416;
	// addi r4,r10,32328
	ctx.r4.s64 = ctx.r10.s64 + 32328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,528
	ctx.r6.s64 = 528;
	// bl 0x82b38290
	ctx.lr = 0x8302BD44;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3464
	ctx.r11.s64 = ctx.r11.s64 + -3464;
	// addi r3,r9,23560
	ctx.r3.s64 = ctx.r9.s64 + 23560;
	// stw r11,-6416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BD5C;
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

__attribute__((alias("__imp__sub_8302BD70"))) PPC_WEAK_FUNC(sub_8302BD70);
PPC_FUNC_IMPL(__imp__sub_8302BD70) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7996
	ctx.r5.s64 = ctx.r11.s64 + -7996;
	// addi r3,r31,-6352
	ctx.r3.s64 = ctx.r31.s64 + -6352;
	// addi r4,r10,-2328
	ctx.r4.s64 = ctx.r10.s64 + -2328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8302BDAC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2480
	ctx.r11.s64 = ctx.r11.s64 + -2480;
	// addi r3,r9,23584
	ctx.r3.s64 = ctx.r9.s64 + 23584;
	// stw r11,-6352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BDC4;
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

__attribute__((alias("__imp__sub_8302BDD8"))) PPC_WEAK_FUNC(sub_8302BDD8);
PPC_FUNC_IMPL(__imp__sub_8302BDD8) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-6384
	ctx.r3.s64 = ctx.r31.s64 + -6384;
	// addi r4,r10,-16124
	ctx.r4.s64 = ctx.r10.s64 + -16124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302BE14;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2488
	ctx.r11.s64 = ctx.r11.s64 + -2488;
	// addi r3,r9,23608
	ctx.r3.s64 = ctx.r9.s64 + 23608;
	// stw r11,-6384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BE2C;
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

__attribute__((alias("__imp__sub_8302BE40"))) PPC_WEAK_FUNC(sub_8302BE40);
PPC_FUNC_IMPL(__imp__sub_8302BE40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-6320
	ctx.r3.s64 = ctx.r31.s64 + -6320;
	// addi r4,r10,-2168
	ctx.r4.s64 = ctx.r10.s64 + -2168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8302BE7C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2296
	ctx.r11.s64 = ctx.r11.s64 + -2296;
	// addi r3,r9,23632
	ctx.r3.s64 = ctx.r9.s64 + 23632;
	// stw r11,-6320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BE94;
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

__attribute__((alias("__imp__sub_8302BEA8"))) PPC_WEAK_FUNC(sub_8302BEA8);
PPC_FUNC_IMPL(__imp__sub_8302BEA8) {
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
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,-6288
	ctx.r3.s64 = ctx.r31.s64 + -6288;
	// addi r4,r10,-29340
	ctx.r4.s64 = ctx.r10.s64 + -29340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,416
	ctx.r6.s64 = 416;
	// bl 0x82b38290
	ctx.lr = 0x8302BEE4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2156
	ctx.r11.s64 = ctx.r11.s64 + -2156;
	// addi r3,r9,23656
	ctx.r3.s64 = ctx.r9.s64 + 23656;
	// stw r11,-6288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BEFC;
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

__attribute__((alias("__imp__sub_8302BF10"))) PPC_WEAK_FUNC(sub_8302BF10);
PPC_FUNC_IMPL(__imp__sub_8302BF10) {
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
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r3,r31,-6256
	ctx.r3.s64 = ctx.r31.s64 + -6256;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r4,r10,-29796
	ctx.r4.s64 = ctx.r10.s64 + -29796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,15440
	ctx.r6.u64 = ctx.r6.u64 | 15440;
	// bl 0x82b38290
	ctx.lr = 0x8302BF50;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2012
	ctx.r11.s64 = ctx.r11.s64 + -2012;
	// addi r3,r9,23680
	ctx.r3.s64 = ctx.r9.s64 + 23680;
	// stw r11,-6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BF68;
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

__attribute__((alias("__imp__sub_8302BF80"))) PPC_WEAK_FUNC(sub_8302BF80);
PPC_FUNC_IMPL(__imp__sub_8302BF80) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-6192
	ctx.r3.s64 = ctx.r31.s64 + -6192;
	// addi r4,r10,-1656
	ctx.r4.s64 = ctx.r10.s64 + -1656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302BFBC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1904
	ctx.r11.s64 = ctx.r11.s64 + -1904;
	// addi r3,r9,23704
	ctx.r3.s64 = ctx.r9.s64 + 23704;
	// stw r11,-6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302BFD4;
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

__attribute__((alias("__imp__sub_8302BFE8"))) PPC_WEAK_FUNC(sub_8302BFE8);
PPC_FUNC_IMPL(__imp__sub_8302BFE8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,-6224
	ctx.r3.s64 = ctx.r31.s64 + -6224;
	// addi r4,r10,-1644
	ctx.r4.s64 = ctx.r10.s64 + -1644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302C024;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// addi r3,r9,23728
	ctx.r3.s64 = ctx.r9.s64 + 23728;
	// stw r11,-6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C03C;
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

__attribute__((alias("__imp__sub_8302C050"))) PPC_WEAK_FUNC(sub_8302C050);
PPC_FUNC_IMPL(__imp__sub_8302C050) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-5392
	ctx.r3.s64 = ctx.r31.s64 + -5392;
	// addi r4,r10,4532
	ctx.r4.s64 = ctx.r10.s64 + 4532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x8302C08C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1628
	ctx.r11.s64 = ctx.r11.s64 + -1628;
	// addi r3,r9,23752
	ctx.r3.s64 = ctx.r9.s64 + 23752;
	// stw r11,-5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C0A4;
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

__attribute__((alias("__imp__sub_8302C0B8"))) PPC_WEAK_FUNC(sub_8302C0B8);
PPC_FUNC_IMPL(__imp__sub_8302C0B8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5584
	ctx.r3.s64 = ctx.r31.s64 + -5584;
	// addi r4,r10,4540
	ctx.r4.s64 = ctx.r10.s64 + 4540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8302C0F4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1620
	ctx.r11.s64 = ctx.r11.s64 + -1620;
	// addi r3,r9,23776
	ctx.r3.s64 = ctx.r9.s64 + 23776;
	// stw r11,-5584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C10C;
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

__attribute__((alias("__imp__sub_8302C120"))) PPC_WEAK_FUNC(sub_8302C120);
PPC_FUNC_IMPL(__imp__sub_8302C120) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5488
	ctx.r3.s64 = ctx.r31.s64 + -5488;
	// addi r4,r10,4552
	ctx.r4.s64 = ctx.r10.s64 + 4552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x8302C15C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1612
	ctx.r11.s64 = ctx.r11.s64 + -1612;
	// addi r3,r9,23800
	ctx.r3.s64 = ctx.r9.s64 + 23800;
	// stw r11,-5488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C174;
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

__attribute__((alias("__imp__sub_8302C188"))) PPC_WEAK_FUNC(sub_8302C188);
PPC_FUNC_IMPL(__imp__sub_8302C188) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6128
	ctx.r3.s64 = ctx.r31.s64 + -6128;
	// addi r4,r10,4568
	ctx.r4.s64 = ctx.r10.s64 + 4568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302C1C4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1604
	ctx.r11.s64 = ctx.r11.s64 + -1604;
	// addi r3,r9,23824
	ctx.r3.s64 = ctx.r9.s64 + 23824;
	// stw r11,-6128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C1DC;
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

__attribute__((alias("__imp__sub_8302C1F0"))) PPC_WEAK_FUNC(sub_8302C1F0);
PPC_FUNC_IMPL(__imp__sub_8302C1F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5360
	ctx.r3.s64 = ctx.r31.s64 + -5360;
	// addi r4,r10,4588
	ctx.r4.s64 = ctx.r10.s64 + 4588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302C22C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1596
	ctx.r11.s64 = ctx.r11.s64 + -1596;
	// addi r3,r9,23848
	ctx.r3.s64 = ctx.r9.s64 + 23848;
	// stw r11,-5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C244;
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

__attribute__((alias("__imp__sub_8302C258"))) PPC_WEAK_FUNC(sub_8302C258);
PPC_FUNC_IMPL(__imp__sub_8302C258) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5968
	ctx.r3.s64 = ctx.r31.s64 + -5968;
	// addi r4,r10,4608
	ctx.r4.s64 = ctx.r10.s64 + 4608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302C294;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1588
	ctx.r11.s64 = ctx.r11.s64 + -1588;
	// addi r3,r9,23872
	ctx.r3.s64 = ctx.r9.s64 + 23872;
	// stw r11,-5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C2AC;
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

__attribute__((alias("__imp__sub_8302C2C0"))) PPC_WEAK_FUNC(sub_8302C2C0);
PPC_FUNC_IMPL(__imp__sub_8302C2C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5520
	ctx.r3.s64 = ctx.r31.s64 + -5520;
	// addi r4,r10,4628
	ctx.r4.s64 = ctx.r10.s64 + 4628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302C2FC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1580
	ctx.r11.s64 = ctx.r11.s64 + -1580;
	// addi r3,r9,23896
	ctx.r3.s64 = ctx.r9.s64 + 23896;
	// stw r11,-5520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C314;
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

__attribute__((alias("__imp__sub_8302C328"))) PPC_WEAK_FUNC(sub_8302C328);
PPC_FUNC_IMPL(__imp__sub_8302C328) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5424
	ctx.r3.s64 = ctx.r31.s64 + -5424;
	// addi r4,r10,4644
	ctx.r4.s64 = ctx.r10.s64 + 4644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x8302C364;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1564
	ctx.r11.s64 = ctx.r11.s64 + -1564;
	// addi r3,r9,23920
	ctx.r3.s64 = ctx.r9.s64 + 23920;
	// stw r11,-5424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C37C;
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

__attribute__((alias("__imp__sub_8302C390"))) PPC_WEAK_FUNC(sub_8302C390);
PPC_FUNC_IMPL(__imp__sub_8302C390) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5456
	ctx.r3.s64 = ctx.r31.s64 + -5456;
	// addi r4,r10,4664
	ctx.r4.s64 = ctx.r10.s64 + 4664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302C3CC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1572
	ctx.r11.s64 = ctx.r11.s64 + -1572;
	// addi r3,r9,23944
	ctx.r3.s64 = ctx.r9.s64 + 23944;
	// stw r11,-5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C3E4;
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

__attribute__((alias("__imp__sub_8302C3F8"))) PPC_WEAK_FUNC(sub_8302C3F8);
PPC_FUNC_IMPL(__imp__sub_8302C3F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6064
	ctx.r3.s64 = ctx.r31.s64 + -6064;
	// addi r4,r10,4684
	ctx.r4.s64 = ctx.r10.s64 + 4684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302C434;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1556
	ctx.r11.s64 = ctx.r11.s64 + -1556;
	// addi r3,r9,23968
	ctx.r3.s64 = ctx.r9.s64 + 23968;
	// stw r11,-6064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C44C;
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

__attribute__((alias("__imp__sub_8302C460"))) PPC_WEAK_FUNC(sub_8302C460);
PPC_FUNC_IMPL(__imp__sub_8302C460) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5552
	ctx.r3.s64 = ctx.r31.s64 + -5552;
	// addi r4,r10,4704
	ctx.r4.s64 = ctx.r10.s64 + 4704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302C49C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1548
	ctx.r11.s64 = ctx.r11.s64 + -1548;
	// addi r3,r9,23992
	ctx.r3.s64 = ctx.r9.s64 + 23992;
	// stw r11,-5552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C4B4;
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

__attribute__((alias("__imp__sub_8302C4C8"))) PPC_WEAK_FUNC(sub_8302C4C8);
PPC_FUNC_IMPL(__imp__sub_8302C4C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5616
	ctx.r3.s64 = ctx.r31.s64 + -5616;
	// addi r4,r10,4716
	ctx.r4.s64 = ctx.r10.s64 + 4716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302C504;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1540
	ctx.r11.s64 = ctx.r11.s64 + -1540;
	// addi r3,r9,24016
	ctx.r3.s64 = ctx.r9.s64 + 24016;
	// stw r11,-5616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C51C;
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

__attribute__((alias("__imp__sub_8302C530"))) PPC_WEAK_FUNC(sub_8302C530);
PPC_FUNC_IMPL(__imp__sub_8302C530) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5904
	ctx.r3.s64 = ctx.r31.s64 + -5904;
	// addi r4,r10,4740
	ctx.r4.s64 = ctx.r10.s64 + 4740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302C56C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1532
	ctx.r11.s64 = ctx.r11.s64 + -1532;
	// addi r3,r9,24040
	ctx.r3.s64 = ctx.r9.s64 + 24040;
	// stw r11,-5904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C584;
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

__attribute__((alias("__imp__sub_8302C598"))) PPC_WEAK_FUNC(sub_8302C598);
PPC_FUNC_IMPL(__imp__sub_8302C598) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6000
	ctx.r3.s64 = ctx.r31.s64 + -6000;
	// addi r4,r10,4756
	ctx.r4.s64 = ctx.r10.s64 + 4756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302C5D4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1524
	ctx.r11.s64 = ctx.r11.s64 + -1524;
	// addi r3,r9,24064
	ctx.r3.s64 = ctx.r9.s64 + 24064;
	// stw r11,-6000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C5EC;
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

__attribute__((alias("__imp__sub_8302C600"))) PPC_WEAK_FUNC(sub_8302C600);
PPC_FUNC_IMPL(__imp__sub_8302C600) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6032
	ctx.r3.s64 = ctx.r31.s64 + -6032;
	// addi r4,r10,4772
	ctx.r4.s64 = ctx.r10.s64 + 4772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302C63C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1516
	ctx.r11.s64 = ctx.r11.s64 + -1516;
	// addi r3,r9,24088
	ctx.r3.s64 = ctx.r9.s64 + 24088;
	// stw r11,-6032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C654;
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

__attribute__((alias("__imp__sub_8302C668"))) PPC_WEAK_FUNC(sub_8302C668);
PPC_FUNC_IMPL(__imp__sub_8302C668) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-5776
	ctx.r3.s64 = ctx.r31.s64 + -5776;
	// addi r4,r10,4784
	ctx.r4.s64 = ctx.r10.s64 + 4784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302C6A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1500
	ctx.r11.s64 = ctx.r11.s64 + -1500;
	// addi r3,r9,24112
	ctx.r3.s64 = ctx.r9.s64 + 24112;
	// stw r11,-5776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C6BC;
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

__attribute__((alias("__imp__sub_8302C6D0"))) PPC_WEAK_FUNC(sub_8302C6D0);
PPC_FUNC_IMPL(__imp__sub_8302C6D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5840
	ctx.r3.s64 = ctx.r31.s64 + -5840;
	// addi r4,r10,4816
	ctx.r4.s64 = ctx.r10.s64 + 4816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2208
	ctx.r6.s64 = 2208;
	// bl 0x82b38290
	ctx.lr = 0x8302C70C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1508
	ctx.r11.s64 = ctx.r11.s64 + -1508;
	// addi r3,r9,24136
	ctx.r3.s64 = ctx.r9.s64 + 24136;
	// stw r11,-5840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C724;
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

__attribute__((alias("__imp__sub_8302C738"))) PPC_WEAK_FUNC(sub_8302C738);
PPC_FUNC_IMPL(__imp__sub_8302C738) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5648
	ctx.r3.s64 = ctx.r31.s64 + -5648;
	// addi r4,r10,4836
	ctx.r4.s64 = ctx.r10.s64 + 4836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8302C774;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1492
	ctx.r11.s64 = ctx.r11.s64 + -1492;
	// addi r3,r9,24160
	ctx.r3.s64 = ctx.r9.s64 + 24160;
	// stw r11,-5648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C78C;
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

__attribute__((alias("__imp__sub_8302C7A0"))) PPC_WEAK_FUNC(sub_8302C7A0);
PPC_FUNC_IMPL(__imp__sub_8302C7A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5712
	ctx.r3.s64 = ctx.r31.s64 + -5712;
	// addi r4,r10,4860
	ctx.r4.s64 = ctx.r10.s64 + 4860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302C7DC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1484
	ctx.r11.s64 = ctx.r11.s64 + -1484;
	// addi r3,r9,24184
	ctx.r3.s64 = ctx.r9.s64 + 24184;
	// stw r11,-5712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C7F4;
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

__attribute__((alias("__imp__sub_8302C808"))) PPC_WEAK_FUNC(sub_8302C808);
PPC_FUNC_IMPL(__imp__sub_8302C808) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5936
	ctx.r3.s64 = ctx.r31.s64 + -5936;
	// addi r4,r10,4876
	ctx.r4.s64 = ctx.r10.s64 + 4876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x8302C844;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1476
	ctx.r11.s64 = ctx.r11.s64 + -1476;
	// addi r3,r9,24208
	ctx.r3.s64 = ctx.r9.s64 + 24208;
	// stw r11,-5936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C85C;
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

__attribute__((alias("__imp__sub_8302C870"))) PPC_WEAK_FUNC(sub_8302C870);
PPC_FUNC_IMPL(__imp__sub_8302C870) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6096
	ctx.r3.s64 = ctx.r31.s64 + -6096;
	// addi r4,r10,4892
	ctx.r4.s64 = ctx.r10.s64 + 4892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,688
	ctx.r6.s64 = 688;
	// bl 0x82b38290
	ctx.lr = 0x8302C8AC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1468
	ctx.r11.s64 = ctx.r11.s64 + -1468;
	// addi r3,r9,24232
	ctx.r3.s64 = ctx.r9.s64 + 24232;
	// stw r11,-6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C8C4;
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

__attribute__((alias("__imp__sub_8302C8D8"))) PPC_WEAK_FUNC(sub_8302C8D8);
PPC_FUNC_IMPL(__imp__sub_8302C8D8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-5808
	ctx.r3.s64 = ctx.r31.s64 + -5808;
	// addi r4,r10,4916
	ctx.r4.s64 = ctx.r10.s64 + 4916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302C914;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1460
	ctx.r11.s64 = ctx.r11.s64 + -1460;
	// addi r3,r9,24256
	ctx.r3.s64 = ctx.r9.s64 + 24256;
	// stw r11,-5808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C92C;
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

__attribute__((alias("__imp__sub_8302C940"))) PPC_WEAK_FUNC(sub_8302C940);
PPC_FUNC_IMPL(__imp__sub_8302C940) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5872
	ctx.r3.s64 = ctx.r31.s64 + -5872;
	// addi r4,r10,4944
	ctx.r4.s64 = ctx.r10.s64 + 4944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x8302C97C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1452
	ctx.r11.s64 = ctx.r11.s64 + -1452;
	// addi r3,r9,24280
	ctx.r3.s64 = ctx.r9.s64 + 24280;
	// stw r11,-5872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C994;
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

__attribute__((alias("__imp__sub_8302C9A8"))) PPC_WEAK_FUNC(sub_8302C9A8);
PPC_FUNC_IMPL(__imp__sub_8302C9A8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5584
	ctx.r5.s64 = ctx.r11.s64 + -5584;
	// addi r3,r31,-5744
	ctx.r3.s64 = ctx.r31.s64 + -5744;
	// addi r4,r10,4960
	ctx.r4.s64 = ctx.r10.s64 + 4960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,432
	ctx.r6.s64 = 432;
	// bl 0x82b38290
	ctx.lr = 0x8302C9E4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1444
	ctx.r11.s64 = ctx.r11.s64 + -1444;
	// addi r3,r9,24304
	ctx.r3.s64 = ctx.r9.s64 + 24304;
	// stw r11,-5744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302C9FC;
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

__attribute__((alias("__imp__sub_8302CA10"))) PPC_WEAK_FUNC(sub_8302CA10);
PPC_FUNC_IMPL(__imp__sub_8302CA10) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-5680
	ctx.r3.s64 = ctx.r31.s64 + -5680;
	// addi r4,r10,4976
	ctx.r4.s64 = ctx.r10.s64 + 4976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302CA4C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1436
	ctx.r11.s64 = ctx.r11.s64 + -1436;
	// addi r3,r9,24328
	ctx.r3.s64 = ctx.r9.s64 + 24328;
	// stw r11,-5680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CA64;
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

__attribute__((alias("__imp__sub_8302CA78"))) PPC_WEAK_FUNC(sub_8302CA78);
PPC_FUNC_IMPL(__imp__sub_8302CA78) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,-6160
	ctx.r3.s64 = ctx.r31.s64 + -6160;
	// addi r4,r10,5000
	ctx.r4.s64 = ctx.r10.s64 + 5000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82b38290
	ctx.lr = 0x8302CAB4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r3,r9,24352
	ctx.r3.s64 = ctx.r9.s64 + 24352;
	// stw r11,-6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CACC;
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

__attribute__((alias("__imp__sub_8302CAE0"))) PPC_WEAK_FUNC(sub_8302CAE0);
PPC_FUNC_IMPL(__imp__sub_8302CAE0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-5328
	ctx.r3.s64 = ctx.r31.s64 + -5328;
	// addi r4,r10,5144
	ctx.r4.s64 = ctx.r10.s64 + 5144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x8302CB1C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5016
	ctx.r11.s64 = ctx.r11.s64 + 5016;
	// addi r3,r9,24376
	ctx.r3.s64 = ctx.r9.s64 + 24376;
	// stw r11,-5328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CB34;
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

__attribute__((alias("__imp__sub_8302CB48"))) PPC_WEAK_FUNC(sub_8302CB48);
PPC_FUNC_IMPL(__imp__sub_8302CB48) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5328
	ctx.r5.s64 = ctx.r11.s64 + -5328;
	// addi r3,r31,-5264
	ctx.r3.s64 = ctx.r31.s64 + -5264;
	// addi r4,r10,5168
	ctx.r4.s64 = ctx.r10.s64 + 5168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x8302CB84;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// addi r3,r9,24400
	ctx.r3.s64 = ctx.r9.s64 + 24400;
	// stw r11,-5264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CB9C;
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

__attribute__((alias("__imp__sub_8302CBB0"))) PPC_WEAK_FUNC(sub_8302CBB0);
PPC_FUNC_IMPL(__imp__sub_8302CBB0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// addi r3,r31,-5232
	ctx.r3.s64 = ctx.r31.s64 + -5232;
	// addi r4,r10,5188
	ctx.r4.s64 = ctx.r10.s64 + 5188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8302CBEC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5032
	ctx.r11.s64 = ctx.r11.s64 + 5032;
	// addi r3,r9,24424
	ctx.r3.s64 = ctx.r9.s64 + 24424;
	// stw r11,-5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CC04;
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

__attribute__((alias("__imp__sub_8302CC18"))) PPC_WEAK_FUNC(sub_8302CC18);
PPC_FUNC_IMPL(__imp__sub_8302CC18) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-5264
	ctx.r5.s64 = ctx.r11.s64 + -5264;
	// addi r3,r31,-5296
	ctx.r3.s64 = ctx.r31.s64 + -5296;
	// addi r4,r10,5216
	ctx.r4.s64 = ctx.r10.s64 + 5216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x8302CC54;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5040
	ctx.r11.s64 = ctx.r11.s64 + 5040;
	// addi r3,r9,24448
	ctx.r3.s64 = ctx.r9.s64 + 24448;
	// stw r11,-5296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CC6C;
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

__attribute__((alias("__imp__sub_8302CC80"))) PPC_WEAK_FUNC(sub_8302CC80);
PPC_FUNC_IMPL(__imp__sub_8302CC80) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-5200
	ctx.r3.s64 = ctx.r31.s64 + -5200;
	// addi r4,r10,5660
	ctx.r4.s64 = ctx.r10.s64 + 5660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x8302CCBC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5320
	ctx.r11.s64 = ctx.r11.s64 + 5320;
	// addi r3,r9,24472
	ctx.r3.s64 = ctx.r9.s64 + 24472;
	// stw r11,-5200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CCD4;
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

__attribute__((alias("__imp__sub_8302CCE8"))) PPC_WEAK_FUNC(sub_8302CCE8);
PPC_FUNC_IMPL(__imp__sub_8302CCE8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-5072
	ctx.r3.s64 = ctx.r31.s64 + -5072;
	// addi r4,r10,5668
	ctx.r4.s64 = ctx.r10.s64 + 5668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302CD24;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5312
	ctx.r11.s64 = ctx.r11.s64 + 5312;
	// addi r3,r9,24496
	ctx.r3.s64 = ctx.r9.s64 + 24496;
	// stw r11,-5072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CD3C;
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

__attribute__((alias("__imp__sub_8302CD50"))) PPC_WEAK_FUNC(sub_8302CD50);
PPC_FUNC_IMPL(__imp__sub_8302CD50) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-5008
	ctx.r3.s64 = ctx.r31.s64 + -5008;
	// addi r4,r10,5684
	ctx.r4.s64 = ctx.r10.s64 + 5684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8302CD8C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5284
	ctx.r11.s64 = ctx.r11.s64 + 5284;
	// addi r3,r9,24520
	ctx.r3.s64 = ctx.r9.s64 + 24520;
	// stw r11,-5008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CDA4;
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

__attribute__((alias("__imp__sub_8302CDB8"))) PPC_WEAK_FUNC(sub_8302CDB8);
PPC_FUNC_IMPL(__imp__sub_8302CDB8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4812
	ctx.r5.s64 = ctx.r11.s64 + -4812;
	// addi r3,r31,-5104
	ctx.r3.s64 = ctx.r31.s64 + -5104;
	// addi r4,r10,5712
	ctx.r4.s64 = ctx.r10.s64 + 5712;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302CDF4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5328
	ctx.r11.s64 = ctx.r11.s64 + 5328;
	// addi r3,r9,24544
	ctx.r3.s64 = ctx.r9.s64 + 24544;
	// stw r11,-5104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CE0C;
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

__attribute__((alias("__imp__sub_8302CE20"))) PPC_WEAK_FUNC(sub_8302CE20);
PPC_FUNC_IMPL(__imp__sub_8302CE20) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-5040
	ctx.r3.s64 = ctx.r31.s64 + -5040;
	// addi r4,r10,5736
	ctx.r4.s64 = ctx.r10.s64 + 5736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// bl 0x82b38290
	ctx.lr = 0x8302CE5C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5276
	ctx.r11.s64 = ctx.r11.s64 + 5276;
	// addi r3,r9,24568
	ctx.r3.s64 = ctx.r9.s64 + 24568;
	// stw r11,-5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CE74;
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

__attribute__((alias("__imp__sub_8302CE88"))) PPC_WEAK_FUNC(sub_8302CE88);
PPC_FUNC_IMPL(__imp__sub_8302CE88) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-5168
	ctx.r3.s64 = ctx.r31.s64 + -5168;
	// addi r4,r10,5748
	ctx.r4.s64 = ctx.r10.s64 + 5748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302CEC4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5240
	ctx.r11.s64 = ctx.r11.s64 + 5240;
	// addi r3,r9,24592
	ctx.r3.s64 = ctx.r9.s64 + 24592;
	// stw r11,-5168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CEDC;
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

__attribute__((alias("__imp__sub_8302CEF0"))) PPC_WEAK_FUNC(sub_8302CEF0);
PPC_FUNC_IMPL(__imp__sub_8302CEF0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-5136
	ctx.r3.s64 = ctx.r31.s64 + -5136;
	// addi r4,r10,5768
	ctx.r4.s64 = ctx.r10.s64 + 5768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302CF2C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5268
	ctx.r11.s64 = ctx.r11.s64 + 5268;
	// addi r3,r9,24616
	ctx.r3.s64 = ctx.r9.s64 + 24616;
	// stw r11,-5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CF44;
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

__attribute__((alias("__imp__sub_8302CF58"))) PPC_WEAK_FUNC(sub_8302CF58);
PPC_FUNC_IMPL(__imp__sub_8302CF58) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-4972
	ctx.r3.s64 = ctx.r31.s64 + -4972;
	// addi r4,r10,6068
	ctx.r4.s64 = ctx.r10.s64 + 6068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8302CF94;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5828
	ctx.r11.s64 = ctx.r11.s64 + 5828;
	// addi r3,r9,24640
	ctx.r3.s64 = ctx.r9.s64 + 24640;
	// stw r11,-4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302CFAC;
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

__attribute__((alias("__imp__sub_8302CFC0"))) PPC_WEAK_FUNC(sub_8302CFC0);
PPC_FUNC_IMPL(__imp__sub_8302CFC0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5488
	ctx.r5.s64 = ctx.r11.s64 + 5488;
	// addi r3,r31,-4940
	ctx.r3.s64 = ctx.r31.s64 + -4940;
	// addi r4,r10,5996
	ctx.r4.s64 = ctx.r10.s64 + 5996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8302CFFC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6100
	ctx.r11.s64 = ctx.r11.s64 + 6100;
	// addi r3,r9,24664
	ctx.r3.s64 = ctx.r9.s64 + 24664;
	// stw r11,-4940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D014;
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

__attribute__((alias("__imp__sub_8302D028"))) PPC_WEAK_FUNC(sub_8302D028);
PPC_FUNC_IMPL(__imp__sub_8302D028) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4908
	ctx.r3.s64 = ctx.r31.s64 + -4908;
	// addi r4,r10,6180
	ctx.r4.s64 = ctx.r10.s64 + 6180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302D064;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6072
	ctx.r11.s64 = ctx.r11.s64 + 6072;
	// addi r3,r9,24688
	ctx.r3.s64 = ctx.r9.s64 + 24688;
	// stw r11,-4908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D07C;
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

__attribute__((alias("__imp__sub_8302D090"))) PPC_WEAK_FUNC(sub_8302D090);
PPC_FUNC_IMPL(__imp__sub_8302D090) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-4812
	ctx.r3.s64 = ctx.r31.s64 + -4812;
	// addi r4,r10,6308
	ctx.r4.s64 = ctx.r10.s64 + 6308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302D0CC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6216
	ctx.r11.s64 = ctx.r11.s64 + 6216;
	// addi r3,r9,24712
	ctx.r3.s64 = ctx.r9.s64 + 24712;
	// stw r11,-4812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D0E4;
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

__attribute__((alias("__imp__sub_8302D0F8"))) PPC_WEAK_FUNC(sub_8302D0F8);
PPC_FUNC_IMPL(__imp__sub_8302D0F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-4748
	ctx.r3.s64 = ctx.r31.s64 + -4748;
	// addi r4,r10,6332
	ctx.r4.s64 = ctx.r10.s64 + 6332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302D134;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// addi r3,r9,24736
	ctx.r3.s64 = ctx.r9.s64 + 24736;
	// stw r11,-4748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4748, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D14C;
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

__attribute__((alias("__imp__sub_8302D160"))) PPC_WEAK_FUNC(sub_8302D160);
PPC_FUNC_IMPL(__imp__sub_8302D160) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4748
	ctx.r5.s64 = ctx.r11.s64 + -4748;
	// addi r3,r31,-4844
	ctx.r3.s64 = ctx.r31.s64 + -4844;
	// addi r4,r10,6348
	ctx.r4.s64 = ctx.r10.s64 + 6348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302D19C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6232
	ctx.r11.s64 = ctx.r11.s64 + 6232;
	// addi r3,r9,24760
	ctx.r3.s64 = ctx.r9.s64 + 24760;
	// stw r11,-4844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D1B4;
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

__attribute__((alias("__imp__sub_8302D1C8"))) PPC_WEAK_FUNC(sub_8302D1C8);
PPC_FUNC_IMPL(__imp__sub_8302D1C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-4780
	ctx.r3.s64 = ctx.r31.s64 + -4780;
	// addi r4,r10,6372
	ctx.r4.s64 = ctx.r10.s64 + 6372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8302D204;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6240
	ctx.r11.s64 = ctx.r11.s64 + 6240;
	// addi r3,r9,24784
	ctx.r3.s64 = ctx.r9.s64 + 24784;
	// stw r11,-4780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D21C;
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

__attribute__((alias("__imp__sub_8302D230"))) PPC_WEAK_FUNC(sub_8302D230);
PPC_FUNC_IMPL(__imp__sub_8302D230) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4716
	ctx.r5.s64 = ctx.r11.s64 + -4716;
	// addi r3,r31,-4876
	ctx.r3.s64 = ctx.r31.s64 + -4876;
	// addi r4,r10,6396
	ctx.r4.s64 = ctx.r10.s64 + 6396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8302D26C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// addi r3,r9,24808
	ctx.r3.s64 = ctx.r9.s64 + 24808;
	// stw r11,-4876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D284;
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

__attribute__((alias("__imp__sub_8302D298"))) PPC_WEAK_FUNC(sub_8302D298);
PPC_FUNC_IMPL(__imp__sub_8302D298) {
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
	// addi r3,r31,-4716
	ctx.r3.s64 = ctx.r31.s64 + -4716;
	// addi r4,r10,-29272
	ctx.r4.s64 = ctx.r10.s64 + -29272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8302D2D4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6420
	ctx.r11.s64 = ctx.r11.s64 + 6420;
	// addi r3,r9,24832
	ctx.r3.s64 = ctx.r9.s64 + 24832;
	// stw r11,-4716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4716, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D2EC;
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

__attribute__((alias("__imp__sub_8302D300"))) PPC_WEAK_FUNC(sub_8302D300);
PPC_FUNC_IMPL(__imp__sub_8302D300) {
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
	// addi r3,r31,-4684
	ctx.r3.s64 = ctx.r31.s64 + -4684;
	// addi r4,r10,-29284
	ctx.r4.s64 = ctx.r10.s64 + -29284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8302D33C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6428
	ctx.r11.s64 = ctx.r11.s64 + 6428;
	// addi r3,r9,24856
	ctx.r3.s64 = ctx.r9.s64 + 24856;
	// stw r11,-4684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4684, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D354;
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

__attribute__((alias("__imp__sub_8302D368"))) PPC_WEAK_FUNC(sub_8302D368);
PPC_FUNC_IMPL(__imp__sub_8302D368) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,-4652
	ctx.r3.s64 = ctx.r31.s64 + -4652;
	// addi r4,r10,6524
	ctx.r4.s64 = ctx.r10.s64 + 6524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302D3A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6496
	ctx.r11.s64 = ctx.r11.s64 + 6496;
	// addi r3,r9,24880
	ctx.r3.s64 = ctx.r9.s64 + 24880;
	// stw r11,-4652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D3BC;
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

__attribute__((alias("__imp__sub_8302D3D0"))) PPC_WEAK_FUNC(sub_8302D3D0);
PPC_FUNC_IMPL(__imp__sub_8302D3D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// addi r3,r31,-4620
	ctx.r3.s64 = ctx.r31.s64 + -4620;
	// addi r4,r10,6564
	ctx.r4.s64 = ctx.r10.s64 + 6564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302D40C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// addi r3,r9,24904
	ctx.r3.s64 = ctx.r9.s64 + 24904;
	// stw r11,-4620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D424;
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

__attribute__((alias("__imp__sub_8302D438"))) PPC_WEAK_FUNC(sub_8302D438);
PPC_FUNC_IMPL(__imp__sub_8302D438) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-4584
	ctx.r3.s64 = ctx.r31.s64 + -4584;
	// addi r4,r10,7252
	ctx.r4.s64 = ctx.r10.s64 + 7252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,432
	ctx.r6.s64 = 432;
	// bl 0x82b38290
	ctx.lr = 0x8302D474;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6580
	ctx.r11.s64 = ctx.r11.s64 + 6580;
	// addi r3,r9,24928
	ctx.r3.s64 = ctx.r9.s64 + 24928;
	// stw r11,-4584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D48C;
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

__attribute__((alias("__imp__sub_8302D4A0"))) PPC_WEAK_FUNC(sub_8302D4A0);
PPC_FUNC_IMPL(__imp__sub_8302D4A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6480
	ctx.r5.s64 = ctx.r11.s64 + -6480;
	// addi r3,r31,-4552
	ctx.r3.s64 = ctx.r31.s64 + -4552;
	// addi r4,r10,7436
	ctx.r4.s64 = ctx.r10.s64 + 7436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x8302D4DC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// addi r3,r9,24952
	ctx.r3.s64 = ctx.r9.s64 + 24952;
	// stw r11,-4552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D4F4;
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

__attribute__((alias("__imp__sub_8302D508"))) PPC_WEAK_FUNC(sub_8302D508);
PPC_FUNC_IMPL(__imp__sub_8302D508) {
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
	// addi r3,r31,-4520
	ctx.r3.s64 = ctx.r31.s64 + -4520;
	// addi r4,r10,-28604
	ctx.r4.s64 = ctx.r10.s64 + -28604;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8302D544;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7452
	ctx.r11.s64 = ctx.r11.s64 + 7452;
	// addi r3,r9,24976
	ctx.r3.s64 = ctx.r9.s64 + 24976;
	// stw r11,-4520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D55C;
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

__attribute__((alias("__imp__sub_8302D570"))) PPC_WEAK_FUNC(sub_8302D570);
PPC_FUNC_IMPL(__imp__sub_8302D570) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4456
	ctx.r3.s64 = ctx.r31.s64 + -4456;
	// addi r4,r10,8108
	ctx.r4.s64 = ctx.r10.s64 + 8108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8302D5AC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7524
	ctx.r11.s64 = ctx.r11.s64 + 7524;
	// addi r3,r9,25000
	ctx.r3.s64 = ctx.r9.s64 + 25000;
	// stw r11,-4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D5C4;
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

__attribute__((alias("__imp__sub_8302D5D8"))) PPC_WEAK_FUNC(sub_8302D5D8);
PPC_FUNC_IMPL(__imp__sub_8302D5D8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4456
	ctx.r5.s64 = ctx.r11.s64 + -4456;
	// addi r3,r31,-4424
	ctx.r3.s64 = ctx.r31.s64 + -4424;
	// addi r4,r10,8136
	ctx.r4.s64 = ctx.r10.s64 + 8136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82b38290
	ctx.lr = 0x8302D614;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7532
	ctx.r11.s64 = ctx.r11.s64 + 7532;
	// addi r3,r9,25024
	ctx.r3.s64 = ctx.r9.s64 + 25024;
	// stw r11,-4424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D62C;
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

__attribute__((alias("__imp__sub_8302D640"))) PPC_WEAK_FUNC(sub_8302D640);
PPC_FUNC_IMPL(__imp__sub_8302D640) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4360
	ctx.r3.s64 = ctx.r31.s64 + -4360;
	// addi r4,r10,8172
	ctx.r4.s64 = ctx.r10.s64 + 8172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302D67C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7540
	ctx.r11.s64 = ctx.r11.s64 + 7540;
	// addi r3,r9,25048
	ctx.r3.s64 = ctx.r9.s64 + 25048;
	// stw r11,-4360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D694;
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

__attribute__((alias("__imp__sub_8302D6A8"))) PPC_WEAK_FUNC(sub_8302D6A8);
PPC_FUNC_IMPL(__imp__sub_8302D6A8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4328
	ctx.r3.s64 = ctx.r31.s64 + -4328;
	// addi r4,r10,8208
	ctx.r4.s64 = ctx.r10.s64 + 8208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4828
	ctx.r6.s64 = 4828;
	// bl 0x82b38290
	ctx.lr = 0x8302D6E4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7548
	ctx.r11.s64 = ctx.r11.s64 + 7548;
	// addi r3,r9,25072
	ctx.r3.s64 = ctx.r9.s64 + 25072;
	// stw r11,-4328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D6FC;
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

__attribute__((alias("__imp__sub_8302D710"))) PPC_WEAK_FUNC(sub_8302D710);
PPC_FUNC_IMPL(__imp__sub_8302D710) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,15540
	ctx.r5.s64 = ctx.r11.s64 + 15540;
	// addi r3,r31,-4488
	ctx.r3.s64 = ctx.r31.s64 + -4488;
	// addi r4,r10,8232
	ctx.r4.s64 = ctx.r10.s64 + 8232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302D74C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7564
	ctx.r11.s64 = ctx.r11.s64 + 7564;
	// addi r3,r9,25096
	ctx.r3.s64 = ctx.r9.s64 + 25096;
	// stw r11,-4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D764;
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

__attribute__((alias("__imp__sub_8302D778"))) PPC_WEAK_FUNC(sub_8302D778);
PPC_FUNC_IMPL(__imp__sub_8302D778) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4392
	ctx.r3.s64 = ctx.r31.s64 + -4392;
	// addi r4,r10,8272
	ctx.r4.s64 = ctx.r10.s64 + 8272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8302D7B4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7556
	ctx.r11.s64 = ctx.r11.s64 + 7556;
	// addi r3,r9,25120
	ctx.r3.s64 = ctx.r9.s64 + 25120;
	// stw r11,-4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D7CC;
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

__attribute__((alias("__imp__sub_8302D7E0"))) PPC_WEAK_FUNC(sub_8302D7E0);
PPC_FUNC_IMPL(__imp__sub_8302D7E0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-4296
	ctx.r3.s64 = ctx.r31.s64 + -4296;
	// addi r4,r10,8372
	ctx.r4.s64 = ctx.r10.s64 + 8372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302D81C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8300
	ctx.r11.s64 = ctx.r11.s64 + 8300;
	// addi r3,r9,25144
	ctx.r3.s64 = ctx.r9.s64 + 25144;
	// stw r11,-4296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D834;
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

__attribute__((alias("__imp__sub_8302D848"))) PPC_WEAK_FUNC(sub_8302D848);
PPC_FUNC_IMPL(__imp__sub_8302D848) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// addi r3,r31,-4264
	ctx.r3.s64 = ctx.r31.s64 + -4264;
	// addi r4,r10,8508
	ctx.r4.s64 = ctx.r10.s64 + 8508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82b38290
	ctx.lr = 0x8302D884;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8384
	ctx.r11.s64 = ctx.r11.s64 + 8384;
	// addi r3,r9,25168
	ctx.r3.s64 = ctx.r9.s64 + 25168;
	// stw r11,-4264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D89C;
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

__attribute__((alias("__imp__sub_8302D8B0"))) PPC_WEAK_FUNC(sub_8302D8B0);
PPC_FUNC_IMPL(__imp__sub_8302D8B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-4104
	ctx.r3.s64 = ctx.r31.s64 + -4104;
	// addi r4,r10,10672
	ctx.r4.s64 = ctx.r10.s64 + 10672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,336
	ctx.r6.s64 = 336;
	// bl 0x82b38290
	ctx.lr = 0x8302D8EC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8552
	ctx.r11.s64 = ctx.r11.s64 + 8552;
	// addi r3,r9,25192
	ctx.r3.s64 = ctx.r9.s64 + 25192;
	// stw r11,-4104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D904;
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

__attribute__((alias("__imp__sub_8302D918"))) PPC_WEAK_FUNC(sub_8302D918);
PPC_FUNC_IMPL(__imp__sub_8302D918) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4104
	ctx.r5.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,-4072
	ctx.r3.s64 = ctx.r31.s64 + -4072;
	// addi r4,r10,10680
	ctx.r4.s64 = ctx.r10.s64 + 10680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x8302D954;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8560
	ctx.r11.s64 = ctx.r11.s64 + 8560;
	// addi r3,r9,25216
	ctx.r3.s64 = ctx.r9.s64 + 25216;
	// stw r11,-4072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D96C;
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

__attribute__((alias("__imp__sub_8302D980"))) PPC_WEAK_FUNC(sub_8302D980);
PPC_FUNC_IMPL(__imp__sub_8302D980) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4104
	ctx.r5.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,-4136
	ctx.r3.s64 = ctx.r31.s64 + -4136;
	// addi r4,r10,10700
	ctx.r4.s64 = ctx.r10.s64 + 10700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x8302D9BC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8568
	ctx.r11.s64 = ctx.r11.s64 + 8568;
	// addi r3,r9,25240
	ctx.r3.s64 = ctx.r9.s64 + 25240;
	// stw r11,-4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302D9D4;
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

__attribute__((alias("__imp__sub_8302D9E8"))) PPC_WEAK_FUNC(sub_8302D9E8);
PPC_FUNC_IMPL(__imp__sub_8302D9E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4104
	ctx.r5.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,-4232
	ctx.r3.s64 = ctx.r31.s64 + -4232;
	// addi r4,r10,10452
	ctx.r4.s64 = ctx.r10.s64 + 10452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,352
	ctx.r6.s64 = 352;
	// bl 0x82b38290
	ctx.lr = 0x8302DA24;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8576
	ctx.r11.s64 = ctx.r11.s64 + 8576;
	// addi r3,r9,25264
	ctx.r3.s64 = ctx.r9.s64 + 25264;
	// stw r11,-4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DA3C;
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

__attribute__((alias("__imp__sub_8302DA50"))) PPC_WEAK_FUNC(sub_8302DA50);
PPC_FUNC_IMPL(__imp__sub_8302DA50) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4104
	ctx.r5.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,-4168
	ctx.r3.s64 = ctx.r31.s64 + -4168;
	// addi r4,r10,10624
	ctx.r4.s64 = ctx.r10.s64 + 10624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,800
	ctx.r6.s64 = 800;
	// bl 0x82b38290
	ctx.lr = 0x8302DA8C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8584
	ctx.r11.s64 = ctx.r11.s64 + 8584;
	// addi r3,r9,25288
	ctx.r3.s64 = ctx.r9.s64 + 25288;
	// stw r11,-4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DAA4;
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

__attribute__((alias("__imp__sub_8302DAB8"))) PPC_WEAK_FUNC(sub_8302DAB8);
PPC_FUNC_IMPL(__imp__sub_8302DAB8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-4104
	ctx.r5.s64 = ctx.r11.s64 + -4104;
	// addi r3,r31,-4200
	ctx.r3.s64 = ctx.r31.s64 + -4200;
	// addi r4,r10,10656
	ctx.r4.s64 = ctx.r10.s64 + 10656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,656
	ctx.r6.s64 = 656;
	// bl 0x82b38290
	ctx.lr = 0x8302DAF4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8592
	ctx.r11.s64 = ctx.r11.s64 + 8592;
	// addi r3,r9,25312
	ctx.r3.s64 = ctx.r9.s64 + 25312;
	// stw r11,-4200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DB0C;
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

__attribute__((alias("__imp__sub_8302DB20"))) PPC_WEAK_FUNC(sub_8302DB20);
PPC_FUNC_IMPL(__imp__sub_8302DB20) {
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
	// lis r6,5
	ctx.r6.s64 = 327680;
	// addi r3,r31,-4004
	ctx.r3.s64 = ctx.r31.s64 + -4004;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-29936
	ctx.r4.s64 = ctx.r10.s64 + -29936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,18064
	ctx.r6.u64 = ctx.r6.u64 | 18064;
	// bl 0x82b38290
	ctx.lr = 0x8302DB60;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10824
	ctx.r11.s64 = ctx.r11.s64 + 10824;
	// addi r3,r9,25336
	ctx.r3.s64 = ctx.r9.s64 + 25336;
	// stw r11,-4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DB78;
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

__attribute__((alias("__imp__sub_8302DB90"))) PPC_WEAK_FUNC(sub_8302DB90);
PPC_FUNC_IMPL(__imp__sub_8302DB90) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-4036
	ctx.r3.s64 = ctx.r31.s64 + -4036;
	// addi r4,r10,13104
	ctx.r4.s64 = ctx.r10.s64 + 13104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// bl 0x82b38290
	ctx.lr = 0x8302DBCC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10864
	ctx.r11.s64 = ctx.r11.s64 + 10864;
	// addi r3,r9,25360
	ctx.r3.s64 = ctx.r9.s64 + 25360;
	// stw r11,-4036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DBE4;
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

__attribute__((alias("__imp__sub_8302DBF8"))) PPC_WEAK_FUNC(sub_8302DBF8);
PPC_FUNC_IMPL(__imp__sub_8302DBF8) {
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
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// li r5,494
	ctx.r5.s64 = 494;
	// addi r31,r11,-21976
	ctx.r31.s64 = ctx.r11.s64 + -21976;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 34;
	// bl 0x82f06d60
	ctx.lr = 0x8302DC20;
	sub_82F06D60(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,530
	ctx.r3.s64 = ctx.r31.s64 + 530;
	// lhz r11,18356(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18356);
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// bl 0x82f06d60
	ctx.lr = 0x8302DC3C;
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

__attribute__((alias("__imp__sub_8302DC80"))) PPC_WEAK_FUNC(sub_8302DC80);
PPC_FUNC_IMPL(__imp__sub_8302DC80) {
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
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// li r5,494
	ctx.r5.s64 = 494;
	// addi r31,r11,-23048
	ctx.r31.s64 = ctx.r11.s64 + -23048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 34;
	// bl 0x82f06d60
	ctx.lr = 0x8302DCA8;
	sub_82F06D60(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,530
	ctx.r3.s64 = ctx.r31.s64 + 530;
	// lhz r11,18356(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18356);
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// bl 0x82f06d60
	ctx.lr = 0x8302DCC4;
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

__attribute__((alias("__imp__sub_8302DD08"))) PPC_WEAK_FUNC(sub_8302DD08);
PPC_FUNC_IMPL(__imp__sub_8302DD08) {
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
	// lis r11,-31987
	ctx.r11.s64 = -2096300032;
	// li r5,494
	ctx.r5.s64 = 494;
	// addi r31,r11,-20904
	ctx.r31.s64 = ctx.r11.s64 + -20904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 34;
	// bl 0x82f06d60
	ctx.lr = 0x8302DD30;
	sub_82F06D60(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,530
	ctx.r3.s64 = ctx.r31.s64 + 530;
	// lhz r11,18356(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18356);
	// sth r11,528(r31)
	PPC_STORE_U16(ctx.r31.u32 + 528, ctx.r11.u16);
	// bl 0x82f06d60
	ctx.lr = 0x8302DD4C;
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

__attribute__((alias("__imp__sub_8302DD90"))) PPC_WEAK_FUNC(sub_8302DD90);
PPC_FUNC_IMPL(__imp__sub_8302DD90) {
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
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3972
	ctx.r3.s64 = ctx.r31.s64 + -3972;
	// addi r4,r10,-29952
	ctx.r4.s64 = ctx.r10.s64 + -29952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,184
	ctx.r6.s64 = 184;
	// bl 0x82b38290
	ctx.lr = 0x8302DDCC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13124
	ctx.r11.s64 = ctx.r11.s64 + 13124;
	// addi r3,r9,25384
	ctx.r3.s64 = ctx.r9.s64 + 25384;
	// stw r11,-3972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DDE4;
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

__attribute__((alias("__imp__sub_8302DDF8"))) PPC_WEAK_FUNC(sub_8302DDF8);
PPC_FUNC_IMPL(__imp__sub_8302DDF8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-3844
	ctx.r3.s64 = ctx.r31.s64 + -3844;
	// addi r4,r10,13904
	ctx.r4.s64 = ctx.r10.s64 + 13904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302DE34;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13448
	ctx.r11.s64 = ctx.r11.s64 + 13448;
	// addi r3,r9,25408
	ctx.r3.s64 = ctx.r9.s64 + 25408;
	// stw r11,-3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DE4C;
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

__attribute__((alias("__imp__sub_8302DE60"))) PPC_WEAK_FUNC(sub_8302DE60);
PPC_FUNC_IMPL(__imp__sub_8302DE60) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-3844
	ctx.r5.s64 = ctx.r11.s64 + -3844;
	// addi r3,r31,-3812
	ctx.r3.s64 = ctx.r31.s64 + -3812;
	// addi r4,r10,13912
	ctx.r4.s64 = ctx.r10.s64 + 13912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302DE9C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13456
	ctx.r11.s64 = ctx.r11.s64 + 13456;
	// addi r3,r9,25432
	ctx.r3.s64 = ctx.r9.s64 + 25432;
	// stw r11,-3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DEB4;
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

__attribute__((alias("__imp__sub_8302DEC8"))) PPC_WEAK_FUNC(sub_8302DEC8);
PPC_FUNC_IMPL(__imp__sub_8302DEC8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-3844
	ctx.r5.s64 = ctx.r11.s64 + -3844;
	// addi r3,r31,-3908
	ctx.r3.s64 = ctx.r31.s64 + -3908;
	// addi r4,r10,13928
	ctx.r4.s64 = ctx.r10.s64 + 13928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302DF04;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13464
	ctx.r11.s64 = ctx.r11.s64 + 13464;
	// addi r3,r9,25456
	ctx.r3.s64 = ctx.r9.s64 + 25456;
	// stw r11,-3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DF1C;
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

__attribute__((alias("__imp__sub_8302DF30"))) PPC_WEAK_FUNC(sub_8302DF30);
PPC_FUNC_IMPL(__imp__sub_8302DF30) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-3812
	ctx.r5.s64 = ctx.r11.s64 + -3812;
	// addi r3,r31,-3876
	ctx.r3.s64 = ctx.r31.s64 + -3876;
	// addi r4,r10,13944
	ctx.r4.s64 = ctx.r10.s64 + 13944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302DF6C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13472
	ctx.r11.s64 = ctx.r11.s64 + 13472;
	// addi r3,r9,25480
	ctx.r3.s64 = ctx.r9.s64 + 25480;
	// stw r11,-3876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DF84;
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

__attribute__((alias("__imp__sub_8302DF98"))) PPC_WEAK_FUNC(sub_8302DF98);
PPC_FUNC_IMPL(__imp__sub_8302DF98) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-3908
	ctx.r5.s64 = ctx.r11.s64 + -3908;
	// addi r3,r31,-3940
	ctx.r3.s64 = ctx.r31.s64 + -3940;
	// addi r4,r10,13972
	ctx.r4.s64 = ctx.r10.s64 + 13972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302DFD4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13480
	ctx.r11.s64 = ctx.r11.s64 + 13480;
	// addi r3,r9,25504
	ctx.r3.s64 = ctx.r9.s64 + 25504;
	// stw r11,-3940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302DFEC;
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

__attribute__((alias("__imp__sub_8302E000"))) PPC_WEAK_FUNC(sub_8302E000);
PPC_FUNC_IMPL(__imp__sub_8302E000) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6480
	ctx.r5.s64 = ctx.r11.s64 + -6480;
	// addi r3,r31,-3780
	ctx.r3.s64 = ctx.r31.s64 + -3780;
	// addi r4,r10,14108
	ctx.r4.s64 = ctx.r10.s64 + 14108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,232
	ctx.r6.s64 = 232;
	// bl 0x82b38290
	ctx.lr = 0x8302E03C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14000
	ctx.r11.s64 = ctx.r11.s64 + 14000;
	// addi r3,r9,25528
	ctx.r3.s64 = ctx.r9.s64 + 25528;
	// stw r11,-3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E054;
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

__attribute__((alias("__imp__sub_8302E068"))) PPC_WEAK_FUNC(sub_8302E068);
PPC_FUNC_IMPL(__imp__sub_8302E068) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-3744
	ctx.r3.s64 = ctx.r31.s64 + -3744;
	// addi r4,r10,14700
	ctx.r4.s64 = ctx.r10.s64 + 14700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,284
	ctx.r6.s64 = 284;
	// bl 0x82b38290
	ctx.lr = 0x8302E0A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14204
	ctx.r11.s64 = ctx.r11.s64 + 14204;
	// addi r3,r9,25552
	ctx.r3.s64 = ctx.r9.s64 + 25552;
	// stw r11,-3744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E0BC;
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

__attribute__((alias("__imp__sub_8302E0D0"))) PPC_WEAK_FUNC(sub_8302E0D0);
PPC_FUNC_IMPL(__imp__sub_8302E0D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-3680
	ctx.r3.s64 = ctx.r31.s64 + -3680;
	// addi r4,r10,15056
	ctx.r4.s64 = ctx.r10.s64 + 15056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302E10C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14724
	ctx.r11.s64 = ctx.r11.s64 + 14724;
	// addi r3,r9,25576
	ctx.r3.s64 = ctx.r9.s64 + 25576;
	// stw r11,-3680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E124;
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

__attribute__((alias("__imp__sub_8302E138"))) PPC_WEAK_FUNC(sub_8302E138);
PPC_FUNC_IMPL(__imp__sub_8302E138) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-3712
	ctx.r3.s64 = ctx.r31.s64 + -3712;
	// addi r4,r10,15080
	ctx.r4.s64 = ctx.r10.s64 + 15080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8302E174;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14732
	ctx.r11.s64 = ctx.r11.s64 + 14732;
	// addi r3,r9,25600
	ctx.r3.s64 = ctx.r9.s64 + 25600;
	// stw r11,-3712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E18C;
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

__attribute__((alias("__imp__sub_8302E1A0"))) PPC_WEAK_FUNC(sub_8302E1A0);
PPC_FUNC_IMPL(__imp__sub_8302E1A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-3616
	ctx.r3.s64 = ctx.r31.s64 + -3616;
	// addi r4,r10,15104
	ctx.r4.s64 = ctx.r10.s64 + 15104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x8302E1DC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14740
	ctx.r11.s64 = ctx.r11.s64 + 14740;
	// addi r3,r9,25624
	ctx.r3.s64 = ctx.r9.s64 + 25624;
	// stw r11,-3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E1F4;
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

__attribute__((alias("__imp__sub_8302E208"))) PPC_WEAK_FUNC(sub_8302E208);
PPC_FUNC_IMPL(__imp__sub_8302E208) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-3648
	ctx.r3.s64 = ctx.r31.s64 + -3648;
	// addi r4,r10,15132
	ctx.r4.s64 = ctx.r10.s64 + 15132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302E244;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14716
	ctx.r11.s64 = ctx.r11.s64 + 14716;
	// addi r3,r9,25648
	ctx.r3.s64 = ctx.r9.s64 + 25648;
	// stw r11,-3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E25C;
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

__attribute__((alias("__imp__sub_8302E270"))) PPC_WEAK_FUNC(sub_8302E270);
PPC_FUNC_IMPL(__imp__sub_8302E270) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,-3580
	ctx.r3.s64 = ctx.r31.s64 + -3580;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,33584
	ctx.r6.u64 = ctx.r6.u64 | 33584;
	// bl 0x82b38290
	ctx.lr = 0x8302E2B0;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15152
	ctx.r11.s64 = ctx.r11.s64 + 15152;
	// addi r3,r9,25672
	ctx.r3.s64 = ctx.r9.s64 + 25672;
	// stw r11,-3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E2C8;
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

__attribute__((alias("__imp__sub_8302E2E0"))) PPC_WEAK_FUNC(sub_8302E2E0);
PPC_FUNC_IMPL(__imp__sub_8302E2E0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,-3508
	ctx.r3.s64 = ctx.r31.s64 + -3508;
	// addi r4,r10,15424
	ctx.r4.s64 = ctx.r10.s64 + 15424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8302E31C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15292
	ctx.r11.s64 = ctx.r11.s64 + 15292;
	// addi r3,r9,25696
	ctx.r3.s64 = ctx.r9.s64 + 25696;
	// stw r11,-3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E334;
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

__attribute__((alias("__imp__sub_8302E348"))) PPC_WEAK_FUNC(sub_8302E348);
PPC_FUNC_IMPL(__imp__sub_8302E348) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-3540
	ctx.r3.s64 = ctx.r31.s64 + -3540;
	// addi r4,r10,15436
	ctx.r4.s64 = ctx.r10.s64 + 15436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302E384;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15300
	ctx.r11.s64 = ctx.r11.s64 + 15300;
	// addi r3,r9,25720
	ctx.r3.s64 = ctx.r9.s64 + 25720;
	// stw r11,-3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E39C;
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

__attribute__((alias("__imp__sub_8302E3B0"))) PPC_WEAK_FUNC(sub_8302E3B0);
PPC_FUNC_IMPL(__imp__sub_8302E3B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-3476
	ctx.r3.s64 = ctx.r31.s64 + -3476;
	// addi r4,r10,16180
	ctx.r4.s64 = ctx.r10.s64 + 16180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302E3EC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15476
	ctx.r11.s64 = ctx.r11.s64 + 15476;
	// addi r3,r9,25744
	ctx.r3.s64 = ctx.r9.s64 + 25744;
	// stw r11,-3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E404;
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

__attribute__((alias("__imp__sub_8302E418"))) PPC_WEAK_FUNC(sub_8302E418);
PPC_FUNC_IMPL(__imp__sub_8302E418) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,-3380
	ctx.r3.s64 = ctx.r31.s64 + -3380;
	// addi r4,r10,16204
	ctx.r4.s64 = ctx.r10.s64 + 16204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4448
	ctx.r6.s64 = 4448;
	// bl 0x82b38290
	ctx.lr = 0x8302E454;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15468
	ctx.r11.s64 = ctx.r11.s64 + 15468;
	// addi r3,r9,25768
	ctx.r3.s64 = ctx.r9.s64 + 25768;
	// stw r11,-3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E46C;
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

__attribute__((alias("__imp__sub_8302E480"))) PPC_WEAK_FUNC(sub_8302E480);
PPC_FUNC_IMPL(__imp__sub_8302E480) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8060
	ctx.r5.s64 = ctx.r11.s64 + -8060;
	// addi r3,r31,-3444
	ctx.r3.s64 = ctx.r31.s64 + -3444;
	// addi r4,r10,16216
	ctx.r4.s64 = ctx.r10.s64 + 16216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,512
	ctx.r6.s64 = 512;
	// bl 0x82b38290
	ctx.lr = 0x8302E4BC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15484
	ctx.r11.s64 = ctx.r11.s64 + 15484;
	// addi r3,r9,25792
	ctx.r3.s64 = ctx.r9.s64 + 25792;
	// stw r11,-3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E4D4;
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

__attribute__((alias("__imp__sub_8302E4E8"))) PPC_WEAK_FUNC(sub_8302E4E8);
PPC_FUNC_IMPL(__imp__sub_8302E4E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,-3348
	ctx.r3.s64 = ctx.r31.s64 + -3348;
	// addi r4,r10,16228
	ctx.r4.s64 = ctx.r10.s64 + 16228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3424
	ctx.r6.s64 = 3424;
	// bl 0x82b38290
	ctx.lr = 0x8302E524;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15492
	ctx.r11.s64 = ctx.r11.s64 + 15492;
	// addi r3,r9,25816
	ctx.r3.s64 = ctx.r9.s64 + 25816;
	// stw r11,-3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E53C;
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

__attribute__((alias("__imp__sub_8302E550"))) PPC_WEAK_FUNC(sub_8302E550);
PPC_FUNC_IMPL(__imp__sub_8302E550) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8060
	ctx.r5.s64 = ctx.r11.s64 + -8060;
	// addi r3,r31,-3412
	ctx.r3.s64 = ctx.r31.s64 + -3412;
	// addi r4,r10,16244
	ctx.r4.s64 = ctx.r10.s64 + 16244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x8302E58C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15500
	ctx.r11.s64 = ctx.r11.s64 + 15500;
	// addi r3,r9,25840
	ctx.r3.s64 = ctx.r9.s64 + 25840;
	// stw r11,-3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E5A4;
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

__attribute__((alias("__imp__sub_8302E5B8"))) PPC_WEAK_FUNC(sub_8302E5B8);
PPC_FUNC_IMPL(__imp__sub_8302E5B8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3316
	ctx.r3.s64 = ctx.r31.s64 + -3316;
	// addi r4,r10,16396
	ctx.r4.s64 = ctx.r10.s64 + 16396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302E5F4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16260
	ctx.r11.s64 = ctx.r11.s64 + 16260;
	// addi r3,r9,25864
	ctx.r3.s64 = ctx.r9.s64 + 25864;
	// stw r11,-3316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E60C;
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

__attribute__((alias("__imp__sub_8302E620"))) PPC_WEAK_FUNC(sub_8302E620);
PPC_FUNC_IMPL(__imp__sub_8302E620) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3284
	ctx.r3.s64 = ctx.r31.s64 + -3284;
	// addi r4,r10,16616
	ctx.r4.s64 = ctx.r10.s64 + 16616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2208
	ctx.r6.s64 = 2208;
	// bl 0x82b38290
	ctx.lr = 0x8302E65C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16412
	ctx.r11.s64 = ctx.r11.s64 + 16412;
	// addi r3,r9,25888
	ctx.r3.s64 = ctx.r9.s64 + 25888;
	// stw r11,-3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E674;
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

__attribute__((alias("__imp__sub_8302E688"))) PPC_WEAK_FUNC(sub_8302E688);
PPC_FUNC_IMPL(__imp__sub_8302E688) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-3252
	ctx.r3.s64 = ctx.r31.s64 + -3252;
	// addi r4,r10,16700
	ctx.r4.s64 = ctx.r10.s64 + 16700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1312
	ctx.r6.s64 = 1312;
	// bl 0x82b38290
	ctx.lr = 0x8302E6C4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16628
	ctx.r11.s64 = ctx.r11.s64 + 16628;
	// addi r3,r9,25912
	ctx.r3.s64 = ctx.r9.s64 + 25912;
	// stw r11,-3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E6DC;
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

__attribute__((alias("__imp__sub_8302E6F0"))) PPC_WEAK_FUNC(sub_8302E6F0);
PPC_FUNC_IMPL(__imp__sub_8302E6F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,-3188
	ctx.r3.s64 = ctx.r31.s64 + -3188;
	// addi r4,r10,17136
	ctx.r4.s64 = ctx.r10.s64 + 17136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82b38290
	ctx.lr = 0x8302E72C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16708
	ctx.r11.s64 = ctx.r11.s64 + 16708;
	// addi r3,r9,25936
	ctx.r3.s64 = ctx.r9.s64 + 25936;
	// stw r11,-3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E744;
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

__attribute__((alias("__imp__sub_8302E758"))) PPC_WEAK_FUNC(sub_8302E758);
PPC_FUNC_IMPL(__imp__sub_8302E758) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3220
	ctx.r3.s64 = ctx.r31.s64 + -3220;
	// addi r4,r10,17144
	ctx.r4.s64 = ctx.r10.s64 + 17144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x8302E794;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16716
	ctx.r11.s64 = ctx.r11.s64 + 16716;
	// addi r3,r9,25960
	ctx.r3.s64 = ctx.r9.s64 + 25960;
	// stw r11,-3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E7AC;
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

__attribute__((alias("__imp__sub_8302E7C0"))) PPC_WEAK_FUNC(sub_8302E7C0);
PPC_FUNC_IMPL(__imp__sub_8302E7C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-3156
	ctx.r3.s64 = ctx.r31.s64 + -3156;
	// addi r4,r10,17380
	ctx.r4.s64 = ctx.r10.s64 + 17380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,352
	ctx.r6.s64 = 352;
	// bl 0x82b38290
	ctx.lr = 0x8302E7FC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17160
	ctx.r11.s64 = ctx.r11.s64 + 17160;
	// addi r3,r9,25984
	ctx.r3.s64 = ctx.r9.s64 + 25984;
	// stw r11,-3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E814;
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

__attribute__((alias("__imp__sub_8302E828"))) PPC_WEAK_FUNC(sub_8302E828);
PPC_FUNC_IMPL(__imp__sub_8302E828) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-3124
	ctx.r3.s64 = ctx.r31.s64 + -3124;
	// addi r4,r10,17388
	ctx.r4.s64 = ctx.r10.s64 + 17388;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302E864;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17168
	ctx.r11.s64 = ctx.r11.s64 + 17168;
	// addi r3,r9,26008
	ctx.r3.s64 = ctx.r9.s64 + 26008;
	// stw r11,-3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E87C;
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

__attribute__((alias("__imp__sub_8302E890"))) PPC_WEAK_FUNC(sub_8302E890);
PPC_FUNC_IMPL(__imp__sub_8302E890) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-1172
	ctx.r5.s64 = ctx.r11.s64 + -1172;
	// addi r3,r31,-3060
	ctx.r3.s64 = ctx.r31.s64 + -3060;
	// addi r4,r10,18448
	ctx.r4.s64 = ctx.r10.s64 + 18448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x8302E8CC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17404
	ctx.r11.s64 = ctx.r11.s64 + 17404;
	// addi r3,r9,26032
	ctx.r3.s64 = ctx.r9.s64 + 26032;
	// stw r11,-3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E8E4;
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

__attribute__((alias("__imp__sub_8302E8F8"))) PPC_WEAK_FUNC(sub_8302E8F8);
PPC_FUNC_IMPL(__imp__sub_8302E8F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3092
	ctx.r3.s64 = ctx.r31.s64 + -3092;
	// addi r4,r10,18456
	ctx.r4.s64 = ctx.r10.s64 + 18456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1168
	ctx.r6.s64 = 1168;
	// bl 0x82b38290
	ctx.lr = 0x8302E934;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17412
	ctx.r11.s64 = ctx.r11.s64 + 17412;
	// addi r3,r9,26056
	ctx.r3.s64 = ctx.r9.s64 + 26056;
	// stw r11,-3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E94C;
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

__attribute__((alias("__imp__sub_8302E960"))) PPC_WEAK_FUNC(sub_8302E960);
PPC_FUNC_IMPL(__imp__sub_8302E960) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-3028
	ctx.r3.s64 = ctx.r31.s64 + -3028;
	// addi r4,r10,18536
	ctx.r4.s64 = ctx.r10.s64 + 18536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302E99C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18464
	ctx.r11.s64 = ctx.r11.s64 + 18464;
	// addi r3,r9,26080
	ctx.r3.s64 = ctx.r9.s64 + 26080;
	// stw r11,-3028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302E9B4;
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

__attribute__((alias("__imp__sub_8302E9C8"))) PPC_WEAK_FUNC(sub_8302E9C8);
PPC_FUNC_IMPL(__imp__sub_8302E9C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2996
	ctx.r3.s64 = ctx.r31.s64 + -2996;
	// addi r4,r10,18684
	ctx.r4.s64 = ctx.r10.s64 + 18684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302EA04;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18548
	ctx.r11.s64 = ctx.r11.s64 + 18548;
	// addi r3,r9,26104
	ctx.r3.s64 = ctx.r9.s64 + 26104;
	// stw r11,-2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EA1C;
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

__attribute__((alias("__imp__sub_8302EA30"))) PPC_WEAK_FUNC(sub_8302EA30);
PPC_FUNC_IMPL(__imp__sub_8302EA30) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2964
	ctx.r3.s64 = ctx.r31.s64 + -2964;
	// addi r4,r10,19180
	ctx.r4.s64 = ctx.r10.s64 + 19180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x8302EA6C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18700
	ctx.r11.s64 = ctx.r11.s64 + 18700;
	// addi r3,r9,26128
	ctx.r3.s64 = ctx.r9.s64 + 26128;
	// stw r11,-2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EA84;
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

__attribute__((alias("__imp__sub_8302EA98"))) PPC_WEAK_FUNC(sub_8302EA98);
PPC_FUNC_IMPL(__imp__sub_8302EA98) {
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
	// addi r3,r31,-2932
	ctx.r3.s64 = ctx.r31.s64 + -2932;
	// addi r4,r10,-29832
	ctx.r4.s64 = ctx.r10.s64 + -29832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8302EAD4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19188
	ctx.r11.s64 = ctx.r11.s64 + 19188;
	// addi r3,r9,26152
	ctx.r3.s64 = ctx.r9.s64 + 26152;
	// stw r11,-2932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EAEC;
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

__attribute__((alias("__imp__sub_8302EB00"))) PPC_WEAK_FUNC(sub_8302EB00);
PPC_FUNC_IMPL(__imp__sub_8302EB00) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-2868
	ctx.r3.s64 = ctx.r31.s64 + -2868;
	// addi r4,r10,19408
	ctx.r4.s64 = ctx.r10.s64 + 19408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,688
	ctx.r6.s64 = 688;
	// bl 0x82b38290
	ctx.lr = 0x8302EB3C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19196
	ctx.r11.s64 = ctx.r11.s64 + 19196;
	// addi r3,r9,26176
	ctx.r3.s64 = ctx.r9.s64 + 26176;
	// stw r11,-2868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EB54;
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

__attribute__((alias("__imp__sub_8302EB68"))) PPC_WEAK_FUNC(sub_8302EB68);
PPC_FUNC_IMPL(__imp__sub_8302EB68) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-2900
	ctx.r3.s64 = ctx.r31.s64 + -2900;
	// addi r4,r10,19428
	ctx.r4.s64 = ctx.r10.s64 + 19428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8302EBA4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19204
	ctx.r11.s64 = ctx.r11.s64 + 19204;
	// addi r3,r9,26200
	ctx.r3.s64 = ctx.r9.s64 + 26200;
	// stw r11,-2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EBBC;
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

__attribute__((alias("__imp__sub_8302EBD0"))) PPC_WEAK_FUNC(sub_8302EBD0);
PPC_FUNC_IMPL(__imp__sub_8302EBD0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-2836
	ctx.r3.s64 = ctx.r31.s64 + -2836;
	// addi r4,r10,19524
	ctx.r4.s64 = ctx.r10.s64 + 19524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x8302EC0C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19452
	ctx.r11.s64 = ctx.r11.s64 + 19452;
	// addi r3,r9,26224
	ctx.r3.s64 = ctx.r9.s64 + 26224;
	// stw r11,-2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EC24;
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

__attribute__((alias("__imp__sub_8302EC38"))) PPC_WEAK_FUNC(sub_8302EC38);
PPC_FUNC_IMPL(__imp__sub_8302EC38) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2804
	ctx.r3.s64 = ctx.r31.s64 + -2804;
	// addi r4,r10,19864
	ctx.r4.s64 = ctx.r10.s64 + 19864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x8302EC74;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19532
	ctx.r11.s64 = ctx.r11.s64 + 19532;
	// addi r3,r9,26248
	ctx.r3.s64 = ctx.r9.s64 + 26248;
	// stw r11,-2804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EC8C;
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

__attribute__((alias("__imp__sub_8302ECA0"))) PPC_WEAK_FUNC(sub_8302ECA0);
PPC_FUNC_IMPL(__imp__sub_8302ECA0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-2772
	ctx.r3.s64 = ctx.r31.s64 + -2772;
	// addi r4,r10,19872
	ctx.r4.s64 = ctx.r10.s64 + 19872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8302ECDC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19540
	ctx.r11.s64 = ctx.r11.s64 + 19540;
	// addi r3,r9,26272
	ctx.r3.s64 = ctx.r9.s64 + 26272;
	// stw r11,-2772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302ECF4;
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

__attribute__((alias("__imp__sub_8302ED08"))) PPC_WEAK_FUNC(sub_8302ED08);
PPC_FUNC_IMPL(__imp__sub_8302ED08) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2740
	ctx.r3.s64 = ctx.r31.s64 + -2740;
	// addi r4,r10,19988
	ctx.r4.s64 = ctx.r10.s64 + 19988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302ED44;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19884
	ctx.r11.s64 = ctx.r11.s64 + 19884;
	// addi r3,r9,26296
	ctx.r3.s64 = ctx.r9.s64 + 26296;
	// stw r11,-2740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302ED5C;
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

__attribute__((alias("__imp__sub_8302ED70"))) PPC_WEAK_FUNC(sub_8302ED70);
PPC_FUNC_IMPL(__imp__sub_8302ED70) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2708
	ctx.r3.s64 = ctx.r31.s64 + -2708;
	// addi r4,r10,21008
	ctx.r4.s64 = ctx.r10.s64 + 21008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2912
	ctx.r6.s64 = 2912;
	// bl 0x82b38290
	ctx.lr = 0x8302EDAC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20012
	ctx.r11.s64 = ctx.r11.s64 + 20012;
	// addi r3,r9,26320
	ctx.r3.s64 = ctx.r9.s64 + 26320;
	// stw r11,-2708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EDC4;
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

__attribute__((alias("__imp__sub_8302EDD8"))) PPC_WEAK_FUNC(sub_8302EDD8);
PPC_FUNC_IMPL(__imp__sub_8302EDD8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,-2676
	ctx.r3.s64 = ctx.r31.s64 + -2676;
	// addi r4,r10,21164
	ctx.r4.s64 = ctx.r10.s64 + 21164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3424
	ctx.r6.s64 = 3424;
	// bl 0x82b38290
	ctx.lr = 0x8302EE14;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21024
	ctx.r11.s64 = ctx.r11.s64 + 21024;
	// addi r3,r9,26344
	ctx.r3.s64 = ctx.r9.s64 + 26344;
	// stw r11,-2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EE2C;
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

__attribute__((alias("__imp__sub_8302EE40"))) PPC_WEAK_FUNC(sub_8302EE40);
PPC_FUNC_IMPL(__imp__sub_8302EE40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2612
	ctx.r3.s64 = ctx.r31.s64 + -2612;
	// addi r4,r10,21392
	ctx.r4.s64 = ctx.r10.s64 + 21392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302EE7C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21176
	ctx.r11.s64 = ctx.r11.s64 + 21176;
	// addi r3,r9,26368
	ctx.r3.s64 = ctx.r9.s64 + 26368;
	// stw r11,-2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EE94;
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

__attribute__((alias("__imp__sub_8302EEA8"))) PPC_WEAK_FUNC(sub_8302EEA8);
PPC_FUNC_IMPL(__imp__sub_8302EEA8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,-2644
	ctx.r3.s64 = ctx.r31.s64 + -2644;
	// addi r4,r10,21404
	ctx.r4.s64 = ctx.r10.s64 + 21404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x8302EEE4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21184
	ctx.r11.s64 = ctx.r11.s64 + 21184;
	// addi r3,r9,26392
	ctx.r3.s64 = ctx.r9.s64 + 26392;
	// stw r11,-2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EEFC;
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

__attribute__((alias("__imp__sub_8302EF10"))) PPC_WEAK_FUNC(sub_8302EF10);
PPC_FUNC_IMPL(__imp__sub_8302EF10) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-2580
	ctx.r3.s64 = ctx.r31.s64 + -2580;
	// addi r4,r10,21616
	ctx.r4.s64 = ctx.r10.s64 + 21616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8302EF4C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21428
	ctx.r11.s64 = ctx.r11.s64 + 21428;
	// addi r3,r9,26416
	ctx.r3.s64 = ctx.r9.s64 + 26416;
	// stw r11,-2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EF64;
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

__attribute__((alias("__imp__sub_8302EF78"))) PPC_WEAK_FUNC(sub_8302EF78);
PPC_FUNC_IMPL(__imp__sub_8302EF78) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-2548
	ctx.r3.s64 = ctx.r31.s64 + -2548;
	// addi r4,r10,21628
	ctx.r4.s64 = ctx.r10.s64 + 21628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8302EFB4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21420
	ctx.r11.s64 = ctx.r11.s64 + 21420;
	// addi r3,r9,26440
	ctx.r3.s64 = ctx.r9.s64 + 26440;
	// stw r11,-2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302EFCC;
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

__attribute__((alias("__imp__sub_8302EFE0"))) PPC_WEAK_FUNC(sub_8302EFE0);
PPC_FUNC_IMPL(__imp__sub_8302EFE0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6816
	ctx.r5.s64 = ctx.r11.s64 + 6816;
	// addi r3,r31,-2516
	ctx.r3.s64 = ctx.r31.s64 + -2516;
	// addi r4,r10,22772
	ctx.r4.s64 = ctx.r10.s64 + 22772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x8302F01C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21664
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	// addi r3,r9,26464
	ctx.r3.s64 = ctx.r9.s64 + 26464;
	// stw r11,-2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F034;
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

__attribute__((alias("__imp__sub_8302F048"))) PPC_WEAK_FUNC(sub_8302F048);
PPC_FUNC_IMPL(__imp__sub_8302F048) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6784
	ctx.r5.s64 = ctx.r11.s64 + 6784;
	// addi r3,r31,-2452
	ctx.r3.s64 = ctx.r31.s64 + -2452;
	// addi r4,r10,22800
	ctx.r4.s64 = ctx.r10.s64 + 22800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x8302F084;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21672
	ctx.r11.s64 = ctx.r11.s64 + 21672;
	// addi r3,r9,26488
	ctx.r3.s64 = ctx.r9.s64 + 26488;
	// stw r11,-2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F09C;
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

__attribute__((alias("__imp__sub_8302F0B0"))) PPC_WEAK_FUNC(sub_8302F0B0);
PPC_FUNC_IMPL(__imp__sub_8302F0B0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6752
	ctx.r5.s64 = ctx.r11.s64 + 6752;
	// addi r3,r31,-2484
	ctx.r3.s64 = ctx.r31.s64 + -2484;
	// addi r4,r10,22828
	ctx.r4.s64 = ctx.r10.s64 + 22828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,736
	ctx.r6.s64 = 736;
	// bl 0x82b38290
	ctx.lr = 0x8302F0EC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21656
	ctx.r11.s64 = ctx.r11.s64 + 21656;
	// addi r3,r9,26512
	ctx.r3.s64 = ctx.r9.s64 + 26512;
	// stw r11,-2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F104;
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

__attribute__((alias("__imp__sub_8302F118"))) PPC_WEAK_FUNC(sub_8302F118);
PPC_FUNC_IMPL(__imp__sub_8302F118) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2388
	ctx.r3.s64 = ctx.r31.s64 + -2388;
	// addi r4,r10,23136
	ctx.r4.s64 = ctx.r10.s64 + 23136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3344
	ctx.r6.s64 = 3344;
	// bl 0x82b38290
	ctx.lr = 0x8302F154;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22844
	ctx.r11.s64 = ctx.r11.s64 + 22844;
	// addi r3,r9,26536
	ctx.r3.s64 = ctx.r9.s64 + 26536;
	// stw r11,-2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F16C;
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

__attribute__((alias("__imp__sub_8302F180"))) PPC_WEAK_FUNC(sub_8302F180);
PPC_FUNC_IMPL(__imp__sub_8302F180) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2420
	ctx.r3.s64 = ctx.r31.s64 + -2420;
	// addi r4,r10,23148
	ctx.r4.s64 = ctx.r10.s64 + 23148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302F1BC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22852
	ctx.r11.s64 = ctx.r11.s64 + 22852;
	// addi r3,r9,26560
	ctx.r3.s64 = ctx.r9.s64 + 26560;
	// stw r11,-2420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F1D4;
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

__attribute__((alias("__imp__sub_8302F1E8"))) PPC_WEAK_FUNC(sub_8302F1E8);
PPC_FUNC_IMPL(__imp__sub_8302F1E8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6944
	ctx.r5.s64 = ctx.r11.s64 + 6944;
	// addi r3,r31,-2324
	ctx.r3.s64 = ctx.r31.s64 + -2324;
	// addi r4,r10,23460
	ctx.r4.s64 = ctx.r10.s64 + 23460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8302F224;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23200
	ctx.r11.s64 = ctx.r11.s64 + 23200;
	// addi r3,r9,26584
	ctx.r3.s64 = ctx.r9.s64 + 26584;
	// stw r11,-2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F23C;
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

__attribute__((alias("__imp__sub_8302F250"))) PPC_WEAK_FUNC(sub_8302F250);
PPC_FUNC_IMPL(__imp__sub_8302F250) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,6912
	ctx.r5.s64 = ctx.r11.s64 + 6912;
	// addi r3,r31,-2356
	ctx.r3.s64 = ctx.r31.s64 + -2356;
	// addi r4,r10,23488
	ctx.r4.s64 = ctx.r10.s64 + 23488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8302F28C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23192
	ctx.r11.s64 = ctx.r11.s64 + 23192;
	// addi r3,r9,26608
	ctx.r3.s64 = ctx.r9.s64 + 26608;
	// stw r11,-2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F2A4;
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

__attribute__((alias("__imp__sub_8302F2B8"))) PPC_WEAK_FUNC(sub_8302F2B8);
PPC_FUNC_IMPL(__imp__sub_8302F2B8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2292
	ctx.r3.s64 = ctx.r31.s64 + -2292;
	// addi r4,r10,23668
	ctx.r4.s64 = ctx.r10.s64 + 23668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302F2F4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23500
	ctx.r11.s64 = ctx.r11.s64 + 23500;
	// addi r3,r9,26632
	ctx.r3.s64 = ctx.r9.s64 + 26632;
	// stw r11,-2292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2292, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F30C;
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

__attribute__((alias("__imp__sub_8302F320"))) PPC_WEAK_FUNC(sub_8302F320);
PPC_FUNC_IMPL(__imp__sub_8302F320) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2260
	ctx.r3.s64 = ctx.r31.s64 + -2260;
	// addi r4,r10,23872
	ctx.r4.s64 = ctx.r10.s64 + 23872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8302F35C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// addi r3,r9,26656
	ctx.r3.s64 = ctx.r9.s64 + 26656;
	// stw r11,-2260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2260, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F374;
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

__attribute__((alias("__imp__sub_8302F388"))) PPC_WEAK_FUNC(sub_8302F388);
PPC_FUNC_IMPL(__imp__sub_8302F388) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2228
	ctx.r3.s64 = ctx.r31.s64 + -2228;
	// addi r4,r10,24036
	ctx.r4.s64 = ctx.r10.s64 + 24036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302F3C4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23884
	ctx.r11.s64 = ctx.r11.s64 + 23884;
	// addi r3,r9,26680
	ctx.r3.s64 = ctx.r9.s64 + 26680;
	// stw r11,-2228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2228, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F3DC;
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

__attribute__((alias("__imp__sub_8302F3F0"))) PPC_WEAK_FUNC(sub_8302F3F0);
PPC_FUNC_IMPL(__imp__sub_8302F3F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2196
	ctx.r3.s64 = ctx.r31.s64 + -2196;
	// addi r4,r10,24180
	ctx.r4.s64 = ctx.r10.s64 + 24180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302F42C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24048
	ctx.r11.s64 = ctx.r11.s64 + 24048;
	// addi r3,r9,26704
	ctx.r3.s64 = ctx.r9.s64 + 26704;
	// stw r11,-2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F444;
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

__attribute__((alias("__imp__sub_8302F458"))) PPC_WEAK_FUNC(sub_8302F458);
PPC_FUNC_IMPL(__imp__sub_8302F458) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2164
	ctx.r3.s64 = ctx.r31.s64 + -2164;
	// addi r4,r10,24356
	ctx.r4.s64 = ctx.r10.s64 + 24356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302F494;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24200
	ctx.r11.s64 = ctx.r11.s64 + 24200;
	// addi r3,r9,26728
	ctx.r3.s64 = ctx.r9.s64 + 26728;
	// stw r11,-2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F4AC;
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

__attribute__((alias("__imp__sub_8302F4C0"))) PPC_WEAK_FUNC(sub_8302F4C0);
PPC_FUNC_IMPL(__imp__sub_8302F4C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2132
	ctx.r3.s64 = ctx.r31.s64 + -2132;
	// addi r4,r10,24628
	ctx.r4.s64 = ctx.r10.s64 + 24628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8302F4FC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24376
	ctx.r11.s64 = ctx.r11.s64 + 24376;
	// addi r3,r9,26752
	ctx.r3.s64 = ctx.r9.s64 + 26752;
	// stw r11,-2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F514;
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

__attribute__((alias("__imp__sub_8302F528"))) PPC_WEAK_FUNC(sub_8302F528);
PPC_FUNC_IMPL(__imp__sub_8302F528) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2100
	ctx.r3.s64 = ctx.r31.s64 + -2100;
	// addi r4,r10,26024
	ctx.r4.s64 = ctx.r10.s64 + 26024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302F564;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24652
	ctx.r11.s64 = ctx.r11.s64 + 24652;
	// addi r3,r9,26776
	ctx.r3.s64 = ctx.r9.s64 + 26776;
	// stw r11,-2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F57C;
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

__attribute__((alias("__imp__sub_8302F590"))) PPC_WEAK_FUNC(sub_8302F590);
PPC_FUNC_IMPL(__imp__sub_8302F590) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-2036
	ctx.r3.s64 = ctx.r31.s64 + -2036;
	// addi r4,r10,26044
	ctx.r4.s64 = ctx.r10.s64 + 26044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302F5CC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24660
	ctx.r11.s64 = ctx.r11.s64 + 24660;
	// addi r3,r9,26800
	ctx.r3.s64 = ctx.r9.s64 + 26800;
	// stw r11,-2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F5E4;
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

__attribute__((alias("__imp__sub_8302F5F8"))) PPC_WEAK_FUNC(sub_8302F5F8);
PPC_FUNC_IMPL(__imp__sub_8302F5F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,-2068
	ctx.r3.s64 = ctx.r31.s64 + -2068;
	// addi r4,r10,26064
	ctx.r4.s64 = ctx.r10.s64 + 26064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3408
	ctx.r6.s64 = 3408;
	// bl 0x82b38290
	ctx.lr = 0x8302F634;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24644
	ctx.r11.s64 = ctx.r11.s64 + 24644;
	// addi r3,r9,26824
	ctx.r3.s64 = ctx.r9.s64 + 26824;
	// stw r11,-2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2068, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F64C;
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

__attribute__((alias("__imp__sub_8302F660"))) PPC_WEAK_FUNC(sub_8302F660);
PPC_FUNC_IMPL(__imp__sub_8302F660) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-2004
	ctx.r3.s64 = ctx.r31.s64 + -2004;
	// addi r4,r10,26304
	ctx.r4.s64 = ctx.r10.s64 + 26304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302F69C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26072
	ctx.r11.s64 = ctx.r11.s64 + 26072;
	// addi r3,r9,26848
	ctx.r3.s64 = ctx.r9.s64 + 26848;
	// stw r11,-2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F6B4;
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

__attribute__((alias("__imp__sub_8302F6C8"))) PPC_WEAK_FUNC(sub_8302F6C8);
PPC_FUNC_IMPL(__imp__sub_8302F6C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1972
	ctx.r3.s64 = ctx.r31.s64 + -1972;
	// addi r4,r10,26412
	ctx.r4.s64 = ctx.r10.s64 + 26412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302F704;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26320
	ctx.r11.s64 = ctx.r11.s64 + 26320;
	// addi r3,r9,26872
	ctx.r3.s64 = ctx.r9.s64 + 26872;
	// stw r11,-1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F71C;
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

__attribute__((alias("__imp__sub_8302F730"))) PPC_WEAK_FUNC(sub_8302F730);
PPC_FUNC_IMPL(__imp__sub_8302F730) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1940
	ctx.r3.s64 = ctx.r31.s64 + -1940;
	// addi r4,r10,26504
	ctx.r4.s64 = ctx.r10.s64 + 26504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8302F76C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26432
	ctx.r11.s64 = ctx.r11.s64 + 26432;
	// addi r3,r9,26896
	ctx.r3.s64 = ctx.r9.s64 + 26896;
	// stw r11,-1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F784;
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

__attribute__((alias("__imp__sub_8302F798"))) PPC_WEAK_FUNC(sub_8302F798);
PPC_FUNC_IMPL(__imp__sub_8302F798) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1876
	ctx.r3.s64 = ctx.r31.s64 + -1876;
	// addi r4,r10,26704
	ctx.r4.s64 = ctx.r10.s64 + 26704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8302F7D4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26524
	ctx.r11.s64 = ctx.r11.s64 + 26524;
	// addi r3,r9,26920
	ctx.r3.s64 = ctx.r9.s64 + 26920;
	// stw r11,-1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F7EC;
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

__attribute__((alias("__imp__sub_8302F800"))) PPC_WEAK_FUNC(sub_8302F800);
PPC_FUNC_IMPL(__imp__sub_8302F800) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1908
	ctx.r3.s64 = ctx.r31.s64 + -1908;
	// addi r4,r10,26748
	ctx.r4.s64 = ctx.r10.s64 + 26748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4120
	ctx.r6.s64 = 4120;
	// bl 0x82b38290
	ctx.lr = 0x8302F83C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26516
	ctx.r11.s64 = ctx.r11.s64 + 26516;
	// addi r3,r9,26944
	ctx.r3.s64 = ctx.r9.s64 + 26944;
	// stw r11,-1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F854;
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

__attribute__((alias("__imp__sub_8302F868"))) PPC_WEAK_FUNC(sub_8302F868);
PPC_FUNC_IMPL(__imp__sub_8302F868) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1844
	ctx.r3.s64 = ctx.r31.s64 + -1844;
	// addi r4,r10,26920
	ctx.r4.s64 = ctx.r10.s64 + 26920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302F8A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26776
	ctx.r11.s64 = ctx.r11.s64 + 26776;
	// addi r3,r9,26968
	ctx.r3.s64 = ctx.r9.s64 + 26968;
	// stw r11,-1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F8BC;
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

__attribute__((alias("__imp__sub_8302F8D0"))) PPC_WEAK_FUNC(sub_8302F8D0);
PPC_FUNC_IMPL(__imp__sub_8302F8D0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1812
	ctx.r3.s64 = ctx.r31.s64 + -1812;
	// addi r4,r10,26968
	ctx.r4.s64 = ctx.r10.s64 + 26968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,632
	ctx.r6.s64 = 632;
	// bl 0x82b38290
	ctx.lr = 0x8302F90C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26768
	ctx.r11.s64 = ctx.r11.s64 + 26768;
	// addi r3,r9,26992
	ctx.r3.s64 = ctx.r9.s64 + 26992;
	// stw r11,-1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F924;
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

__attribute__((alias("__imp__sub_8302F938"))) PPC_WEAK_FUNC(sub_8302F938);
PPC_FUNC_IMPL(__imp__sub_8302F938) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1716
	ctx.r3.s64 = ctx.r31.s64 + -1716;
	// addi r4,r10,27404
	ctx.r4.s64 = ctx.r10.s64 + 27404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302F974;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27000
	ctx.r11.s64 = ctx.r11.s64 + 27000;
	// addi r3,r9,27016
	ctx.r3.s64 = ctx.r9.s64 + 27016;
	// stw r11,-1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1716, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F98C;
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

__attribute__((alias("__imp__sub_8302F9A0"))) PPC_WEAK_FUNC(sub_8302F9A0);
PPC_FUNC_IMPL(__imp__sub_8302F9A0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1748
	ctx.r3.s64 = ctx.r31.s64 + -1748;
	// addi r4,r10,27452
	ctx.r4.s64 = ctx.r10.s64 + 27452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8302F9DC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27008
	ctx.r11.s64 = ctx.r11.s64 + 27008;
	// addi r3,r9,27040
	ctx.r3.s64 = ctx.r9.s64 + 27040;
	// stw r11,-1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1748, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302F9F4;
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

__attribute__((alias("__imp__sub_8302FA08"))) PPC_WEAK_FUNC(sub_8302FA08);
PPC_FUNC_IMPL(__imp__sub_8302FA08) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1780
	ctx.r3.s64 = ctx.r31.s64 + -1780;
	// addi r4,r10,27500
	ctx.r4.s64 = ctx.r10.s64 + 27500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302FA44;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27016
	ctx.r11.s64 = ctx.r11.s64 + 27016;
	// addi r3,r9,27064
	ctx.r3.s64 = ctx.r9.s64 + 27064;
	// stw r11,-1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FA5C;
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

__attribute__((alias("__imp__sub_8302FA70"))) PPC_WEAK_FUNC(sub_8302FA70);
PPC_FUNC_IMPL(__imp__sub_8302FA70) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1684
	ctx.r3.s64 = ctx.r31.s64 + -1684;
	// addi r4,r10,27548
	ctx.r4.s64 = ctx.r10.s64 + 27548;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302FAAC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27024
	ctx.r11.s64 = ctx.r11.s64 + 27024;
	// addi r3,r9,27088
	ctx.r3.s64 = ctx.r9.s64 + 27088;
	// stw r11,-1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1684, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FAC4;
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

__attribute__((alias("__imp__sub_8302FAD8"))) PPC_WEAK_FUNC(sub_8302FAD8);
PPC_FUNC_IMPL(__imp__sub_8302FAD8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1652
	ctx.r3.s64 = ctx.r31.s64 + -1652;
	// addi r4,r10,27596
	ctx.r4.s64 = ctx.r10.s64 + 27596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8302FB14;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27032
	ctx.r11.s64 = ctx.r11.s64 + 27032;
	// addi r3,r9,27112
	ctx.r3.s64 = ctx.r9.s64 + 27112;
	// stw r11,-1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FB2C;
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

__attribute__((alias("__imp__sub_8302FB40"))) PPC_WEAK_FUNC(sub_8302FB40);
PPC_FUNC_IMPL(__imp__sub_8302FB40) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1620
	ctx.r3.s64 = ctx.r31.s64 + -1620;
	// addi r4,r10,27648
	ctx.r4.s64 = ctx.r10.s64 + 27648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1576
	ctx.r6.s64 = 1576;
	// bl 0x82b38290
	ctx.lr = 0x8302FB7C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26992
	ctx.r11.s64 = ctx.r11.s64 + 26992;
	// addi r3,r9,27136
	ctx.r3.s64 = ctx.r9.s64 + 27136;
	// stw r11,-1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FB94;
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

__attribute__((alias("__imp__sub_8302FBA8"))) PPC_WEAK_FUNC(sub_8302FBA8);
PPC_FUNC_IMPL(__imp__sub_8302FBA8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1588
	ctx.r3.s64 = ctx.r31.s64 + -1588;
	// addi r4,r10,27744
	ctx.r4.s64 = ctx.r10.s64 + 27744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302FBE4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27672
	ctx.r11.s64 = ctx.r11.s64 + 27672;
	// addi r3,r9,27160
	ctx.r3.s64 = ctx.r9.s64 + 27160;
	// stw r11,-1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FBFC;
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

__attribute__((alias("__imp__sub_8302FC10"))) PPC_WEAK_FUNC(sub_8302FC10);
PPC_FUNC_IMPL(__imp__sub_8302FC10) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1524
	ctx.r3.s64 = ctx.r31.s64 + -1524;
	// addi r4,r10,27988
	ctx.r4.s64 = ctx.r10.s64 + 27988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8302FC4C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27768
	ctx.r11.s64 = ctx.r11.s64 + 27768;
	// addi r3,r9,27184
	ctx.r3.s64 = ctx.r9.s64 + 27184;
	// stw r11,-1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1524, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FC64;
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

__attribute__((alias("__imp__sub_8302FC78"))) PPC_WEAK_FUNC(sub_8302FC78);
PPC_FUNC_IMPL(__imp__sub_8302FC78) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1492
	ctx.r3.s64 = ctx.r31.s64 + -1492;
	// addi r4,r10,28024
	ctx.r4.s64 = ctx.r10.s64 + 28024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8302FCB4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27776
	ctx.r11.s64 = ctx.r11.s64 + 27776;
	// addi r3,r9,27208
	ctx.r3.s64 = ctx.r9.s64 + 27208;
	// stw r11,-1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1492, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FCCC;
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

__attribute__((alias("__imp__sub_8302FCE0"))) PPC_WEAK_FUNC(sub_8302FCE0);
PPC_FUNC_IMPL(__imp__sub_8302FCE0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1556
	ctx.r3.s64 = ctx.r31.s64 + -1556;
	// addi r4,r10,28060
	ctx.r4.s64 = ctx.r10.s64 + 28060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302FD1C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27784
	ctx.r11.s64 = ctx.r11.s64 + 27784;
	// addi r3,r9,27232
	ctx.r3.s64 = ctx.r9.s64 + 27232;
	// stw r11,-1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FD34;
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

__attribute__((alias("__imp__sub_8302FD48"))) PPC_WEAK_FUNC(sub_8302FD48);
PPC_FUNC_IMPL(__imp__sub_8302FD48) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1428
	ctx.r3.s64 = ctx.r31.s64 + -1428;
	// addi r4,r10,28400
	ctx.r4.s64 = ctx.r10.s64 + 28400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8302FD84;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28088
	ctx.r11.s64 = ctx.r11.s64 + 28088;
	// addi r3,r9,27256
	ctx.r3.s64 = ctx.r9.s64 + 27256;
	// stw r11,-1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1428, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FD9C;
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

__attribute__((alias("__imp__sub_8302FDB0"))) PPC_WEAK_FUNC(sub_8302FDB0);
PPC_FUNC_IMPL(__imp__sub_8302FDB0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-1460
	ctx.r3.s64 = ctx.r31.s64 + -1460;
	// addi r4,r10,28424
	ctx.r4.s64 = ctx.r10.s64 + 28424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8302FDEC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28096
	ctx.r11.s64 = ctx.r11.s64 + 28096;
	// addi r3,r9,27280
	ctx.r3.s64 = ctx.r9.s64 + 27280;
	// stw r11,-1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1460, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FE04;
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

__attribute__((alias("__imp__sub_8302FE18"))) PPC_WEAK_FUNC(sub_8302FE18);
PPC_FUNC_IMPL(__imp__sub_8302FE18) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1396
	ctx.r3.s64 = ctx.r31.s64 + -1396;
	// addi r4,r10,28448
	ctx.r4.s64 = ctx.r10.s64 + 28448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8302FE54;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28104
	ctx.r11.s64 = ctx.r11.s64 + 28104;
	// addi r3,r9,27304
	ctx.r3.s64 = ctx.r9.s64 + 27304;
	// stw r11,-1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1396, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FE6C;
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

__attribute__((alias("__imp__sub_8302FE80"))) PPC_WEAK_FUNC(sub_8302FE80);
PPC_FUNC_IMPL(__imp__sub_8302FE80) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1364
	ctx.r3.s64 = ctx.r31.s64 + -1364;
	// addi r4,r10,28556
	ctx.r4.s64 = ctx.r10.s64 + 28556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x8302FEBC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28464
	ctx.r11.s64 = ctx.r11.s64 + 28464;
	// addi r3,r9,27328
	ctx.r3.s64 = ctx.r9.s64 + 27328;
	// stw r11,-1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1364, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FED4;
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

__attribute__((alias("__imp__sub_8302FEE8"))) PPC_WEAK_FUNC(sub_8302FEE8);
PPC_FUNC_IMPL(__imp__sub_8302FEE8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1332
	ctx.r3.s64 = ctx.r31.s64 + -1332;
	// addi r4,r10,28648
	ctx.r4.s64 = ctx.r10.s64 + 28648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8302FF24;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28576
	ctx.r11.s64 = ctx.r11.s64 + 28576;
	// addi r3,r9,27352
	ctx.r3.s64 = ctx.r9.s64 + 27352;
	// stw r11,-1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1332, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FF3C;
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

__attribute__((alias("__imp__sub_8302FF50"))) PPC_WEAK_FUNC(sub_8302FF50);
PPC_FUNC_IMPL(__imp__sub_8302FF50) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1300
	ctx.r3.s64 = ctx.r31.s64 + -1300;
	// addi r4,r10,28756
	ctx.r4.s64 = ctx.r10.s64 + 28756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8302FF8C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28664
	ctx.r11.s64 = ctx.r11.s64 + 28664;
	// addi r3,r9,27376
	ctx.r3.s64 = ctx.r9.s64 + 27376;
	// stw r11,-1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1300, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302FFA4;
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

__attribute__((alias("__imp__sub_8302FFB8"))) PPC_WEAK_FUNC(sub_8302FFB8);
PPC_FUNC_IMPL(__imp__sub_8302FFB8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,-1268
	ctx.r3.s64 = ctx.r31.s64 + -1268;
	// addi r4,r10,28844
	ctx.r4.s64 = ctx.r10.s64 + 28844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8302FFF4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28772
	ctx.r11.s64 = ctx.r11.s64 + 28772;
	// addi r3,r9,27400
	ctx.r3.s64 = ctx.r9.s64 + 27400;
	// stw r11,-1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1268, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303000C;
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

__attribute__((alias("__imp__sub_83030020"))) PPC_WEAK_FUNC(sub_83030020);
PPC_FUNC_IMPL(__imp__sub_83030020) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-1172
	ctx.r3.s64 = ctx.r31.s64 + -1172;
	// addi r4,r10,29504
	ctx.r4.s64 = ctx.r10.s64 + 29504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x8303005C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28860
	ctx.r11.s64 = ctx.r11.s64 + 28860;
	// addi r3,r9,27424
	ctx.r3.s64 = ctx.r9.s64 + 27424;
	// stw r11,-1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1172, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030074;
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

__attribute__((alias("__imp__sub_83030088"))) PPC_WEAK_FUNC(sub_83030088);
PPC_FUNC_IMPL(__imp__sub_83030088) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-1172
	ctx.r5.s64 = ctx.r11.s64 + -1172;
	// addi r3,r31,-1236
	ctx.r3.s64 = ctx.r31.s64 + -1236;
	// addi r4,r10,29512
	ctx.r4.s64 = ctx.r10.s64 + 29512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,704
	ctx.r6.s64 = 704;
	// bl 0x82b38290
	ctx.lr = 0x830300C4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28868
	ctx.r11.s64 = ctx.r11.s64 + 28868;
	// addi r3,r9,27448
	ctx.r3.s64 = ctx.r9.s64 + 27448;
	// stw r11,-1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1236, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830300DC;
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

__attribute__((alias("__imp__sub_830300F0"))) PPC_WEAK_FUNC(sub_830300F0);
PPC_FUNC_IMPL(__imp__sub_830300F0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-1172
	ctx.r5.s64 = ctx.r11.s64 + -1172;
	// addi r3,r31,-1204
	ctx.r3.s64 = ctx.r31.s64 + -1204;
	// addi r4,r10,29524
	ctx.r4.s64 = ctx.r10.s64 + 29524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x8303012C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28876
	ctx.r11.s64 = ctx.r11.s64 + 28876;
	// addi r3,r9,27472
	ctx.r3.s64 = ctx.r9.s64 + 27472;
	// stw r11,-1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1204, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030144;
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

__attribute__((alias("__imp__sub_83030158"))) PPC_WEAK_FUNC(sub_83030158);
PPC_FUNC_IMPL(__imp__sub_83030158) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-1140
	ctx.r3.s64 = ctx.r31.s64 + -1140;
	// addi r4,r10,29772
	ctx.r4.s64 = ctx.r10.s64 + 29772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83030194;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29544
	ctx.r11.s64 = ctx.r11.s64 + 29544;
	// addi r3,r9,27496
	ctx.r3.s64 = ctx.r9.s64 + 27496;
	// stw r11,-1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1140, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830301AC;
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

__attribute__((alias("__imp__sub_830301C0"))) PPC_WEAK_FUNC(sub_830301C0);
PPC_FUNC_IMPL(__imp__sub_830301C0) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6416
	ctx.r5.s64 = ctx.r11.s64 + -6416;
	// addi r3,r31,-1108
	ctx.r3.s64 = ctx.r31.s64 + -1108;
	// addi r4,r10,30108
	ctx.r4.s64 = ctx.r10.s64 + 30108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x830301FC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29784
	ctx.r11.s64 = ctx.r11.s64 + 29784;
	// addi r3,r9,27520
	ctx.r3.s64 = ctx.r9.s64 + 27520;
	// stw r11,-1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1108, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030214;
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

__attribute__((alias("__imp__sub_83030228"))) PPC_WEAK_FUNC(sub_83030228);
PPC_FUNC_IMPL(__imp__sub_83030228) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-6416
	ctx.r5.s64 = ctx.r11.s64 + -6416;
	// addi r3,r31,-1076
	ctx.r3.s64 = ctx.r31.s64 + -1076;
	// addi r4,r10,30700
	ctx.r4.s64 = ctx.r10.s64 + 30700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,672
	ctx.r6.s64 = 672;
	// bl 0x82b38290
	ctx.lr = 0x83030264;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30124
	ctx.r11.s64 = ctx.r11.s64 + 30124;
	// addi r3,r9,27544
	ctx.r3.s64 = ctx.r9.s64 + 27544;
	// stw r11,-1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1076, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303027C;
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

__attribute__((alias("__imp__sub_83030290"))) PPC_WEAK_FUNC(sub_83030290);
PPC_FUNC_IMPL(__imp__sub_83030290) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-1044
	ctx.r3.s64 = ctx.r31.s64 + -1044;
	// addi r4,r10,30848
	ctx.r4.s64 = ctx.r10.s64 + 30848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x830302CC;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30736
	ctx.r11.s64 = ctx.r11.s64 + 30736;
	// addi r3,r9,27568
	ctx.r3.s64 = ctx.r9.s64 + 27568;
	// stw r11,-1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1044, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830302E4;
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

__attribute__((alias("__imp__sub_830302F8"))) PPC_WEAK_FUNC(sub_830302F8);
PPC_FUNC_IMPL(__imp__sub_830302F8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-1012
	ctx.r3.s64 = ctx.r31.s64 + -1012;
	// addi r4,r10,31000
	ctx.r4.s64 = ctx.r10.s64 + 31000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x83030334;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30868
	ctx.r11.s64 = ctx.r11.s64 + 30868;
	// addi r3,r9,27592
	ctx.r3.s64 = ctx.r9.s64 + 27592;
	// stw r11,-1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1012, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303034C;
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

__attribute__((alias("__imp__sub_83030360"))) PPC_WEAK_FUNC(sub_83030360);
PPC_FUNC_IMPL(__imp__sub_83030360) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-980
	ctx.r3.s64 = ctx.r31.s64 + -980;
	// addi r4,r10,31628
	ctx.r4.s64 = ctx.r10.s64 + 31628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x8303039C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31504
	ctx.r11.s64 = ctx.r11.s64 + 31504;
	// addi r3,r9,27616
	ctx.r3.s64 = ctx.r9.s64 + 27616;
	// stw r11,-980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -980, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830303B4;
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

__attribute__((alias("__imp__sub_830303C8"))) PPC_WEAK_FUNC(sub_830303C8);
PPC_FUNC_IMPL(__imp__sub_830303C8) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-916
	ctx.r3.s64 = ctx.r31.s64 + -916;
	// addi r4,r10,32188
	ctx.r4.s64 = ctx.r10.s64 + 32188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,704
	ctx.r6.s64 = 704;
	// bl 0x82b38290
	ctx.lr = 0x83030404;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31644
	ctx.r11.s64 = ctx.r11.s64 + 31644;
	// addi r3,r9,27640
	ctx.r3.s64 = ctx.r9.s64 + 27640;
	// stw r11,-916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -916, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303041C;
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

__attribute__((alias("__imp__sub_83030430"))) PPC_WEAK_FUNC(sub_83030430);
PPC_FUNC_IMPL(__imp__sub_83030430) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,-884
	ctx.r3.s64 = ctx.r31.s64 + -884;
	// addi r4,r10,32196
	ctx.r4.s64 = ctx.r10.s64 + 32196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8303046C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31652
	ctx.r11.s64 = ctx.r11.s64 + 31652;
	// addi r3,r9,27664
	ctx.r3.s64 = ctx.r9.s64 + 27664;
	// stw r11,-884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -884, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030484;
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

__attribute__((alias("__imp__sub_83030498"))) PPC_WEAK_FUNC(sub_83030498);
PPC_FUNC_IMPL(__imp__sub_83030498) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-916
	ctx.r5.s64 = ctx.r11.s64 + -916;
	// addi r3,r31,-948
	ctx.r3.s64 = ctx.r31.s64 + -948;
	// addi r4,r10,32220
	ctx.r4.s64 = ctx.r10.s64 + 32220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,768
	ctx.r6.s64 = 768;
	// bl 0x82b38290
	ctx.lr = 0x830304D4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31684
	ctx.r11.s64 = ctx.r11.s64 + 31684;
	// addi r3,r9,27688
	ctx.r3.s64 = ctx.r9.s64 + 27688;
	// stw r11,-948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -948, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830304EC;
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

__attribute__((alias("__imp__sub_83030500"))) PPC_WEAK_FUNC(sub_83030500);
PPC_FUNC_IMPL(__imp__sub_83030500) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// addi r3,r31,-852
	ctx.r3.s64 = ctx.r31.s64 + -852;
	// addi r4,r10,32344
	ctx.r4.s64 = ctx.r10.s64 + 32344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8303053C;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32236
	ctx.r11.s64 = ctx.r11.s64 + 32236;
	// addi r3,r9,27712
	ctx.r3.s64 = ctx.r9.s64 + 27712;
	// stw r11,-852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -852, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030554;
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

__attribute__((alias("__imp__sub_83030568"))) PPC_WEAK_FUNC(sub_83030568);
PPC_FUNC_IMPL(__imp__sub_83030568) {
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
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,-820
	ctx.r3.s64 = ctx.r31.s64 + -820;
	// addi r4,r10,32484
	ctx.r4.s64 = ctx.r10.s64 + 32484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830305A4;
	sub_82B38290(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32360
	ctx.r11.s64 = ctx.r11.s64 + 32360;
	// addi r3,r9,27736
	ctx.r3.s64 = ctx.r9.s64 + 27736;
	// stw r11,-820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -820, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830305BC;
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

__attribute__((alias("__imp__sub_830305D0"))) PPC_WEAK_FUNC(sub_830305D0);
PPC_FUNC_IMPL(__imp__sub_830305D0) {
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
	// addi r3,r31,-788
	ctx.r3.s64 = ctx.r31.s64 + -788;
	// addi r4,r10,-32300
	ctx.r4.s64 = ctx.r10.s64 + -32300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8303060C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32560
	ctx.r11.s64 = ctx.r11.s64 + -32560;
	// addi r3,r9,27760
	ctx.r3.s64 = ctx.r9.s64 + 27760;
	// stw r11,-788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -788, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030624;
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

__attribute__((alias("__imp__sub_83030638"))) PPC_WEAK_FUNC(sub_83030638);
PPC_FUNC_IMPL(__imp__sub_83030638) {
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
	// addi r3,r31,-756
	ctx.r3.s64 = ctx.r31.s64 + -756;
	// addi r4,r10,-31600
	ctx.r4.s64 = ctx.r10.s64 + -31600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x83030674;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31808
	ctx.r11.s64 = ctx.r11.s64 + -31808;
	// addi r3,r9,27784
	ctx.r3.s64 = ctx.r9.s64 + 27784;
	// stw r11,-756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303068C;
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

__attribute__((alias("__imp__sub_830306A0"))) PPC_WEAK_FUNC(sub_830306A0);
PPC_FUNC_IMPL(__imp__sub_830306A0) {
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
	// addi r3,r31,-724
	ctx.r3.s64 = ctx.r31.s64 + -724;
	// addi r4,r10,-31452
	ctx.r4.s64 = ctx.r10.s64 + -31452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x830306DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31592
	ctx.r11.s64 = ctx.r11.s64 + -31592;
	// addi r3,r9,27808
	ctx.r3.s64 = ctx.r9.s64 + 27808;
	// stw r11,-724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -724, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830306F4;
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

__attribute__((alias("__imp__sub_83030708"))) PPC_WEAK_FUNC(sub_83030708);
PPC_FUNC_IMPL(__imp__sub_83030708) {
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
	// addi r3,r31,-692
	ctx.r3.s64 = ctx.r31.s64 + -692;
	// addi r4,r10,-30888
	ctx.r4.s64 = ctx.r10.s64 + -30888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83030744;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// addi r3,r9,27832
	ctx.r3.s64 = ctx.r9.s64 + 27832;
	// stw r11,-692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -692, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303075C;
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

__attribute__((alias("__imp__sub_83030770"))) PPC_WEAK_FUNC(sub_83030770);
PPC_FUNC_IMPL(__imp__sub_83030770) {
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
	// addi r5,r11,-7384
	ctx.r5.s64 = ctx.r11.s64 + -7384;
	// addi r3,r31,-660
	ctx.r3.s64 = ctx.r31.s64 + -660;
	// addi r4,r10,-30788
	ctx.r4.s64 = ctx.r10.s64 + -30788;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82b38290
	ctx.lr = 0x830307AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30876
	ctx.r11.s64 = ctx.r11.s64 + -30876;
	// addi r3,r9,27856
	ctx.r3.s64 = ctx.r9.s64 + 27856;
	// stw r11,-660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830307C4;
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

__attribute__((alias("__imp__sub_830307D8"))) PPC_WEAK_FUNC(sub_830307D8);
PPC_FUNC_IMPL(__imp__sub_830307D8) {
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
	// addi r3,r31,-480
	ctx.r3.s64 = ctx.r31.s64 + -480;
	// addi r4,r10,-30608
	ctx.r4.s64 = ctx.r10.s64 + -30608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x83030814;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30772
	ctx.r11.s64 = ctx.r11.s64 + -30772;
	// addi r3,r9,27880
	ctx.r3.s64 = ctx.r9.s64 + 27880;
	// stw r11,-480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303082C;
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

__attribute__((alias("__imp__sub_83030840"))) PPC_WEAK_FUNC(sub_83030840);
PPC_FUNC_IMPL(__imp__sub_83030840) {
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
	// addi r3,r31,-320
	ctx.r3.s64 = ctx.r31.s64 + -320;
	// addi r4,r10,-30120
	ctx.r4.s64 = ctx.r10.s64 + -30120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8303087C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30600
	ctx.r11.s64 = ctx.r11.s64 + -30600;
	// addi r3,r9,27904
	ctx.r3.s64 = ctx.r9.s64 + 27904;
	// stw r11,-320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030894;
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

__attribute__((alias("__imp__sub_830308A8"))) PPC_WEAK_FUNC(sub_830308A8);
PPC_FUNC_IMPL(__imp__sub_830308A8) {
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
	// addi r5,r11,-320
	ctx.r5.s64 = ctx.r11.s64 + -320;
	// addi r3,r31,-448
	ctx.r3.s64 = ctx.r31.s64 + -448;
	// addi r4,r10,-30104
	ctx.r4.s64 = ctx.r10.s64 + -30104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x830308E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30592
	ctx.r11.s64 = ctx.r11.s64 + -30592;
	// addi r3,r9,27928
	ctx.r3.s64 = ctx.r9.s64 + 27928;
	// stw r11,-448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830308FC;
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

__attribute__((alias("__imp__sub_83030910"))) PPC_WEAK_FUNC(sub_83030910);
PPC_FUNC_IMPL(__imp__sub_83030910) {
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
	// addi r5,r11,-320
	ctx.r5.s64 = ctx.r11.s64 + -320;
	// addi r3,r31,-384
	ctx.r3.s64 = ctx.r31.s64 + -384;
	// addi r4,r10,-30084
	ctx.r4.s64 = ctx.r10.s64 + -30084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8303094C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30584
	ctx.r11.s64 = ctx.r11.s64 + -30584;
	// addi r3,r9,27952
	ctx.r3.s64 = ctx.r9.s64 + 27952;
	// stw r11,-384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030964;
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

__attribute__((alias("__imp__sub_83030978"))) PPC_WEAK_FUNC(sub_83030978);
PPC_FUNC_IMPL(__imp__sub_83030978) {
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
	// addi r5,r11,-320
	ctx.r5.s64 = ctx.r11.s64 + -320;
	// addi r3,r31,-352
	ctx.r3.s64 = ctx.r31.s64 + -352;
	// addi r4,r10,-30064
	ctx.r4.s64 = ctx.r10.s64 + -30064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x830309B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30576
	ctx.r11.s64 = ctx.r11.s64 + -30576;
	// addi r3,r9,27976
	ctx.r3.s64 = ctx.r9.s64 + 27976;
	// stw r11,-352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830309CC;
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

__attribute__((alias("__imp__sub_830309E0"))) PPC_WEAK_FUNC(sub_830309E0);
PPC_FUNC_IMPL(__imp__sub_830309E0) {
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
	// addi r5,r11,-320
	ctx.r5.s64 = ctx.r11.s64 + -320;
	// addi r3,r31,-416
	ctx.r3.s64 = ctx.r31.s64 + -416;
	// addi r4,r10,-30040
	ctx.r4.s64 = ctx.r10.s64 + -30040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x83030A1C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30568
	ctx.r11.s64 = ctx.r11.s64 + -30568;
	// addi r3,r9,28000
	ctx.r3.s64 = ctx.r9.s64 + 28000;
	// stw r11,-416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030A34;
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

__attribute__((alias("__imp__sub_83030A48"))) PPC_WEAK_FUNC(sub_83030A48);
PPC_FUNC_IMPL(__imp__sub_83030A48) {
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
	// addi r3,r31,-288
	ctx.r3.s64 = ctx.r31.s64 + -288;
	// addi r4,r10,-28416
	ctx.r4.s64 = ctx.r10.s64 + -28416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,560
	ctx.r6.s64 = 560;
	// bl 0x82b38290
	ctx.lr = 0x83030A84;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30020
	ctx.r11.s64 = ctx.r11.s64 + -30020;
	// addi r3,r9,28024
	ctx.r3.s64 = ctx.r9.s64 + 28024;
	// stw r11,-288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030A9C;
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

__attribute__((alias("__imp__sub_83030AB0"))) PPC_WEAK_FUNC(sub_83030AB0);
PPC_FUNC_IMPL(__imp__sub_83030AB0) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// addi r4,r10,-28408
	ctx.r4.s64 = ctx.r10.s64 + -28408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x83030AEC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30012
	ctx.r11.s64 = ctx.r11.s64 + -30012;
	// addi r3,r9,28048
	ctx.r3.s64 = ctx.r9.s64 + 28048;
	// stw r11,-128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030B04;
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

__attribute__((alias("__imp__sub_83030B18"))) PPC_WEAK_FUNC(sub_83030B18);
PPC_FUNC_IMPL(__imp__sub_83030B18) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-160
	ctx.r3.s64 = ctx.r31.s64 + -160;
	// addi r4,r10,-28392
	ctx.r4.s64 = ctx.r10.s64 + -28392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x83030B54;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29972
	ctx.r11.s64 = ctx.r11.s64 + -29972;
	// addi r3,r9,28072
	ctx.r3.s64 = ctx.r9.s64 + 28072;
	// stw r11,-160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030B6C;
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

__attribute__((alias("__imp__sub_83030B80"))) PPC_WEAK_FUNC(sub_83030B80);
PPC_FUNC_IMPL(__imp__sub_83030B80) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r10,-28376
	ctx.r4.s64 = ctx.r10.s64 + -28376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,704
	ctx.r6.s64 = 704;
	// bl 0x82b38290
	ctx.lr = 0x83030BBC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30004
	ctx.r11.s64 = ctx.r11.s64 + -30004;
	// addi r3,r9,28096
	ctx.r3.s64 = ctx.r9.s64 + 28096;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030BD4;
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

__attribute__((alias("__imp__sub_83030BE8"))) PPC_WEAK_FUNC(sub_83030BE8);
PPC_FUNC_IMPL(__imp__sub_83030BE8) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-224
	ctx.r3.s64 = ctx.r31.s64 + -224;
	// addi r4,r10,-28364
	ctx.r4.s64 = ctx.r10.s64 + -28364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,640
	ctx.r6.s64 = 640;
	// bl 0x82b38290
	ctx.lr = 0x83030C24;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29996
	ctx.r11.s64 = ctx.r11.s64 + -29996;
	// addi r3,r9,28120
	ctx.r3.s64 = ctx.r9.s64 + 28120;
	// stw r11,-224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030C3C;
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

__attribute__((alias("__imp__sub_83030C50"))) PPC_WEAK_FUNC(sub_83030C50);
PPC_FUNC_IMPL(__imp__sub_83030C50) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r10,-28348
	ctx.r4.s64 = ctx.r10.s64 + -28348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,768
	ctx.r6.s64 = 768;
	// bl 0x82b38290
	ctx.lr = 0x83030C8C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29988
	ctx.r11.s64 = ctx.r11.s64 + -29988;
	// addi r3,r9,28144
	ctx.r3.s64 = ctx.r9.s64 + 28144;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030CA4;
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

__attribute__((alias("__imp__sub_83030CB8"))) PPC_WEAK_FUNC(sub_83030CB8);
PPC_FUNC_IMPL(__imp__sub_83030CB8) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// addi r4,r10,-28336
	ctx.r4.s64 = ctx.r10.s64 + -28336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,704
	ctx.r6.s64 = 704;
	// bl 0x82b38290
	ctx.lr = 0x83030CF4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29980
	ctx.r11.s64 = ctx.r11.s64 + -29980;
	// addi r3,r9,28168
	ctx.r3.s64 = ctx.r9.s64 + 28168;
	// stw r11,-64(r31)
	PPC_STORE_U32(ctx.r31.u32 + -64, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030D0C;
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

__attribute__((alias("__imp__sub_83030D20"))) PPC_WEAK_FUNC(sub_83030D20);
PPC_FUNC_IMPL(__imp__sub_83030D20) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-96
	ctx.r3.s64 = ctx.r31.s64 + -96;
	// addi r4,r10,-28320
	ctx.r4.s64 = ctx.r10.s64 + -28320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,592
	ctx.r6.s64 = 592;
	// bl 0x82b38290
	ctx.lr = 0x83030D5C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29964
	ctx.r11.s64 = ctx.r11.s64 + -29964;
	// addi r3,r9,28192
	ctx.r3.s64 = ctx.r9.s64 + 28192;
	// stw r11,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030D74;
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

__attribute__((alias("__imp__sub_83030D88"))) PPC_WEAK_FUNC(sub_83030D88);
PPC_FUNC_IMPL(__imp__sub_83030D88) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r10,-28300
	ctx.r4.s64 = ctx.r10.s64 + -28300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,720
	ctx.r6.s64 = 720;
	// bl 0x82b38290
	ctx.lr = 0x83030DC4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29956
	ctx.r11.s64 = ctx.r11.s64 + -29956;
	// addi r3,r9,28216
	ctx.r3.s64 = ctx.r9.s64 + 28216;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030DDC;
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

__attribute__((alias("__imp__sub_83030DF0"))) PPC_WEAK_FUNC(sub_83030DF0);
PPC_FUNC_IMPL(__imp__sub_83030DF0) {
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
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,-256
	ctx.r3.s64 = ctx.r31.s64 + -256;
	// addi r4,r10,-28284
	ctx.r4.s64 = ctx.r10.s64 + -28284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,752
	ctx.r6.s64 = 752;
	// bl 0x82b38290
	ctx.lr = 0x83030E2C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29948
	ctx.r11.s64 = ctx.r11.s64 + -29948;
	// addi r3,r9,28240
	ctx.r3.s64 = ctx.r9.s64 + 28240;
	// stw r11,-256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030E44;
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

__attribute__((alias("__imp__sub_83030E58"))) PPC_WEAK_FUNC(sub_83030E58);
PPC_FUNC_IMPL(__imp__sub_83030E58) {
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
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,0
	ctx.r3.s64 = ctx.r31.s64 + 0;
	// addi r4,r10,-28264
	ctx.r4.s64 = ctx.r10.s64 + -28264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,768
	ctx.r6.s64 = 768;
	// bl 0x82b38290
	ctx.lr = 0x83030E94;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29940
	ctx.r11.s64 = ctx.r11.s64 + -29940;
	// addi r3,r9,28264
	ctx.r3.s64 = ctx.r9.s64 + 28264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030EAC;
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

__attribute__((alias("__imp__sub_83030EC0"))) PPC_WEAK_FUNC(sub_83030EC0);
PPC_FUNC_IMPL(__imp__sub_83030EC0) {
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
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,-192
	ctx.r3.s64 = ctx.r31.s64 + -192;
	// addi r4,r10,-28240
	ctx.r4.s64 = ctx.r10.s64 + -28240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1008
	ctx.r6.s64 = 1008;
	// bl 0x82b38290
	ctx.lr = 0x83030EFC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29932
	ctx.r11.s64 = ctx.r11.s64 + -29932;
	// addi r3,r9,28288
	ctx.r3.s64 = ctx.r9.s64 + 28288;
	// stw r11,-192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030F14;
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

__attribute__((alias("__imp__sub_83030F28"))) PPC_WEAK_FUNC(sub_83030F28);
PPC_FUNC_IMPL(__imp__sub_83030F28) {
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
	// addi r5,r11,-288
	ctx.r5.s64 = ctx.r11.s64 + -288;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// addi r4,r10,-28220
	ctx.r4.s64 = ctx.r10.s64 + -28220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,704
	ctx.r6.s64 = 704;
	// bl 0x82b38290
	ctx.lr = 0x83030F64;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29924
	ctx.r11.s64 = ctx.r11.s64 + -29924;
	// addi r3,r9,28312
	ctx.r3.s64 = ctx.r9.s64 + 28312;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030F7C;
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

__attribute__((alias("__imp__sub_83030F90"))) PPC_WEAK_FUNC(sub_83030F90);
PPC_FUNC_IMPL(__imp__sub_83030F90) {
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
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r4,r10,-27664
	ctx.r4.s64 = ctx.r10.s64 + -27664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x83030FCC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28208
	ctx.r11.s64 = ctx.r11.s64 + -28208;
	// addi r3,r9,28336
	ctx.r3.s64 = ctx.r9.s64 + 28336;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83030FE4;
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

__attribute__((alias("__imp__sub_83030FF8"))) PPC_WEAK_FUNC(sub_83030FF8);
PPC_FUNC_IMPL(__imp__sub_83030FF8) {
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
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// addi r4,r10,-27556
	ctx.r4.s64 = ctx.r10.s64 + -27556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83031034;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27652
	ctx.r11.s64 = ctx.r11.s64 + -27652;
	// addi r3,r9,28360
	ctx.r3.s64 = ctx.r9.s64 + 28360;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303104C;
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

__attribute__((alias("__imp__sub_83031060"))) PPC_WEAK_FUNC(sub_83031060);
PPC_FUNC_IMPL(__imp__sub_83031060) {
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
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r4,r10,-27388
	ctx.r4.s64 = ctx.r10.s64 + -27388;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8303109C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27532
	ctx.r11.s64 = ctx.r11.s64 + -27532;
	// addi r3,r9,28384
	ctx.r3.s64 = ctx.r9.s64 + 28384;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830310B4;
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

__attribute__((alias("__imp__sub_830310C8"))) PPC_WEAK_FUNC(sub_830310C8);
PPC_FUNC_IMPL(__imp__sub_830310C8) {
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
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r4,r10,-27308
	ctx.r4.s64 = ctx.r10.s64 + -27308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83031104;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27368
	ctx.r11.s64 = ctx.r11.s64 + -27368;
	// addi r3,r9,28408
	ctx.r3.s64 = ctx.r9.s64 + 28408;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303111C;
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

__attribute__((alias("__imp__sub_83031130"))) PPC_WEAK_FUNC(sub_83031130);
PPC_FUNC_IMPL(__imp__sub_83031130) {
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
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// addi r4,r10,-24668
	ctx.r4.s64 = ctx.r10.s64 + -24668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2576
	ctx.r6.s64 = 2576;
	// bl 0x82b38290
	ctx.lr = 0x8303116C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27292
	ctx.r11.s64 = ctx.r11.s64 + -27292;
	// addi r3,r9,28432
	ctx.r3.s64 = ctx.r9.s64 + 28432;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031184;
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

__attribute__((alias("__imp__sub_83031198"))) PPC_WEAK_FUNC(sub_83031198);
PPC_FUNC_IMPL(__imp__sub_83031198) {
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
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// addi r4,r10,-23980
	ctx.r4.s64 = ctx.r10.s64 + -23980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x830311D4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
	// addi r3,r9,28456
	ctx.r3.s64 = ctx.r9.s64 + 28456;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830311EC;
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

__attribute__((alias("__imp__sub_83031200"))) PPC_WEAK_FUNC(sub_83031200);
PPC_FUNC_IMPL(__imp__sub_83031200) {
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
	// addi r5,r11,-4876
	ctx.r5.s64 = ctx.r11.s64 + -4876;
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// addi r4,r10,-23968
	ctx.r4.s64 = ctx.r10.s64 + -23968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x8303123C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24648
	ctx.r11.s64 = ctx.r11.s64 + -24648;
	// addi r3,r9,28480
	ctx.r3.s64 = ctx.r9.s64 + 28480;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031254;
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

__attribute__((alias("__imp__sub_83031268"))) PPC_WEAK_FUNC(sub_83031268);
PPC_FUNC_IMPL(__imp__sub_83031268) {
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
	// addi r3,r31,300
	ctx.r3.s64 = ctx.r31.s64 + 300;
	// addi r4,r10,-23948
	ctx.r4.s64 = ctx.r10.s64 + -23948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830312A4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24640
	ctx.r11.s64 = ctx.r11.s64 + -24640;
	// addi r3,r9,28504
	ctx.r3.s64 = ctx.r9.s64 + 28504;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830312BC;
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

__attribute__((alias("__imp__sub_830312D0"))) PPC_WEAK_FUNC(sub_830312D0);
PPC_FUNC_IMPL(__imp__sub_830312D0) {
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
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// addi r4,r10,-23936
	ctx.r4.s64 = ctx.r10.s64 + -23936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x8303130C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24632
	ctx.r11.s64 = ctx.r11.s64 + -24632;
	// addi r3,r9,28528
	ctx.r3.s64 = ctx.r9.s64 + 28528;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031324;
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

__attribute__((alias("__imp__sub_83031338"))) PPC_WEAK_FUNC(sub_83031338);
PPC_FUNC_IMPL(__imp__sub_83031338) {
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
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// addi r4,r10,-23920
	ctx.r4.s64 = ctx.r10.s64 + -23920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83031374;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24624
	ctx.r11.s64 = ctx.r11.s64 + -24624;
	// addi r3,r9,28552
	ctx.r3.s64 = ctx.r9.s64 + 28552;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303138C;
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

__attribute__((alias("__imp__sub_830313A0"))) PPC_WEAK_FUNC(sub_830313A0);
PPC_FUNC_IMPL(__imp__sub_830313A0) {
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
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// addi r4,r10,-23912
	ctx.r4.s64 = ctx.r10.s64 + -23912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x830313DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24608
	ctx.r11.s64 = ctx.r11.s64 + -24608;
	// addi r3,r9,28576
	ctx.r3.s64 = ctx.r9.s64 + 28576;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830313F4;
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

__attribute__((alias("__imp__sub_83031408"))) PPC_WEAK_FUNC(sub_83031408);
PPC_FUNC_IMPL(__imp__sub_83031408) {
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
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// addi r4,r10,-23900
	ctx.r4.s64 = ctx.r10.s64 + -23900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83031444;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24616
	ctx.r11.s64 = ctx.r11.s64 + -24616;
	// addi r3,r9,28600
	ctx.r3.s64 = ctx.r9.s64 + 28600;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303145C;
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

__attribute__((alias("__imp__sub_83031470"))) PPC_WEAK_FUNC(sub_83031470);
PPC_FUNC_IMPL(__imp__sub_83031470) {
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
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// addi r4,r10,-23808
	ctx.r4.s64 = ctx.r10.s64 + -23808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x830314AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// addi r3,r9,28624
	ctx.r3.s64 = ctx.r9.s64 + 28624;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830314C4;
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

__attribute__((alias("__imp__sub_830314D8"))) PPC_WEAK_FUNC(sub_830314D8);
PPC_FUNC_IMPL(__imp__sub_830314D8) {
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
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// addi r4,r10,-23484
	ctx.r4.s64 = ctx.r10.s64 + -23484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83031514;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23792
	ctx.r11.s64 = ctx.r11.s64 + -23792;
	// addi r3,r9,28648
	ctx.r3.s64 = ctx.r9.s64 + 28648;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303152C;
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

__attribute__((alias("__imp__sub_83031540"))) PPC_WEAK_FUNC(sub_83031540);
PPC_FUNC_IMPL(__imp__sub_83031540) {
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
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// addi r4,r10,-23468
	ctx.r4.s64 = ctx.r10.s64 + -23468;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8303157C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23784
	ctx.r11.s64 = ctx.r11.s64 + -23784;
	// addi r3,r9,28672
	ctx.r3.s64 = ctx.r9.s64 + 28672;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031594;
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

__attribute__((alias("__imp__sub_830315A8"))) PPC_WEAK_FUNC(sub_830315A8);
PPC_FUNC_IMPL(__imp__sub_830315A8) {
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
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// addi r4,r10,-23136
	ctx.r4.s64 = ctx.r10.s64 + -23136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x830315E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23436
	ctx.r11.s64 = ctx.r11.s64 + -23436;
	// addi r3,r9,28696
	ctx.r3.s64 = ctx.r9.s64 + 28696;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830315FC;
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

__attribute__((alias("__imp__sub_83031610"))) PPC_WEAK_FUNC(sub_83031610);
PPC_FUNC_IMPL(__imp__sub_83031610) {
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
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// addi r4,r10,-23124
	ctx.r4.s64 = ctx.r10.s64 + -23124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8303164C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23428
	ctx.r11.s64 = ctx.r11.s64 + -23428;
	// addi r3,r9,28720
	ctx.r3.s64 = ctx.r9.s64 + 28720;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031664;
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

__attribute__((alias("__imp__sub_83031678"))) PPC_WEAK_FUNC(sub_83031678);
PPC_FUNC_IMPL(__imp__sub_83031678) {
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
	// addi r3,r31,720
	ctx.r3.s64 = ctx.r31.s64 + 720;
	// addi r4,r10,-21220
	ctx.r4.s64 = ctx.r10.s64 + -21220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x830316B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23096
	ctx.r11.s64 = ctx.r11.s64 + -23096;
	// addi r3,r9,28744
	ctx.r3.s64 = ctx.r9.s64 + 28744;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830316CC;
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

__attribute__((alias("__imp__sub_830316E0"))) PPC_WEAK_FUNC(sub_830316E0);
PPC_FUNC_IMPL(__imp__sub_830316E0) {
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
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// addi r4,r10,-21200
	ctx.r4.s64 = ctx.r10.s64 + -21200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2928
	ctx.r6.s64 = 2928;
	// bl 0x82b38290
	ctx.lr = 0x8303171C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23104
	ctx.r11.s64 = ctx.r11.s64 + -23104;
	// addi r3,r9,28768
	ctx.r3.s64 = ctx.r9.s64 + 28768;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031734;
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

__attribute__((alias("__imp__sub_83031748"))) PPC_WEAK_FUNC(sub_83031748);
PPC_FUNC_IMPL(__imp__sub_83031748) {
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
	// addi r5,r11,-7416
	ctx.r5.s64 = ctx.r11.s64 + -7416;
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// addi r4,r10,-21184
	ctx.r4.s64 = ctx.r10.s64 + -21184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x83031784;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21192
	ctx.r11.s64 = ctx.r11.s64 + -21192;
	// addi r3,r9,28792
	ctx.r3.s64 = ctx.r9.s64 + 28792;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303179C;
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

__attribute__((alias("__imp__sub_830317B0"))) PPC_WEAK_FUNC(sub_830317B0);
PPC_FUNC_IMPL(__imp__sub_830317B0) {
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
	// addi r11,r11,792
	ctx.r11.s64 = ctx.r11.s64 + 792;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83048c64
	ctx.lr = 0x830317CC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r3,r10,28816
	ctx.r3.s64 = ctx.r10.s64 + 28816;
	// bl 0x82f06a08
	ctx.lr = 0x830317D8;
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

__attribute__((alias("__imp__sub_830317E8"))) PPC_WEAK_FUNC(sub_830317E8);
PPC_FUNC_IMPL(__imp__sub_830317E8) {
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
	// addi r3,r31,1084
	ctx.r3.s64 = ctx.r31.s64 + 1084;
	// addi r4,r10,-20784
	ctx.r4.s64 = ctx.r10.s64 + -20784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,44
	ctx.r6.s64 = 44;
	// bl 0x82b38290
	ctx.lr = 0x83031824;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21176
	ctx.r11.s64 = ctx.r11.s64 + -21176;
	// addi r3,r9,28824
	ctx.r3.s64 = ctx.r9.s64 + 28824;
	// stw r11,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303183C;
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

__attribute__((alias("__imp__sub_83031850"))) PPC_WEAK_FUNC(sub_83031850);
PPC_FUNC_IMPL(__imp__sub_83031850) {
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
	// addi r3,r31,1116
	ctx.r3.s64 = ctx.r31.s64 + 1116;
	// addi r4,r10,-20760
	ctx.r4.s64 = ctx.r10.s64 + -20760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8303188C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// addi r3,r9,28848
	ctx.r3.s64 = ctx.r9.s64 + 28848;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830318A4;
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

__attribute__((alias("__imp__sub_830318B8"))) PPC_WEAK_FUNC(sub_830318B8);
PPC_FUNC_IMPL(__imp__sub_830318B8) {
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
	// addi r5,r11,7872
	ctx.r5.s64 = ctx.r11.s64 + 7872;
	// addi r3,r31,1148
	ctx.r3.s64 = ctx.r31.s64 + 1148;
	// addi r4,r10,-20736
	ctx.r4.s64 = ctx.r10.s64 + -20736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x830318F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21160
	ctx.r11.s64 = ctx.r11.s64 + -21160;
	// addi r3,r9,28872
	ctx.r3.s64 = ctx.r9.s64 + 28872;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303190C;
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

__attribute__((alias("__imp__sub_83031920"))) PPC_WEAK_FUNC(sub_83031920);
PPC_FUNC_IMPL(__imp__sub_83031920) {
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
	// addi r3,r31,1180
	ctx.r3.s64 = ctx.r31.s64 + 1180;
	// addi r4,r10,-20552
	ctx.r4.s64 = ctx.r10.s64 + -20552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,624
	ctx.r6.s64 = 624;
	// bl 0x82b38290
	ctx.lr = 0x8303195C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20720
	ctx.r11.s64 = ctx.r11.s64 + -20720;
	// addi r3,r9,28896
	ctx.r3.s64 = ctx.r9.s64 + 28896;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031974;
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

__attribute__((alias("__imp__sub_83031988"))) PPC_WEAK_FUNC(sub_83031988);
PPC_FUNC_IMPL(__imp__sub_83031988) {
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
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r31,r11,1272
	ctx.r31.s64 = ctx.r11.s64 + 1272;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82f06d60
	ctx.lr = 0x830319B0;
	sub_82F06D60(ctx, base);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// addi r10,r31,268
	ctx.r10.s64 = ctx.r31.s64 + 268;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// stw r10,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r10.u32);
	// addi r3,r9,28928
	ctx.r3.s64 = ctx.r9.s64 + 28928;
	// bl 0x82f06a08
	ctx.lr = 0x830319CC;
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

__attribute__((alias("__imp__sub_830319E0"))) PPC_WEAK_FUNC(sub_830319E0);
PPC_FUNC_IMPL(__imp__sub_830319E0) {
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
	// addi r3,r11,2060
	ctx.r3.s64 = ctx.r11.s64 + 2060;
	// bl 0x83048c64
	ctx.lr = 0x830319F8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r3,r10,28920
	ctx.r3.s64 = ctx.r10.s64 + 28920;
	// bl 0x82f06a08
	ctx.lr = 0x83031A04;
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

__attribute__((alias("__imp__sub_83031A18"))) PPC_WEAK_FUNC(sub_83031A18);
PPC_FUNC_IMPL(__imp__sub_83031A18) {
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
	// addi r5,r11,7872
	ctx.r5.s64 = ctx.r11.s64 + 7872;
	// addi r3,r31,2120
	ctx.r3.s64 = ctx.r31.s64 + 2120;
	// addi r4,r10,-19144
	ctx.r4.s64 = ctx.r10.s64 + -19144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83031A54;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19400
	ctx.r11.s64 = ctx.r11.s64 + -19400;
	// addi r3,r9,28936
	ctx.r3.s64 = ctx.r9.s64 + 28936;
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031A6C;
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

__attribute__((alias("__imp__sub_83031A80"))) PPC_WEAK_FUNC(sub_83031A80);
PPC_FUNC_IMPL(__imp__sub_83031A80) {
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
	// addi r5,r11,2120
	ctx.r5.s64 = ctx.r11.s64 + 2120;
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// addi r4,r10,-19128
	ctx.r4.s64 = ctx.r10.s64 + -19128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83031ABC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19392
	ctx.r11.s64 = ctx.r11.s64 + -19392;
	// addi r3,r9,28960
	ctx.r3.s64 = ctx.r9.s64 + 28960;
	// stw r11,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031AD4;
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

__attribute__((alias("__imp__sub_83031AE8"))) PPC_WEAK_FUNC(sub_83031AE8);
PPC_FUNC_IMPL(__imp__sub_83031AE8) {
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
	// addi r3,r31,2152
	ctx.r3.s64 = ctx.r31.s64 + 2152;
	// addi r4,r10,-18884
	ctx.r4.s64 = ctx.r10.s64 + -18884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,856
	ctx.r6.s64 = 856;
	// bl 0x82b38290
	ctx.lr = 0x83031B24;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19104
	ctx.r11.s64 = ctx.r11.s64 + -19104;
	// addi r3,r9,28984
	ctx.r3.s64 = ctx.r9.s64 + 28984;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031B3C;
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

__attribute__((alias("__imp__sub_83031B50"))) PPC_WEAK_FUNC(sub_83031B50);
PPC_FUNC_IMPL(__imp__sub_83031B50) {
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
	// addi r5,r11,7872
	ctx.r5.s64 = ctx.r11.s64 + 7872;
	// addi r3,r31,2184
	ctx.r3.s64 = ctx.r31.s64 + 2184;
	// addi r4,r10,-18768
	ctx.r4.s64 = ctx.r10.s64 + -18768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x83031B8C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18868
	ctx.r11.s64 = ctx.r11.s64 + -18868;
	// addi r3,r9,29008
	ctx.r3.s64 = ctx.r9.s64 + 29008;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031BA4;
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

__attribute__((alias("__imp__sub_83031BB8"))) PPC_WEAK_FUNC(sub_83031BB8);
PPC_FUNC_IMPL(__imp__sub_83031BB8) {
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
	// addi r5,r11,7872
	ctx.r5.s64 = ctx.r11.s64 + 7872;
	// addi r3,r31,2216
	ctx.r3.s64 = ctx.r31.s64 + 2216;
	// addi r4,r10,-18644
	ctx.r4.s64 = ctx.r10.s64 + -18644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x83031BF4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18748
	ctx.r11.s64 = ctx.r11.s64 + -18748;
	// addi r3,r9,29032
	ctx.r3.s64 = ctx.r9.s64 + 29032;
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031C0C;
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

__attribute__((alias("__imp__sub_83031C20"))) PPC_WEAK_FUNC(sub_83031C20);
PPC_FUNC_IMPL(__imp__sub_83031C20) {
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
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// addi r4,r10,-29352
	ctx.r4.s64 = ctx.r10.s64 + -29352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,368
	ctx.r6.s64 = 368;
	// bl 0x82b38290
	ctx.lr = 0x83031C5C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18624
	ctx.r11.s64 = ctx.r11.s64 + -18624;
	// addi r3,r9,29056
	ctx.r3.s64 = ctx.r9.s64 + 29056;
	// stw r11,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031C74;
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

__attribute__((alias("__imp__sub_83031C88"))) PPC_WEAK_FUNC(sub_83031C88);
PPC_FUNC_IMPL(__imp__sub_83031C88) {
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
	// addi r5,r11,-6288
	ctx.r5.s64 = ctx.r11.s64 + -6288;
	// addi r3,r31,2280
	ctx.r3.s64 = ctx.r31.s64 + 2280;
	// addi r4,r10,-29368
	ctx.r4.s64 = ctx.r10.s64 + -29368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x83031CC4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18296
	ctx.r11.s64 = ctx.r11.s64 + -18296;
	// addi r3,r9,29080
	ctx.r3.s64 = ctx.r9.s64 + 29080;
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031CDC;
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

__attribute__((alias("__imp__sub_83031CF0"))) PPC_WEAK_FUNC(sub_83031CF0);
PPC_FUNC_IMPL(__imp__sub_83031CF0) {
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
	// addi r5,r11,-5392
	ctx.r5.s64 = ctx.r11.s64 + -5392;
	// addi r3,r31,2376
	ctx.r3.s64 = ctx.r31.s64 + 2376;
	// addi r4,r10,-29400
	ctx.r4.s64 = ctx.r10.s64 + -29400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83031D2C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18044
	ctx.r11.s64 = ctx.r11.s64 + -18044;
	// addi r3,r9,29104
	ctx.r3.s64 = ctx.r9.s64 + 29104;
	// stw r11,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031D44;
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

__attribute__((alias("__imp__sub_83031D58"))) PPC_WEAK_FUNC(sub_83031D58);
PPC_FUNC_IMPL(__imp__sub_83031D58) {
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
	// addi r5,r11,2376
	ctx.r5.s64 = ctx.r11.s64 + 2376;
	// addi r3,r31,2408
	ctx.r3.s64 = ctx.r31.s64 + 2408;
	// addi r4,r10,-17632
	ctx.r4.s64 = ctx.r10.s64 + -17632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83031D94;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18036
	ctx.r11.s64 = ctx.r11.s64 + -18036;
	// addi r3,r9,29128
	ctx.r3.s64 = ctx.r9.s64 + 29128;
	// stw r11,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031DAC;
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

__attribute__((alias("__imp__sub_83031DC0"))) PPC_WEAK_FUNC(sub_83031DC0);
PPC_FUNC_IMPL(__imp__sub_83031DC0) {
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
	// addi r5,r11,2376
	ctx.r5.s64 = ctx.r11.s64 + 2376;
	// addi r3,r31,2312
	ctx.r3.s64 = ctx.r31.s64 + 2312;
	// addi r4,r10,-17612
	ctx.r4.s64 = ctx.r10.s64 + -17612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83031DFC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18028
	ctx.r11.s64 = ctx.r11.s64 + -18028;
	// addi r3,r9,29152
	ctx.r3.s64 = ctx.r9.s64 + 29152;
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031E14;
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

__attribute__((alias("__imp__sub_83031E28"))) PPC_WEAK_FUNC(sub_83031E28);
PPC_FUNC_IMPL(__imp__sub_83031E28) {
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
	// addi r5,r11,2376
	ctx.r5.s64 = ctx.r11.s64 + 2376;
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// addi r4,r10,-17592
	ctx.r4.s64 = ctx.r10.s64 + -17592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83031E64;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18020
	ctx.r11.s64 = ctx.r11.s64 + -18020;
	// addi r3,r9,29176
	ctx.r3.s64 = ctx.r9.s64 + 29176;
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031E7C;
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

__attribute__((alias("__imp__sub_83031E90"))) PPC_WEAK_FUNC(sub_83031E90);
PPC_FUNC_IMPL(__imp__sub_83031E90) {
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
	// addi r3,r31,2440
	ctx.r3.s64 = ctx.r31.s64 + 2440;
	// addi r4,r10,-29308
	ctx.r4.s64 = ctx.r10.s64 + -29308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83031ECC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17552
	ctx.r11.s64 = ctx.r11.s64 + -17552;
	// addi r3,r9,29200
	ctx.r3.s64 = ctx.r9.s64 + 29200;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031EE4;
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

__attribute__((alias("__imp__sub_83031EF8"))) PPC_WEAK_FUNC(sub_83031EF8);
PPC_FUNC_IMPL(__imp__sub_83031EF8) {
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
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// addi r4,r10,-29384
	ctx.r4.s64 = ctx.r10.s64 + -29384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x83031F34;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17216
	ctx.r11.s64 = ctx.r11.s64 + -17216;
	// addi r3,r9,29224
	ctx.r3.s64 = ctx.r9.s64 + 29224;
	// stw r11,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031F4C;
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

__attribute__((alias("__imp__sub_83031F60"))) PPC_WEAK_FUNC(sub_83031F60);
PPC_FUNC_IMPL(__imp__sub_83031F60) {
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
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// addi r4,r10,-16812
	ctx.r4.s64 = ctx.r10.s64 + -16812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x83031F9C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16884
	ctx.r11.s64 = ctx.r11.s64 + -16884;
	// addi r3,r9,29248
	ctx.r3.s64 = ctx.r9.s64 + 29248;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83031FB4;
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

__attribute__((alias("__imp__sub_83031FC8"))) PPC_WEAK_FUNC(sub_83031FC8);
PPC_FUNC_IMPL(__imp__sub_83031FC8) {
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
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// addi r4,r10,-16724
	ctx.r4.s64 = ctx.r10.s64 + -16724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83032004;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16796
	ctx.r11.s64 = ctx.r11.s64 + -16796;
	// addi r3,r9,29272
	ctx.r3.s64 = ctx.r9.s64 + 29272;
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303201C;
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

__attribute__((alias("__imp__sub_83032030"))) PPC_WEAK_FUNC(sub_83032030);
PPC_FUNC_IMPL(__imp__sub_83032030) {
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
	// addi r3,r31,2568
	ctx.r3.s64 = ctx.r31.s64 + 2568;
	// addi r4,r10,-16592
	ctx.r4.s64 = ctx.r10.s64 + -16592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8303206C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r3,r9,29296
	ctx.r3.s64 = ctx.r9.s64 + 29296;
	// stw r11,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032084;
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

__attribute__((alias("__imp__sub_83032098"))) PPC_WEAK_FUNC(sub_83032098);
PPC_FUNC_IMPL(__imp__sub_83032098) {
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
	// addi r3,r31,2600
	ctx.r3.s64 = ctx.r31.s64 + 2600;
	// addi r4,r10,-16416
	ctx.r4.s64 = ctx.r10.s64 + -16416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830320D4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16572
	ctx.r11.s64 = ctx.r11.s64 + -16572;
	// addi r3,r9,29320
	ctx.r3.s64 = ctx.r9.s64 + 29320;
	// stw r11,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830320EC;
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

__attribute__((alias("__imp__sub_83032100"))) PPC_WEAK_FUNC(sub_83032100);
PPC_FUNC_IMPL(__imp__sub_83032100) {
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
	// addi r3,r31,2632
	ctx.r3.s64 = ctx.r31.s64 + 2632;
	// addi r4,r10,-16404
	ctx.r4.s64 = ctx.r10.s64 + -16404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8303213C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16564
	ctx.r11.s64 = ctx.r11.s64 + -16564;
	// addi r3,r9,29344
	ctx.r3.s64 = ctx.r9.s64 + 29344;
	// stw r11,2632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032154;
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

__attribute__((alias("__imp__sub_83032168"))) PPC_WEAK_FUNC(sub_83032168);
PPC_FUNC_IMPL(__imp__sub_83032168) {
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
	// addi r3,r31,2664
	ctx.r3.s64 = ctx.r31.s64 + 2664;
	// addi r4,r10,-15840
	ctx.r4.s64 = ctx.r10.s64 + -15840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x830321A4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16016
	ctx.r11.s64 = ctx.r11.s64 + -16016;
	// addi r3,r9,29368
	ctx.r3.s64 = ctx.r9.s64 + 29368;
	// stw r11,2664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830321BC;
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

__attribute__((alias("__imp__sub_830321D0"))) PPC_WEAK_FUNC(sub_830321D0);
PPC_FUNC_IMPL(__imp__sub_830321D0) {
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
	// addi r3,r31,2696
	ctx.r3.s64 = ctx.r31.s64 + 2696;
	// addi r4,r10,-15636
	ctx.r4.s64 = ctx.r10.s64 + -15636;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8303220C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15820
	ctx.r11.s64 = ctx.r11.s64 + -15820;
	// addi r3,r9,29392
	ctx.r3.s64 = ctx.r9.s64 + 29392;
	// stw r11,2696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032224;
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

__attribute__((alias("__imp__sub_83032238"))) PPC_WEAK_FUNC(sub_83032238);
PPC_FUNC_IMPL(__imp__sub_83032238) {
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
	// addi r3,r31,2728
	ctx.r3.s64 = ctx.r31.s64 + 2728;
	// addi r4,r10,-12796
	ctx.r4.s64 = ctx.r10.s64 + -12796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x83032274;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12848
	ctx.r11.s64 = ctx.r11.s64 + -12848;
	// addi r3,r9,29416
	ctx.r3.s64 = ctx.r9.s64 + 29416;
	// stw r11,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303228C;
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

__attribute__((alias("__imp__sub_830322A0"))) PPC_WEAK_FUNC(sub_830322A0);
PPC_FUNC_IMPL(__imp__sub_830322A0) {
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
	// addi r3,r31,2760
	ctx.r3.s64 = ctx.r31.s64 + 2760;
	// addi r4,r10,-12744
	ctx.r4.s64 = ctx.r10.s64 + -12744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x830322DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12772
	ctx.r11.s64 = ctx.r11.s64 + -12772;
	// addi r3,r9,29440
	ctx.r3.s64 = ctx.r9.s64 + 29440;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830322F4;
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

__attribute__((alias("__imp__sub_83032308"))) PPC_WEAK_FUNC(sub_83032308);
PPC_FUNC_IMPL(__imp__sub_83032308) {
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
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// addi r4,r10,-12596
	ctx.r4.s64 = ctx.r10.s64 + -12596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x83032344;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12716
	ctx.r11.s64 = ctx.r11.s64 + -12716;
	// addi r3,r9,29464
	ctx.r3.s64 = ctx.r9.s64 + 29464;
	// stw r11,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303235C;
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

__attribute__((alias("__imp__sub_83032370"))) PPC_WEAK_FUNC(sub_83032370);
PPC_FUNC_IMPL(__imp__sub_83032370) {
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
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// addi r4,r10,-12528
	ctx.r4.s64 = ctx.r10.s64 + -12528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830323AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12576
	ctx.r11.s64 = ctx.r11.s64 + -12576;
	// addi r3,r9,29488
	ctx.r3.s64 = ctx.r9.s64 + 29488;
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830323C4;
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

__attribute__((alias("__imp__sub_830323D8"))) PPC_WEAK_FUNC(sub_830323D8);
PPC_FUNC_IMPL(__imp__sub_830323D8) {
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
	// addi r3,r31,2856
	ctx.r3.s64 = ctx.r31.s64 + 2856;
	// addi r4,r10,-12412
	ctx.r4.s64 = ctx.r10.s64 + -12412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83032414;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12508
	ctx.r11.s64 = ctx.r11.s64 + -12508;
	// addi r3,r9,29512
	ctx.r3.s64 = ctx.r9.s64 + 29512;
	// stw r11,2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303242C;
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

__attribute__((alias("__imp__sub_83032440"))) PPC_WEAK_FUNC(sub_83032440);
PPC_FUNC_IMPL(__imp__sub_83032440) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-16688
	ctx.r5.s64 = ctx.r11.s64 + -16688;
	// addi r3,r31,2920
	ctx.r3.s64 = ctx.r31.s64 + 2920;
	// addi r4,r10,-12096
	ctx.r4.s64 = ctx.r10.s64 + -12096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8303247C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12392
	ctx.r11.s64 = ctx.r11.s64 + -12392;
	// addi r3,r9,29536
	ctx.r3.s64 = ctx.r9.s64 + 29536;
	// stw r11,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032494;
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

__attribute__((alias("__imp__sub_830324A8"))) PPC_WEAK_FUNC(sub_830324A8);
PPC_FUNC_IMPL(__imp__sub_830324A8) {
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
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// addi r4,r10,-12080
	ctx.r4.s64 = ctx.r10.s64 + -12080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x830324E4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12384
	ctx.r11.s64 = ctx.r11.s64 + -12384;
	// addi r3,r9,29560
	ctx.r3.s64 = ctx.r9.s64 + 29560;
	// stw r11,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830324FC;
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

__attribute__((alias("__imp__sub_83032510"))) PPC_WEAK_FUNC(sub_83032510);
PPC_FUNC_IMPL(__imp__sub_83032510) {
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
	// addi r3,r31,3016
	ctx.r3.s64 = ctx.r31.s64 + 3016;
	// addi r4,r10,-11568
	ctx.r4.s64 = ctx.r10.s64 + -11568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8303254C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12068
	ctx.r11.s64 = ctx.r11.s64 + -12068;
	// addi r3,r9,29584
	ctx.r3.s64 = ctx.r9.s64 + 29584;
	// stw r11,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032564;
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

__attribute__((alias("__imp__sub_83032578"))) PPC_WEAK_FUNC(sub_83032578);
PPC_FUNC_IMPL(__imp__sub_83032578) {
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
	// addi r3,r31,3048
	ctx.r3.s64 = ctx.r31.s64 + 3048;
	// addi r4,r10,-11532
	ctx.r4.s64 = ctx.r10.s64 + -11532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x830325B4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12060
	ctx.r11.s64 = ctx.r11.s64 + -12060;
	// addi r3,r9,29608
	ctx.r3.s64 = ctx.r9.s64 + 29608;
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830325CC;
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

__attribute__((alias("__imp__sub_830325E0"))) PPC_WEAK_FUNC(sub_830325E0);
PPC_FUNC_IMPL(__imp__sub_830325E0) {
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
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// addi r4,r10,-11500
	ctx.r4.s64 = ctx.r10.s64 + -11500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x8303261C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12052
	ctx.r11.s64 = ctx.r11.s64 + -12052;
	// addi r3,r9,29632
	ctx.r3.s64 = ctx.r9.s64 + 29632;
	// stw r11,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032634;
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

__attribute__((alias("__imp__sub_83032648"))) PPC_WEAK_FUNC(sub_83032648);
PPC_FUNC_IMPL(__imp__sub_83032648) {
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
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,2984
	ctx.r3.s64 = ctx.r31.s64 + 2984;
	// addi r4,r10,-11464
	ctx.r4.s64 = ctx.r10.s64 + -11464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3392
	ctx.r6.s64 = 3392;
	// bl 0x82b38290
	ctx.lr = 0x83032684;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12044
	ctx.r11.s64 = ctx.r11.s64 + -12044;
	// addi r3,r9,29656
	ctx.r3.s64 = ctx.r9.s64 + 29656;
	// stw r11,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303269C;
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

__attribute__((alias("__imp__sub_830326B0"))) PPC_WEAK_FUNC(sub_830326B0);
PPC_FUNC_IMPL(__imp__sub_830326B0) {
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
	// addi r3,r31,3080
	ctx.r3.s64 = ctx.r31.s64 + 3080;
	// addi r4,r10,-11436
	ctx.r4.s64 = ctx.r10.s64 + -11436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x830326EC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11916
	ctx.r11.s64 = ctx.r11.s64 + -11916;
	// addi r3,r9,29680
	ctx.r3.s64 = ctx.r9.s64 + 29680;
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032704;
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

__attribute__((alias("__imp__sub_83032718"))) PPC_WEAK_FUNC(sub_83032718);
PPC_FUNC_IMPL(__imp__sub_83032718) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-15216
	ctx.r5.s64 = ctx.r11.s64 + -15216;
	// addi r3,r31,3112
	ctx.r3.s64 = ctx.r31.s64 + 3112;
	// addi r4,r10,-11404
	ctx.r4.s64 = ctx.r10.s64 + -11404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83032754;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11908
	ctx.r11.s64 = ctx.r11.s64 + -11908;
	// addi r3,r9,29704
	ctx.r3.s64 = ctx.r9.s64 + 29704;
	// stw r11,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303276C;
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

__attribute__((alias("__imp__sub_83032780"))) PPC_WEAK_FUNC(sub_83032780);
PPC_FUNC_IMPL(__imp__sub_83032780) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-15216
	ctx.r5.s64 = ctx.r11.s64 + -15216;
	// addi r3,r31,3176
	ctx.r3.s64 = ctx.r31.s64 + 3176;
	// addi r4,r10,-11376
	ctx.r4.s64 = ctx.r10.s64 + -11376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830327BC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11876
	ctx.r11.s64 = ctx.r11.s64 + -11876;
	// addi r3,r9,29728
	ctx.r3.s64 = ctx.r9.s64 + 29728;
	// stw r11,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830327D4;
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

__attribute__((alias("__imp__sub_830327E8"))) PPC_WEAK_FUNC(sub_830327E8);
PPC_FUNC_IMPL(__imp__sub_830327E8) {
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
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-15216
	ctx.r5.s64 = ctx.r11.s64 + -15216;
	// addi r3,r31,3144
	ctx.r3.s64 = ctx.r31.s64 + 3144;
	// addi r4,r10,-11344
	ctx.r4.s64 = ctx.r10.s64 + -11344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83032824;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11844
	ctx.r11.s64 = ctx.r11.s64 + -11844;
	// addi r3,r9,29752
	ctx.r3.s64 = ctx.r9.s64 + 29752;
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303283C;
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

__attribute__((alias("__imp__sub_83032850"))) PPC_WEAK_FUNC(sub_83032850);
PPC_FUNC_IMPL(__imp__sub_83032850) {
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
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// addi r4,r10,-11252
	ctx.r4.s64 = ctx.r10.s64 + -11252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2180
	ctx.r6.s64 = 2180;
	// bl 0x82b38290
	ctx.lr = 0x8303288C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11312
	ctx.r11.s64 = ctx.r11.s64 + -11312;
	// addi r3,r9,29776
	ctx.r3.s64 = ctx.r9.s64 + 29776;
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830328A4;
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

__attribute__((alias("__imp__sub_830328B8"))) PPC_WEAK_FUNC(sub_830328B8);
PPC_FUNC_IMPL(__imp__sub_830328B8) {
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
	// addi r3,r31,3240
	ctx.r3.s64 = ctx.r31.s64 + 3240;
	// addi r4,r10,-11144
	ctx.r4.s64 = ctx.r10.s64 + -11144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x830328F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11232
	ctx.r11.s64 = ctx.r11.s64 + -11232;
	// addi r3,r9,29800
	ctx.r3.s64 = ctx.r9.s64 + 29800;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303290C;
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

__attribute__((alias("__imp__sub_83032920"))) PPC_WEAK_FUNC(sub_83032920);
PPC_FUNC_IMPL(__imp__sub_83032920) {
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
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// addi r4,r10,-10552
	ctx.r4.s64 = ctx.r10.s64 + -10552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5180
	ctx.r6.s64 = 5180;
	// bl 0x82b38290
	ctx.lr = 0x8303295C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11124
	ctx.r11.s64 = ctx.r11.s64 + -11124;
	// addi r3,r9,29824
	ctx.r3.s64 = ctx.r9.s64 + 29824;
	// stw r11,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032974;
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

__attribute__((alias("__imp__sub_83032988"))) PPC_WEAK_FUNC(sub_83032988);
PPC_FUNC_IMPL(__imp__sub_83032988) {
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
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r3,r31,3304
	ctx.r3.s64 = ctx.r31.s64 + 3304;
	// addi r5,r11,-7116
	ctx.r5.s64 = ctx.r11.s64 + -7116;
	// addi r4,r10,-10512
	ctx.r4.s64 = ctx.r10.s64 + -10512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,34076
	ctx.r6.u64 = ctx.r6.u64 | 34076;
	// bl 0x82b38290
	ctx.lr = 0x830329C8;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11132
	ctx.r11.s64 = ctx.r11.s64 + -11132;
	// addi r3,r9,29848
	ctx.r3.s64 = ctx.r9.s64 + 29848;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830329E0;
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

__attribute__((alias("__imp__sub_830329F8"))) PPC_WEAK_FUNC(sub_830329F8);
PPC_FUNC_IMPL(__imp__sub_830329F8) {
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
	// addi r3,r31,3336
	ctx.r3.s64 = ctx.r31.s64 + 3336;
	// addi r4,r10,-10488
	ctx.r4.s64 = ctx.r10.s64 + -10488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83032A34;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11108
	ctx.r11.s64 = ctx.r11.s64 + -11108;
	// addi r3,r9,29872
	ctx.r3.s64 = ctx.r9.s64 + 29872;
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032A4C;
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

__attribute__((alias("__imp__sub_83032A60"))) PPC_WEAK_FUNC(sub_83032A60);
PPC_FUNC_IMPL(__imp__sub_83032A60) {
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
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// addi r4,r10,-10464
	ctx.r4.s64 = ctx.r10.s64 + -10464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,132
	ctx.r6.s64 = 132;
	// bl 0x82b38290
	ctx.lr = 0x83032A9C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11116
	ctx.r11.s64 = ctx.r11.s64 + -11116;
	// addi r3,r9,29896
	ctx.r3.s64 = ctx.r9.s64 + 29896;
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032AB4;
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

__attribute__((alias("__imp__sub_83032AC8"))) PPC_WEAK_FUNC(sub_83032AC8);
PPC_FUNC_IMPL(__imp__sub_83032AC8) {
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
	// addi r3,r31,3400
	ctx.r3.s64 = ctx.r31.s64 + 3400;
	// addi r4,r10,-10316
	ctx.r4.s64 = ctx.r10.s64 + -10316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83032B04;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10440
	ctx.r11.s64 = ctx.r11.s64 + -10440;
	// addi r3,r9,29920
	ctx.r3.s64 = ctx.r9.s64 + 29920;
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032B1C;
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

__attribute__((alias("__imp__sub_83032B30"))) PPC_WEAK_FUNC(sub_83032B30);
PPC_FUNC_IMPL(__imp__sub_83032B30) {
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
	// addi r3,r31,3432
	ctx.r3.s64 = ctx.r31.s64 + 3432;
	// addi r4,r10,-10272
	ctx.r4.s64 = ctx.r10.s64 + -10272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83032B6C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// addi r3,r9,29944
	ctx.r3.s64 = ctx.r9.s64 + 29944;
	// stw r11,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032B84;
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

__attribute__((alias("__imp__sub_83032B98"))) PPC_WEAK_FUNC(sub_83032B98);
PPC_FUNC_IMPL(__imp__sub_83032B98) {
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
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// addi r4,r10,-10056
	ctx.r4.s64 = ctx.r10.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83032BD4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10236
	ctx.r11.s64 = ctx.r11.s64 + -10236;
	// addi r3,r9,29968
	ctx.r3.s64 = ctx.r9.s64 + 29968;
	// stw r11,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032BEC;
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

__attribute__((alias("__imp__sub_83032C00"))) PPC_WEAK_FUNC(sub_83032C00);
PPC_FUNC_IMPL(__imp__sub_83032C00) {
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
	// addi r3,r31,3528
	ctx.r3.s64 = ctx.r31.s64 + 3528;
	// addi r4,r10,-9852
	ctx.r4.s64 = ctx.r10.s64 + -9852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x83032C3C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10024
	ctx.r11.s64 = ctx.r11.s64 + -10024;
	// addi r3,r9,29992
	ctx.r3.s64 = ctx.r9.s64 + 29992;
	// stw r11,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032C54;
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

__attribute__((alias("__imp__sub_83032C68"))) PPC_WEAK_FUNC(sub_83032C68);
PPC_FUNC_IMPL(__imp__sub_83032C68) {
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
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r3,r31,3496
	ctx.r3.s64 = ctx.r31.s64 + 3496;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r4,r10,-9812
	ctx.r4.s64 = ctx.r10.s64 + -9812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,1340
	ctx.r6.u64 = ctx.r6.u64 | 1340;
	// bl 0x82b38290
	ctx.lr = 0x83032CA8;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// addi r3,r9,30016
	ctx.r3.s64 = ctx.r9.s64 + 30016;
	// stw r11,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032CC0;
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

__attribute__((alias("__imp__sub_83032CD8"))) PPC_WEAK_FUNC(sub_83032CD8);
PPC_FUNC_IMPL(__imp__sub_83032CD8) {
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
	// addi r3,r31,3560
	ctx.r3.s64 = ctx.r31.s64 + 3560;
	// addi r4,r10,-9352
	ctx.r4.s64 = ctx.r10.s64 + -9352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x83032D14;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9588
	ctx.r11.s64 = ctx.r11.s64 + -9588;
	// addi r3,r9,30040
	ctx.r3.s64 = ctx.r9.s64 + 30040;
	// stw r11,3560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032D2C;
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

__attribute__((alias("__imp__sub_83032D40"))) PPC_WEAK_FUNC(sub_83032D40);
PPC_FUNC_IMPL(__imp__sub_83032D40) {
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
	// addi r3,r31,3824
	ctx.r3.s64 = ctx.r31.s64 + 3824;
	// addi r4,r10,-9280
	ctx.r4.s64 = ctx.r10.s64 + -9280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83032D7C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9328
	ctx.r11.s64 = ctx.r11.s64 + -9328;
	// addi r3,r9,30064
	ctx.r3.s64 = ctx.r9.s64 + 30064;
	// stw r11,3824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032D94;
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

__attribute__((alias("__imp__sub_83032DA8"))) PPC_WEAK_FUNC(sub_83032DA8);
PPC_FUNC_IMPL(__imp__sub_83032DA8) {
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
	// addi r3,r31,3856
	ctx.r3.s64 = ctx.r31.s64 + 3856;
	// addi r4,r10,-29132
	ctx.r4.s64 = ctx.r10.s64 + -29132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1984
	ctx.r6.s64 = 1984;
	// bl 0x82b38290
	ctx.lr = 0x83032DE4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9336
	ctx.r11.s64 = ctx.r11.s64 + -9336;
	// addi r3,r9,30088
	ctx.r3.s64 = ctx.r9.s64 + 30088;
	// stw r11,3856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032DFC;
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

__attribute__((alias("__imp__sub_83032E10"))) PPC_WEAK_FUNC(sub_83032E10);
PPC_FUNC_IMPL(__imp__sub_83032E10) {
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
	// addi r3,r31,3888
	ctx.r3.s64 = ctx.r31.s64 + 3888;
	// addi r4,r10,-29148
	ctx.r4.s64 = ctx.r10.s64 + -29148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,320
	ctx.r6.s64 = 320;
	// bl 0x82b38290
	ctx.lr = 0x83032E4C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9240
	ctx.r11.s64 = ctx.r11.s64 + -9240;
	// addi r3,r9,30112
	ctx.r3.s64 = ctx.r9.s64 + 30112;
	// stw r11,3888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032E64;
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

__attribute__((alias("__imp__sub_83032E78"))) PPC_WEAK_FUNC(sub_83032E78);
PPC_FUNC_IMPL(__imp__sub_83032E78) {
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
	// addi r3,r31,3952
	ctx.r3.s64 = ctx.r31.s64 + 3952;
	// addi r4,r10,-8964
	ctx.r4.s64 = ctx.r10.s64 + -8964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83032EB4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9064
	ctx.r11.s64 = ctx.r11.s64 + -9064;
	// addi r3,r9,30136
	ctx.r3.s64 = ctx.r9.s64 + 30136;
	// stw r11,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032ECC;
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

__attribute__((alias("__imp__sub_83032EE0"))) PPC_WEAK_FUNC(sub_83032EE0);
PPC_FUNC_IMPL(__imp__sub_83032EE0) {
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
	// addi r3,r31,3920
	ctx.r3.s64 = ctx.r31.s64 + 3920;
	// addi r4,r10,-8936
	ctx.r4.s64 = ctx.r10.s64 + -8936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83032F1C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9072
	ctx.r11.s64 = ctx.r11.s64 + -9072;
	// addi r3,r9,30160
	ctx.r3.s64 = ctx.r9.s64 + 30160;
	// stw r11,3920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032F34;
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

__attribute__((alias("__imp__sub_83032F48"))) PPC_WEAK_FUNC(sub_83032F48);
PPC_FUNC_IMPL(__imp__sub_83032F48) {
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
	// addi r3,r31,4016
	ctx.r3.s64 = ctx.r31.s64 + 4016;
	// addi r4,r10,-8800
	ctx.r4.s64 = ctx.r10.s64 + -8800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83032F84;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8912
	ctx.r11.s64 = ctx.r11.s64 + -8912;
	// addi r3,r9,30184
	ctx.r3.s64 = ctx.r9.s64 + 30184;
	// stw r11,4016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83032F9C;
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

__attribute__((alias("__imp__sub_83032FB0"))) PPC_WEAK_FUNC(sub_83032FB0);
PPC_FUNC_IMPL(__imp__sub_83032FB0) {
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
	// addi r3,r31,3984
	ctx.r3.s64 = ctx.r31.s64 + 3984;
	// addi r4,r10,-8760
	ctx.r4.s64 = ctx.r10.s64 + -8760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1828
	ctx.r6.s64 = 1828;
	// bl 0x82b38290
	ctx.lr = 0x83032FEC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8920
	ctx.r11.s64 = ctx.r11.s64 + -8920;
	// addi r3,r9,30208
	ctx.r3.s64 = ctx.r9.s64 + 30208;
	// stw r11,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033004;
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

__attribute__((alias("__imp__sub_83033018"))) PPC_WEAK_FUNC(sub_83033018);
PPC_FUNC_IMPL(__imp__sub_83033018) {
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
	// addi r3,r31,4080
	ctx.r3.s64 = ctx.r31.s64 + 4080;
	// addi r4,r10,-8592
	ctx.r4.s64 = ctx.r10.s64 + -8592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83033054;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8732
	ctx.r11.s64 = ctx.r11.s64 + -8732;
	// addi r3,r9,30232
	ctx.r3.s64 = ctx.r9.s64 + 30232;
	// stw r11,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303306C;
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

__attribute__((alias("__imp__sub_83033080"))) PPC_WEAK_FUNC(sub_83033080);
PPC_FUNC_IMPL(__imp__sub_83033080) {
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
	// addi r3,r31,4048
	ctx.r3.s64 = ctx.r31.s64 + 4048;
	// addi r4,r10,-8556
	ctx.r4.s64 = ctx.r10.s64 + -8556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x830330BC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8724
	ctx.r11.s64 = ctx.r11.s64 + -8724;
	// addi r3,r9,30256
	ctx.r3.s64 = ctx.r9.s64 + 30256;
	// stw r11,4048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830330D4;
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

__attribute__((alias("__imp__sub_830330E8"))) PPC_WEAK_FUNC(sub_830330E8);
PPC_FUNC_IMPL(__imp__sub_830330E8) {
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
	// addi r3,r31,4144
	ctx.r3.s64 = ctx.r31.s64 + 4144;
	// addi r4,r10,-8524
	ctx.r4.s64 = ctx.r10.s64 + -8524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83033124;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8716
	ctx.r11.s64 = ctx.r11.s64 + -8716;
	// addi r3,r9,30280
	ctx.r3.s64 = ctx.r9.s64 + 30280;
	// stw r11,4144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303313C;
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

__attribute__((alias("__imp__sub_83033150"))) PPC_WEAK_FUNC(sub_83033150);
PPC_FUNC_IMPL(__imp__sub_83033150) {
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
	// addi r3,r31,4176
	ctx.r3.s64 = ctx.r31.s64 + 4176;
	// addi r4,r10,-8484
	ctx.r4.s64 = ctx.r10.s64 + -8484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8303318C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8708
	ctx.r11.s64 = ctx.r11.s64 + -8708;
	// addi r3,r9,30304
	ctx.r3.s64 = ctx.r9.s64 + 30304;
	// stw r11,4176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830331A4;
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

__attribute__((alias("__imp__sub_830331B8"))) PPC_WEAK_FUNC(sub_830331B8);
PPC_FUNC_IMPL(__imp__sub_830331B8) {
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
	// addi r3,r31,4112
	ctx.r3.s64 = ctx.r31.s64 + 4112;
	// addi r4,r10,-8444
	ctx.r4.s64 = ctx.r10.s64 + -8444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x830331F4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8700
	ctx.r11.s64 = ctx.r11.s64 + -8700;
	// addi r3,r9,30328
	ctx.r3.s64 = ctx.r9.s64 + 30328;
	// stw r11,4112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303320C;
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

__attribute__((alias("__imp__sub_83033220"))) PPC_WEAK_FUNC(sub_83033220);
PPC_FUNC_IMPL(__imp__sub_83033220) {
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
	// addi r3,r31,4240
	ctx.r3.s64 = ctx.r31.s64 + 4240;
	// addi r4,r10,-8292
	ctx.r4.s64 = ctx.r10.s64 + -8292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8303325C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8400
	ctx.r11.s64 = ctx.r11.s64 + -8400;
	// addi r3,r9,30352
	ctx.r3.s64 = ctx.r9.s64 + 30352;
	// stw r11,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033274;
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

__attribute__((alias("__imp__sub_83033288"))) PPC_WEAK_FUNC(sub_83033288);
PPC_FUNC_IMPL(__imp__sub_83033288) {
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
	// addi r3,r31,4208
	ctx.r3.s64 = ctx.r31.s64 + 4208;
	// addi r4,r10,-29172
	ctx.r4.s64 = ctx.r10.s64 + -29172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1032
	ctx.r6.s64 = 1032;
	// bl 0x82b38290
	ctx.lr = 0x830332C4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8408
	ctx.r11.s64 = ctx.r11.s64 + -8408;
	// addi r3,r9,30376
	ctx.r3.s64 = ctx.r9.s64 + 30376;
	// stw r11,4208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830332DC;
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

__attribute__((alias("__imp__sub_830332F0"))) PPC_WEAK_FUNC(sub_830332F0);
PPC_FUNC_IMPL(__imp__sub_830332F0) {
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
	// addi r3,r31,4272
	ctx.r3.s64 = ctx.r31.s64 + 4272;
	// addi r4,r10,-29328
	ctx.r4.s64 = ctx.r10.s64 + -29328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8303332C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8260
	ctx.r11.s64 = ctx.r11.s64 + -8260;
	// addi r3,r9,30400
	ctx.r3.s64 = ctx.r9.s64 + 30400;
	// stw r11,4272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033344;
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

__attribute__((alias("__imp__sub_83033358"))) PPC_WEAK_FUNC(sub_83033358);
PPC_FUNC_IMPL(__imp__sub_83033358) {
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
	// addi r5,r11,4368
	ctx.r5.s64 = ctx.r11.s64 + 4368;
	// addi r3,r31,4304
	ctx.r3.s64 = ctx.r31.s64 + 4304;
	// addi r4,r10,-8068
	ctx.r4.s64 = ctx.r10.s64 + -8068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x83033394;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8164
	ctx.r11.s64 = ctx.r11.s64 + -8164;
	// addi r3,r9,30424
	ctx.r3.s64 = ctx.r9.s64 + 30424;
	// stw r11,4304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830333AC;
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

__attribute__((alias("__imp__sub_830333C0"))) PPC_WEAK_FUNC(sub_830333C0);
PPC_FUNC_IMPL(__imp__sub_830333C0) {
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
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// addi r3,r31,4336
	ctx.r3.s64 = ctx.r31.s64 + 4336;
	// addi r4,r10,-7852
	ctx.r4.s64 = ctx.r10.s64 + -7852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,448
	ctx.r6.s64 = 448;
	// bl 0x82b38290
	ctx.lr = 0x830333FC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8044
	ctx.r11.s64 = ctx.r11.s64 + -8044;
	// addi r3,r9,30448
	ctx.r3.s64 = ctx.r9.s64 + 30448;
	// stw r11,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033414;
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

__attribute__((alias("__imp__sub_83033428"))) PPC_WEAK_FUNC(sub_83033428);
PPC_FUNC_IMPL(__imp__sub_83033428) {
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
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// addi r3,r31,4368
	ctx.r3.s64 = ctx.r31.s64 + 4368;
	// addi r4,r10,-7832
	ctx.r4.s64 = ctx.r10.s64 + -7832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x83033464;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8036
	ctx.r11.s64 = ctx.r11.s64 + -8036;
	// addi r3,r9,30472
	ctx.r3.s64 = ctx.r9.s64 + 30472;
	// stw r11,4368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303347C;
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

__attribute__((alias("__imp__sub_83033490"))) PPC_WEAK_FUNC(sub_83033490);
PPC_FUNC_IMPL(__imp__sub_83033490) {
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
	// addi r5,r11,4272
	ctx.r5.s64 = ctx.r11.s64 + 4272;
	// addi r3,r31,4432
	ctx.r3.s64 = ctx.r31.s64 + 4432;
	// addi r4,r10,-7620
	ctx.r4.s64 = ctx.r10.s64 + -7620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,592
	ctx.r6.s64 = 592;
	// bl 0x82b38290
	ctx.lr = 0x830334CC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// addi r3,r9,30496
	ctx.r3.s64 = ctx.r9.s64 + 30496;
	// stw r11,4432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830334E4;
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

__attribute__((alias("__imp__sub_830334F8"))) PPC_WEAK_FUNC(sub_830334F8);
PPC_FUNC_IMPL(__imp__sub_830334F8) {
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
	// addi r5,r11,4432
	ctx.r5.s64 = ctx.r11.s64 + 4432;
	// addi r3,r31,4400
	ctx.r3.s64 = ctx.r31.s64 + 4400;
	// addi r4,r10,-7604
	ctx.r4.s64 = ctx.r10.s64 + -7604;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,592
	ctx.r6.s64 = 592;
	// bl 0x82b38290
	ctx.lr = 0x83033534;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7800
	ctx.r11.s64 = ctx.r11.s64 + -7800;
	// addi r3,r9,30520
	ctx.r3.s64 = ctx.r9.s64 + 30520;
	// stw r11,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303354C;
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

__attribute__((alias("__imp__sub_83033560"))) PPC_WEAK_FUNC(sub_83033560);
PPC_FUNC_IMPL(__imp__sub_83033560) {
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
	// addi r3,r31,4464
	ctx.r3.s64 = ctx.r31.s64 + 4464;
	// addi r4,r10,-7504
	ctx.r4.s64 = ctx.r10.s64 + -7504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8303359C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7580
	ctx.r11.s64 = ctx.r11.s64 + -7580;
	// addi r3,r9,30544
	ctx.r3.s64 = ctx.r9.s64 + 30544;
	// stw r11,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830335B4;
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

__attribute__((alias("__imp__sub_830335C8"))) PPC_WEAK_FUNC(sub_830335C8);
PPC_FUNC_IMPL(__imp__sub_830335C8) {
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
	// addi r3,r31,4496
	ctx.r3.s64 = ctx.r31.s64 + 4496;
	// addi r4,r10,-7284
	ctx.r4.s64 = ctx.r10.s64 + -7284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83033604;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7492
	ctx.r11.s64 = ctx.r11.s64 + -7492;
	// addi r3,r9,30568
	ctx.r3.s64 = ctx.r9.s64 + 30568;
	// stw r11,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303361C;
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

__attribute__((alias("__imp__sub_83033630"))) PPC_WEAK_FUNC(sub_83033630);
PPC_FUNC_IMPL(__imp__sub_83033630) {
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
	// addi r3,r31,4528
	ctx.r3.s64 = ctx.r31.s64 + 4528;
	// addi r4,r10,-7272
	ctx.r4.s64 = ctx.r10.s64 + -7272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8303366C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7484
	ctx.r11.s64 = ctx.r11.s64 + -7484;
	// addi r3,r9,30592
	ctx.r3.s64 = ctx.r9.s64 + 30592;
	// stw r11,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033684;
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

__attribute__((alias("__imp__sub_83033698"))) PPC_WEAK_FUNC(sub_83033698);
PPC_FUNC_IMPL(__imp__sub_83033698) {
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
	// addi r3,r31,4560
	ctx.r3.s64 = ctx.r31.s64 + 4560;
	// addi r4,r10,-6472
	ctx.r4.s64 = ctx.r10.s64 + -6472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x830336D4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7148
	ctx.r11.s64 = ctx.r11.s64 + -7148;
	// addi r3,r9,30616
	ctx.r3.s64 = ctx.r9.s64 + 30616;
	// stw r11,4560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830336EC;
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

__attribute__((alias("__imp__sub_83033700"))) PPC_WEAK_FUNC(sub_83033700);
PPC_FUNC_IMPL(__imp__sub_83033700) {
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
	// addi r3,r31,4592
	ctx.r3.s64 = ctx.r31.s64 + 4592;
	// addi r4,r10,-6432
	ctx.r4.s64 = ctx.r10.s64 + -6432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x8303373C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7156
	ctx.r11.s64 = ctx.r11.s64 + -7156;
	// addi r3,r9,30640
	ctx.r3.s64 = ctx.r9.s64 + 30640;
	// stw r11,4592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033754;
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

__attribute__((alias("__imp__sub_83033768"))) PPC_WEAK_FUNC(sub_83033768);
PPC_FUNC_IMPL(__imp__sub_83033768) {
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
	// addi r3,r31,4624
	ctx.r3.s64 = ctx.r31.s64 + 4624;
	// addi r4,r10,-6248
	ctx.r4.s64 = ctx.r10.s64 + -6248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,448
	ctx.r6.s64 = 448;
	// bl 0x82b38290
	ctx.lr = 0x830337A4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6404
	ctx.r11.s64 = ctx.r11.s64 + -6404;
	// addi r3,r9,30664
	ctx.r3.s64 = ctx.r9.s64 + 30664;
	// stw r11,4624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830337BC;
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

__attribute__((alias("__imp__sub_830337D0"))) PPC_WEAK_FUNC(sub_830337D0);
PPC_FUNC_IMPL(__imp__sub_830337D0) {
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
	// addi r3,r31,4848
	ctx.r3.s64 = ctx.r31.s64 + 4848;
	// addi r4,r10,-5936
	ctx.r4.s64 = ctx.r10.s64 + -5936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x82b38290
	ctx.lr = 0x8303380C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6208
	ctx.r11.s64 = ctx.r11.s64 + -6208;
	// addi r3,r9,30688
	ctx.r3.s64 = ctx.r9.s64 + 30688;
	// stw r11,4848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033824;
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

__attribute__((alias("__imp__sub_83033838"))) PPC_WEAK_FUNC(sub_83033838);
PPC_FUNC_IMPL(__imp__sub_83033838) {
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
	// addi r5,r11,4848
	ctx.r5.s64 = ctx.r11.s64 + 4848;
	// addi r3,r31,4656
	ctx.r3.s64 = ctx.r31.s64 + 4656;
	// addi r4,r10,-5904
	ctx.r4.s64 = ctx.r10.s64 + -5904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,384
	ctx.r6.s64 = 384;
	// bl 0x82b38290
	ctx.lr = 0x83033874;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6200
	ctx.r11.s64 = ctx.r11.s64 + -6200;
	// addi r3,r9,30712
	ctx.r3.s64 = ctx.r9.s64 + 30712;
	// stw r11,4656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303388C;
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

__attribute__((alias("__imp__sub_830338A0"))) PPC_WEAK_FUNC(sub_830338A0);
PPC_FUNC_IMPL(__imp__sub_830338A0) {
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
	// addi r5,r11,4656
	ctx.r5.s64 = ctx.r11.s64 + 4656;
	// addi r3,r31,4880
	ctx.r3.s64 = ctx.r31.s64 + 4880;
	// addi r4,r10,-5876
	ctx.r4.s64 = ctx.r10.s64 + -5876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x830338DC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6192
	ctx.r11.s64 = ctx.r11.s64 + -6192;
	// addi r3,r9,30736
	ctx.r3.s64 = ctx.r9.s64 + 30736;
	// stw r11,4880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830338F4;
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

__attribute__((alias("__imp__sub_83033908"))) PPC_WEAK_FUNC(sub_83033908);
PPC_FUNC_IMPL(__imp__sub_83033908) {
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
	// addi r5,r11,4880
	ctx.r5.s64 = ctx.r11.s64 + 4880;
	// addi r3,r31,4912
	ctx.r3.s64 = ctx.r31.s64 + 4912;
	// addi r4,r10,-5848
	ctx.r4.s64 = ctx.r10.s64 + -5848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x83033944;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -6184;
	// addi r3,r9,30760
	ctx.r3.s64 = ctx.r9.s64 + 30760;
	// stw r11,4912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8303395C;
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

__attribute__((alias("__imp__sub_83033970"))) PPC_WEAK_FUNC(sub_83033970);
PPC_FUNC_IMPL(__imp__sub_83033970) {
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
	// addi r5,r11,4912
	ctx.r5.s64 = ctx.r11.s64 + 4912;
	// addi r3,r31,4816
	ctx.r3.s64 = ctx.r31.s64 + 4816;
	// addi r4,r10,-5812
	ctx.r4.s64 = ctx.r10.s64 + -5812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,736
	ctx.r6.s64 = 736;
	// bl 0x82b38290
	ctx.lr = 0x830339AC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6176
	ctx.r11.s64 = ctx.r11.s64 + -6176;
	// addi r3,r9,30784
	ctx.r3.s64 = ctx.r9.s64 + 30784;
	// stw r11,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830339C4;
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

__attribute__((alias("__imp__sub_830339D8"))) PPC_WEAK_FUNC(sub_830339D8);
PPC_FUNC_IMPL(__imp__sub_830339D8) {
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
	// addi r5,r11,4656
	ctx.r5.s64 = ctx.r11.s64 + 4656;
	// addi r3,r31,4720
	ctx.r3.s64 = ctx.r31.s64 + 4720;
	// addi r4,r10,-5772
	ctx.r4.s64 = ctx.r10.s64 + -5772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x83033A14;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6168
	ctx.r11.s64 = ctx.r11.s64 + -6168;
	// addi r3,r9,30808
	ctx.r3.s64 = ctx.r9.s64 + 30808;
	// stw r11,4720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033A2C;
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

__attribute__((alias("__imp__sub_83033A40"))) PPC_WEAK_FUNC(sub_83033A40);
PPC_FUNC_IMPL(__imp__sub_83033A40) {
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
	// addi r5,r11,4656
	ctx.r5.s64 = ctx.r11.s64 + 4656;
	// addi r3,r31,4752
	ctx.r3.s64 = ctx.r31.s64 + 4752;
	// addi r4,r10,-5736
	ctx.r4.s64 = ctx.r10.s64 + -5736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x83033A7C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6160
	ctx.r11.s64 = ctx.r11.s64 + -6160;
	// addi r3,r9,30832
	ctx.r3.s64 = ctx.r9.s64 + 30832;
	// stw r11,4752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033A94;
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

__attribute__((alias("__imp__sub_83033AA8"))) PPC_WEAK_FUNC(sub_83033AA8);
PPC_FUNC_IMPL(__imp__sub_83033AA8) {
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
	// addi r5,r11,4656
	ctx.r5.s64 = ctx.r11.s64 + 4656;
	// addi r3,r31,4688
	ctx.r3.s64 = ctx.r31.s64 + 4688;
	// addi r4,r10,-5704
	ctx.r4.s64 = ctx.r10.s64 + -5704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,400
	ctx.r6.s64 = 400;
	// bl 0x82b38290
	ctx.lr = 0x83033AE4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6152
	ctx.r11.s64 = ctx.r11.s64 + -6152;
	// addi r3,r9,30856
	ctx.r3.s64 = ctx.r9.s64 + 30856;
	// stw r11,4688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033AFC;
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

__attribute__((alias("__imp__sub_83033B10"))) PPC_WEAK_FUNC(sub_83033B10);
PPC_FUNC_IMPL(__imp__sub_83033B10) {
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
	// addi r5,r11,4848
	ctx.r5.s64 = ctx.r11.s64 + 4848;
	// addi r3,r31,4784
	ctx.r3.s64 = ctx.r31.s64 + 4784;
	// addi r4,r10,-5668
	ctx.r4.s64 = ctx.r10.s64 + -5668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,528
	ctx.r6.s64 = 528;
	// bl 0x82b38290
	ctx.lr = 0x83033B4C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6144
	ctx.r11.s64 = ctx.r11.s64 + -6144;
	// addi r3,r9,30880
	ctx.r3.s64 = ctx.r9.s64 + 30880;
	// stw r11,4784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033B64;
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

__attribute__((alias("__imp__sub_83033B78"))) PPC_WEAK_FUNC(sub_83033B78);
PPC_FUNC_IMPL(__imp__sub_83033B78) {
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
	// addi r3,r31,4944
	ctx.r3.s64 = ctx.r31.s64 + 4944;
	// addi r4,r10,-5208
	ctx.r4.s64 = ctx.r10.s64 + -5208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83033BB4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5640
	ctx.r11.s64 = ctx.r11.s64 + -5640;
	// addi r3,r9,30904
	ctx.r3.s64 = ctx.r9.s64 + 30904;
	// stw r11,4944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033BCC;
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

__attribute__((alias("__imp__sub_83033BE0"))) PPC_WEAK_FUNC(sub_83033BE0);
PPC_FUNC_IMPL(__imp__sub_83033BE0) {
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
	// addi r3,r31,5040
	ctx.r3.s64 = ctx.r31.s64 + 5040;
	// addi r4,r10,-5184
	ctx.r4.s64 = ctx.r10.s64 + -5184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83033C1C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5600
	ctx.r11.s64 = ctx.r11.s64 + -5600;
	// addi r3,r9,30928
	ctx.r3.s64 = ctx.r9.s64 + 30928;
	// stw r11,5040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033C34;
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

__attribute__((alias("__imp__sub_83033C48"))) PPC_WEAK_FUNC(sub_83033C48);
PPC_FUNC_IMPL(__imp__sub_83033C48) {
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
	// addi r5,r11,4944
	ctx.r5.s64 = ctx.r11.s64 + 4944;
	// addi r3,r31,5008
	ctx.r3.s64 = ctx.r31.s64 + 5008;
	// addi r4,r10,-5164
	ctx.r4.s64 = ctx.r10.s64 + -5164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83033C84;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5632
	ctx.r11.s64 = ctx.r11.s64 + -5632;
	// addi r3,r9,30952
	ctx.r3.s64 = ctx.r9.s64 + 30952;
	// stw r11,5008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033C9C;
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

__attribute__((alias("__imp__sub_83033CB0"))) PPC_WEAK_FUNC(sub_83033CB0);
PPC_FUNC_IMPL(__imp__sub_83033CB0) {
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
	// addi r5,r11,4944
	ctx.r5.s64 = ctx.r11.s64 + 4944;
	// addi r3,r31,4976
	ctx.r3.s64 = ctx.r31.s64 + 4976;
	// addi r4,r10,-5128
	ctx.r4.s64 = ctx.r10.s64 + -5128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83033CEC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5624
	ctx.r11.s64 = ctx.r11.s64 + -5624;
	// addi r3,r9,30976
	ctx.r3.s64 = ctx.r9.s64 + 30976;
	// stw r11,4976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033D04;
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

__attribute__((alias("__imp__sub_83033D18"))) PPC_WEAK_FUNC(sub_83033D18);
PPC_FUNC_IMPL(__imp__sub_83033D18) {
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
	// addi r5,r11,4944
	ctx.r5.s64 = ctx.r11.s64 + 4944;
	// addi r3,r31,5104
	ctx.r3.s64 = ctx.r31.s64 + 5104;
	// addi r4,r10,-5096
	ctx.r4.s64 = ctx.r10.s64 + -5096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82b38290
	ctx.lr = 0x83033D54;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5616
	ctx.r11.s64 = ctx.r11.s64 + -5616;
	// addi r3,r9,31000
	ctx.r3.s64 = ctx.r9.s64 + 31000;
	// stw r11,5104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033D6C;
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

__attribute__((alias("__imp__sub_83033D80"))) PPC_WEAK_FUNC(sub_83033D80);
PPC_FUNC_IMPL(__imp__sub_83033D80) {
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
	// addi r5,r11,4944
	ctx.r5.s64 = ctx.r11.s64 + 4944;
	// addi r3,r31,5072
	ctx.r3.s64 = ctx.r31.s64 + 5072;
	// addi r4,r10,-5060
	ctx.r4.s64 = ctx.r10.s64 + -5060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83033DBC;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5608
	ctx.r11.s64 = ctx.r11.s64 + -5608;
	// addi r3,r9,31024
	ctx.r3.s64 = ctx.r9.s64 + 31024;
	// stw r11,5072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033DD4;
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

__attribute__((alias("__imp__sub_83033DE8"))) PPC_WEAK_FUNC(sub_83033DE8);
PPC_FUNC_IMPL(__imp__sub_83033DE8) {
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
	// addi r3,r31,5264
	ctx.r3.s64 = ctx.r31.s64 + 5264;
	// addi r4,r10,-4832
	ctx.r4.s64 = ctx.r10.s64 + -4832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x83033E24;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// addi r3,r9,31048
	ctx.r3.s64 = ctx.r9.s64 + 31048;
	// stw r11,5264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033E3C;
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

__attribute__((alias("__imp__sub_83033E50"))) PPC_WEAK_FUNC(sub_83033E50);
PPC_FUNC_IMPL(__imp__sub_83033E50) {
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
	// addi r3,r31,5200
	ctx.r3.s64 = ctx.r31.s64 + 5200;
	// addi r4,r10,-4804
	ctx.r4.s64 = ctx.r10.s64 + -4804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83033E8C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5024
	ctx.r11.s64 = ctx.r11.s64 + -5024;
	// addi r3,r9,31072
	ctx.r3.s64 = ctx.r9.s64 + 31072;
	// stw r11,5200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033EA4;
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

__attribute__((alias("__imp__sub_83033EB8"))) PPC_WEAK_FUNC(sub_83033EB8);
PPC_FUNC_IMPL(__imp__sub_83033EB8) {
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
	// addi r3,r31,5232
	ctx.r3.s64 = ctx.r31.s64 + 5232;
	// addi r4,r10,-4772
	ctx.r4.s64 = ctx.r10.s64 + -4772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83033EF4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5008
	ctx.r11.s64 = ctx.r11.s64 + -5008;
	// addi r3,r9,31096
	ctx.r3.s64 = ctx.r9.s64 + 31096;
	// stw r11,5232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033F0C;
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

__attribute__((alias("__imp__sub_83033F20"))) PPC_WEAK_FUNC(sub_83033F20);
PPC_FUNC_IMPL(__imp__sub_83033F20) {
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
	// addi r3,r31,5168
	ctx.r3.s64 = ctx.r31.s64 + 5168;
	// addi r4,r10,-4748
	ctx.r4.s64 = ctx.r10.s64 + -4748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x83033F5C;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4980
	ctx.r11.s64 = ctx.r11.s64 + -4980;
	// addi r3,r9,31120
	ctx.r3.s64 = ctx.r9.s64 + 31120;
	// stw r11,5168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033F74;
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

__attribute__((alias("__imp__sub_83033F88"))) PPC_WEAK_FUNC(sub_83033F88);
PPC_FUNC_IMPL(__imp__sub_83033F88) {
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
	// addi r3,r31,5136
	ctx.r3.s64 = ctx.r31.s64 + 5136;
	// addi r4,r10,-4732
	ctx.r4.s64 = ctx.r10.s64 + -4732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83033FC4;
	sub_82B38290(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4948
	ctx.r11.s64 = ctx.r11.s64 + -4948;
	// addi r3,r9,31144
	ctx.r3.s64 = ctx.r9.s64 + 31144;
	// stw r11,5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83033FDC;
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


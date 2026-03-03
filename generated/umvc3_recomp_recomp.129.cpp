#include "umvc3_recomp_init.h"

__attribute__((alias("__imp__sub_8301ADA8"))) PPC_WEAK_FUNC(sub_8301ADA8);
PPC_FUNC_IMPL(__imp__sub_8301ADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22200
	ctx.r3.s64 = ctx.r31.s64 + 22200;
	// addi r4,r10,31880
	ctx.r4.s64 = ctx.r10.s64 + 31880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301ADE4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17440
	ctx.r11.s64 = ctx.r11.s64 + 17440;
	// addi r3,r9,7576
	ctx.r3.s64 = ctx.r9.s64 + 7576;
	// stw r11,22200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301ADFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AE10"))) PPC_WEAK_FUNC(sub_8301AE10);
PPC_FUNC_IMPL(__imp__sub_8301AE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23192
	ctx.r3.s64 = ctx.r31.s64 + 23192;
	// addi r4,r10,31900
	ctx.r4.s64 = ctx.r10.s64 + 31900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AE4C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17520
	ctx.r11.s64 = ctx.r11.s64 + 17520;
	// addi r3,r9,7600
	ctx.r3.s64 = ctx.r9.s64 + 7600;
	// stw r11,23192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AE64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AE78"))) PPC_WEAK_FUNC(sub_8301AE78);
PPC_FUNC_IMPL(__imp__sub_8301AE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21080
	ctx.r3.s64 = ctx.r31.s64 + 21080;
	// addi r4,r10,31920
	ctx.r4.s64 = ctx.r10.s64 + 31920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AEB4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17600
	ctx.r11.s64 = ctx.r11.s64 + 17600;
	// addi r3,r9,7624
	ctx.r3.s64 = ctx.r9.s64 + 7624;
	// stw r11,21080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AECC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AEE0"))) PPC_WEAK_FUNC(sub_8301AEE0);
PPC_FUNC_IMPL(__imp__sub_8301AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21848
	ctx.r3.s64 = ctx.r31.s64 + 21848;
	// addi r4,r10,31940
	ctx.r4.s64 = ctx.r10.s64 + 31940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AF1C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17680
	ctx.r11.s64 = ctx.r11.s64 + 17680;
	// addi r3,r9,7648
	ctx.r3.s64 = ctx.r9.s64 + 7648;
	// stw r11,21848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AF34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AF48"))) PPC_WEAK_FUNC(sub_8301AF48);
PPC_FUNC_IMPL(__imp__sub_8301AF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21752
	ctx.r3.s64 = ctx.r31.s64 + 21752;
	// addi r4,r10,31960
	ctx.r4.s64 = ctx.r10.s64 + 31960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AF84;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r3,r9,7672
	ctx.r3.s64 = ctx.r9.s64 + 7672;
	// stw r11,21752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AF9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AFB0"))) PPC_WEAK_FUNC(sub_8301AFB0);
PPC_FUNC_IMPL(__imp__sub_8301AFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24472
	ctx.r3.s64 = ctx.r31.s64 + 24472;
	// addi r4,r10,31980
	ctx.r4.s64 = ctx.r10.s64 + 31980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AFEC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17840
	ctx.r11.s64 = ctx.r11.s64 + 17840;
	// addi r3,r9,7696
	ctx.r3.s64 = ctx.r9.s64 + 7696;
	// stw r11,24472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B004;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B018"))) PPC_WEAK_FUNC(sub_8301B018);
PPC_FUNC_IMPL(__imp__sub_8301B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25144
	ctx.r3.s64 = ctx.r31.s64 + 25144;
	// addi r4,r10,32000
	ctx.r4.s64 = ctx.r10.s64 + 32000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B054;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17920
	ctx.r11.s64 = ctx.r11.s64 + 17920;
	// addi r3,r9,7720
	ctx.r3.s64 = ctx.r9.s64 + 7720;
	// stw r11,25144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B06C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B080"))) PPC_WEAK_FUNC(sub_8301B080);
PPC_FUNC_IMPL(__imp__sub_8301B080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24984
	ctx.r3.s64 = ctx.r31.s64 + 24984;
	// addi r4,r10,32020
	ctx.r4.s64 = ctx.r10.s64 + 32020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B0BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18000
	ctx.r11.s64 = ctx.r11.s64 + 18000;
	// addi r3,r9,7744
	ctx.r3.s64 = ctx.r9.s64 + 7744;
	// stw r11,24984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B0D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B0E8"))) PPC_WEAK_FUNC(sub_8301B0E8);
PPC_FUNC_IMPL(__imp__sub_8301B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21368
	ctx.r3.s64 = ctx.r31.s64 + 21368;
	// addi r4,r10,32040
	ctx.r4.s64 = ctx.r10.s64 + 32040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B124;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18080
	ctx.r11.s64 = ctx.r11.s64 + 18080;
	// addi r3,r9,7768
	ctx.r3.s64 = ctx.r9.s64 + 7768;
	// stw r11,21368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B13C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B150"))) PPC_WEAK_FUNC(sub_8301B150);
PPC_FUNC_IMPL(__imp__sub_8301B150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27640
	ctx.r3.s64 = ctx.r31.s64 + 27640;
	// addi r4,r10,32060
	ctx.r4.s64 = ctx.r10.s64 + 32060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B18C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18160
	ctx.r11.s64 = ctx.r11.s64 + 18160;
	// addi r3,r9,7792
	ctx.r3.s64 = ctx.r9.s64 + 7792;
	// stw r11,27640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B1A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B1B8"))) PPC_WEAK_FUNC(sub_8301B1B8);
PPC_FUNC_IMPL(__imp__sub_8301B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22456
	ctx.r3.s64 = ctx.r31.s64 + 22456;
	// addi r4,r10,32080
	ctx.r4.s64 = ctx.r10.s64 + 32080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B1F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18240
	ctx.r11.s64 = ctx.r11.s64 + 18240;
	// addi r3,r9,7816
	ctx.r3.s64 = ctx.r9.s64 + 7816;
	// stw r11,22456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B20C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B220"))) PPC_WEAK_FUNC(sub_8301B220);
PPC_FUNC_IMPL(__imp__sub_8301B220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21240
	ctx.r3.s64 = ctx.r31.s64 + 21240;
	// addi r4,r10,32100
	ctx.r4.s64 = ctx.r10.s64 + 32100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B25C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18320
	ctx.r11.s64 = ctx.r11.s64 + 18320;
	// addi r3,r9,7840
	ctx.r3.s64 = ctx.r9.s64 + 7840;
	// stw r11,21240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B274;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B288"))) PPC_WEAK_FUNC(sub_8301B288);
PPC_FUNC_IMPL(__imp__sub_8301B288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26904
	ctx.r3.s64 = ctx.r31.s64 + 26904;
	// addi r4,r10,32120
	ctx.r4.s64 = ctx.r10.s64 + 32120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B2C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18400
	ctx.r11.s64 = ctx.r11.s64 + 18400;
	// addi r3,r9,7864
	ctx.r3.s64 = ctx.r9.s64 + 7864;
	// stw r11,26904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B2DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B2F0"))) PPC_WEAK_FUNC(sub_8301B2F0);
PPC_FUNC_IMPL(__imp__sub_8301B2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22776
	ctx.r3.s64 = ctx.r31.s64 + 22776;
	// addi r4,r10,32140
	ctx.r4.s64 = ctx.r10.s64 + 32140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B32C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18480
	ctx.r11.s64 = ctx.r11.s64 + 18480;
	// addi r3,r9,7888
	ctx.r3.s64 = ctx.r9.s64 + 7888;
	// stw r11,22776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B344;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B358"))) PPC_WEAK_FUNC(sub_8301B358);
PPC_FUNC_IMPL(__imp__sub_8301B358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23352
	ctx.r3.s64 = ctx.r31.s64 + 23352;
	// addi r4,r10,32160
	ctx.r4.s64 = ctx.r10.s64 + 32160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B394;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18560
	ctx.r11.s64 = ctx.r11.s64 + 18560;
	// addi r3,r9,7912
	ctx.r3.s64 = ctx.r9.s64 + 7912;
	// stw r11,23352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B3AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B3C0"))) PPC_WEAK_FUNC(sub_8301B3C0);
PPC_FUNC_IMPL(__imp__sub_8301B3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24248
	ctx.r3.s64 = ctx.r31.s64 + 24248;
	// addi r4,r10,32180
	ctx.r4.s64 = ctx.r10.s64 + 32180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B3FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18640
	ctx.r11.s64 = ctx.r11.s64 + 18640;
	// addi r3,r9,7936
	ctx.r3.s64 = ctx.r9.s64 + 7936;
	// stw r11,24248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B428"))) PPC_WEAK_FUNC(sub_8301B428);
PPC_FUNC_IMPL(__imp__sub_8301B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24152
	ctx.r3.s64 = ctx.r31.s64 + 24152;
	// addi r4,r10,32200
	ctx.r4.s64 = ctx.r10.s64 + 32200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B464;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18720
	ctx.r11.s64 = ctx.r11.s64 + 18720;
	// addi r3,r9,7960
	ctx.r3.s64 = ctx.r9.s64 + 7960;
	// stw r11,24152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B47C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B490"))) PPC_WEAK_FUNC(sub_8301B490);
PPC_FUNC_IMPL(__imp__sub_8301B490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24600
	ctx.r3.s64 = ctx.r31.s64 + 24600;
	// addi r4,r10,32220
	ctx.r4.s64 = ctx.r10.s64 + 32220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B4CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18800
	ctx.r11.s64 = ctx.r11.s64 + 18800;
	// addi r3,r9,7984
	ctx.r3.s64 = ctx.r9.s64 + 7984;
	// stw r11,24600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B4E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B4F8"))) PPC_WEAK_FUNC(sub_8301B4F8);
PPC_FUNC_IMPL(__imp__sub_8301B4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24792
	ctx.r3.s64 = ctx.r31.s64 + 24792;
	// addi r4,r10,32240
	ctx.r4.s64 = ctx.r10.s64 + 32240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B534;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18880
	ctx.r11.s64 = ctx.r11.s64 + 18880;
	// addi r3,r9,8008
	ctx.r3.s64 = ctx.r9.s64 + 8008;
	// stw r11,24792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B54C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B560"))) PPC_WEAK_FUNC(sub_8301B560);
PPC_FUNC_IMPL(__imp__sub_8301B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27288
	ctx.r3.s64 = ctx.r31.s64 + 27288;
	// addi r4,r10,32260
	ctx.r4.s64 = ctx.r10.s64 + 32260;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B59C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18960
	ctx.r11.s64 = ctx.r11.s64 + 18960;
	// addi r3,r9,8032
	ctx.r3.s64 = ctx.r9.s64 + 8032;
	// stw r11,27288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B5B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B5C8"))) PPC_WEAK_FUNC(sub_8301B5C8);
PPC_FUNC_IMPL(__imp__sub_8301B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27096
	ctx.r3.s64 = ctx.r31.s64 + 27096;
	// addi r4,r10,32280
	ctx.r4.s64 = ctx.r10.s64 + 32280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B604;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19040
	ctx.r11.s64 = ctx.r11.s64 + 19040;
	// addi r3,r9,8056
	ctx.r3.s64 = ctx.r9.s64 + 8056;
	// stw r11,27096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B61C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B630"))) PPC_WEAK_FUNC(sub_8301B630);
PPC_FUNC_IMPL(__imp__sub_8301B630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27768
	ctx.r3.s64 = ctx.r31.s64 + 27768;
	// addi r4,r10,32300
	ctx.r4.s64 = ctx.r10.s64 + 32300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B66C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19120
	ctx.r11.s64 = ctx.r11.s64 + 19120;
	// addi r3,r9,8080
	ctx.r3.s64 = ctx.r9.s64 + 8080;
	// stw r11,27768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B684;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B698"))) PPC_WEAK_FUNC(sub_8301B698);
PPC_FUNC_IMPL(__imp__sub_8301B698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25016
	ctx.r3.s64 = ctx.r31.s64 + 25016;
	// addi r4,r10,32320
	ctx.r4.s64 = ctx.r10.s64 + 32320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B6D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 + 19200;
	// addi r3,r9,8104
	ctx.r3.s64 = ctx.r9.s64 + 8104;
	// stw r11,25016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B6EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B700"))) PPC_WEAK_FUNC(sub_8301B700);
PPC_FUNC_IMPL(__imp__sub_8301B700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24344
	ctx.r3.s64 = ctx.r31.s64 + 24344;
	// addi r4,r10,32340
	ctx.r4.s64 = ctx.r10.s64 + 32340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B73C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19280
	ctx.r11.s64 = ctx.r11.s64 + 19280;
	// addi r3,r9,8128
	ctx.r3.s64 = ctx.r9.s64 + 8128;
	// stw r11,24344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B754;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B768"))) PPC_WEAK_FUNC(sub_8301B768);
PPC_FUNC_IMPL(__imp__sub_8301B768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22680
	ctx.r3.s64 = ctx.r31.s64 + 22680;
	// addi r4,r10,32360
	ctx.r4.s64 = ctx.r10.s64 + 32360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B7A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19360
	ctx.r11.s64 = ctx.r11.s64 + 19360;
	// addi r3,r9,8152
	ctx.r3.s64 = ctx.r9.s64 + 8152;
	// stw r11,22680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B7BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B7D0"))) PPC_WEAK_FUNC(sub_8301B7D0);
PPC_FUNC_IMPL(__imp__sub_8301B7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21336
	ctx.r3.s64 = ctx.r31.s64 + 21336;
	// addi r4,r10,32380
	ctx.r4.s64 = ctx.r10.s64 + 32380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B80C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19440
	ctx.r11.s64 = ctx.r11.s64 + 19440;
	// addi r3,r9,8176
	ctx.r3.s64 = ctx.r9.s64 + 8176;
	// stw r11,21336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B824;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B838"))) PPC_WEAK_FUNC(sub_8301B838);
PPC_FUNC_IMPL(__imp__sub_8301B838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26872
	ctx.r3.s64 = ctx.r31.s64 + 26872;
	// addi r4,r10,32400
	ctx.r4.s64 = ctx.r10.s64 + 32400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B874;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
	// addi r3,r9,8200
	ctx.r3.s64 = ctx.r9.s64 + 8200;
	// stw r11,26872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B88C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B8A0"))) PPC_WEAK_FUNC(sub_8301B8A0);
PPC_FUNC_IMPL(__imp__sub_8301B8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27224
	ctx.r3.s64 = ctx.r31.s64 + 27224;
	// addi r4,r10,32420
	ctx.r4.s64 = ctx.r10.s64 + 32420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B8DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19600
	ctx.r11.s64 = ctx.r11.s64 + 19600;
	// addi r3,r9,8224
	ctx.r3.s64 = ctx.r9.s64 + 8224;
	// stw r11,27224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B8F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B908"))) PPC_WEAK_FUNC(sub_8301B908);
PPC_FUNC_IMPL(__imp__sub_8301B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27672
	ctx.r3.s64 = ctx.r31.s64 + 27672;
	// addi r4,r10,32440
	ctx.r4.s64 = ctx.r10.s64 + 32440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B944;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19680
	ctx.r11.s64 = ctx.r11.s64 + 19680;
	// addi r3,r9,8248
	ctx.r3.s64 = ctx.r9.s64 + 8248;
	// stw r11,27672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B95C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B970"))) PPC_WEAK_FUNC(sub_8301B970);
PPC_FUNC_IMPL(__imp__sub_8301B970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24664
	ctx.r3.s64 = ctx.r31.s64 + 24664;
	// addi r4,r10,32460
	ctx.r4.s64 = ctx.r10.s64 + 32460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301B9AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
	// addi r3,r9,8272
	ctx.r3.s64 = ctx.r9.s64 + 8272;
	// stw r11,24664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301B9C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301B9D8"))) PPC_WEAK_FUNC(sub_8301B9D8);
PPC_FUNC_IMPL(__imp__sub_8301B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21720
	ctx.r3.s64 = ctx.r31.s64 + 21720;
	// addi r4,r10,32480
	ctx.r4.s64 = ctx.r10.s64 + 32480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BA14;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19840
	ctx.r11.s64 = ctx.r11.s64 + 19840;
	// addi r3,r9,8296
	ctx.r3.s64 = ctx.r9.s64 + 8296;
	// stw r11,21720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BA2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BA40"))) PPC_WEAK_FUNC(sub_8301BA40);
PPC_FUNC_IMPL(__imp__sub_8301BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27480
	ctx.r3.s64 = ctx.r31.s64 + 27480;
	// addi r4,r10,32500
	ctx.r4.s64 = ctx.r10.s64 + 32500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BA7C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19920
	ctx.r11.s64 = ctx.r11.s64 + 19920;
	// addi r3,r9,8320
	ctx.r3.s64 = ctx.r9.s64 + 8320;
	// stw r11,27480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BA94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BAA8"))) PPC_WEAK_FUNC(sub_8301BAA8);
PPC_FUNC_IMPL(__imp__sub_8301BAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26136
	ctx.r3.s64 = ctx.r31.s64 + 26136;
	// addi r4,r10,32520
	ctx.r4.s64 = ctx.r10.s64 + 32520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BAE4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20000
	ctx.r11.s64 = ctx.r11.s64 + 20000;
	// addi r3,r9,8344
	ctx.r3.s64 = ctx.r9.s64 + 8344;
	// stw r11,26136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BAFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BB10"))) PPC_WEAK_FUNC(sub_8301BB10);
PPC_FUNC_IMPL(__imp__sub_8301BB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23416
	ctx.r3.s64 = ctx.r31.s64 + 23416;
	// addi r4,r10,32540
	ctx.r4.s64 = ctx.r10.s64 + 32540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BB4C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// addi r3,r9,8368
	ctx.r3.s64 = ctx.r9.s64 + 8368;
	// stw r11,23416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BB64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BB78"))) PPC_WEAK_FUNC(sub_8301BB78);
PPC_FUNC_IMPL(__imp__sub_8301BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21432
	ctx.r3.s64 = ctx.r31.s64 + 21432;
	// addi r4,r10,32560
	ctx.r4.s64 = ctx.r10.s64 + 32560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BBB4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// addi r3,r9,8392
	ctx.r3.s64 = ctx.r9.s64 + 8392;
	// stw r11,21432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BBCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BBE0"))) PPC_WEAK_FUNC(sub_8301BBE0);
PPC_FUNC_IMPL(__imp__sub_8301BBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24568
	ctx.r3.s64 = ctx.r31.s64 + 24568;
	// addi r4,r10,32580
	ctx.r4.s64 = ctx.r10.s64 + 32580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BC1C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20240
	ctx.r11.s64 = ctx.r11.s64 + 20240;
	// addi r3,r9,8416
	ctx.r3.s64 = ctx.r9.s64 + 8416;
	// stw r11,24568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BC34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BC48"))) PPC_WEAK_FUNC(sub_8301BC48);
PPC_FUNC_IMPL(__imp__sub_8301BC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25592
	ctx.r3.s64 = ctx.r31.s64 + 25592;
	// addi r4,r10,32600
	ctx.r4.s64 = ctx.r10.s64 + 32600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BC84;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20320
	ctx.r11.s64 = ctx.r11.s64 + 20320;
	// addi r3,r9,8440
	ctx.r3.s64 = ctx.r9.s64 + 8440;
	// stw r11,25592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BC9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BCB0"))) PPC_WEAK_FUNC(sub_8301BCB0);
PPC_FUNC_IMPL(__imp__sub_8301BCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23864
	ctx.r3.s64 = ctx.r31.s64 + 23864;
	// addi r4,r10,32620
	ctx.r4.s64 = ctx.r10.s64 + 32620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BCEC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20400
	ctx.r11.s64 = ctx.r11.s64 + 20400;
	// addi r3,r9,8464
	ctx.r3.s64 = ctx.r9.s64 + 8464;
	// stw r11,23864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BD04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BD18"))) PPC_WEAK_FUNC(sub_8301BD18);
PPC_FUNC_IMPL(__imp__sub_8301BD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26520
	ctx.r3.s64 = ctx.r31.s64 + 26520;
	// addi r4,r10,32640
	ctx.r4.s64 = ctx.r10.s64 + 32640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BD54;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20480
	ctx.r11.s64 = ctx.r11.s64 + 20480;
	// addi r3,r9,8488
	ctx.r3.s64 = ctx.r9.s64 + 8488;
	// stw r11,26520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BD6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BD80"))) PPC_WEAK_FUNC(sub_8301BD80);
PPC_FUNC_IMPL(__imp__sub_8301BD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24536
	ctx.r3.s64 = ctx.r31.s64 + 24536;
	// addi r4,r10,32660
	ctx.r4.s64 = ctx.r10.s64 + 32660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BDBC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20560
	ctx.r11.s64 = ctx.r11.s64 + 20560;
	// addi r3,r9,8512
	ctx.r3.s64 = ctx.r9.s64 + 8512;
	// stw r11,24536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BDD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BDE8"))) PPC_WEAK_FUNC(sub_8301BDE8);
PPC_FUNC_IMPL(__imp__sub_8301BDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22392
	ctx.r3.s64 = ctx.r31.s64 + 22392;
	// addi r4,r10,32680
	ctx.r4.s64 = ctx.r10.s64 + 32680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BE24;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20640
	ctx.r11.s64 = ctx.r11.s64 + 20640;
	// addi r3,r9,8536
	ctx.r3.s64 = ctx.r9.s64 + 8536;
	// stw r11,22392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BE3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BE50"))) PPC_WEAK_FUNC(sub_8301BE50);
PPC_FUNC_IMPL(__imp__sub_8301BE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25368
	ctx.r3.s64 = ctx.r31.s64 + 25368;
	// addi r4,r10,32700
	ctx.r4.s64 = ctx.r10.s64 + 32700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BE8C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20720
	ctx.r11.s64 = ctx.r11.s64 + 20720;
	// addi r3,r9,8560
	ctx.r3.s64 = ctx.r9.s64 + 8560;
	// stw r11,25368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BEA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BEB8"))) PPC_WEAK_FUNC(sub_8301BEB8);
PPC_FUNC_IMPL(__imp__sub_8301BEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24856
	ctx.r3.s64 = ctx.r31.s64 + 24856;
	// addi r4,r10,32720
	ctx.r4.s64 = ctx.r10.s64 + 32720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BEF4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20800
	ctx.r11.s64 = ctx.r11.s64 + 20800;
	// addi r3,r9,8584
	ctx.r3.s64 = ctx.r9.s64 + 8584;
	// stw r11,24856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BF0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BF20"))) PPC_WEAK_FUNC(sub_8301BF20);
PPC_FUNC_IMPL(__imp__sub_8301BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,28088
	ctx.r3.s64 = ctx.r31.s64 + 28088;
	// addi r4,r10,32740
	ctx.r4.s64 = ctx.r10.s64 + 32740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BF5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20880
	ctx.r11.s64 = ctx.r11.s64 + 20880;
	// addi r3,r9,8608
	ctx.r3.s64 = ctx.r9.s64 + 8608;
	// stw r11,28088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BF74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BF88"))) PPC_WEAK_FUNC(sub_8301BF88);
PPC_FUNC_IMPL(__imp__sub_8301BF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27064
	ctx.r3.s64 = ctx.r31.s64 + 27064;
	// addi r4,r10,32760
	ctx.r4.s64 = ctx.r10.s64 + 32760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301BFC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20960
	ctx.r11.s64 = ctx.r11.s64 + 20960;
	// addi r3,r9,8632
	ctx.r3.s64 = ctx.r9.s64 + 8632;
	// stw r11,27064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301BFDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301BFF0"))) PPC_WEAK_FUNC(sub_8301BFF0);
PPC_FUNC_IMPL(__imp__sub_8301BFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23768
	ctx.r3.s64 = ctx.r31.s64 + 23768;
	// addi r4,r10,-32756
	ctx.r4.s64 = ctx.r10.s64 + -32756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C02C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21040
	ctx.r11.s64 = ctx.r11.s64 + 21040;
	// addi r3,r9,8656
	ctx.r3.s64 = ctx.r9.s64 + 8656;
	// stw r11,23768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C044;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C058"))) PPC_WEAK_FUNC(sub_8301C058);
PPC_FUNC_IMPL(__imp__sub_8301C058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23256
	ctx.r3.s64 = ctx.r31.s64 + 23256;
	// addi r4,r10,-32736
	ctx.r4.s64 = ctx.r10.s64 + -32736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C094;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// addi r3,r9,8680
	ctx.r3.s64 = ctx.r9.s64 + 8680;
	// stw r11,23256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C0AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C0C0"))) PPC_WEAK_FUNC(sub_8301C0C0);
PPC_FUNC_IMPL(__imp__sub_8301C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27928
	ctx.r3.s64 = ctx.r31.s64 + 27928;
	// addi r4,r10,-32716
	ctx.r4.s64 = ctx.r10.s64 + -32716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C0FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21200
	ctx.r11.s64 = ctx.r11.s64 + 21200;
	// addi r3,r9,8704
	ctx.r3.s64 = ctx.r9.s64 + 8704;
	// stw r11,27928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C114;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C128"))) PPC_WEAK_FUNC(sub_8301C128);
PPC_FUNC_IMPL(__imp__sub_8301C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23576
	ctx.r3.s64 = ctx.r31.s64 + 23576;
	// addi r4,r10,-32696
	ctx.r4.s64 = ctx.r10.s64 + -32696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C164;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21280
	ctx.r11.s64 = ctx.r11.s64 + 21280;
	// addi r3,r9,8728
	ctx.r3.s64 = ctx.r9.s64 + 8728;
	// stw r11,23576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C17C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C190"))) PPC_WEAK_FUNC(sub_8301C190);
PPC_FUNC_IMPL(__imp__sub_8301C190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23000
	ctx.r3.s64 = ctx.r31.s64 + 23000;
	// addi r4,r10,-32672
	ctx.r4.s64 = ctx.r10.s64 + -32672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C1CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21360
	ctx.r11.s64 = ctx.r11.s64 + 21360;
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// stw r11,23000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C1E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C1F8"))) PPC_WEAK_FUNC(sub_8301C1F8);
PPC_FUNC_IMPL(__imp__sub_8301C1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27896
	ctx.r3.s64 = ctx.r31.s64 + 27896;
	// addi r4,r10,-32648
	ctx.r4.s64 = ctx.r10.s64 + -32648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C234;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21440
	ctx.r11.s64 = ctx.r11.s64 + 21440;
	// addi r3,r9,8776
	ctx.r3.s64 = ctx.r9.s64 + 8776;
	// stw r11,27896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C24C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C260"))) PPC_WEAK_FUNC(sub_8301C260);
PPC_FUNC_IMPL(__imp__sub_8301C260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,28056
	ctx.r3.s64 = ctx.r31.s64 + 28056;
	// addi r4,r10,-32624
	ctx.r4.s64 = ctx.r10.s64 + -32624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C29C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21520
	ctx.r11.s64 = ctx.r11.s64 + 21520;
	// addi r3,r9,8800
	ctx.r3.s64 = ctx.r9.s64 + 8800;
	// stw r11,28056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C2B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C2C8"))) PPC_WEAK_FUNC(sub_8301C2C8);
PPC_FUNC_IMPL(__imp__sub_8301C2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22840
	ctx.r3.s64 = ctx.r31.s64 + 22840;
	// addi r4,r10,-32600
	ctx.r4.s64 = ctx.r10.s64 + -32600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C304;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21600
	ctx.r11.s64 = ctx.r11.s64 + 21600;
	// addi r3,r9,8824
	ctx.r3.s64 = ctx.r9.s64 + 8824;
	// stw r11,22840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C31C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C330"))) PPC_WEAK_FUNC(sub_8301C330);
PPC_FUNC_IMPL(__imp__sub_8301C330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26008
	ctx.r3.s64 = ctx.r31.s64 + 26008;
	// addi r4,r10,-32572
	ctx.r4.s64 = ctx.r10.s64 + -32572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C36C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21680
	ctx.r11.s64 = ctx.r11.s64 + 21680;
	// addi r3,r9,8848
	ctx.r3.s64 = ctx.r9.s64 + 8848;
	// stw r11,26008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C384;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C398"))) PPC_WEAK_FUNC(sub_8301C398);
PPC_FUNC_IMPL(__imp__sub_8301C398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24440
	ctx.r3.s64 = ctx.r31.s64 + 24440;
	// addi r4,r10,-32544
	ctx.r4.s64 = ctx.r10.s64 + -32544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C3D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21760
	ctx.r11.s64 = ctx.r11.s64 + 21760;
	// addi r3,r9,8872
	ctx.r3.s64 = ctx.r9.s64 + 8872;
	// stw r11,24440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C3EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C400"))) PPC_WEAK_FUNC(sub_8301C400);
PPC_FUNC_IMPL(__imp__sub_8301C400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21944
	ctx.r3.s64 = ctx.r31.s64 + 21944;
	// addi r4,r10,-32516
	ctx.r4.s64 = ctx.r10.s64 + -32516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C43C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21840
	ctx.r11.s64 = ctx.r11.s64 + 21840;
	// addi r3,r9,8896
	ctx.r3.s64 = ctx.r9.s64 + 8896;
	// stw r11,21944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C454;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C468"))) PPC_WEAK_FUNC(sub_8301C468);
PPC_FUNC_IMPL(__imp__sub_8301C468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25912
	ctx.r3.s64 = ctx.r31.s64 + 25912;
	// addi r4,r10,-32488
	ctx.r4.s64 = ctx.r10.s64 + -32488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C4A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21920
	ctx.r11.s64 = ctx.r11.s64 + 21920;
	// addi r3,r9,8920
	ctx.r3.s64 = ctx.r9.s64 + 8920;
	// stw r11,25912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C4BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C4D0"))) PPC_WEAK_FUNC(sub_8301C4D0);
PPC_FUNC_IMPL(__imp__sub_8301C4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21016
	ctx.r3.s64 = ctx.r31.s64 + 21016;
	// addi r4,r10,-32460
	ctx.r4.s64 = ctx.r10.s64 + -32460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C50C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22000
	ctx.r11.s64 = ctx.r11.s64 + 22000;
	// addi r3,r9,8944
	ctx.r3.s64 = ctx.r9.s64 + 8944;
	// stw r11,21016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C524;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C538"))) PPC_WEAK_FUNC(sub_8301C538);
PPC_FUNC_IMPL(__imp__sub_8301C538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25560
	ctx.r3.s64 = ctx.r31.s64 + 25560;
	// addi r4,r10,-32432
	ctx.r4.s64 = ctx.r10.s64 + -32432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C574;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22080
	ctx.r11.s64 = ctx.r11.s64 + 22080;
	// addi r3,r9,8968
	ctx.r3.s64 = ctx.r9.s64 + 8968;
	// stw r11,25560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C58C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C5A0"))) PPC_WEAK_FUNC(sub_8301C5A0);
PPC_FUNC_IMPL(__imp__sub_8301C5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23128
	ctx.r3.s64 = ctx.r31.s64 + 23128;
	// addi r4,r10,-32404
	ctx.r4.s64 = ctx.r10.s64 + -32404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C5DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22160
	ctx.r11.s64 = ctx.r11.s64 + 22160;
	// addi r3,r9,8992
	ctx.r3.s64 = ctx.r9.s64 + 8992;
	// stw r11,23128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C5F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C608"))) PPC_WEAK_FUNC(sub_8301C608);
PPC_FUNC_IMPL(__imp__sub_8301C608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24504
	ctx.r3.s64 = ctx.r31.s64 + 24504;
	// addi r4,r10,-32376
	ctx.r4.s64 = ctx.r10.s64 + -32376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C644;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22240
	ctx.r11.s64 = ctx.r11.s64 + 22240;
	// addi r3,r9,9016
	ctx.r3.s64 = ctx.r9.s64 + 9016;
	// stw r11,24504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C65C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C670"))) PPC_WEAK_FUNC(sub_8301C670);
PPC_FUNC_IMPL(__imp__sub_8301C670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26968
	ctx.r3.s64 = ctx.r31.s64 + 26968;
	// addi r4,r10,-32348
	ctx.r4.s64 = ctx.r10.s64 + -32348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C6AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// addi r3,r9,9040
	ctx.r3.s64 = ctx.r9.s64 + 9040;
	// stw r11,26968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C6C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C6D8"))) PPC_WEAK_FUNC(sub_8301C6D8);
PPC_FUNC_IMPL(__imp__sub_8301C6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24920
	ctx.r3.s64 = ctx.r31.s64 + 24920;
	// addi r4,r10,-32320
	ctx.r4.s64 = ctx.r10.s64 + -32320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C714;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22400
	ctx.r11.s64 = ctx.r11.s64 + 22400;
	// addi r3,r9,9064
	ctx.r3.s64 = ctx.r9.s64 + 9064;
	// stw r11,24920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C72C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C740"))) PPC_WEAK_FUNC(sub_8301C740);
PPC_FUNC_IMPL(__imp__sub_8301C740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26680
	ctx.r3.s64 = ctx.r31.s64 + 26680;
	// addi r4,r10,-32292
	ctx.r4.s64 = ctx.r10.s64 + -32292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C77C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22480
	ctx.r11.s64 = ctx.r11.s64 + 22480;
	// addi r3,r9,9088
	ctx.r3.s64 = ctx.r9.s64 + 9088;
	// stw r11,26680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C7A8"))) PPC_WEAK_FUNC(sub_8301C7A8);
PPC_FUNC_IMPL(__imp__sub_8301C7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25496
	ctx.r3.s64 = ctx.r31.s64 + 25496;
	// addi r4,r10,-32264
	ctx.r4.s64 = ctx.r10.s64 + -32264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C7E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// addi r3,r9,9112
	ctx.r3.s64 = ctx.r9.s64 + 9112;
	// stw r11,25496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C7FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C810"))) PPC_WEAK_FUNC(sub_8301C810);
PPC_FUNC_IMPL(__imp__sub_8301C810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27000
	ctx.r3.s64 = ctx.r31.s64 + 27000;
	// addi r4,r10,-32236
	ctx.r4.s64 = ctx.r10.s64 + -32236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C84C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22640
	ctx.r11.s64 = ctx.r11.s64 + 22640;
	// addi r3,r9,9136
	ctx.r3.s64 = ctx.r9.s64 + 9136;
	// stw r11,27000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C864;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C878"))) PPC_WEAK_FUNC(sub_8301C878);
PPC_FUNC_IMPL(__imp__sub_8301C878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26744
	ctx.r3.s64 = ctx.r31.s64 + 26744;
	// addi r4,r10,-32208
	ctx.r4.s64 = ctx.r10.s64 + -32208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C8B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22720
	ctx.r11.s64 = ctx.r11.s64 + 22720;
	// addi r3,r9,9160
	ctx.r3.s64 = ctx.r9.s64 + 9160;
	// stw r11,26744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C8CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C8E0"))) PPC_WEAK_FUNC(sub_8301C8E0);
PPC_FUNC_IMPL(__imp__sub_8301C8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22072
	ctx.r3.s64 = ctx.r31.s64 + 22072;
	// addi r4,r10,-32180
	ctx.r4.s64 = ctx.r10.s64 + -32180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C91C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22800
	ctx.r11.s64 = ctx.r11.s64 + 22800;
	// addi r3,r9,9184
	ctx.r3.s64 = ctx.r9.s64 + 9184;
	// stw r11,22072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C934;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C948"))) PPC_WEAK_FUNC(sub_8301C948);
PPC_FUNC_IMPL(__imp__sub_8301C948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22232
	ctx.r3.s64 = ctx.r31.s64 + 22232;
	// addi r4,r10,-32152
	ctx.r4.s64 = ctx.r10.s64 + -32152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C984;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22880
	ctx.r11.s64 = ctx.r11.s64 + 22880;
	// addi r3,r9,9208
	ctx.r3.s64 = ctx.r9.s64 + 9208;
	// stw r11,22232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301C99C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301C9B0"))) PPC_WEAK_FUNC(sub_8301C9B0);
PPC_FUNC_IMPL(__imp__sub_8301C9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25112
	ctx.r3.s64 = ctx.r31.s64 + 25112;
	// addi r4,r10,-32124
	ctx.r4.s64 = ctx.r10.s64 + -32124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301C9EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22960
	ctx.r11.s64 = ctx.r11.s64 + 22960;
	// addi r3,r9,9232
	ctx.r3.s64 = ctx.r9.s64 + 9232;
	// stw r11,25112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CA04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CA18"))) PPC_WEAK_FUNC(sub_8301CA18);
PPC_FUNC_IMPL(__imp__sub_8301CA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22648
	ctx.r3.s64 = ctx.r31.s64 + 22648;
	// addi r4,r10,-32096
	ctx.r4.s64 = ctx.r10.s64 + -32096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CA54;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// addi r3,r9,9256
	ctx.r3.s64 = ctx.r9.s64 + 9256;
	// stw r11,22648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CA6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CA80"))) PPC_WEAK_FUNC(sub_8301CA80);
PPC_FUNC_IMPL(__imp__sub_8301CA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24312
	ctx.r3.s64 = ctx.r31.s64 + 24312;
	// addi r4,r10,-32068
	ctx.r4.s64 = ctx.r10.s64 + -32068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CABC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23120
	ctx.r11.s64 = ctx.r11.s64 + 23120;
	// addi r3,r9,9280
	ctx.r3.s64 = ctx.r9.s64 + 9280;
	// stw r11,24312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CAD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CAE8"))) PPC_WEAK_FUNC(sub_8301CAE8);
PPC_FUNC_IMPL(__imp__sub_8301CAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26296
	ctx.r3.s64 = ctx.r31.s64 + 26296;
	// addi r4,r10,-32040
	ctx.r4.s64 = ctx.r10.s64 + -32040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CB24;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23200
	ctx.r11.s64 = ctx.r11.s64 + 23200;
	// addi r3,r9,9304
	ctx.r3.s64 = ctx.r9.s64 + 9304;
	// stw r11,26296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CB3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CB50"))) PPC_WEAK_FUNC(sub_8301CB50);
PPC_FUNC_IMPL(__imp__sub_8301CB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26584
	ctx.r3.s64 = ctx.r31.s64 + 26584;
	// addi r4,r10,-32012
	ctx.r4.s64 = ctx.r10.s64 + -32012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CB8C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23280
	ctx.r11.s64 = ctx.r11.s64 + 23280;
	// addi r3,r9,9328
	ctx.r3.s64 = ctx.r9.s64 + 9328;
	// stw r11,26584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CBA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CBB8"))) PPC_WEAK_FUNC(sub_8301CBB8);
PPC_FUNC_IMPL(__imp__sub_8301CBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24632
	ctx.r3.s64 = ctx.r31.s64 + 24632;
	// addi r4,r10,-31984
	ctx.r4.s64 = ctx.r10.s64 + -31984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CBF4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23360
	ctx.r11.s64 = ctx.r11.s64 + 23360;
	// addi r3,r9,9352
	ctx.r3.s64 = ctx.r9.s64 + 9352;
	// stw r11,24632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CC0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CC20"))) PPC_WEAK_FUNC(sub_8301CC20);
PPC_FUNC_IMPL(__imp__sub_8301CC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24888
	ctx.r3.s64 = ctx.r31.s64 + 24888;
	// addi r4,r10,-31956
	ctx.r4.s64 = ctx.r10.s64 + -31956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CC5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23440
	ctx.r11.s64 = ctx.r11.s64 + 23440;
	// addi r3,r9,9376
	ctx.r3.s64 = ctx.r9.s64 + 9376;
	// stw r11,24888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CC74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CC88"))) PPC_WEAK_FUNC(sub_8301CC88);
PPC_FUNC_IMPL(__imp__sub_8301CC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22968
	ctx.r3.s64 = ctx.r31.s64 + 22968;
	// addi r4,r10,-31928
	ctx.r4.s64 = ctx.r10.s64 + -31928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CCC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23520
	ctx.r11.s64 = ctx.r11.s64 + 23520;
	// addi r3,r9,9400
	ctx.r3.s64 = ctx.r9.s64 + 9400;
	// stw r11,22968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CCDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CCF0"))) PPC_WEAK_FUNC(sub_8301CCF0);
PPC_FUNC_IMPL(__imp__sub_8301CCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24024
	ctx.r3.s64 = ctx.r31.s64 + 24024;
	// addi r4,r10,-31900
	ctx.r4.s64 = ctx.r10.s64 + -31900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CD2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23600
	ctx.r11.s64 = ctx.r11.s64 + 23600;
	// addi r3,r9,9424
	ctx.r3.s64 = ctx.r9.s64 + 9424;
	// stw r11,24024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CD44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CD58"))) PPC_WEAK_FUNC(sub_8301CD58);
PPC_FUNC_IMPL(__imp__sub_8301CD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21624
	ctx.r3.s64 = ctx.r31.s64 + 21624;
	// addi r4,r10,-31872
	ctx.r4.s64 = ctx.r10.s64 + -31872;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CD94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// addi r3,r9,9448
	ctx.r3.s64 = ctx.r9.s64 + 9448;
	// stw r11,21624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CDAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CDC0"))) PPC_WEAK_FUNC(sub_8301CDC0);
PPC_FUNC_IMPL(__imp__sub_8301CDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26648
	ctx.r3.s64 = ctx.r31.s64 + 26648;
	// addi r4,r10,-31844
	ctx.r4.s64 = ctx.r10.s64 + -31844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CDFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23760
	ctx.r11.s64 = ctx.r11.s64 + 23760;
	// addi r3,r9,9472
	ctx.r3.s64 = ctx.r9.s64 + 9472;
	// stw r11,26648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CE14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CE28"))) PPC_WEAK_FUNC(sub_8301CE28);
PPC_FUNC_IMPL(__imp__sub_8301CE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27960
	ctx.r3.s64 = ctx.r31.s64 + 27960;
	// addi r4,r10,-31816
	ctx.r4.s64 = ctx.r10.s64 + -31816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CE64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23840
	ctx.r11.s64 = ctx.r11.s64 + 23840;
	// addi r3,r9,9496
	ctx.r3.s64 = ctx.r9.s64 + 9496;
	// stw r11,27960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CE7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CE90"))) PPC_WEAK_FUNC(sub_8301CE90);
PPC_FUNC_IMPL(__imp__sub_8301CE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25176
	ctx.r3.s64 = ctx.r31.s64 + 25176;
	// addi r4,r10,-31788
	ctx.r4.s64 = ctx.r10.s64 + -31788;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CECC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23920
	ctx.r11.s64 = ctx.r11.s64 + 23920;
	// addi r3,r9,9520
	ctx.r3.s64 = ctx.r9.s64 + 9520;
	// stw r11,25176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CEE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CEF8"))) PPC_WEAK_FUNC(sub_8301CEF8);
PPC_FUNC_IMPL(__imp__sub_8301CEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27416
	ctx.r3.s64 = ctx.r31.s64 + 27416;
	// addi r4,r10,-31760
	ctx.r4.s64 = ctx.r10.s64 + -31760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CF34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24000
	ctx.r11.s64 = ctx.r11.s64 + 24000;
	// addi r3,r9,9544
	ctx.r3.s64 = ctx.r9.s64 + 9544;
	// stw r11,27416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CF4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CF60"))) PPC_WEAK_FUNC(sub_8301CF60);
PPC_FUNC_IMPL(__imp__sub_8301CF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26168
	ctx.r3.s64 = ctx.r31.s64 + 26168;
	// addi r4,r10,-31732
	ctx.r4.s64 = ctx.r10.s64 + -31732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301CF9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24080
	ctx.r11.s64 = ctx.r11.s64 + 24080;
	// addi r3,r9,9568
	ctx.r3.s64 = ctx.r9.s64 + 9568;
	// stw r11,26168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301CFB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301CFC8"))) PPC_WEAK_FUNC(sub_8301CFC8);
PPC_FUNC_IMPL(__imp__sub_8301CFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22744
	ctx.r3.s64 = ctx.r31.s64 + 22744;
	// addi r4,r10,-31704
	ctx.r4.s64 = ctx.r10.s64 + -31704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D004;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24160
	ctx.r11.s64 = ctx.r11.s64 + 24160;
	// addi r3,r9,9592
	ctx.r3.s64 = ctx.r9.s64 + 9592;
	// stw r11,22744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D01C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D030"))) PPC_WEAK_FUNC(sub_8301D030);
PPC_FUNC_IMPL(__imp__sub_8301D030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24696
	ctx.r3.s64 = ctx.r31.s64 + 24696;
	// addi r4,r10,-31680
	ctx.r4.s64 = ctx.r10.s64 + -31680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D06C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24240
	ctx.r11.s64 = ctx.r11.s64 + 24240;
	// addi r3,r9,9616
	ctx.r3.s64 = ctx.r9.s64 + 9616;
	// stw r11,24696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D084;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D098"))) PPC_WEAK_FUNC(sub_8301D098);
PPC_FUNC_IMPL(__imp__sub_8301D098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27576
	ctx.r3.s64 = ctx.r31.s64 + 27576;
	// addi r4,r10,-31656
	ctx.r4.s64 = ctx.r10.s64 + -31656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D0D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24320
	ctx.r11.s64 = ctx.r11.s64 + 24320;
	// addi r3,r9,9640
	ctx.r3.s64 = ctx.r9.s64 + 9640;
	// stw r11,27576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D0EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D100"))) PPC_WEAK_FUNC(sub_8301D100);
PPC_FUNC_IMPL(__imp__sub_8301D100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21528
	ctx.r3.s64 = ctx.r31.s64 + 21528;
	// addi r4,r10,-31632
	ctx.r4.s64 = ctx.r10.s64 + -31632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D13C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24400
	ctx.r11.s64 = ctx.r11.s64 + 24400;
	// addi r3,r9,9664
	ctx.r3.s64 = ctx.r9.s64 + 9664;
	// stw r11,21528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D154;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D168"))) PPC_WEAK_FUNC(sub_8301D168);
PPC_FUNC_IMPL(__imp__sub_8301D168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27352
	ctx.r3.s64 = ctx.r31.s64 + 27352;
	// addi r4,r10,-31608
	ctx.r4.s64 = ctx.r10.s64 + -31608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D1A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24480
	ctx.r11.s64 = ctx.r11.s64 + 24480;
	// addi r3,r9,9688
	ctx.r3.s64 = ctx.r9.s64 + 9688;
	// stw r11,27352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D1BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D1D0"))) PPC_WEAK_FUNC(sub_8301D1D0);
PPC_FUNC_IMPL(__imp__sub_8301D1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27512
	ctx.r3.s64 = ctx.r31.s64 + 27512;
	// addi r4,r10,-31584
	ctx.r4.s64 = ctx.r10.s64 + -31584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D20C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24560
	ctx.r11.s64 = ctx.r11.s64 + 24560;
	// addi r3,r9,9712
	ctx.r3.s64 = ctx.r9.s64 + 9712;
	// stw r11,27512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D224;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D238"))) PPC_WEAK_FUNC(sub_8301D238);
PPC_FUNC_IMPL(__imp__sub_8301D238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24280
	ctx.r3.s64 = ctx.r31.s64 + 24280;
	// addi r4,r10,-31560
	ctx.r4.s64 = ctx.r10.s64 + -31560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D274;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24640
	ctx.r11.s64 = ctx.r11.s64 + 24640;
	// addi r3,r9,9736
	ctx.r3.s64 = ctx.r9.s64 + 9736;
	// stw r11,24280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D28C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D2A0"))) PPC_WEAK_FUNC(sub_8301D2A0);
PPC_FUNC_IMPL(__imp__sub_8301D2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21496
	ctx.r3.s64 = ctx.r31.s64 + 21496;
	// addi r4,r10,-31536
	ctx.r4.s64 = ctx.r10.s64 + -31536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D2DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24720
	ctx.r11.s64 = ctx.r11.s64 + 24720;
	// addi r3,r9,9760
	ctx.r3.s64 = ctx.r9.s64 + 9760;
	// stw r11,21496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D2F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D308"))) PPC_WEAK_FUNC(sub_8301D308);
PPC_FUNC_IMPL(__imp__sub_8301D308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21176
	ctx.r3.s64 = ctx.r31.s64 + 21176;
	// addi r4,r10,-31512
	ctx.r4.s64 = ctx.r10.s64 + -31512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D344;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24800
	ctx.r11.s64 = ctx.r11.s64 + 24800;
	// addi r3,r9,9784
	ctx.r3.s64 = ctx.r9.s64 + 9784;
	// stw r11,21176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D35C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D370"))) PPC_WEAK_FUNC(sub_8301D370);
PPC_FUNC_IMPL(__imp__sub_8301D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27608
	ctx.r3.s64 = ctx.r31.s64 + 27608;
	// addi r4,r10,-31488
	ctx.r4.s64 = ctx.r10.s64 + -31488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D3AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r3,r9,9808
	ctx.r3.s64 = ctx.r9.s64 + 9808;
	// stw r11,27608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D3C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D3D8"))) PPC_WEAK_FUNC(sub_8301D3D8);
PPC_FUNC_IMPL(__imp__sub_8301D3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23896
	ctx.r3.s64 = ctx.r31.s64 + 23896;
	// addi r4,r10,-31464
	ctx.r4.s64 = ctx.r10.s64 + -31464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D414;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24960
	ctx.r11.s64 = ctx.r11.s64 + 24960;
	// addi r3,r9,9832
	ctx.r3.s64 = ctx.r9.s64 + 9832;
	// stw r11,23896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D42C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D440"))) PPC_WEAK_FUNC(sub_8301D440);
PPC_FUNC_IMPL(__imp__sub_8301D440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23704
	ctx.r3.s64 = ctx.r31.s64 + 23704;
	// addi r4,r10,-31440
	ctx.r4.s64 = ctx.r10.s64 + -31440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D47C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25040
	ctx.r11.s64 = ctx.r11.s64 + 25040;
	// addi r3,r9,9856
	ctx.r3.s64 = ctx.r9.s64 + 9856;
	// stw r11,23704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D494;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D4A8"))) PPC_WEAK_FUNC(sub_8301D4A8);
PPC_FUNC_IMPL(__imp__sub_8301D4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24952
	ctx.r3.s64 = ctx.r31.s64 + 24952;
	// addi r4,r10,-31416
	ctx.r4.s64 = ctx.r10.s64 + -31416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D4E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25120
	ctx.r11.s64 = ctx.r11.s64 + 25120;
	// addi r3,r9,9880
	ctx.r3.s64 = ctx.r9.s64 + 9880;
	// stw r11,24952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D4FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D510"))) PPC_WEAK_FUNC(sub_8301D510);
PPC_FUNC_IMPL(__imp__sub_8301D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23640
	ctx.r3.s64 = ctx.r31.s64 + 23640;
	// addi r4,r10,-31392
	ctx.r4.s64 = ctx.r10.s64 + -31392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D54C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25200
	ctx.r11.s64 = ctx.r11.s64 + 25200;
	// addi r3,r9,9904
	ctx.r3.s64 = ctx.r9.s64 + 9904;
	// stw r11,23640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D564;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D578"))) PPC_WEAK_FUNC(sub_8301D578);
PPC_FUNC_IMPL(__imp__sub_8301D578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22584
	ctx.r3.s64 = ctx.r31.s64 + 22584;
	// addi r4,r10,-31368
	ctx.r4.s64 = ctx.r10.s64 + -31368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D5B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25280
	ctx.r11.s64 = ctx.r11.s64 + 25280;
	// addi r3,r9,9928
	ctx.r3.s64 = ctx.r9.s64 + 9928;
	// stw r11,22584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D5CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D5E0"))) PPC_WEAK_FUNC(sub_8301D5E0);
PPC_FUNC_IMPL(__imp__sub_8301D5E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22264
	ctx.r3.s64 = ctx.r31.s64 + 22264;
	// addi r4,r10,-31344
	ctx.r4.s64 = ctx.r10.s64 + -31344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D61C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25360
	ctx.r11.s64 = ctx.r11.s64 + 25360;
	// addi r3,r9,9952
	ctx.r3.s64 = ctx.r9.s64 + 9952;
	// stw r11,22264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D634;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D648"))) PPC_WEAK_FUNC(sub_8301D648);
PPC_FUNC_IMPL(__imp__sub_8301D648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23608
	ctx.r3.s64 = ctx.r31.s64 + 23608;
	// addi r4,r10,-31320
	ctx.r4.s64 = ctx.r10.s64 + -31320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D684;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25440
	ctx.r11.s64 = ctx.r11.s64 + 25440;
	// addi r3,r9,9976
	ctx.r3.s64 = ctx.r9.s64 + 9976;
	// stw r11,23608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D69C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D6B0"))) PPC_WEAK_FUNC(sub_8301D6B0);
PPC_FUNC_IMPL(__imp__sub_8301D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22168
	ctx.r3.s64 = ctx.r31.s64 + 22168;
	// addi r4,r10,-31296
	ctx.r4.s64 = ctx.r10.s64 + -31296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D6EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25520
	ctx.r11.s64 = ctx.r11.s64 + 25520;
	// addi r3,r9,10000
	ctx.r3.s64 = ctx.r9.s64 + 10000;
	// stw r11,22168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D704;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D718"))) PPC_WEAK_FUNC(sub_8301D718);
PPC_FUNC_IMPL(__imp__sub_8301D718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25656
	ctx.r3.s64 = ctx.r31.s64 + 25656;
	// addi r4,r10,-31272
	ctx.r4.s64 = ctx.r10.s64 + -31272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D754;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25600
	ctx.r11.s64 = ctx.r11.s64 + 25600;
	// addi r3,r9,10024
	ctx.r3.s64 = ctx.r9.s64 + 10024;
	// stw r11,25656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D76C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D780"))) PPC_WEAK_FUNC(sub_8301D780);
PPC_FUNC_IMPL(__imp__sub_8301D780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22040
	ctx.r3.s64 = ctx.r31.s64 + 22040;
	// addi r4,r10,-31248
	ctx.r4.s64 = ctx.r10.s64 + -31248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D7BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25680
	ctx.r11.s64 = ctx.r11.s64 + 25680;
	// addi r3,r9,10048
	ctx.r3.s64 = ctx.r9.s64 + 10048;
	// stw r11,22040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D7D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D7E8"))) PPC_WEAK_FUNC(sub_8301D7E8);
PPC_FUNC_IMPL(__imp__sub_8301D7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26104
	ctx.r3.s64 = ctx.r31.s64 + 26104;
	// addi r4,r10,-31224
	ctx.r4.s64 = ctx.r10.s64 + -31224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D824;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25760
	ctx.r11.s64 = ctx.r11.s64 + 25760;
	// addi r3,r9,10072
	ctx.r3.s64 = ctx.r9.s64 + 10072;
	// stw r11,26104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D83C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D850"))) PPC_WEAK_FUNC(sub_8301D850);
PPC_FUNC_IMPL(__imp__sub_8301D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27992
	ctx.r3.s64 = ctx.r31.s64 + 27992;
	// addi r4,r10,-31200
	ctx.r4.s64 = ctx.r10.s64 + -31200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D88C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25840
	ctx.r11.s64 = ctx.r11.s64 + 25840;
	// addi r3,r9,10096
	ctx.r3.s64 = ctx.r9.s64 + 10096;
	// stw r11,27992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D8A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D8B8"))) PPC_WEAK_FUNC(sub_8301D8B8);
PPC_FUNC_IMPL(__imp__sub_8301D8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22424
	ctx.r3.s64 = ctx.r31.s64 + 22424;
	// addi r4,r10,-31176
	ctx.r4.s64 = ctx.r10.s64 + -31176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D8F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25920
	ctx.r11.s64 = ctx.r11.s64 + 25920;
	// addi r3,r9,10120
	ctx.r3.s64 = ctx.r9.s64 + 10120;
	// stw r11,22424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D90C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D920"))) PPC_WEAK_FUNC(sub_8301D920);
PPC_FUNC_IMPL(__imp__sub_8301D920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27544
	ctx.r3.s64 = ctx.r31.s64 + 27544;
	// addi r4,r10,-31152
	ctx.r4.s64 = ctx.r10.s64 + -31152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D95C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26000
	ctx.r11.s64 = ctx.r11.s64 + 26000;
	// addi r3,r9,10144
	ctx.r3.s64 = ctx.r9.s64 + 10144;
	// stw r11,27544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D974;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D988"))) PPC_WEAK_FUNC(sub_8301D988);
PPC_FUNC_IMPL(__imp__sub_8301D988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23096
	ctx.r3.s64 = ctx.r31.s64 + 23096;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301D9C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r9,10168
	ctx.r3.s64 = ctx.r9.s64 + 10168;
	// stw r11,23096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301D9DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301D9F0"))) PPC_WEAK_FUNC(sub_8301D9F0);
PPC_FUNC_IMPL(__imp__sub_8301D9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26936
	ctx.r3.s64 = ctx.r31.s64 + 26936;
	// addi r4,r10,-31104
	ctx.r4.s64 = ctx.r10.s64 + -31104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DA2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26160
	ctx.r11.s64 = ctx.r11.s64 + 26160;
	// addi r3,r9,10192
	ctx.r3.s64 = ctx.r9.s64 + 10192;
	// stw r11,26936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DA44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DA58"))) PPC_WEAK_FUNC(sub_8301DA58);
PPC_FUNC_IMPL(__imp__sub_8301DA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23448
	ctx.r3.s64 = ctx.r31.s64 + 23448;
	// addi r4,r10,-31080
	ctx.r4.s64 = ctx.r10.s64 + -31080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DA94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26240
	ctx.r11.s64 = ctx.r11.s64 + 26240;
	// addi r3,r9,10216
	ctx.r3.s64 = ctx.r9.s64 + 10216;
	// stw r11,23448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DAAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DAC0"))) PPC_WEAK_FUNC(sub_8301DAC0);
PPC_FUNC_IMPL(__imp__sub_8301DAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25528
	ctx.r3.s64 = ctx.r31.s64 + 25528;
	// addi r4,r10,-31056
	ctx.r4.s64 = ctx.r10.s64 + -31056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DAFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26320
	ctx.r11.s64 = ctx.r11.s64 + 26320;
	// addi r3,r9,10240
	ctx.r3.s64 = ctx.r9.s64 + 10240;
	// stw r11,25528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DB14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DB28"))) PPC_WEAK_FUNC(sub_8301DB28);
PPC_FUNC_IMPL(__imp__sub_8301DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,28120
	ctx.r3.s64 = ctx.r31.s64 + 28120;
	// addi r4,r10,-31032
	ctx.r4.s64 = ctx.r10.s64 + -31032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DB64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
	// addi r3,r9,10264
	ctx.r3.s64 = ctx.r9.s64 + 10264;
	// stw r11,28120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DB7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DB90"))) PPC_WEAK_FUNC(sub_8301DB90);
PPC_FUNC_IMPL(__imp__sub_8301DB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21208
	ctx.r3.s64 = ctx.r31.s64 + 21208;
	// addi r4,r10,-31008
	ctx.r4.s64 = ctx.r10.s64 + -31008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DBCC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26480
	ctx.r11.s64 = ctx.r11.s64 + 26480;
	// addi r3,r9,10288
	ctx.r3.s64 = ctx.r9.s64 + 10288;
	// stw r11,21208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DBE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DBF8"))) PPC_WEAK_FUNC(sub_8301DBF8);
PPC_FUNC_IMPL(__imp__sub_8301DBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22936
	ctx.r3.s64 = ctx.r31.s64 + 22936;
	// addi r4,r10,-30984
	ctx.r4.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DC34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26560
	ctx.r11.s64 = ctx.r11.s64 + 26560;
	// addi r3,r9,10312
	ctx.r3.s64 = ctx.r9.s64 + 10312;
	// stw r11,22936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DC4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DC60"))) PPC_WEAK_FUNC(sub_8301DC60);
PPC_FUNC_IMPL(__imp__sub_8301DC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25752
	ctx.r3.s64 = ctx.r31.s64 + 25752;
	// addi r4,r10,-30960
	ctx.r4.s64 = ctx.r10.s64 + -30960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DC9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26640
	ctx.r11.s64 = ctx.r11.s64 + 26640;
	// addi r3,r9,10336
	ctx.r3.s64 = ctx.r9.s64 + 10336;
	// stw r11,25752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DCB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DCC8"))) PPC_WEAK_FUNC(sub_8301DCC8);
PPC_FUNC_IMPL(__imp__sub_8301DCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22008
	ctx.r3.s64 = ctx.r31.s64 + 22008;
	// addi r4,r10,-30936
	ctx.r4.s64 = ctx.r10.s64 + -30936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DD04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26720
	ctx.r11.s64 = ctx.r11.s64 + 26720;
	// addi r3,r9,10360
	ctx.r3.s64 = ctx.r9.s64 + 10360;
	// stw r11,22008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DD1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DD30"))) PPC_WEAK_FUNC(sub_8301DD30);
PPC_FUNC_IMPL(__imp__sub_8301DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23064
	ctx.r3.s64 = ctx.r31.s64 + 23064;
	// addi r4,r10,-30912
	ctx.r4.s64 = ctx.r10.s64 + -30912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DD6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26800
	ctx.r11.s64 = ctx.r11.s64 + 26800;
	// addi r3,r9,10384
	ctx.r3.s64 = ctx.r9.s64 + 10384;
	// stw r11,23064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DD84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DD98"))) PPC_WEAK_FUNC(sub_8301DD98);
PPC_FUNC_IMPL(__imp__sub_8301DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25240
	ctx.r3.s64 = ctx.r31.s64 + 25240;
	// addi r4,r10,-30888
	ctx.r4.s64 = ctx.r10.s64 + -30888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DDD4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26880
	ctx.r11.s64 = ctx.r11.s64 + 26880;
	// addi r3,r9,10408
	ctx.r3.s64 = ctx.r9.s64 + 10408;
	// stw r11,25240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DDEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DE00"))) PPC_WEAK_FUNC(sub_8301DE00);
PPC_FUNC_IMPL(__imp__sub_8301DE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26552
	ctx.r3.s64 = ctx.r31.s64 + 26552;
	// addi r4,r10,-30864
	ctx.r4.s64 = ctx.r10.s64 + -30864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DE3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26960
	ctx.r11.s64 = ctx.r11.s64 + 26960;
	// addi r3,r9,10432
	ctx.r3.s64 = ctx.r9.s64 + 10432;
	// stw r11,26552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DE54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DE68"))) PPC_WEAK_FUNC(sub_8301DE68);
PPC_FUNC_IMPL(__imp__sub_8301DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25688
	ctx.r3.s64 = ctx.r31.s64 + 25688;
	// addi r4,r10,-30840
	ctx.r4.s64 = ctx.r10.s64 + -30840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DEA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27040
	ctx.r11.s64 = ctx.r11.s64 + 27040;
	// addi r3,r9,10456
	ctx.r3.s64 = ctx.r9.s64 + 10456;
	// stw r11,25688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DEBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DED0"))) PPC_WEAK_FUNC(sub_8301DED0);
PPC_FUNC_IMPL(__imp__sub_8301DED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27832
	ctx.r3.s64 = ctx.r31.s64 + 27832;
	// addi r4,r10,-30816
	ctx.r4.s64 = ctx.r10.s64 + -30816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DF0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27120
	ctx.r11.s64 = ctx.r11.s64 + 27120;
	// addi r3,r9,10480
	ctx.r3.s64 = ctx.r9.s64 + 10480;
	// stw r11,27832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DF24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DF38"))) PPC_WEAK_FUNC(sub_8301DF38);
PPC_FUNC_IMPL(__imp__sub_8301DF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25432
	ctx.r3.s64 = ctx.r31.s64 + 25432;
	// addi r4,r10,-30792
	ctx.r4.s64 = ctx.r10.s64 + -30792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DF74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27200
	ctx.r11.s64 = ctx.r11.s64 + 27200;
	// addi r3,r9,10504
	ctx.r3.s64 = ctx.r9.s64 + 10504;
	// stw r11,25432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DF8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301DFA0"))) PPC_WEAK_FUNC(sub_8301DFA0);
PPC_FUNC_IMPL(__imp__sub_8301DFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27704
	ctx.r3.s64 = ctx.r31.s64 + 27704;
	// addi r4,r10,-30768
	ctx.r4.s64 = ctx.r10.s64 + -30768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301DFDC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27280
	ctx.r11.s64 = ctx.r11.s64 + 27280;
	// addi r3,r9,10528
	ctx.r3.s64 = ctx.r9.s64 + 10528;
	// stw r11,27704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301DFF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E008"))) PPC_WEAK_FUNC(sub_8301E008);
PPC_FUNC_IMPL(__imp__sub_8301E008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,20984
	ctx.r3.s64 = ctx.r31.s64 + 20984;
	// addi r4,r10,-30744
	ctx.r4.s64 = ctx.r10.s64 + -30744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E044;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27360
	ctx.r11.s64 = ctx.r11.s64 + 27360;
	// addi r3,r9,10552
	ctx.r3.s64 = ctx.r9.s64 + 10552;
	// stw r11,20984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E05C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E070"))) PPC_WEAK_FUNC(sub_8301E070);
PPC_FUNC_IMPL(__imp__sub_8301E070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23672
	ctx.r3.s64 = ctx.r31.s64 + 23672;
	// addi r4,r10,-30720
	ctx.r4.s64 = ctx.r10.s64 + -30720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E0AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27440
	ctx.r11.s64 = ctx.r11.s64 + 27440;
	// addi r3,r9,10576
	ctx.r3.s64 = ctx.r9.s64 + 10576;
	// stw r11,23672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E0C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E0D8"))) PPC_WEAK_FUNC(sub_8301E0D8);
PPC_FUNC_IMPL(__imp__sub_8301E0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24728
	ctx.r3.s64 = ctx.r31.s64 + 24728;
	// addi r4,r10,-30696
	ctx.r4.s64 = ctx.r10.s64 + -30696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E114;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27520
	ctx.r11.s64 = ctx.r11.s64 + 27520;
	// addi r3,r9,10600
	ctx.r3.s64 = ctx.r9.s64 + 10600;
	// stw r11,24728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E12C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E140"))) PPC_WEAK_FUNC(sub_8301E140);
PPC_FUNC_IMPL(__imp__sub_8301E140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26808
	ctx.r3.s64 = ctx.r31.s64 + 26808;
	// addi r4,r10,-30672
	ctx.r4.s64 = ctx.r10.s64 + -30672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E17C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27600
	ctx.r11.s64 = ctx.r11.s64 + 27600;
	// addi r3,r9,10624
	ctx.r3.s64 = ctx.r9.s64 + 10624;
	// stw r11,26808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E194;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E1A8"))) PPC_WEAK_FUNC(sub_8301E1A8);
PPC_FUNC_IMPL(__imp__sub_8301E1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23032
	ctx.r3.s64 = ctx.r31.s64 + 23032;
	// addi r4,r10,-30648
	ctx.r4.s64 = ctx.r10.s64 + -30648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E1E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27680
	ctx.r11.s64 = ctx.r11.s64 + 27680;
	// addi r3,r9,10648
	ctx.r3.s64 = ctx.r9.s64 + 10648;
	// stw r11,23032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E1FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E210"))) PPC_WEAK_FUNC(sub_8301E210);
PPC_FUNC_IMPL(__imp__sub_8301E210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23320
	ctx.r3.s64 = ctx.r31.s64 + 23320;
	// addi r4,r10,-30624
	ctx.r4.s64 = ctx.r10.s64 + -30624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E24C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27760
	ctx.r11.s64 = ctx.r11.s64 + 27760;
	// addi r3,r9,10672
	ctx.r3.s64 = ctx.r9.s64 + 10672;
	// stw r11,23320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E264;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E278"))) PPC_WEAK_FUNC(sub_8301E278);
PPC_FUNC_IMPL(__imp__sub_8301E278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25848
	ctx.r3.s64 = ctx.r31.s64 + 25848;
	// addi r4,r10,-30600
	ctx.r4.s64 = ctx.r10.s64 + -30600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E2B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27840
	ctx.r11.s64 = ctx.r11.s64 + 27840;
	// addi r3,r9,10696
	ctx.r3.s64 = ctx.r9.s64 + 10696;
	// stw r11,25848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E2CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E2E0"))) PPC_WEAK_FUNC(sub_8301E2E0);
PPC_FUNC_IMPL(__imp__sub_8301E2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21784
	ctx.r3.s64 = ctx.r31.s64 + 21784;
	// addi r4,r10,-30576
	ctx.r4.s64 = ctx.r10.s64 + -30576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E31C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27920
	ctx.r11.s64 = ctx.r11.s64 + 27920;
	// addi r3,r9,10720
	ctx.r3.s64 = ctx.r9.s64 + 10720;
	// stw r11,21784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E334;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E348"))) PPC_WEAK_FUNC(sub_8301E348);
PPC_FUNC_IMPL(__imp__sub_8301E348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27800
	ctx.r3.s64 = ctx.r31.s64 + 27800;
	// addi r4,r10,-30552
	ctx.r4.s64 = ctx.r10.s64 + -30552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E384;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28000
	ctx.r11.s64 = ctx.r11.s64 + 28000;
	// addi r3,r9,10744
	ctx.r3.s64 = ctx.r9.s64 + 10744;
	// stw r11,27800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E39C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E3B0"))) PPC_WEAK_FUNC(sub_8301E3B0);
PPC_FUNC_IMPL(__imp__sub_8301E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25944
	ctx.r3.s64 = ctx.r31.s64 + 25944;
	// addi r4,r10,-30528
	ctx.r4.s64 = ctx.r10.s64 + -30528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E3EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28080
	ctx.r11.s64 = ctx.r11.s64 + 28080;
	// addi r3,r9,10768
	ctx.r3.s64 = ctx.r9.s64 + 10768;
	// stw r11,25944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E404;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E418"))) PPC_WEAK_FUNC(sub_8301E418);
PPC_FUNC_IMPL(__imp__sub_8301E418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25336
	ctx.r3.s64 = ctx.r31.s64 + 25336;
	// addi r4,r10,-30504
	ctx.r4.s64 = ctx.r10.s64 + -30504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E454;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28160
	ctx.r11.s64 = ctx.r11.s64 + 28160;
	// addi r3,r9,10792
	ctx.r3.s64 = ctx.r9.s64 + 10792;
	// stw r11,25336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E46C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E480"))) PPC_WEAK_FUNC(sub_8301E480);
PPC_FUNC_IMPL(__imp__sub_8301E480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21272
	ctx.r3.s64 = ctx.r31.s64 + 21272;
	// addi r4,r10,-30480
	ctx.r4.s64 = ctx.r10.s64 + -30480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E4BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28240
	ctx.r11.s64 = ctx.r11.s64 + 28240;
	// addi r3,r9,10816
	ctx.r3.s64 = ctx.r9.s64 + 10816;
	// stw r11,21272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E4D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E4E8"))) PPC_WEAK_FUNC(sub_8301E4E8);
PPC_FUNC_IMPL(__imp__sub_8301E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22136
	ctx.r3.s64 = ctx.r31.s64 + 22136;
	// addi r4,r10,-30456
	ctx.r4.s64 = ctx.r10.s64 + -30456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E524;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28320
	ctx.r11.s64 = ctx.r11.s64 + 28320;
	// addi r3,r9,10840
	ctx.r3.s64 = ctx.r9.s64 + 10840;
	// stw r11,22136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E53C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E550"))) PPC_WEAK_FUNC(sub_8301E550);
PPC_FUNC_IMPL(__imp__sub_8301E550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21144
	ctx.r3.s64 = ctx.r31.s64 + 21144;
	// addi r4,r10,-30432
	ctx.r4.s64 = ctx.r10.s64 + -30432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E58C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// addi r3,r9,10864
	ctx.r3.s64 = ctx.r9.s64 + 10864;
	// stw r11,21144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E5A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E5B8"))) PPC_WEAK_FUNC(sub_8301E5B8);
PPC_FUNC_IMPL(__imp__sub_8301E5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21976
	ctx.r3.s64 = ctx.r31.s64 + 21976;
	// addi r4,r10,-30408
	ctx.r4.s64 = ctx.r10.s64 + -30408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E5F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28480
	ctx.r11.s64 = ctx.r11.s64 + 28480;
	// addi r3,r9,10888
	ctx.r3.s64 = ctx.r9.s64 + 10888;
	// stw r11,21976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E60C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E620"))) PPC_WEAK_FUNC(sub_8301E620);
PPC_FUNC_IMPL(__imp__sub_8301E620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27032
	ctx.r3.s64 = ctx.r31.s64 + 27032;
	// addi r4,r10,-30384
	ctx.r4.s64 = ctx.r10.s64 + -30384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E65C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28560
	ctx.r11.s64 = ctx.r11.s64 + 28560;
	// addi r3,r9,10912
	ctx.r3.s64 = ctx.r9.s64 + 10912;
	// stw r11,27032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E674;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E688"))) PPC_WEAK_FUNC(sub_8301E688);
PPC_FUNC_IMPL(__imp__sub_8301E688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24184
	ctx.r3.s64 = ctx.r31.s64 + 24184;
	// addi r4,r10,-30360
	ctx.r4.s64 = ctx.r10.s64 + -30360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E6C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28640
	ctx.r11.s64 = ctx.r11.s64 + 28640;
	// addi r3,r9,10936
	ctx.r3.s64 = ctx.r9.s64 + 10936;
	// stw r11,24184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E6DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E6F0"))) PPC_WEAK_FUNC(sub_8301E6F0);
PPC_FUNC_IMPL(__imp__sub_8301E6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27128
	ctx.r3.s64 = ctx.r31.s64 + 27128;
	// addi r4,r10,-30336
	ctx.r4.s64 = ctx.r10.s64 + -30336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E72C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// addi r3,r9,10960
	ctx.r3.s64 = ctx.r9.s64 + 10960;
	// stw r11,27128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E744;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E758"))) PPC_WEAK_FUNC(sub_8301E758);
PPC_FUNC_IMPL(__imp__sub_8301E758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26264
	ctx.r3.s64 = ctx.r31.s64 + 26264;
	// addi r4,r10,-30312
	ctx.r4.s64 = ctx.r10.s64 + -30312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E794;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28800
	ctx.r11.s64 = ctx.r11.s64 + 28800;
	// addi r3,r9,10984
	ctx.r3.s64 = ctx.r9.s64 + 10984;
	// stw r11,26264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E7AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E7C0"))) PPC_WEAK_FUNC(sub_8301E7C0);
PPC_FUNC_IMPL(__imp__sub_8301E7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23384
	ctx.r3.s64 = ctx.r31.s64 + 23384;
	// addi r4,r10,-30288
	ctx.r4.s64 = ctx.r10.s64 + -30288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E7FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28880
	ctx.r11.s64 = ctx.r11.s64 + 28880;
	// addi r3,r9,11008
	ctx.r3.s64 = ctx.r9.s64 + 11008;
	// stw r11,23384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E814;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E828"))) PPC_WEAK_FUNC(sub_8301E828);
PPC_FUNC_IMPL(__imp__sub_8301E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26040
	ctx.r3.s64 = ctx.r31.s64 + 26040;
	// addi r4,r10,-30264
	ctx.r4.s64 = ctx.r10.s64 + -30264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E864;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28960
	ctx.r11.s64 = ctx.r11.s64 + 28960;
	// addi r3,r9,11032
	ctx.r3.s64 = ctx.r9.s64 + 11032;
	// stw r11,26040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E87C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E890"))) PPC_WEAK_FUNC(sub_8301E890);
PPC_FUNC_IMPL(__imp__sub_8301E890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25784
	ctx.r3.s64 = ctx.r31.s64 + 25784;
	// addi r4,r10,-30240
	ctx.r4.s64 = ctx.r10.s64 + -30240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E8CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29040
	ctx.r11.s64 = ctx.r11.s64 + 29040;
	// addi r3,r9,11056
	ctx.r3.s64 = ctx.r9.s64 + 11056;
	// stw r11,25784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E8E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E8F8"))) PPC_WEAK_FUNC(sub_8301E8F8);
PPC_FUNC_IMPL(__imp__sub_8301E8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21464
	ctx.r3.s64 = ctx.r31.s64 + 21464;
	// addi r4,r10,-30216
	ctx.r4.s64 = ctx.r10.s64 + -30216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E934;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29120
	ctx.r11.s64 = ctx.r11.s64 + 29120;
	// addi r3,r9,11080
	ctx.r3.s64 = ctx.r9.s64 + 11080;
	// stw r11,21464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E94C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E960"))) PPC_WEAK_FUNC(sub_8301E960);
PPC_FUNC_IMPL(__imp__sub_8301E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23480
	ctx.r3.s64 = ctx.r31.s64 + 23480;
	// addi r4,r10,-30192
	ctx.r4.s64 = ctx.r10.s64 + -30192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301E99C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
	// addi r3,r9,11104
	ctx.r3.s64 = ctx.r9.s64 + 11104;
	// stw r11,23480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301E9B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301E9C8"))) PPC_WEAK_FUNC(sub_8301E9C8);
PPC_FUNC_IMPL(__imp__sub_8301E9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21912
	ctx.r3.s64 = ctx.r31.s64 + 21912;
	// addi r4,r10,-30168
	ctx.r4.s64 = ctx.r10.s64 + -30168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EA04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29280
	ctx.r11.s64 = ctx.r11.s64 + 29280;
	// addi r3,r9,11128
	ctx.r3.s64 = ctx.r9.s64 + 11128;
	// stw r11,21912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EA1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EA30"))) PPC_WEAK_FUNC(sub_8301EA30);
PPC_FUNC_IMPL(__imp__sub_8301EA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27320
	ctx.r3.s64 = ctx.r31.s64 + 27320;
	// addi r4,r10,-30144
	ctx.r4.s64 = ctx.r10.s64 + -30144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EA6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29360
	ctx.r11.s64 = ctx.r11.s64 + 29360;
	// addi r3,r9,11152
	ctx.r3.s64 = ctx.r9.s64 + 11152;
	// stw r11,27320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EA84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EA98"))) PPC_WEAK_FUNC(sub_8301EA98);
PPC_FUNC_IMPL(__imp__sub_8301EA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26456
	ctx.r3.s64 = ctx.r31.s64 + 26456;
	// addi r4,r10,-30120
	ctx.r4.s64 = ctx.r10.s64 + -30120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EAD4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29440
	ctx.r11.s64 = ctx.r11.s64 + 29440;
	// addi r3,r9,11176
	ctx.r3.s64 = ctx.r9.s64 + 11176;
	// stw r11,26456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EAEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EB00"))) PPC_WEAK_FUNC(sub_8301EB00);
PPC_FUNC_IMPL(__imp__sub_8301EB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27448
	ctx.r3.s64 = ctx.r31.s64 + 27448;
	// addi r4,r10,-30096
	ctx.r4.s64 = ctx.r10.s64 + -30096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EB3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29520
	ctx.r11.s64 = ctx.r11.s64 + 29520;
	// addi r3,r9,11200
	ctx.r3.s64 = ctx.r9.s64 + 11200;
	// stw r11,27448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EB54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EB68"))) PPC_WEAK_FUNC(sub_8301EB68);
PPC_FUNC_IMPL(__imp__sub_8301EB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26424
	ctx.r3.s64 = ctx.r31.s64 + 26424;
	// addi r4,r10,-30072
	ctx.r4.s64 = ctx.r10.s64 + -30072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EBA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29600
	ctx.r11.s64 = ctx.r11.s64 + 29600;
	// addi r3,r9,11224
	ctx.r3.s64 = ctx.r9.s64 + 11224;
	// stw r11,26424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EBBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EBD0"))) PPC_WEAK_FUNC(sub_8301EBD0);
PPC_FUNC_IMPL(__imp__sub_8301EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22104
	ctx.r3.s64 = ctx.r31.s64 + 22104;
	// addi r4,r10,-30048
	ctx.r4.s64 = ctx.r10.s64 + -30048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EC0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29680
	ctx.r11.s64 = ctx.r11.s64 + 29680;
	// addi r3,r9,11248
	ctx.r3.s64 = ctx.r9.s64 + 11248;
	// stw r11,22104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EC24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EC38"))) PPC_WEAK_FUNC(sub_8301EC38);
PPC_FUNC_IMPL(__imp__sub_8301EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21592
	ctx.r3.s64 = ctx.r31.s64 + 21592;
	// addi r4,r10,-30024
	ctx.r4.s64 = ctx.r10.s64 + -30024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EC74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29760
	ctx.r11.s64 = ctx.r11.s64 + 29760;
	// addi r3,r9,11272
	ctx.r3.s64 = ctx.r9.s64 + 11272;
	// stw r11,21592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EC8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ECA0"))) PPC_WEAK_FUNC(sub_8301ECA0);
PPC_FUNC_IMPL(__imp__sub_8301ECA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,25272
	ctx.r3.s64 = ctx.r31.s64 + 25272;
	// addi r4,r10,-30000
	ctx.r4.s64 = ctx.r10.s64 + -30000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301ECDC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29840
	ctx.r11.s64 = ctx.r11.s64 + 29840;
	// addi r3,r9,11296
	ctx.r3.s64 = ctx.r9.s64 + 11296;
	// stw r11,25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301ECF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ED08"))) PPC_WEAK_FUNC(sub_8301ED08);
PPC_FUNC_IMPL(__imp__sub_8301ED08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21048
	ctx.r3.s64 = ctx.r31.s64 + 21048;
	// addi r4,r10,-29976
	ctx.r4.s64 = ctx.r10.s64 + -29976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301ED44;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29920
	ctx.r11.s64 = ctx.r11.s64 + 29920;
	// addi r3,r9,11320
	ctx.r3.s64 = ctx.r9.s64 + 11320;
	// stw r11,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301ED5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ED70"))) PPC_WEAK_FUNC(sub_8301ED70);
PPC_FUNC_IMPL(__imp__sub_8301ED70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21816
	ctx.r3.s64 = ctx.r31.s64 + 21816;
	// addi r4,r10,-29952
	ctx.r4.s64 = ctx.r10.s64 + -29952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EDAC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30000
	ctx.r11.s64 = ctx.r11.s64 + 30000;
	// addi r3,r9,11344
	ctx.r3.s64 = ctx.r9.s64 + 11344;
	// stw r11,21816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EDC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EDD8"))) PPC_WEAK_FUNC(sub_8301EDD8);
PPC_FUNC_IMPL(__imp__sub_8301EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24088
	ctx.r3.s64 = ctx.r31.s64 + 24088;
	// addi r4,r10,-29928
	ctx.r4.s64 = ctx.r10.s64 + -29928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EE14;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// addi r3,r9,11368
	ctx.r3.s64 = ctx.r9.s64 + 11368;
	// stw r11,24088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EE2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EE40"))) PPC_WEAK_FUNC(sub_8301EE40);
PPC_FUNC_IMPL(__imp__sub_8301EE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,23736
	ctx.r3.s64 = ctx.r31.s64 + 23736;
	// addi r4,r10,-29904
	ctx.r4.s64 = ctx.r10.s64 + -29904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EE7C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30160
	ctx.r11.s64 = ctx.r11.s64 + 30160;
	// addi r3,r9,11392
	ctx.r3.s64 = ctx.r9.s64 + 11392;
	// stw r11,23736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EE94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EEA8"))) PPC_WEAK_FUNC(sub_8301EEA8);
PPC_FUNC_IMPL(__imp__sub_8301EEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,26360
	ctx.r3.s64 = ctx.r31.s64 + 26360;
	// addi r4,r10,-29880
	ctx.r4.s64 = ctx.r10.s64 + -29880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EEE4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30240
	ctx.r11.s64 = ctx.r11.s64 + 30240;
	// addi r3,r9,11416
	ctx.r3.s64 = ctx.r9.s64 + 11416;
	// stw r11,26360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EEFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EF10"))) PPC_WEAK_FUNC(sub_8301EF10);
PPC_FUNC_IMPL(__imp__sub_8301EF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22872
	ctx.r3.s64 = ctx.r31.s64 + 22872;
	// addi r4,r10,-29856
	ctx.r4.s64 = ctx.r10.s64 + -29856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EF4C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30320
	ctx.r11.s64 = ctx.r11.s64 + 30320;
	// addi r3,r9,11440
	ctx.r3.s64 = ctx.r9.s64 + 11440;
	// stw r11,22872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EF64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EF78"))) PPC_WEAK_FUNC(sub_8301EF78);
PPC_FUNC_IMPL(__imp__sub_8301EF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,24216
	ctx.r3.s64 = ctx.r31.s64 + 24216;
	// addi r4,r10,-29832
	ctx.r4.s64 = ctx.r10.s64 + -29832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301EFB4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30400
	ctx.r11.s64 = ctx.r11.s64 + 30400;
	// addi r3,r9,11464
	ctx.r3.s64 = ctx.r9.s64 + 11464;
	// stw r11,24216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301EFCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301EFE0"))) PPC_WEAK_FUNC(sub_8301EFE0);
PPC_FUNC_IMPL(__imp__sub_8301EFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,22552
	ctx.r3.s64 = ctx.r31.s64 + 22552;
	// addi r4,r10,-29808
	ctx.r4.s64 = ctx.r10.s64 + -29808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301F01C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30480
	ctx.r11.s64 = ctx.r11.s64 + 30480;
	// addi r3,r9,11488
	ctx.r3.s64 = ctx.r9.s64 + 11488;
	// stw r11,22552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F034;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F048"))) PPC_WEAK_FUNC(sub_8301F048);
PPC_FUNC_IMPL(__imp__sub_8301F048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,27256
	ctx.r3.s64 = ctx.r31.s64 + 27256;
	// addi r4,r10,-29784
	ctx.r4.s64 = ctx.r10.s64 + -29784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301F084;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30560
	ctx.r11.s64 = ctx.r11.s64 + 30560;
	// addi r3,r9,11512
	ctx.r3.s64 = ctx.r9.s64 + 11512;
	// stw r11,27256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F09C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F0B0"))) PPC_WEAK_FUNC(sub_8301F0B0);
PPC_FUNC_IMPL(__imp__sub_8301F0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,21304
	ctx.r3.s64 = ctx.r31.s64 + 21304;
	// addi r4,r10,-29760
	ctx.r4.s64 = ctx.r10.s64 + -29760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301F0EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30640
	ctx.r11.s64 = ctx.r11.s64 + 30640;
	// addi r3,r9,11536
	ctx.r3.s64 = ctx.r9.s64 + 11536;
	// stw r11,21304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F104;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F118"))) PPC_WEAK_FUNC(sub_8301F118);
PPC_FUNC_IMPL(__imp__sub_8301F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,28280
	ctx.r5.s64 = ctx.r11.s64 + 28280;
	// addi r3,r31,28184
	ctx.r3.s64 = ctx.r31.s64 + 28184;
	// addi r4,r10,-29540
	ctx.r4.s64 = ctx.r10.s64 + -29540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,496
	ctx.r6.s64 = 496;
	// bl 0x82b38290
	ctx.lr = 0x8301F154;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29736
	ctx.r11.s64 = ctx.r11.s64 + -29736;
	// addi r3,r9,11560
	ctx.r3.s64 = ctx.r9.s64 + 11560;
	// stw r11,28184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F16C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F180"))) PPC_WEAK_FUNC(sub_8301F180);
PPC_FUNC_IMPL(__imp__sub_8301F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,28152
	ctx.r3.s64 = ctx.r31.s64 + 28152;
	// addi r4,r10,-29532
	ctx.r4.s64 = ctx.r10.s64 + -29532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8301F1BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// addi r3,r9,11584
	ctx.r3.s64 = ctx.r9.s64 + 11584;
	// stw r11,28152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F1D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F1E8"))) PPC_WEAK_FUNC(sub_8301F1E8);
PPC_FUNC_IMPL(__imp__sub_8301F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,28184
	ctx.r5.s64 = ctx.r11.s64 + 28184;
	// addi r3,r31,28216
	ctx.r3.s64 = ctx.r31.s64 + 28216;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,560
	ctx.r6.s64 = 560;
	// bl 0x82b38290
	ctx.lr = 0x8301F224;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29512
	ctx.r11.s64 = ctx.r11.s64 + -29512;
	// addi r3,r9,11608
	ctx.r3.s64 = ctx.r9.s64 + 11608;
	// stw r11,28216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F23C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F250"))) PPC_WEAK_FUNC(sub_8301F250);
PPC_FUNC_IMPL(__imp__sub_8301F250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,28280
	ctx.r5.s64 = ctx.r11.s64 + 28280;
	// addi r3,r31,28248
	ctx.r3.s64 = ctx.r31.s64 + 28248;
	// addi r4,r10,-29144
	ctx.r4.s64 = ctx.r10.s64 + -29144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x8301F28C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29396
	ctx.r11.s64 = ctx.r11.s64 + -29396;
	// addi r3,r9,11632
	ctx.r3.s64 = ctx.r9.s64 + 11632;
	// stw r11,28248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F2A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F2B8"))) PPC_WEAK_FUNC(sub_8301F2B8);
PPC_FUNC_IMPL(__imp__sub_8301F2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,28280
	ctx.r3.s64 = ctx.r31.s64 + 28280;
	// addi r4,r10,-28948
	ctx.r4.s64 = ctx.r10.s64 + -28948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82b38290
	ctx.lr = 0x8301F2F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29136
	ctx.r11.s64 = ctx.r11.s64 + -29136;
	// addi r3,r9,11656
	ctx.r3.s64 = ctx.r9.s64 + 11656;
	// stw r11,28280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F30C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F320"))) PPC_WEAK_FUNC(sub_8301F320);
PPC_FUNC_IMPL(__imp__sub_8301F320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,28312
	ctx.r3.s64 = ctx.r31.s64 + 28312;
	// addi r4,r10,-27760
	ctx.r4.s64 = ctx.r10.s64 + -27760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3392
	ctx.r6.s64 = 3392;
	// bl 0x82b38290
	ctx.lr = 0x8301F35C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28936
	ctx.r11.s64 = ctx.r11.s64 + -28936;
	// addi r3,r9,11680
	ctx.r3.s64 = ctx.r9.s64 + 11680;
	// stw r11,28312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F374;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F388"))) PPC_WEAK_FUNC(sub_8301F388);
PPC_FUNC_IMPL(__imp__sub_8301F388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,28344
	ctx.r3.s64 = ctx.r31.s64 + 28344;
	// addi r4,r10,-22724
	ctx.r4.s64 = ctx.r10.s64 + -22724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1720
	ctx.r6.s64 = 1720;
	// bl 0x82b38290
	ctx.lr = 0x8301F3C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27748
	ctx.r11.s64 = ctx.r11.s64 + -27748;
	// addi r3,r9,11704
	ctx.r3.s64 = ctx.r9.s64 + 11704;
	// stw r11,28344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F3DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F3F0"))) PPC_WEAK_FUNC(sub_8301F3F0);
PPC_FUNC_IMPL(__imp__sub_8301F3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,28376
	ctx.r3.s64 = ctx.r31.s64 + 28376;
	// addi r4,r10,-16016
	ctx.r4.s64 = ctx.r10.s64 + -16016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2552
	ctx.r6.s64 = 2552;
	// bl 0x82b38290
	ctx.lr = 0x8301F42C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22708
	ctx.r11.s64 = ctx.r11.s64 + -22708;
	// addi r3,r9,11728
	ctx.r3.s64 = ctx.r9.s64 + 11728;
	// stw r11,28376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F444;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F458"))) PPC_WEAK_FUNC(sub_8301F458);
PPC_FUNC_IMPL(__imp__sub_8301F458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-11452
	ctx.r5.s64 = ctx.r11.s64 + -11452;
	// addi r3,r31,28408
	ctx.r3.s64 = ctx.r31.s64 + 28408;
	// addi r4,r10,-14988
	ctx.r4.s64 = ctx.r10.s64 + -14988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1488
	ctx.r6.s64 = 1488;
	// bl 0x82b38290
	ctx.lr = 0x8301F494;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15764
	ctx.r11.s64 = ctx.r11.s64 + -15764;
	// addi r3,r9,11752
	ctx.r3.s64 = ctx.r9.s64 + 11752;
	// stw r11,28408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F4AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F4C0"))) PPC_WEAK_FUNC(sub_8301F4C0);
PPC_FUNC_IMPL(__imp__sub_8301F4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28440
	ctx.r3.s64 = ctx.r31.s64 + 28440;
	// addi r4,r10,-14100
	ctx.r4.s64 = ctx.r10.s64 + -14100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,496
	ctx.r6.s64 = 496;
	// bl 0x82b38290
	ctx.lr = 0x8301F4FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14800
	ctx.r11.s64 = ctx.r11.s64 + -14800;
	// addi r3,r9,11776
	ctx.r3.s64 = ctx.r9.s64 + 11776;
	// stw r11,28440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F514;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F528"))) PPC_WEAK_FUNC(sub_8301F528);
PPC_FUNC_IMPL(__imp__sub_8301F528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28472
	ctx.r3.s64 = ctx.r31.s64 + 28472;
	// addi r4,r10,-13420
	ctx.r4.s64 = ctx.r10.s64 + -13420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3512
	ctx.r6.s64 = 3512;
	// bl 0x82b38290
	ctx.lr = 0x8301F564;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13788
	ctx.r11.s64 = ctx.r11.s64 + -13788;
	// addi r3,r9,11800
	ctx.r3.s64 = ctx.r9.s64 + 11800;
	// stw r11,28472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F57C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F590"))) PPC_WEAK_FUNC(sub_8301F590);
PPC_FUNC_IMPL(__imp__sub_8301F590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28504
	ctx.r3.s64 = ctx.r31.s64 + 28504;
	// addi r4,r10,-12428
	ctx.r4.s64 = ctx.r10.s64 + -12428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,800
	ctx.r6.s64 = 800;
	// bl 0x82b38290
	ctx.lr = 0x8301F5CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12908
	ctx.r11.s64 = ctx.r11.s64 + -12908;
	// addi r3,r9,11824
	ctx.r3.s64 = ctx.r9.s64 + 11824;
	// stw r11,28504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F5E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F5F8"))) PPC_WEAK_FUNC(sub_8301F5F8);
PPC_FUNC_IMPL(__imp__sub_8301F5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28536
	ctx.r3.s64 = ctx.r31.s64 + 28536;
	// addi r4,r10,-11784
	ctx.r4.s64 = ctx.r10.s64 + -11784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,216
	ctx.r6.s64 = 216;
	// bl 0x82b38290
	ctx.lr = 0x8301F634;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12200
	ctx.r11.s64 = ctx.r11.s64 + -12200;
	// addi r3,r9,11848
	ctx.r3.s64 = ctx.r9.s64 + 11848;
	// stw r11,28536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F64C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F660"))) PPC_WEAK_FUNC(sub_8301F660);
PPC_FUNC_IMPL(__imp__sub_8301F660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,28600
	ctx.r3.s64 = ctx.r31.s64 + 28600;
	// addi r4,r10,-11552
	ctx.r4.s64 = ctx.r10.s64 + -11552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x82b38290
	ctx.lr = 0x8301F69C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11764
	ctx.r11.s64 = ctx.r11.s64 + -11764;
	// addi r3,r9,11872
	ctx.r3.s64 = ctx.r9.s64 + 11872;
	// stw r11,28600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F6B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F6C8"))) PPC_WEAK_FUNC(sub_8301F6C8);
PPC_FUNC_IMPL(__imp__sub_8301F6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,14616
	ctx.r5.s64 = ctx.r11.s64 + 14616;
	// addi r3,r31,28568
	ctx.r3.s64 = ctx.r31.s64 + 28568;
	// addi r4,r10,-11532
	ctx.r4.s64 = ctx.r10.s64 + -11532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8301F704;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11756
	ctx.r11.s64 = ctx.r11.s64 + -11756;
	// addi r3,r9,11896
	ctx.r3.s64 = ctx.r9.s64 + 11896;
	// stw r11,28568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F71C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F730"))) PPC_WEAK_FUNC(sub_8301F730);
PPC_FUNC_IMPL(__imp__sub_8301F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28632
	ctx.r3.s64 = ctx.r31.s64 + 28632;
	// addi r4,r10,-11368
	ctx.r4.s64 = ctx.r10.s64 + -11368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8301F76C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11504
	ctx.r11.s64 = ctx.r11.s64 + -11504;
	// addi r3,r9,11920
	ctx.r3.s64 = ctx.r9.s64 + 11920;
	// stw r11,28632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F784;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F798"))) PPC_WEAK_FUNC(sub_8301F798);
PPC_FUNC_IMPL(__imp__sub_8301F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,28664
	ctx.r3.s64 = ctx.r31.s64 + 28664;
	// addi r4,r10,-11224
	ctx.r4.s64 = ctx.r10.s64 + -11224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8301F7D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11304
	ctx.r11.s64 = ctx.r11.s64 + -11304;
	// addi r3,r9,11944
	ctx.r3.s64 = ctx.r9.s64 + 11944;
	// stw r11,28664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F7EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F800"))) PPC_WEAK_FUNC(sub_8301F800);
PPC_FUNC_IMPL(__imp__sub_8301F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28696
	ctx.r3.s64 = ctx.r31.s64 + 28696;
	// addi r4,r10,-11032
	ctx.r4.s64 = ctx.r10.s64 + -11032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,248
	ctx.r6.s64 = 248;
	// bl 0x82b38290
	ctx.lr = 0x8301F83C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11204
	ctx.r11.s64 = ctx.r11.s64 + -11204;
	// addi r3,r9,11968
	ctx.r3.s64 = ctx.r9.s64 + 11968;
	// stw r11,28696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F868"))) PPC_WEAK_FUNC(sub_8301F868);
PPC_FUNC_IMPL(__imp__sub_8301F868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28732
	ctx.r3.s64 = ctx.r31.s64 + 28732;
	// addi r4,r10,-10344
	ctx.r4.s64 = ctx.r10.s64 + -10344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,624
	ctx.r6.s64 = 624;
	// bl 0x82b38290
	ctx.lr = 0x8301F8A4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10788
	ctx.r11.s64 = ctx.r11.s64 + -10788;
	// addi r3,r9,11992
	ctx.r3.s64 = ctx.r9.s64 + 11992;
	// stw r11,28732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28732, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F8BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F8D0"))) PPC_WEAK_FUNC(sub_8301F8D0);
PPC_FUNC_IMPL(__imp__sub_8301F8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r6,r7,28728
	ctx.r6.s64 = ctx.r7.s64 + 28728;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,128
	ctx.r8.s64 = 128;
	// lwz r11,28728(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28728);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,28728(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28728, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F900"))) PPC_WEAK_FUNC(sub_8301F900);
PPC_FUNC_IMPL(__imp__sub_8301F900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r6,r7,28764
	ctx.r6.s64 = ctx.r7.s64 + 28764;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// lwz r11,28764(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28764);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,28764(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28764, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F930"))) PPC_WEAK_FUNC(sub_8301F930);
PPC_FUNC_IMPL(__imp__sub_8301F930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,28780
	ctx.r3.s64 = ctx.r31.s64 + 28780;
	// addi r4,r10,-9252
	ctx.r4.s64 = ctx.r10.s64 + -9252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x8301F96C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9640
	ctx.r11.s64 = ctx.r11.s64 + -9640;
	// addi r3,r9,12016
	ctx.r3.s64 = ctx.r9.s64 + 12016;
	// stw r11,28780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301F984;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F998"))) PPC_WEAK_FUNC(sub_8301F998);
PPC_FUNC_IMPL(__imp__sub_8301F998) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,28772
	ctx.r6.s64 = ctx.r7.s64 + 28772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,120
	ctx.r8.s64 = 120;
	// lwz r11,28772(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28772);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,28772(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28772, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9C8"))) PPC_WEAK_FUNC(sub_8301F9C8);
PPC_FUNC_IMPL(__imp__sub_8301F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r7,28776
	ctx.r6.s64 = ctx.r7.s64 + 28776;
	// li r9,120
	ctx.r9.s64 = 120;
	// li r8,60
	ctx.r8.s64 = 60;
	// lwz r11,28776(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28776);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,28776(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28776, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301F9F8"))) PPC_WEAK_FUNC(sub_8301F9F8);
PPC_FUNC_IMPL(__imp__sub_8301F9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// li r10,120
	ctx.r10.s64 = 120;
	// addi r6,r7,28768
	ctx.r6.s64 = ctx.r7.s64 + 28768;
	// li r9,60
	ctx.r9.s64 = 60;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,28768(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28768);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,28768(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28768, ctx.r11.u32);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FA28"))) PPC_WEAK_FUNC(sub_8301FA28);
PPC_FUNC_IMPL(__imp__sub_8301FA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,-22268
	ctx.r3.s64 = ctx.r31.s64 + -22268;
	// addi r4,r10,-7092
	ctx.r4.s64 = ctx.r10.s64 + -7092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4528
	ctx.r6.s64 = 4528;
	// bl 0x82b38290
	ctx.lr = 0x8301FA64;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8140
	ctx.r11.s64 = ctx.r11.s64 + -8140;
	// addi r3,r9,12040
	ctx.r3.s64 = ctx.r9.s64 + 12040;
	// stw r11,-22268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22268, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FA7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FA90"))) PPC_WEAK_FUNC(sub_8301FA90);
PPC_FUNC_IMPL(__imp__sub_8301FA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,-22236
	ctx.r3.s64 = ctx.r31.s64 + -22236;
	// addi r4,r10,-6496
	ctx.r4.s64 = ctx.r10.s64 + -6496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,392
	ctx.r6.s64 = 392;
	// bl 0x82b38290
	ctx.lr = 0x8301FACC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7076
	ctx.r11.s64 = ctx.r11.s64 + -7076;
	// addi r3,r9,12064
	ctx.r3.s64 = ctx.r9.s64 + 12064;
	// stw r11,-22236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22236, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FAE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FAF8"))) PPC_WEAK_FUNC(sub_8301FAF8);
PPC_FUNC_IMPL(__imp__sub_8301FAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21756
	ctx.r3.s64 = ctx.r31.s64 + -21756;
	// addi r4,r10,23608
	ctx.r4.s64 = ctx.r10.s64 + 23608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FB34;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6476
	ctx.r11.s64 = ctx.r11.s64 + -6476;
	// addi r3,r9,12088
	ctx.r3.s64 = ctx.r9.s64 + 12088;
	// stw r11,-21756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FB4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FB60"))) PPC_WEAK_FUNC(sub_8301FB60);
PPC_FUNC_IMPL(__imp__sub_8301FB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15420
	ctx.r3.s64 = ctx.r31.s64 + -15420;
	// addi r4,r10,23644
	ctx.r4.s64 = ctx.r10.s64 + 23644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FB9C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6380
	ctx.r11.s64 = ctx.r11.s64 + -6380;
	// addi r3,r9,12112
	ctx.r3.s64 = ctx.r9.s64 + 12112;
	// stw r11,-15420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FBB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FBC8"))) PPC_WEAK_FUNC(sub_8301FBC8);
PPC_FUNC_IMPL(__imp__sub_8301FBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19324
	ctx.r3.s64 = ctx.r31.s64 + -19324;
	// addi r4,r10,23684
	ctx.r4.s64 = ctx.r10.s64 + 23684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FC04;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6296
	ctx.r11.s64 = ctx.r11.s64 + -6296;
	// addi r3,r9,12136
	ctx.r3.s64 = ctx.r9.s64 + 12136;
	// stw r11,-19324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FC1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FC30"))) PPC_WEAK_FUNC(sub_8301FC30);
PPC_FUNC_IMPL(__imp__sub_8301FC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16508
	ctx.r3.s64 = ctx.r31.s64 + -16508;
	// addi r4,r10,23720
	ctx.r4.s64 = ctx.r10.s64 + 23720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FC6C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6216
	ctx.r11.s64 = ctx.r11.s64 + -6216;
	// addi r3,r9,12160
	ctx.r3.s64 = ctx.r9.s64 + 12160;
	// stw r11,-16508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FC84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FC98"))) PPC_WEAK_FUNC(sub_8301FC98);
PPC_FUNC_IMPL(__imp__sub_8301FC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19708
	ctx.r3.s64 = ctx.r31.s64 + -19708;
	// addi r4,r10,23756
	ctx.r4.s64 = ctx.r10.s64 + 23756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FCD4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6136
	ctx.r11.s64 = ctx.r11.s64 + -6136;
	// addi r3,r9,12184
	ctx.r3.s64 = ctx.r9.s64 + 12184;
	// stw r11,-19708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FCEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FD00"))) PPC_WEAK_FUNC(sub_8301FD00);
PPC_FUNC_IMPL(__imp__sub_8301FD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17724
	ctx.r3.s64 = ctx.r31.s64 + -17724;
	// addi r4,r10,23796
	ctx.r4.s64 = ctx.r10.s64 + 23796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FD3C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6056
	ctx.r11.s64 = ctx.r11.s64 + -6056;
	// addi r3,r9,12208
	ctx.r3.s64 = ctx.r9.s64 + 12208;
	// stw r11,-17724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17724, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FD54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FD68"))) PPC_WEAK_FUNC(sub_8301FD68);
PPC_FUNC_IMPL(__imp__sub_8301FD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21020
	ctx.r3.s64 = ctx.r31.s64 + -21020;
	// addi r4,r10,23832
	ctx.r4.s64 = ctx.r10.s64 + 23832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FDA4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5976
	ctx.r11.s64 = ctx.r11.s64 + -5976;
	// addi r3,r9,12232
	ctx.r3.s64 = ctx.r9.s64 + 12232;
	// stw r11,-21020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21020, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FDBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FDD0"))) PPC_WEAK_FUNC(sub_8301FDD0);
PPC_FUNC_IMPL(__imp__sub_8301FDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18044
	ctx.r3.s64 = ctx.r31.s64 + -18044;
	// addi r4,r10,23868
	ctx.r4.s64 = ctx.r10.s64 + 23868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FE0C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5896
	ctx.r11.s64 = ctx.r11.s64 + -5896;
	// addi r3,r9,12256
	ctx.r3.s64 = ctx.r9.s64 + 12256;
	// stw r11,-18044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18044, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FE24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FE38"))) PPC_WEAK_FUNC(sub_8301FE38);
PPC_FUNC_IMPL(__imp__sub_8301FE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21820
	ctx.r3.s64 = ctx.r31.s64 + -21820;
	// addi r4,r10,23904
	ctx.r4.s64 = ctx.r10.s64 + 23904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FE74;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5816
	ctx.r11.s64 = ctx.r11.s64 + -5816;
	// addi r3,r9,12280
	ctx.r3.s64 = ctx.r9.s64 + 12280;
	// stw r11,-21820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21820, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FE8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FEA0"))) PPC_WEAK_FUNC(sub_8301FEA0);
PPC_FUNC_IMPL(__imp__sub_8301FEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20540
	ctx.r3.s64 = ctx.r31.s64 + -20540;
	// addi r4,r10,23940
	ctx.r4.s64 = ctx.r10.s64 + 23940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FEDC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5736
	ctx.r11.s64 = ctx.r11.s64 + -5736;
	// addi r3,r9,12304
	ctx.r3.s64 = ctx.r9.s64 + 12304;
	// stw r11,-20540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FEF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FF08"))) PPC_WEAK_FUNC(sub_8301FF08);
PPC_FUNC_IMPL(__imp__sub_8301FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21788
	ctx.r3.s64 = ctx.r31.s64 + -21788;
	// addi r4,r10,23980
	ctx.r4.s64 = ctx.r10.s64 + 23980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FF44;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5656
	ctx.r11.s64 = ctx.r11.s64 + -5656;
	// addi r3,r9,12328
	ctx.r3.s64 = ctx.r9.s64 + 12328;
	// stw r11,-21788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21788, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FF5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FF70"))) PPC_WEAK_FUNC(sub_8301FF70);
PPC_FUNC_IMPL(__imp__sub_8301FF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16636
	ctx.r3.s64 = ctx.r31.s64 + -16636;
	// addi r4,r10,24020
	ctx.r4.s64 = ctx.r10.s64 + 24020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301FFAC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5576
	ctx.r11.s64 = ctx.r11.s64 + -5576;
	// addi r3,r9,12352
	ctx.r3.s64 = ctx.r9.s64 + 12352;
	// stw r11,-16636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301FFC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301FFD8"))) PPC_WEAK_FUNC(sub_8301FFD8);
PPC_FUNC_IMPL(__imp__sub_8301FFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16476
	ctx.r3.s64 = ctx.r31.s64 + -16476;
	// addi r4,r10,24060
	ctx.r4.s64 = ctx.r10.s64 + 24060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020014;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5496
	ctx.r11.s64 = ctx.r11.s64 + -5496;
	// addi r3,r9,12376
	ctx.r3.s64 = ctx.r9.s64 + 12376;
	// stw r11,-16476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302002C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020040"))) PPC_WEAK_FUNC(sub_83020040);
PPC_FUNC_IMPL(__imp__sub_83020040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18556
	ctx.r3.s64 = ctx.r31.s64 + -18556;
	// addi r4,r10,24096
	ctx.r4.s64 = ctx.r10.s64 + 24096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302007C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5416
	ctx.r11.s64 = ctx.r11.s64 + -5416;
	// addi r3,r9,12400
	ctx.r3.s64 = ctx.r9.s64 + 12400;
	// stw r11,-18556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830200A8"))) PPC_WEAK_FUNC(sub_830200A8);
PPC_FUNC_IMPL(__imp__sub_830200A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15292
	ctx.r3.s64 = ctx.r31.s64 + -15292;
	// addi r4,r10,24132
	ctx.r4.s64 = ctx.r10.s64 + 24132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830200E4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5336
	ctx.r11.s64 = ctx.r11.s64 + -5336;
	// addi r3,r9,12424
	ctx.r3.s64 = ctx.r9.s64 + 12424;
	// stw r11,-15292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15292, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830200FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020110"))) PPC_WEAK_FUNC(sub_83020110);
PPC_FUNC_IMPL(__imp__sub_83020110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18460
	ctx.r3.s64 = ctx.r31.s64 + -18460;
	// addi r4,r10,24172
	ctx.r4.s64 = ctx.r10.s64 + 24172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302014C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5256
	ctx.r11.s64 = ctx.r11.s64 + -5256;
	// addi r3,r9,12448
	ctx.r3.s64 = ctx.r9.s64 + 12448;
	// stw r11,-18460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18460, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020164;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020178"))) PPC_WEAK_FUNC(sub_83020178);
PPC_FUNC_IMPL(__imp__sub_83020178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17180
	ctx.r3.s64 = ctx.r31.s64 + -17180;
	// addi r4,r10,24212
	ctx.r4.s64 = ctx.r10.s64 + 24212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830201B4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5176
	ctx.r11.s64 = ctx.r11.s64 + -5176;
	// addi r3,r9,12472
	ctx.r3.s64 = ctx.r9.s64 + 12472;
	// stw r11,-17180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17180, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830201CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830201E0"))) PPC_WEAK_FUNC(sub_830201E0);
PPC_FUNC_IMPL(__imp__sub_830201E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15132
	ctx.r3.s64 = ctx.r31.s64 + -15132;
	// addi r4,r10,24252
	ctx.r4.s64 = ctx.r10.s64 + 24252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302021C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5096
	ctx.r11.s64 = ctx.r11.s64 + -5096;
	// addi r3,r9,12496
	ctx.r3.s64 = ctx.r9.s64 + 12496;
	// stw r11,-15132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020234;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020248"))) PPC_WEAK_FUNC(sub_83020248);
PPC_FUNC_IMPL(__imp__sub_83020248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17628
	ctx.r3.s64 = ctx.r31.s64 + -17628;
	// addi r4,r10,24292
	ctx.r4.s64 = ctx.r10.s64 + 24292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020284;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// addi r3,r9,12520
	ctx.r3.s64 = ctx.r9.s64 + 12520;
	// stw r11,-17628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17628, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302029C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830202B0"))) PPC_WEAK_FUNC(sub_830202B0);
PPC_FUNC_IMPL(__imp__sub_830202B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22044
	ctx.r3.s64 = ctx.r31.s64 + -22044;
	// addi r4,r10,24332
	ctx.r4.s64 = ctx.r10.s64 + 24332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830202EC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4936
	ctx.r11.s64 = ctx.r11.s64 + -4936;
	// addi r3,r9,12544
	ctx.r3.s64 = ctx.r9.s64 + 12544;
	// stw r11,-22044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22044, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020304;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020318"))) PPC_WEAK_FUNC(sub_83020318);
PPC_FUNC_IMPL(__imp__sub_83020318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21468
	ctx.r3.s64 = ctx.r31.s64 + -21468;
	// addi r4,r10,24368
	ctx.r4.s64 = ctx.r10.s64 + 24368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020354;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4856
	ctx.r11.s64 = ctx.r11.s64 + -4856;
	// addi r3,r9,12568
	ctx.r3.s64 = ctx.r9.s64 + 12568;
	// stw r11,-21468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21468, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302036C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020380"))) PPC_WEAK_FUNC(sub_83020380);
PPC_FUNC_IMPL(__imp__sub_83020380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19932
	ctx.r3.s64 = ctx.r31.s64 + -19932;
	// addi r4,r10,24404
	ctx.r4.s64 = ctx.r10.s64 + 24404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830203BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4776
	ctx.r11.s64 = ctx.r11.s64 + -4776;
	// addi r3,r9,12592
	ctx.r3.s64 = ctx.r9.s64 + 12592;
	// stw r11,-19932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830203D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830203E8"))) PPC_WEAK_FUNC(sub_830203E8);
PPC_FUNC_IMPL(__imp__sub_830203E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20956
	ctx.r3.s64 = ctx.r31.s64 + -20956;
	// addi r4,r10,24444
	ctx.r4.s64 = ctx.r10.s64 + 24444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020424;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4696
	ctx.r11.s64 = ctx.r11.s64 + -4696;
	// addi r3,r9,12616
	ctx.r3.s64 = ctx.r9.s64 + 12616;
	// stw r11,-20956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20956, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302043C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020450"))) PPC_WEAK_FUNC(sub_83020450);
PPC_FUNC_IMPL(__imp__sub_83020450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20380
	ctx.r3.s64 = ctx.r31.s64 + -20380;
	// addi r4,r10,24484
	ctx.r4.s64 = ctx.r10.s64 + 24484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302048C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4616
	ctx.r11.s64 = ctx.r11.s64 + -4616;
	// addi r3,r9,12640
	ctx.r3.s64 = ctx.r9.s64 + 12640;
	// stw r11,-20380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830204A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830204B8"))) PPC_WEAK_FUNC(sub_830204B8);
PPC_FUNC_IMPL(__imp__sub_830204B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18364
	ctx.r3.s64 = ctx.r31.s64 + -18364;
	// addi r4,r10,24528
	ctx.r4.s64 = ctx.r10.s64 + 24528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830204F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4536
	ctx.r11.s64 = ctx.r11.s64 + -4536;
	// addi r3,r9,12664
	ctx.r3.s64 = ctx.r9.s64 + 12664;
	// stw r11,-18364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18364, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302050C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020520"))) PPC_WEAK_FUNC(sub_83020520);
PPC_FUNC_IMPL(__imp__sub_83020520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19772
	ctx.r3.s64 = ctx.r31.s64 + -19772;
	// addi r4,r10,24568
	ctx.r4.s64 = ctx.r10.s64 + 24568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302055C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4456
	ctx.r11.s64 = ctx.r11.s64 + -4456;
	// addi r3,r9,12688
	ctx.r3.s64 = ctx.r9.s64 + 12688;
	// stw r11,-19772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020574;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020588"))) PPC_WEAK_FUNC(sub_83020588);
PPC_FUNC_IMPL(__imp__sub_83020588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18588
	ctx.r3.s64 = ctx.r31.s64 + -18588;
	// addi r4,r10,24608
	ctx.r4.s64 = ctx.r10.s64 + 24608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830205C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4376
	ctx.r11.s64 = ctx.r11.s64 + -4376;
	// addi r3,r9,12712
	ctx.r3.s64 = ctx.r9.s64 + 12712;
	// stw r11,-18588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830205DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830205F0"))) PPC_WEAK_FUNC(sub_830205F0);
PPC_FUNC_IMPL(__imp__sub_830205F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19996
	ctx.r3.s64 = ctx.r31.s64 + -19996;
	// addi r4,r10,24652
	ctx.r4.s64 = ctx.r10.s64 + 24652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302062C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4296
	ctx.r11.s64 = ctx.r11.s64 + -4296;
	// addi r3,r9,12736
	ctx.r3.s64 = ctx.r9.s64 + 12736;
	// stw r11,-19996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020644;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020658"))) PPC_WEAK_FUNC(sub_83020658);
PPC_FUNC_IMPL(__imp__sub_83020658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16924
	ctx.r3.s64 = ctx.r31.s64 + -16924;
	// addi r4,r10,24692
	ctx.r4.s64 = ctx.r10.s64 + 24692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020694;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4216
	ctx.r11.s64 = ctx.r11.s64 + -4216;
	// addi r3,r9,12760
	ctx.r3.s64 = ctx.r9.s64 + 12760;
	// stw r11,-16924(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16924, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830206AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830206C0"))) PPC_WEAK_FUNC(sub_830206C0);
PPC_FUNC_IMPL(__imp__sub_830206C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19836
	ctx.r3.s64 = ctx.r31.s64 + -19836;
	// addi r4,r10,24732
	ctx.r4.s64 = ctx.r10.s64 + 24732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830206FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4136
	ctx.r11.s64 = ctx.r11.s64 + -4136;
	// addi r3,r9,12784
	ctx.r3.s64 = ctx.r9.s64 + 12784;
	// stw r11,-19836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020714;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020728"))) PPC_WEAK_FUNC(sub_83020728);
PPC_FUNC_IMPL(__imp__sub_83020728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16444
	ctx.r3.s64 = ctx.r31.s64 + -16444;
	// addi r4,r10,24768
	ctx.r4.s64 = ctx.r10.s64 + 24768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020764;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4056
	ctx.r11.s64 = ctx.r11.s64 + -4056;
	// addi r3,r9,12808
	ctx.r3.s64 = ctx.r9.s64 + 12808;
	// stw r11,-16444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302077C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020790"))) PPC_WEAK_FUNC(sub_83020790);
PPC_FUNC_IMPL(__imp__sub_83020790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20348
	ctx.r3.s64 = ctx.r31.s64 + -20348;
	// addi r4,r10,24808
	ctx.r4.s64 = ctx.r10.s64 + 24808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830207CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3976
	ctx.r11.s64 = ctx.r11.s64 + -3976;
	// addi r3,r9,12832
	ctx.r3.s64 = ctx.r9.s64 + 12832;
	// stw r11,-20348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830207E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830207F8"))) PPC_WEAK_FUNC(sub_830207F8);
PPC_FUNC_IMPL(__imp__sub_830207F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-14908
	ctx.r3.s64 = ctx.r31.s64 + -14908;
	// addi r4,r10,24852
	ctx.r4.s64 = ctx.r10.s64 + 24852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020834;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3896
	ctx.r11.s64 = ctx.r11.s64 + -3896;
	// addi r3,r9,12856
	ctx.r3.s64 = ctx.r9.s64 + 12856;
	// stw r11,-14908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302084C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020860"))) PPC_WEAK_FUNC(sub_83020860);
PPC_FUNC_IMPL(__imp__sub_83020860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15804
	ctx.r3.s64 = ctx.r31.s64 + -15804;
	// addi r4,r10,24892
	ctx.r4.s64 = ctx.r10.s64 + 24892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302089C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3816
	ctx.r11.s64 = ctx.r11.s64 + -3816;
	// addi r3,r9,12880
	ctx.r3.s64 = ctx.r9.s64 + 12880;
	// stw r11,-15804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830208B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830208C8"))) PPC_WEAK_FUNC(sub_830208C8);
PPC_FUNC_IMPL(__imp__sub_830208C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20700
	ctx.r3.s64 = ctx.r31.s64 + -20700;
	// addi r4,r10,24928
	ctx.r4.s64 = ctx.r10.s64 + 24928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020904;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3736
	ctx.r11.s64 = ctx.r11.s64 + -3736;
	// addi r3,r9,12904
	ctx.r3.s64 = ctx.r9.s64 + 12904;
	// stw r11,-20700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302091C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020930"))) PPC_WEAK_FUNC(sub_83020930);
PPC_FUNC_IMPL(__imp__sub_83020930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18652
	ctx.r3.s64 = ctx.r31.s64 + -18652;
	// addi r4,r10,24968
	ctx.r4.s64 = ctx.r10.s64 + 24968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302096C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3656
	ctx.r11.s64 = ctx.r11.s64 + -3656;
	// addi r3,r9,12928
	ctx.r3.s64 = ctx.r9.s64 + 12928;
	// stw r11,-18652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020984;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020998"))) PPC_WEAK_FUNC(sub_83020998);
PPC_FUNC_IMPL(__imp__sub_83020998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17692
	ctx.r3.s64 = ctx.r31.s64 + -17692;
	// addi r4,r10,25008
	ctx.r4.s64 = ctx.r10.s64 + 25008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830209D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3576
	ctx.r11.s64 = ctx.r11.s64 + -3576;
	// addi r3,r9,12952
	ctx.r3.s64 = ctx.r9.s64 + 12952;
	// stw r11,-17692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17692, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830209EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020A00"))) PPC_WEAK_FUNC(sub_83020A00);
PPC_FUNC_IMPL(__imp__sub_83020A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19900
	ctx.r3.s64 = ctx.r31.s64 + -19900;
	// addi r4,r10,25044
	ctx.r4.s64 = ctx.r10.s64 + 25044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020A3C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3496
	ctx.r11.s64 = ctx.r11.s64 + -3496;
	// addi r3,r9,12976
	ctx.r3.s64 = ctx.r9.s64 + 12976;
	// stw r11,-19900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020A54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020A68"))) PPC_WEAK_FUNC(sub_83020A68);
PPC_FUNC_IMPL(__imp__sub_83020A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18172
	ctx.r3.s64 = ctx.r31.s64 + -18172;
	// addi r4,r10,25080
	ctx.r4.s64 = ctx.r10.s64 + 25080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020AA4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3416
	ctx.r11.s64 = ctx.r11.s64 + -3416;
	// addi r3,r9,13000
	ctx.r3.s64 = ctx.r9.s64 + 13000;
	// stw r11,-18172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18172, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020ABC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020AD0"))) PPC_WEAK_FUNC(sub_83020AD0);
PPC_FUNC_IMPL(__imp__sub_83020AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19004
	ctx.r3.s64 = ctx.r31.s64 + -19004;
	// addi r4,r10,25120
	ctx.r4.s64 = ctx.r10.s64 + 25120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020B0C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3336
	ctx.r11.s64 = ctx.r11.s64 + -3336;
	// addi r3,r9,13024
	ctx.r3.s64 = ctx.r9.s64 + 13024;
	// stw r11,-19004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020B24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020B38"))) PPC_WEAK_FUNC(sub_83020B38);
PPC_FUNC_IMPL(__imp__sub_83020B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16732
	ctx.r3.s64 = ctx.r31.s64 + -16732;
	// addi r4,r10,25160
	ctx.r4.s64 = ctx.r10.s64 + 25160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020B74;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3256
	ctx.r11.s64 = ctx.r11.s64 + -3256;
	// addi r3,r9,13048
	ctx.r3.s64 = ctx.r9.s64 + 13048;
	// stw r11,-16732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16732, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020B8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020BA0"))) PPC_WEAK_FUNC(sub_83020BA0);
PPC_FUNC_IMPL(__imp__sub_83020BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21596
	ctx.r3.s64 = ctx.r31.s64 + -21596;
	// addi r4,r10,25196
	ctx.r4.s64 = ctx.r10.s64 + 25196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020BDC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3176
	ctx.r11.s64 = ctx.r11.s64 + -3176;
	// addi r3,r9,13072
	ctx.r3.s64 = ctx.r9.s64 + 13072;
	// stw r11,-21596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21596, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020BF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020C08"))) PPC_WEAK_FUNC(sub_83020C08);
PPC_FUNC_IMPL(__imp__sub_83020C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19804
	ctx.r3.s64 = ctx.r31.s64 + -19804;
	// addi r4,r10,25240
	ctx.r4.s64 = ctx.r10.s64 + 25240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020C44;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3096
	ctx.r11.s64 = ctx.r11.s64 + -3096;
	// addi r3,r9,13096
	ctx.r3.s64 = ctx.r9.s64 + 13096;
	// stw r11,-19804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020C5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020C70"))) PPC_WEAK_FUNC(sub_83020C70);
PPC_FUNC_IMPL(__imp__sub_83020C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17148
	ctx.r3.s64 = ctx.r31.s64 + -17148;
	// addi r4,r10,25280
	ctx.r4.s64 = ctx.r10.s64 + 25280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020CAC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3016
	ctx.r11.s64 = ctx.r11.s64 + -3016;
	// addi r3,r9,13120
	ctx.r3.s64 = ctx.r9.s64 + 13120;
	// stw r11,-17148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17148, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020CC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020CD8"))) PPC_WEAK_FUNC(sub_83020CD8);
PPC_FUNC_IMPL(__imp__sub_83020CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21180
	ctx.r3.s64 = ctx.r31.s64 + -21180;
	// addi r4,r10,25316
	ctx.r4.s64 = ctx.r10.s64 + 25316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020D14;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2936
	ctx.r11.s64 = ctx.r11.s64 + -2936;
	// addi r3,r9,13144
	ctx.r3.s64 = ctx.r9.s64 + 13144;
	// stw r11,-21180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21180, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020D2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020D40"))) PPC_WEAK_FUNC(sub_83020D40);
PPC_FUNC_IMPL(__imp__sub_83020D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18524
	ctx.r3.s64 = ctx.r31.s64 + -18524;
	// addi r4,r10,25352
	ctx.r4.s64 = ctx.r10.s64 + 25352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020D7C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2856
	ctx.r11.s64 = ctx.r11.s64 + -2856;
	// addi r3,r9,13168
	ctx.r3.s64 = ctx.r9.s64 + 13168;
	// stw r11,-18524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18524, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020D94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020DA8"))) PPC_WEAK_FUNC(sub_83020DA8);
PPC_FUNC_IMPL(__imp__sub_83020DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18236
	ctx.r3.s64 = ctx.r31.s64 + -18236;
	// addi r4,r10,25392
	ctx.r4.s64 = ctx.r10.s64 + 25392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020DE4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2776
	ctx.r11.s64 = ctx.r11.s64 + -2776;
	// addi r3,r9,13192
	ctx.r3.s64 = ctx.r9.s64 + 13192;
	// stw r11,-18236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18236, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020DFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020E10"))) PPC_WEAK_FUNC(sub_83020E10);
PPC_FUNC_IMPL(__imp__sub_83020E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15228
	ctx.r3.s64 = ctx.r31.s64 + -15228;
	// addi r4,r10,25436
	ctx.r4.s64 = ctx.r10.s64 + 25436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020E4C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2696
	ctx.r11.s64 = ctx.r11.s64 + -2696;
	// addi r3,r9,13216
	ctx.r3.s64 = ctx.r9.s64 + 13216;
	// stw r11,-15228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15228, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020E64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020E78"))) PPC_WEAK_FUNC(sub_83020E78);
PPC_FUNC_IMPL(__imp__sub_83020E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16572
	ctx.r3.s64 = ctx.r31.s64 + -16572;
	// addi r4,r10,25476
	ctx.r4.s64 = ctx.r10.s64 + 25476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020EB4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2616
	ctx.r11.s64 = ctx.r11.s64 + -2616;
	// addi r3,r9,13240
	ctx.r3.s64 = ctx.r9.s64 + 13240;
	// stw r11,-16572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020ECC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020EE0"))) PPC_WEAK_FUNC(sub_83020EE0);
PPC_FUNC_IMPL(__imp__sub_83020EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20412
	ctx.r3.s64 = ctx.r31.s64 + -20412;
	// addi r4,r10,25516
	ctx.r4.s64 = ctx.r10.s64 + 25516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020F1C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2536
	ctx.r11.s64 = ctx.r11.s64 + -2536;
	// addi r3,r9,13264
	ctx.r3.s64 = ctx.r9.s64 + 13264;
	// stw r11,-20412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020F34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020F48"))) PPC_WEAK_FUNC(sub_83020F48);
PPC_FUNC_IMPL(__imp__sub_83020F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15388
	ctx.r3.s64 = ctx.r31.s64 + -15388;
	// addi r4,r10,25556
	ctx.r4.s64 = ctx.r10.s64 + 25556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020F84;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2456
	ctx.r11.s64 = ctx.r11.s64 + -2456;
	// addi r3,r9,13288
	ctx.r3.s64 = ctx.r9.s64 + 13288;
	// stw r11,-15388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83020F9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83020FB0"))) PPC_WEAK_FUNC(sub_83020FB0);
PPC_FUNC_IMPL(__imp__sub_83020FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16604
	ctx.r3.s64 = ctx.r31.s64 + -16604;
	// addi r4,r10,25596
	ctx.r4.s64 = ctx.r10.s64 + 25596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83020FEC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2376
	ctx.r11.s64 = ctx.r11.s64 + -2376;
	// addi r3,r9,13312
	ctx.r3.s64 = ctx.r9.s64 + 13312;
	// stw r11,-16604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021004;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021018"))) PPC_WEAK_FUNC(sub_83021018);
PPC_FUNC_IMPL(__imp__sub_83021018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16860
	ctx.r3.s64 = ctx.r31.s64 + -16860;
	// addi r4,r10,25632
	ctx.r4.s64 = ctx.r10.s64 + 25632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021054;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2296
	ctx.r11.s64 = ctx.r11.s64 + -2296;
	// addi r3,r9,13336
	ctx.r3.s64 = ctx.r9.s64 + 13336;
	// stw r11,-16860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302106C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021080"))) PPC_WEAK_FUNC(sub_83021080);
PPC_FUNC_IMPL(__imp__sub_83021080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16284
	ctx.r3.s64 = ctx.r31.s64 + -16284;
	// addi r4,r10,25672
	ctx.r4.s64 = ctx.r10.s64 + 25672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830210BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2216
	ctx.r11.s64 = ctx.r11.s64 + -2216;
	// addi r3,r9,13360
	ctx.r3.s64 = ctx.r9.s64 + 13360;
	// stw r11,-16284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830210D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830210E8"))) PPC_WEAK_FUNC(sub_830210E8);
PPC_FUNC_IMPL(__imp__sub_830210E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17340
	ctx.r3.s64 = ctx.r31.s64 + -17340;
	// addi r4,r10,25708
	ctx.r4.s64 = ctx.r10.s64 + 25708;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021124;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2136
	ctx.r11.s64 = ctx.r11.s64 + -2136;
	// addi r3,r9,13384
	ctx.r3.s64 = ctx.r9.s64 + 13384;
	// stw r11,-17340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17340, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302113C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021150"))) PPC_WEAK_FUNC(sub_83021150);
PPC_FUNC_IMPL(__imp__sub_83021150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20284
	ctx.r3.s64 = ctx.r31.s64 + -20284;
	// addi r4,r10,25744
	ctx.r4.s64 = ctx.r10.s64 + 25744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302118C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2056
	ctx.r11.s64 = ctx.r11.s64 + -2056;
	// addi r3,r9,13408
	ctx.r3.s64 = ctx.r9.s64 + 13408;
	// stw r11,-20284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830211A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830211B8"))) PPC_WEAK_FUNC(sub_830211B8);
PPC_FUNC_IMPL(__imp__sub_830211B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19196
	ctx.r3.s64 = ctx.r31.s64 + -19196;
	// addi r4,r10,25784
	ctx.r4.s64 = ctx.r10.s64 + 25784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830211F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1976
	ctx.r11.s64 = ctx.r11.s64 + -1976;
	// addi r3,r9,13432
	ctx.r3.s64 = ctx.r9.s64 + 13432;
	// stw r11,-19196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302120C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021220"))) PPC_WEAK_FUNC(sub_83021220);
PPC_FUNC_IMPL(__imp__sub_83021220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18812
	ctx.r3.s64 = ctx.r31.s64 + -18812;
	// addi r4,r10,25820
	ctx.r4.s64 = ctx.r10.s64 + 25820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302125C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1896
	ctx.r11.s64 = ctx.r11.s64 + -1896;
	// addi r3,r9,13456
	ctx.r3.s64 = ctx.r9.s64 + 13456;
	// stw r11,-18812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021274;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021288"))) PPC_WEAK_FUNC(sub_83021288);
PPC_FUNC_IMPL(__imp__sub_83021288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16412
	ctx.r3.s64 = ctx.r31.s64 + -16412;
	// addi r4,r10,25856
	ctx.r4.s64 = ctx.r10.s64 + 25856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830212C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1816
	ctx.r11.s64 = ctx.r11.s64 + -1816;
	// addi r3,r9,13480
	ctx.r3.s64 = ctx.r9.s64 + 13480;
	// stw r11,-16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830212DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830212F0"))) PPC_WEAK_FUNC(sub_830212F0);
PPC_FUNC_IMPL(__imp__sub_830212F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19260
	ctx.r3.s64 = ctx.r31.s64 + -19260;
	// addi r4,r10,25892
	ctx.r4.s64 = ctx.r10.s64 + 25892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302132C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1736
	ctx.r11.s64 = ctx.r11.s64 + -1736;
	// addi r3,r9,13504
	ctx.r3.s64 = ctx.r9.s64 + 13504;
	// stw r11,-19260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19260, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021344;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021358"))) PPC_WEAK_FUNC(sub_83021358);
PPC_FUNC_IMPL(__imp__sub_83021358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17596
	ctx.r3.s64 = ctx.r31.s64 + -17596;
	// addi r4,r10,25928
	ctx.r4.s64 = ctx.r10.s64 + 25928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021394;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1656
	ctx.r11.s64 = ctx.r11.s64 + -1656;
	// addi r3,r9,13528
	ctx.r3.s64 = ctx.r9.s64 + 13528;
	// stw r11,-17596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17596, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830213AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830213C0"))) PPC_WEAK_FUNC(sub_830213C0);
PPC_FUNC_IMPL(__imp__sub_830213C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18300
	ctx.r3.s64 = ctx.r31.s64 + -18300;
	// addi r4,r10,25968
	ctx.r4.s64 = ctx.r10.s64 + 25968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830213FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1576
	ctx.r11.s64 = ctx.r11.s64 + -1576;
	// addi r3,r9,13552
	ctx.r3.s64 = ctx.r9.s64 + 13552;
	// stw r11,-18300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18300, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021428"))) PPC_WEAK_FUNC(sub_83021428);
PPC_FUNC_IMPL(__imp__sub_83021428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22108
	ctx.r3.s64 = ctx.r31.s64 + -22108;
	// addi r4,r10,26008
	ctx.r4.s64 = ctx.r10.s64 + 26008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021464;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1496
	ctx.r11.s64 = ctx.r11.s64 + -1496;
	// addi r3,r9,13576
	ctx.r3.s64 = ctx.r9.s64 + 13576;
	// stw r11,-22108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22108, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302147C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021490"))) PPC_WEAK_FUNC(sub_83021490);
PPC_FUNC_IMPL(__imp__sub_83021490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18876
	ctx.r3.s64 = ctx.r31.s64 + -18876;
	// addi r4,r10,26048
	ctx.r4.s64 = ctx.r10.s64 + 26048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830214CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1416
	ctx.r11.s64 = ctx.r11.s64 + -1416;
	// addi r3,r9,13600
	ctx.r3.s64 = ctx.r9.s64 + 13600;
	// stw r11,-18876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830214E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830214F8"))) PPC_WEAK_FUNC(sub_830214F8);
PPC_FUNC_IMPL(__imp__sub_830214F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20156
	ctx.r3.s64 = ctx.r31.s64 + -20156;
	// addi r4,r10,26084
	ctx.r4.s64 = ctx.r10.s64 + 26084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021534;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1336
	ctx.r11.s64 = ctx.r11.s64 + -1336;
	// addi r3,r9,13624
	ctx.r3.s64 = ctx.r9.s64 + 13624;
	// stw r11,-20156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302154C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021560"))) PPC_WEAK_FUNC(sub_83021560);
PPC_FUNC_IMPL(__imp__sub_83021560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21084
	ctx.r3.s64 = ctx.r31.s64 + -21084;
	// addi r4,r10,26120
	ctx.r4.s64 = ctx.r10.s64 + 26120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302159C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1256
	ctx.r11.s64 = ctx.r11.s64 + -1256;
	// addi r3,r9,13648
	ctx.r3.s64 = ctx.r9.s64 + 13648;
	// stw r11,-21084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21084, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830215B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830215C8"))) PPC_WEAK_FUNC(sub_830215C8);
PPC_FUNC_IMPL(__imp__sub_830215C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16316
	ctx.r3.s64 = ctx.r31.s64 + -16316;
	// addi r4,r10,26160
	ctx.r4.s64 = ctx.r10.s64 + 26160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021604;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1176
	ctx.r11.s64 = ctx.r11.s64 + -1176;
	// addi r3,r9,13672
	ctx.r3.s64 = ctx.r9.s64 + 13672;
	// stw r11,-16316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302161C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021630"))) PPC_WEAK_FUNC(sub_83021630);
PPC_FUNC_IMPL(__imp__sub_83021630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17980
	ctx.r3.s64 = ctx.r31.s64 + -17980;
	// addi r4,r10,26200
	ctx.r4.s64 = ctx.r10.s64 + 26200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302166C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1096
	ctx.r11.s64 = ctx.r11.s64 + -1096;
	// addi r3,r9,13696
	ctx.r3.s64 = ctx.r9.s64 + 13696;
	// stw r11,-17980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17980, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021684;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021698"))) PPC_WEAK_FUNC(sub_83021698);
PPC_FUNC_IMPL(__imp__sub_83021698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21884
	ctx.r3.s64 = ctx.r31.s64 + -21884;
	// addi r4,r10,26240
	ctx.r4.s64 = ctx.r10.s64 + 26240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830216D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1016
	ctx.r11.s64 = ctx.r11.s64 + -1016;
	// addi r3,r9,13720
	ctx.r3.s64 = ctx.r9.s64 + 13720;
	// stw r11,-21884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21884, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830216EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021700"))) PPC_WEAK_FUNC(sub_83021700);
PPC_FUNC_IMPL(__imp__sub_83021700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21116
	ctx.r3.s64 = ctx.r31.s64 + -21116;
	// addi r4,r10,26280
	ctx.r4.s64 = ctx.r10.s64 + 26280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302173C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-936
	ctx.r11.s64 = ctx.r11.s64 + -936;
	// addi r3,r9,13744
	ctx.r3.s64 = ctx.r9.s64 + 13744;
	// stw r11,-21116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021754;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021768"))) PPC_WEAK_FUNC(sub_83021768);
PPC_FUNC_IMPL(__imp__sub_83021768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18268
	ctx.r3.s64 = ctx.r31.s64 + -18268;
	// addi r4,r10,26320
	ctx.r4.s64 = ctx.r10.s64 + 26320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830217A4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-856
	ctx.r11.s64 = ctx.r11.s64 + -856;
	// addi r3,r9,13768
	ctx.r3.s64 = ctx.r9.s64 + 13768;
	// stw r11,-18268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18268, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830217BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830217D0"))) PPC_WEAK_FUNC(sub_830217D0);
PPC_FUNC_IMPL(__imp__sub_830217D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16828
	ctx.r3.s64 = ctx.r31.s64 + -16828;
	// addi r4,r10,26356
	ctx.r4.s64 = ctx.r10.s64 + 26356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302180C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-776
	ctx.r11.s64 = ctx.r11.s64 + -776;
	// addi r3,r9,13792
	ctx.r3.s64 = ctx.r9.s64 + 13792;
	// stw r11,-16828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021824;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021838"))) PPC_WEAK_FUNC(sub_83021838);
PPC_FUNC_IMPL(__imp__sub_83021838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-14876
	ctx.r3.s64 = ctx.r31.s64 + -14876;
	// addi r4,r10,26392
	ctx.r4.s64 = ctx.r10.s64 + 26392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021874;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-696
	ctx.r11.s64 = ctx.r11.s64 + -696;
	// addi r3,r9,13816
	ctx.r3.s64 = ctx.r9.s64 + 13816;
	// stw r11,-14876(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302188C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830218A0"))) PPC_WEAK_FUNC(sub_830218A0);
PPC_FUNC_IMPL(__imp__sub_830218A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20252
	ctx.r3.s64 = ctx.r31.s64 + -20252;
	// addi r4,r10,26432
	ctx.r4.s64 = ctx.r10.s64 + 26432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830218DC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-616
	ctx.r11.s64 = ctx.r11.s64 + -616;
	// addi r3,r9,13840
	ctx.r3.s64 = ctx.r9.s64 + 13840;
	// stw r11,-20252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830218F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021908"))) PPC_WEAK_FUNC(sub_83021908);
PPC_FUNC_IMPL(__imp__sub_83021908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21916
	ctx.r3.s64 = ctx.r31.s64 + -21916;
	// addi r4,r10,26472
	ctx.r4.s64 = ctx.r10.s64 + 26472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021944;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-536
	ctx.r11.s64 = ctx.r11.s64 + -536;
	// addi r3,r9,13864
	ctx.r3.s64 = ctx.r9.s64 + 13864;
	// stw r11,-21916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21916, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302195C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021970"))) PPC_WEAK_FUNC(sub_83021970);
PPC_FUNC_IMPL(__imp__sub_83021970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16988
	ctx.r3.s64 = ctx.r31.s64 + -16988;
	// addi r4,r10,26516
	ctx.r4.s64 = ctx.r10.s64 + 26516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830219AC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-456
	ctx.r11.s64 = ctx.r11.s64 + -456;
	// addi r3,r9,13888
	ctx.r3.s64 = ctx.r9.s64 + 13888;
	// stw r11,-16988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16988, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830219C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830219D8"))) PPC_WEAK_FUNC(sub_830219D8);
PPC_FUNC_IMPL(__imp__sub_830219D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15260
	ctx.r3.s64 = ctx.r31.s64 + -15260;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021A14;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-376
	ctx.r11.s64 = ctx.r11.s64 + -376;
	// addi r3,r9,13912
	ctx.r3.s64 = ctx.r9.s64 + 13912;
	// stw r11,-15260(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15260, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021A2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021A40"))) PPC_WEAK_FUNC(sub_83021A40);
PPC_FUNC_IMPL(__imp__sub_83021A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19516
	ctx.r3.s64 = ctx.r31.s64 + -19516;
	// addi r4,r10,26596
	ctx.r4.s64 = ctx.r10.s64 + 26596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021A7C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-296
	ctx.r11.s64 = ctx.r11.s64 + -296;
	// addi r3,r9,13936
	ctx.r3.s64 = ctx.r9.s64 + 13936;
	// stw r11,-19516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021A94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021AA8"))) PPC_WEAK_FUNC(sub_83021AA8);
PPC_FUNC_IMPL(__imp__sub_83021AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15164
	ctx.r3.s64 = ctx.r31.s64 + -15164;
	// addi r4,r10,26640
	ctx.r4.s64 = ctx.r10.s64 + 26640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021AE4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-216
	ctx.r11.s64 = ctx.r11.s64 + -216;
	// addi r3,r9,13960
	ctx.r3.s64 = ctx.r9.s64 + 13960;
	// stw r11,-15164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021AFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021B10"))) PPC_WEAK_FUNC(sub_83021B10);
PPC_FUNC_IMPL(__imp__sub_83021B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18492
	ctx.r3.s64 = ctx.r31.s64 + -18492;
	// addi r4,r10,26680
	ctx.r4.s64 = ctx.r10.s64 + 26680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021B4C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// addi r3,r9,13984
	ctx.r3.s64 = ctx.r9.s64 + 13984;
	// stw r11,-18492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18492, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021B64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021B78"))) PPC_WEAK_FUNC(sub_83021B78);
PPC_FUNC_IMPL(__imp__sub_83021B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19228
	ctx.r3.s64 = ctx.r31.s64 + -19228;
	// addi r4,r10,26720
	ctx.r4.s64 = ctx.r10.s64 + 26720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021BB4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-56
	ctx.r11.s64 = ctx.r11.s64 + -56;
	// addi r3,r9,14008
	ctx.r3.s64 = ctx.r9.s64 + 14008;
	// stw r11,-19228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19228, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021BCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021BE0"))) PPC_WEAK_FUNC(sub_83021BE0);
PPC_FUNC_IMPL(__imp__sub_83021BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18332
	ctx.r3.s64 = ctx.r31.s64 + -18332;
	// addi r4,r10,26756
	ctx.r4.s64 = ctx.r10.s64 + 26756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021C1C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r3,r9,14032
	ctx.r3.s64 = ctx.r9.s64 + 14032;
	// stw r11,-18332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18332, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021C34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021C48"))) PPC_WEAK_FUNC(sub_83021C48);
PPC_FUNC_IMPL(__imp__sub_83021C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15580
	ctx.r3.s64 = ctx.r31.s64 + -15580;
	// addi r4,r10,26796
	ctx.r4.s64 = ctx.r10.s64 + 26796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021C84;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// addi r3,r9,14056
	ctx.r3.s64 = ctx.r9.s64 + 14056;
	// stw r11,-15580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021C9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021CB0"))) PPC_WEAK_FUNC(sub_83021CB0);
PPC_FUNC_IMPL(__imp__sub_83021CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18908
	ctx.r3.s64 = ctx.r31.s64 + -18908;
	// addi r4,r10,26840
	ctx.r4.s64 = ctx.r10.s64 + 26840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021CEC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// addi r3,r9,14080
	ctx.r3.s64 = ctx.r9.s64 + 14080;
	// stw r11,-18908(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021D04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021D18"))) PPC_WEAK_FUNC(sub_83021D18);
PPC_FUNC_IMPL(__imp__sub_83021D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17532
	ctx.r3.s64 = ctx.r31.s64 + -17532;
	// addi r4,r10,26880
	ctx.r4.s64 = ctx.r10.s64 + 26880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021D54;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// addi r3,r9,14104
	ctx.r3.s64 = ctx.r9.s64 + 14104;
	// stw r11,-17532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17532, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021D6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021D80"))) PPC_WEAK_FUNC(sub_83021D80);
PPC_FUNC_IMPL(__imp__sub_83021D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22012
	ctx.r3.s64 = ctx.r31.s64 + -22012;
	// addi r4,r10,26916
	ctx.r4.s64 = ctx.r10.s64 + 26916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021DBC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// addi r3,r9,14128
	ctx.r3.s64 = ctx.r9.s64 + 14128;
	// stw r11,-22012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22012, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021DD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021DE8"))) PPC_WEAK_FUNC(sub_83021DE8);
PPC_FUNC_IMPL(__imp__sub_83021DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17756
	ctx.r3.s64 = ctx.r31.s64 + -17756;
	// addi r4,r10,26956
	ctx.r4.s64 = ctx.r10.s64 + 26956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021E24;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,424
	ctx.r11.s64 = ctx.r11.s64 + 424;
	// addi r3,r9,14152
	ctx.r3.s64 = ctx.r9.s64 + 14152;
	// stw r11,-17756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021E3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021E50"))) PPC_WEAK_FUNC(sub_83021E50);
PPC_FUNC_IMPL(__imp__sub_83021E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21276
	ctx.r3.s64 = ctx.r31.s64 + -21276;
	// addi r4,r10,26996
	ctx.r4.s64 = ctx.r10.s64 + 26996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021E8C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,504
	ctx.r11.s64 = ctx.r11.s64 + 504;
	// addi r3,r9,14176
	ctx.r3.s64 = ctx.r9.s64 + 14176;
	// stw r11,-21276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21276, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021EA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021EB8"))) PPC_WEAK_FUNC(sub_83021EB8);
PPC_FUNC_IMPL(__imp__sub_83021EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15836
	ctx.r3.s64 = ctx.r31.s64 + -15836;
	// addi r4,r10,27032
	ctx.r4.s64 = ctx.r10.s64 + 27032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021EF4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,584
	ctx.r11.s64 = ctx.r11.s64 + 584;
	// addi r3,r9,14200
	ctx.r3.s64 = ctx.r9.s64 + 14200;
	// stw r11,-15836(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021F0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021F20"))) PPC_WEAK_FUNC(sub_83021F20);
PPC_FUNC_IMPL(__imp__sub_83021F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22076
	ctx.r3.s64 = ctx.r31.s64 + -22076;
	// addi r4,r10,27068
	ctx.r4.s64 = ctx.r10.s64 + 27068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021F5C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// addi r3,r9,14224
	ctx.r3.s64 = ctx.r9.s64 + 14224;
	// stw r11,-22076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22076, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021F74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021F88"))) PPC_WEAK_FUNC(sub_83021F88);
PPC_FUNC_IMPL(__imp__sub_83021F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15676
	ctx.r3.s64 = ctx.r31.s64 + -15676;
	// addi r4,r10,27108
	ctx.r4.s64 = ctx.r10.s64 + 27108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83021FC4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// addi r3,r9,14248
	ctx.r3.s64 = ctx.r9.s64 + 14248;
	// stw r11,-15676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83021FDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83021FF0"))) PPC_WEAK_FUNC(sub_83021FF0);
PPC_FUNC_IMPL(__imp__sub_83021FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18012
	ctx.r3.s64 = ctx.r31.s64 + -18012;
	// addi r4,r10,27148
	ctx.r4.s64 = ctx.r10.s64 + 27148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302202C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,824
	ctx.r11.s64 = ctx.r11.s64 + 824;
	// addi r3,r9,14272
	ctx.r3.s64 = ctx.r9.s64 + 14272;
	// stw r11,-18012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18012, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022044;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022058"))) PPC_WEAK_FUNC(sub_83022058);
PPC_FUNC_IMPL(__imp__sub_83022058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15100
	ctx.r3.s64 = ctx.r31.s64 + -15100;
	// addi r4,r10,27184
	ctx.r4.s64 = ctx.r10.s64 + 27184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022094;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// addi r3,r9,14296
	ctx.r3.s64 = ctx.r9.s64 + 14296;
	// stw r11,-15100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830220AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830220C0"))) PPC_WEAK_FUNC(sub_830220C0);
PPC_FUNC_IMPL(__imp__sub_830220C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16220
	ctx.r3.s64 = ctx.r31.s64 + -16220;
	// addi r4,r10,27228
	ctx.r4.s64 = ctx.r10.s64 + 27228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830220FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,984
	ctx.r11.s64 = ctx.r11.s64 + 984;
	// addi r3,r9,14320
	ctx.r3.s64 = ctx.r9.s64 + 14320;
	// stw r11,-16220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022114;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022128"))) PPC_WEAK_FUNC(sub_83022128);
PPC_FUNC_IMPL(__imp__sub_83022128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21852
	ctx.r3.s64 = ctx.r31.s64 + -21852;
	// addi r4,r10,27268
	ctx.r4.s64 = ctx.r10.s64 + 27268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022164;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// addi r3,r9,14344
	ctx.r3.s64 = ctx.r9.s64 + 14344;
	// stw r11,-21852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21852, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302217C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022190"))) PPC_WEAK_FUNC(sub_83022190);
PPC_FUNC_IMPL(__imp__sub_83022190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15740
	ctx.r3.s64 = ctx.r31.s64 + -15740;
	// addi r4,r10,27304
	ctx.r4.s64 = ctx.r10.s64 + 27304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830221CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1144
	ctx.r11.s64 = ctx.r11.s64 + 1144;
	// addi r3,r9,14368
	ctx.r3.s64 = ctx.r9.s64 + 14368;
	// stw r11,-15740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830221E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830221F8"))) PPC_WEAK_FUNC(sub_830221F8);
PPC_FUNC_IMPL(__imp__sub_830221F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15484
	ctx.r3.s64 = ctx.r31.s64 + -15484;
	// addi r4,r10,27340
	ctx.r4.s64 = ctx.r10.s64 + 27340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022234;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1224
	ctx.r11.s64 = ctx.r11.s64 + 1224;
	// addi r3,r9,14392
	ctx.r3.s64 = ctx.r9.s64 + 14392;
	// stw r11,-15484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302224C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022260"))) PPC_WEAK_FUNC(sub_83022260);
PPC_FUNC_IMPL(__imp__sub_83022260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21148
	ctx.r3.s64 = ctx.r31.s64 + -21148;
	// addi r4,r10,27380
	ctx.r4.s64 = ctx.r10.s64 + 27380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302229C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1304
	ctx.r11.s64 = ctx.r11.s64 + 1304;
	// addi r3,r9,14416
	ctx.r3.s64 = ctx.r9.s64 + 14416;
	// stw r11,-21148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21148, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830222B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830222C8"))) PPC_WEAK_FUNC(sub_830222C8);
PPC_FUNC_IMPL(__imp__sub_830222C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17116
	ctx.r3.s64 = ctx.r31.s64 + -17116;
	// addi r4,r10,27424
	ctx.r4.s64 = ctx.r10.s64 + 27424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022304;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// addi r3,r9,14440
	ctx.r3.s64 = ctx.r9.s64 + 14440;
	// stw r11,-17116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302231C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022330"))) PPC_WEAK_FUNC(sub_83022330);
PPC_FUNC_IMPL(__imp__sub_83022330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19164
	ctx.r3.s64 = ctx.r31.s64 + -19164;
	// addi r4,r10,27464
	ctx.r4.s64 = ctx.r10.s64 + 27464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302236C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1464
	ctx.r11.s64 = ctx.r11.s64 + 1464;
	// addi r3,r9,14464
	ctx.r3.s64 = ctx.r9.s64 + 14464;
	// stw r11,-19164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022384;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022398"))) PPC_WEAK_FUNC(sub_83022398);
PPC_FUNC_IMPL(__imp__sub_83022398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16060
	ctx.r3.s64 = ctx.r31.s64 + -16060;
	// addi r4,r10,27504
	ctx.r4.s64 = ctx.r10.s64 + 27504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830223D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1544
	ctx.r11.s64 = ctx.r11.s64 + 1544;
	// addi r3,r9,14488
	ctx.r3.s64 = ctx.r9.s64 + 14488;
	// stw r11,-16060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830223EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022400"))) PPC_WEAK_FUNC(sub_83022400);
PPC_FUNC_IMPL(__imp__sub_83022400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20508
	ctx.r3.s64 = ctx.r31.s64 + -20508;
	// addi r4,r10,27544
	ctx.r4.s64 = ctx.r10.s64 + 27544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302243C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// addi r3,r9,14512
	ctx.r3.s64 = ctx.r9.s64 + 14512;
	// stw r11,-20508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022454;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022468"))) PPC_WEAK_FUNC(sub_83022468);
PPC_FUNC_IMPL(__imp__sub_83022468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20924
	ctx.r3.s64 = ctx.r31.s64 + -20924;
	// addi r4,r10,27584
	ctx.r4.s64 = ctx.r10.s64 + 27584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830224A4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1704
	ctx.r11.s64 = ctx.r11.s64 + 1704;
	// addi r3,r9,14536
	ctx.r3.s64 = ctx.r9.s64 + 14536;
	// stw r11,-20924(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20924, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830224BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830224D0"))) PPC_WEAK_FUNC(sub_830224D0);
PPC_FUNC_IMPL(__imp__sub_830224D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17564
	ctx.r3.s64 = ctx.r31.s64 + -17564;
	// addi r4,r10,27620
	ctx.r4.s64 = ctx.r10.s64 + 27620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302250C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1784
	ctx.r11.s64 = ctx.r11.s64 + 1784;
	// addi r3,r9,14560
	ctx.r3.s64 = ctx.r9.s64 + 14560;
	// stw r11,-17564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17564, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022524;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022538"))) PPC_WEAK_FUNC(sub_83022538);
PPC_FUNC_IMPL(__imp__sub_83022538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19676
	ctx.r3.s64 = ctx.r31.s64 + -19676;
	// addi r4,r10,27660
	ctx.r4.s64 = ctx.r10.s64 + 27660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022574;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1864
	ctx.r11.s64 = ctx.r11.s64 + 1864;
	// addi r3,r9,14584
	ctx.r3.s64 = ctx.r9.s64 + 14584;
	// stw r11,-19676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302258C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830225A0"))) PPC_WEAK_FUNC(sub_830225A0);
PPC_FUNC_IMPL(__imp__sub_830225A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20188
	ctx.r3.s64 = ctx.r31.s64 + -20188;
	// addi r4,r10,27696
	ctx.r4.s64 = ctx.r10.s64 + 27696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830225DC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1944
	ctx.r11.s64 = ctx.r11.s64 + 1944;
	// addi r3,r9,14608
	ctx.r3.s64 = ctx.r9.s64 + 14608;
	// stw r11,-20188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830225F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022608"))) PPC_WEAK_FUNC(sub_83022608);
PPC_FUNC_IMPL(__imp__sub_83022608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20988
	ctx.r3.s64 = ctx.r31.s64 + -20988;
	// addi r4,r10,27732
	ctx.r4.s64 = ctx.r10.s64 + 27732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022644;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2024
	ctx.r11.s64 = ctx.r11.s64 + 2024;
	// addi r3,r9,14632
	ctx.r3.s64 = ctx.r9.s64 + 14632;
	// stw r11,-20988(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20988, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302265C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022670"))) PPC_WEAK_FUNC(sub_83022670);
PPC_FUNC_IMPL(__imp__sub_83022670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19548
	ctx.r3.s64 = ctx.r31.s64 + -19548;
	// addi r4,r10,27772
	ctx.r4.s64 = ctx.r10.s64 + 27772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830226AC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 + 2104;
	// addi r3,r9,14656
	ctx.r3.s64 = ctx.r9.s64 + 14656;
	// stw r11,-19548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830226C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830226D8"))) PPC_WEAK_FUNC(sub_830226D8);
PPC_FUNC_IMPL(__imp__sub_830226D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18428
	ctx.r3.s64 = ctx.r31.s64 + -18428;
	// addi r4,r10,27808
	ctx.r4.s64 = ctx.r10.s64 + 27808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022714;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// addi r3,r9,14680
	ctx.r3.s64 = ctx.r9.s64 + 14680;
	// stw r11,-18428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18428, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302272C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022740"))) PPC_WEAK_FUNC(sub_83022740);
PPC_FUNC_IMPL(__imp__sub_83022740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17084
	ctx.r3.s64 = ctx.r31.s64 + -17084;
	// addi r4,r10,27844
	ctx.r4.s64 = ctx.r10.s64 + 27844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302277C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2264
	ctx.r11.s64 = ctx.r11.s64 + 2264;
	// addi r3,r9,14704
	ctx.r3.s64 = ctx.r9.s64 + 14704;
	// stw r11,-17084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17084, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830227A8"))) PPC_WEAK_FUNC(sub_830227A8);
PPC_FUNC_IMPL(__imp__sub_830227A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18716
	ctx.r3.s64 = ctx.r31.s64 + -18716;
	// addi r4,r10,27880
	ctx.r4.s64 = ctx.r10.s64 + 27880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830227E4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2344
	ctx.r11.s64 = ctx.r11.s64 + 2344;
	// addi r3,r9,14728
	ctx.r3.s64 = ctx.r9.s64 + 14728;
	// stw r11,-18716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18716, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830227FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022810"))) PPC_WEAK_FUNC(sub_83022810);
PPC_FUNC_IMPL(__imp__sub_83022810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15900
	ctx.r3.s64 = ctx.r31.s64 + -15900;
	// addi r4,r10,27916
	ctx.r4.s64 = ctx.r10.s64 + 27916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302284C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2424
	ctx.r11.s64 = ctx.r11.s64 + 2424;
	// addi r3,r9,14752
	ctx.r3.s64 = ctx.r9.s64 + 14752;
	// stw r11,-15900(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022864;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022878"))) PPC_WEAK_FUNC(sub_83022878);
PPC_FUNC_IMPL(__imp__sub_83022878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19868
	ctx.r3.s64 = ctx.r31.s64 + -19868;
	// addi r4,r10,27956
	ctx.r4.s64 = ctx.r10.s64 + 27956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830228B4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2504
	ctx.r11.s64 = ctx.r11.s64 + 2504;
	// addi r3,r9,14776
	ctx.r3.s64 = ctx.r9.s64 + 14776;
	// stw r11,-19868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830228CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830228E0"))) PPC_WEAK_FUNC(sub_830228E0);
PPC_FUNC_IMPL(__imp__sub_830228E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21724
	ctx.r3.s64 = ctx.r31.s64 + -21724;
	// addi r4,r10,27996
	ctx.r4.s64 = ctx.r10.s64 + 27996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302291C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2584
	ctx.r11.s64 = ctx.r11.s64 + 2584;
	// addi r3,r9,14800
	ctx.r3.s64 = ctx.r9.s64 + 14800;
	// stw r11,-21724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21724, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022934;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022948"))) PPC_WEAK_FUNC(sub_83022948);
PPC_FUNC_IMPL(__imp__sub_83022948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18972
	ctx.r3.s64 = ctx.r31.s64 + -18972;
	// addi r4,r10,28036
	ctx.r4.s64 = ctx.r10.s64 + 28036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022984;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2664
	ctx.r11.s64 = ctx.r11.s64 + 2664;
	// addi r3,r9,14824
	ctx.r3.s64 = ctx.r9.s64 + 14824;
	// stw r11,-18972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302299C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830229B0"))) PPC_WEAK_FUNC(sub_830229B0);
PPC_FUNC_IMPL(__imp__sub_830229B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19612
	ctx.r3.s64 = ctx.r31.s64 + -19612;
	// addi r4,r10,28072
	ctx.r4.s64 = ctx.r10.s64 + 28072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830229EC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2744
	ctx.r11.s64 = ctx.r11.s64 + 2744;
	// addi r3,r9,14848
	ctx.r3.s64 = ctx.r9.s64 + 14848;
	// stw r11,-19612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022A04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022A18"))) PPC_WEAK_FUNC(sub_83022A18);
PPC_FUNC_IMPL(__imp__sub_83022A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18684
	ctx.r3.s64 = ctx.r31.s64 + -18684;
	// addi r4,r10,28108
	ctx.r4.s64 = ctx.r10.s64 + 28108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022A54;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2824
	ctx.r11.s64 = ctx.r11.s64 + 2824;
	// addi r3,r9,14872
	ctx.r3.s64 = ctx.r9.s64 + 14872;
	// stw r11,-18684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18684, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022A6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022A80"))) PPC_WEAK_FUNC(sub_83022A80);
PPC_FUNC_IMPL(__imp__sub_83022A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21404
	ctx.r3.s64 = ctx.r31.s64 + -21404;
	// addi r4,r10,28148
	ctx.r4.s64 = ctx.r10.s64 + 28148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022ABC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2904
	ctx.r11.s64 = ctx.r11.s64 + 2904;
	// addi r3,r9,14896
	ctx.r3.s64 = ctx.r9.s64 + 14896;
	// stw r11,-21404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21404, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022AD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022AE8"))) PPC_WEAK_FUNC(sub_83022AE8);
PPC_FUNC_IMPL(__imp__sub_83022AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19100
	ctx.r3.s64 = ctx.r31.s64 + -19100;
	// addi r4,r10,28188
	ctx.r4.s64 = ctx.r10.s64 + 28188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022B24;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// addi r3,r9,14920
	ctx.r3.s64 = ctx.r9.s64 + 14920;
	// stw r11,-19100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022B3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022B50"))) PPC_WEAK_FUNC(sub_83022B50);
PPC_FUNC_IMPL(__imp__sub_83022B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16796
	ctx.r3.s64 = ctx.r31.s64 + -16796;
	// addi r4,r10,28228
	ctx.r4.s64 = ctx.r10.s64 + 28228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022B8C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3064
	ctx.r11.s64 = ctx.r11.s64 + 3064;
	// addi r3,r9,14944
	ctx.r3.s64 = ctx.r9.s64 + 14944;
	// stw r11,-16796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16796, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022BA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022BB8"))) PPC_WEAK_FUNC(sub_83022BB8);
PPC_FUNC_IMPL(__imp__sub_83022BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21564
	ctx.r3.s64 = ctx.r31.s64 + -21564;
	// addi r4,r10,28268
	ctx.r4.s64 = ctx.r10.s64 + 28268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022BF4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3144
	ctx.r11.s64 = ctx.r11.s64 + 3144;
	// addi r3,r9,14968
	ctx.r3.s64 = ctx.r9.s64 + 14968;
	// stw r11,-21564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21564, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022C0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022C20"))) PPC_WEAK_FUNC(sub_83022C20);
PPC_FUNC_IMPL(__imp__sub_83022C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20124
	ctx.r3.s64 = ctx.r31.s64 + -20124;
	// addi r4,r10,28308
	ctx.r4.s64 = ctx.r10.s64 + 28308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022C5C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
	// addi r3,r9,14992
	ctx.r3.s64 = ctx.r9.s64 + 14992;
	// stw r11,-20124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022C74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022C88"))) PPC_WEAK_FUNC(sub_83022C88);
PPC_FUNC_IMPL(__imp__sub_83022C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16540
	ctx.r3.s64 = ctx.r31.s64 + -16540;
	// addi r4,r10,28344
	ctx.r4.s64 = ctx.r10.s64 + 28344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022CC4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3304
	ctx.r11.s64 = ctx.r11.s64 + 3304;
	// addi r3,r9,15016
	ctx.r3.s64 = ctx.r9.s64 + 15016;
	// stw r11,-16540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022CDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022CF0"))) PPC_WEAK_FUNC(sub_83022CF0);
PPC_FUNC_IMPL(__imp__sub_83022CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21372
	ctx.r3.s64 = ctx.r31.s64 + -21372;
	// addi r4,r10,28380
	ctx.r4.s64 = ctx.r10.s64 + 28380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022D2C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// addi r3,r9,15040
	ctx.r3.s64 = ctx.r9.s64 + 15040;
	// stw r11,-21372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21372, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022D44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022D58"))) PPC_WEAK_FUNC(sub_83022D58);
PPC_FUNC_IMPL(__imp__sub_83022D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20636
	ctx.r3.s64 = ctx.r31.s64 + -20636;
	// addi r4,r10,28420
	ctx.r4.s64 = ctx.r10.s64 + 28420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022D94;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3464
	ctx.r11.s64 = ctx.r11.s64 + 3464;
	// addi r3,r9,15064
	ctx.r3.s64 = ctx.r9.s64 + 15064;
	// stw r11,-20636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022DAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022DC0"))) PPC_WEAK_FUNC(sub_83022DC0);
PPC_FUNC_IMPL(__imp__sub_83022DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15708
	ctx.r3.s64 = ctx.r31.s64 + -15708;
	// addi r4,r10,28460
	ctx.r4.s64 = ctx.r10.s64 + 28460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022DFC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// addi r3,r9,15088
	ctx.r3.s64 = ctx.r9.s64 + 15088;
	// stw r11,-15708(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022E14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022E28"))) PPC_WEAK_FUNC(sub_83022E28);
PPC_FUNC_IMPL(__imp__sub_83022E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20444
	ctx.r3.s64 = ctx.r31.s64 + -20444;
	// addi r4,r10,28504
	ctx.r4.s64 = ctx.r10.s64 + 28504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022E64;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3624
	ctx.r11.s64 = ctx.r11.s64 + 3624;
	// addi r3,r9,15112
	ctx.r3.s64 = ctx.r9.s64 + 15112;
	// stw r11,-20444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022E7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022E90"))) PPC_WEAK_FUNC(sub_83022E90);
PPC_FUNC_IMPL(__imp__sub_83022E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19580
	ctx.r3.s64 = ctx.r31.s64 + -19580;
	// addi r4,r10,28544
	ctx.r4.s64 = ctx.r10.s64 + 28544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022ECC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3704
	ctx.r11.s64 = ctx.r11.s64 + 3704;
	// addi r3,r9,15136
	ctx.r3.s64 = ctx.r9.s64 + 15136;
	// stw r11,-19580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022EE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022EF8"))) PPC_WEAK_FUNC(sub_83022EF8);
PPC_FUNC_IMPL(__imp__sub_83022EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21532
	ctx.r3.s64 = ctx.r31.s64 + -21532;
	// addi r4,r10,28584
	ctx.r4.s64 = ctx.r10.s64 + 28584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022F34;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3784
	ctx.r11.s64 = ctx.r11.s64 + 3784;
	// addi r3,r9,15160
	ctx.r3.s64 = ctx.r9.s64 + 15160;
	// stw r11,-21532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21532, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022F4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022F60"))) PPC_WEAK_FUNC(sub_83022F60);
PPC_FUNC_IMPL(__imp__sub_83022F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20796
	ctx.r3.s64 = ctx.r31.s64 + -20796;
	// addi r4,r10,28628
	ctx.r4.s64 = ctx.r10.s64 + 28628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83022F9C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3864
	ctx.r11.s64 = ctx.r11.s64 + 3864;
	// addi r3,r9,15184
	ctx.r3.s64 = ctx.r9.s64 + 15184;
	// stw r11,-20796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20796, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83022FB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83022FC8"))) PPC_WEAK_FUNC(sub_83022FC8);
PPC_FUNC_IMPL(__imp__sub_83022FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17436
	ctx.r3.s64 = ctx.r31.s64 + -17436;
	// addi r4,r10,28668
	ctx.r4.s64 = ctx.r10.s64 + 28668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023004;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3944
	ctx.r11.s64 = ctx.r11.s64 + 3944;
	// addi r3,r9,15208
	ctx.r3.s64 = ctx.r9.s64 + 15208;
	// stw r11,-17436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17436, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302301C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023030"))) PPC_WEAK_FUNC(sub_83023030);
PPC_FUNC_IMPL(__imp__sub_83023030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21500
	ctx.r3.s64 = ctx.r31.s64 + -21500;
	// addi r4,r10,28708
	ctx.r4.s64 = ctx.r10.s64 + 28708;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302306C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4024
	ctx.r11.s64 = ctx.r11.s64 + 4024;
	// addi r3,r9,15232
	ctx.r3.s64 = ctx.r9.s64 + 15232;
	// stw r11,-21500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21500, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023084;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023098"))) PPC_WEAK_FUNC(sub_83023098);
PPC_FUNC_IMPL(__imp__sub_83023098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18940
	ctx.r3.s64 = ctx.r31.s64 + -18940;
	// addi r4,r10,28744
	ctx.r4.s64 = ctx.r10.s64 + 28744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830230D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4104
	ctx.r11.s64 = ctx.r11.s64 + 4104;
	// addi r3,r9,15256
	ctx.r3.s64 = ctx.r9.s64 + 15256;
	// stw r11,-18940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830230EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023100"))) PPC_WEAK_FUNC(sub_83023100);
PPC_FUNC_IMPL(__imp__sub_83023100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20092
	ctx.r3.s64 = ctx.r31.s64 + -20092;
	// addi r4,r10,28784
	ctx.r4.s64 = ctx.r10.s64 + 28784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302313C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4184
	ctx.r11.s64 = ctx.r11.s64 + 4184;
	// addi r3,r9,15280
	ctx.r3.s64 = ctx.r9.s64 + 15280;
	// stw r11,-20092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023154;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023168"))) PPC_WEAK_FUNC(sub_83023168);
PPC_FUNC_IMPL(__imp__sub_83023168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16348
	ctx.r3.s64 = ctx.r31.s64 + -16348;
	// addi r4,r10,28828
	ctx.r4.s64 = ctx.r10.s64 + 28828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830231A4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4264
	ctx.r11.s64 = ctx.r11.s64 + 4264;
	// addi r3,r9,15304
	ctx.r3.s64 = ctx.r9.s64 + 15304;
	// stw r11,-16348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830231BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830231D0"))) PPC_WEAK_FUNC(sub_830231D0);
PPC_FUNC_IMPL(__imp__sub_830231D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-14972
	ctx.r3.s64 = ctx.r31.s64 + -14972;
	// addi r4,r10,28868
	ctx.r4.s64 = ctx.r10.s64 + 28868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302320C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4344
	ctx.r11.s64 = ctx.r11.s64 + 4344;
	// addi r3,r9,15328
	ctx.r3.s64 = ctx.r9.s64 + 15328;
	// stw r11,-14972(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023224;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023238"))) PPC_WEAK_FUNC(sub_83023238);
PPC_FUNC_IMPL(__imp__sub_83023238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17852
	ctx.r3.s64 = ctx.r31.s64 + -17852;
	// addi r4,r10,28904
	ctx.r4.s64 = ctx.r10.s64 + 28904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023274;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4424
	ctx.r11.s64 = ctx.r11.s64 + 4424;
	// addi r3,r9,15352
	ctx.r3.s64 = ctx.r9.s64 + 15352;
	// stw r11,-17852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17852, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302328C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830232A0"))) PPC_WEAK_FUNC(sub_830232A0);
PPC_FUNC_IMPL(__imp__sub_830232A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19740
	ctx.r3.s64 = ctx.r31.s64 + -19740;
	// addi r4,r10,28944
	ctx.r4.s64 = ctx.r10.s64 + 28944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830232DC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4504
	ctx.r11.s64 = ctx.r11.s64 + 4504;
	// addi r3,r9,15376
	ctx.r3.s64 = ctx.r9.s64 + 15376;
	// stw r11,-19740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830232F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023308"))) PPC_WEAK_FUNC(sub_83023308);
PPC_FUNC_IMPL(__imp__sub_83023308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15612
	ctx.r3.s64 = ctx.r31.s64 + -15612;
	// addi r4,r10,28984
	ctx.r4.s64 = ctx.r10.s64 + 28984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023344;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4584
	ctx.r11.s64 = ctx.r11.s64 + 4584;
	// addi r3,r9,15400
	ctx.r3.s64 = ctx.r9.s64 + 15400;
	// stw r11,-15612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302335C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023370"))) PPC_WEAK_FUNC(sub_83023370);
PPC_FUNC_IMPL(__imp__sub_83023370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19420
	ctx.r3.s64 = ctx.r31.s64 + -19420;
	// addi r4,r10,29020
	ctx.r4.s64 = ctx.r10.s64 + 29020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830233AC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4664
	ctx.r11.s64 = ctx.r11.s64 + 4664;
	// addi r3,r9,15424
	ctx.r3.s64 = ctx.r9.s64 + 15424;
	// stw r11,-19420(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830233C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830233D8"))) PPC_WEAK_FUNC(sub_830233D8);
PPC_FUNC_IMPL(__imp__sub_830233D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17916
	ctx.r3.s64 = ctx.r31.s64 + -17916;
	// addi r4,r10,29056
	ctx.r4.s64 = ctx.r10.s64 + 29056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023414;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4744
	ctx.r11.s64 = ctx.r11.s64 + 4744;
	// addi r3,r9,15448
	ctx.r3.s64 = ctx.r9.s64 + 15448;
	// stw r11,-17916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17916, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302342C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023440"))) PPC_WEAK_FUNC(sub_83023440);
PPC_FUNC_IMPL(__imp__sub_83023440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18748
	ctx.r3.s64 = ctx.r31.s64 + -18748;
	// addi r4,r10,29096
	ctx.r4.s64 = ctx.r10.s64 + 29096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302347C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4824
	ctx.r11.s64 = ctx.r11.s64 + 4824;
	// addi r3,r9,15472
	ctx.r3.s64 = ctx.r9.s64 + 15472;
	// stw r11,-18748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18748, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023494;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830234A8"))) PPC_WEAK_FUNC(sub_830234A8);
PPC_FUNC_IMPL(__imp__sub_830234A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21340
	ctx.r3.s64 = ctx.r31.s64 + -21340;
	// addi r4,r10,29136
	ctx.r4.s64 = ctx.r10.s64 + 29136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830234E4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4904
	ctx.r11.s64 = ctx.r11.s64 + 4904;
	// addi r3,r9,15496
	ctx.r3.s64 = ctx.r9.s64 + 15496;
	// stw r11,-21340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21340, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830234FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023510"))) PPC_WEAK_FUNC(sub_83023510);
PPC_FUNC_IMPL(__imp__sub_83023510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15068
	ctx.r3.s64 = ctx.r31.s64 + -15068;
	// addi r4,r10,29172
	ctx.r4.s64 = ctx.r10.s64 + 29172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302354C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// addi r3,r9,15520
	ctx.r3.s64 = ctx.r9.s64 + 15520;
	// stw r11,-15068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15068, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023564;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023578"))) PPC_WEAK_FUNC(sub_83023578);
PPC_FUNC_IMPL(__imp__sub_83023578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17372
	ctx.r3.s64 = ctx.r31.s64 + -17372;
	// addi r4,r10,29216
	ctx.r4.s64 = ctx.r10.s64 + 29216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830235B4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5064
	ctx.r11.s64 = ctx.r11.s64 + 5064;
	// addi r3,r9,15544
	ctx.r3.s64 = ctx.r9.s64 + 15544;
	// stw r11,-17372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17372, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830235CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830235E0"))) PPC_WEAK_FUNC(sub_830235E0);
PPC_FUNC_IMPL(__imp__sub_830235E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17052
	ctx.r3.s64 = ctx.r31.s64 + -17052;
	// addi r4,r10,29256
	ctx.r4.s64 = ctx.r10.s64 + 29256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302361C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5144
	ctx.r11.s64 = ctx.r11.s64 + 5144;
	// addi r3,r9,15568
	ctx.r3.s64 = ctx.r9.s64 + 15568;
	// stw r11,-17052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17052, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023634;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023648"))) PPC_WEAK_FUNC(sub_83023648);
PPC_FUNC_IMPL(__imp__sub_83023648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19484
	ctx.r3.s64 = ctx.r31.s64 + -19484;
	// addi r4,r10,29292
	ctx.r4.s64 = ctx.r10.s64 + 29292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023684;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5224
	ctx.r11.s64 = ctx.r11.s64 + 5224;
	// addi r3,r9,15592
	ctx.r3.s64 = ctx.r9.s64 + 15592;
	// stw r11,-19484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302369C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830236B0"))) PPC_WEAK_FUNC(sub_830236B0);
PPC_FUNC_IMPL(__imp__sub_830236B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21980
	ctx.r3.s64 = ctx.r31.s64 + -21980;
	// addi r4,r10,29328
	ctx.r4.s64 = ctx.r10.s64 + 29328;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830236EC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5304
	ctx.r11.s64 = ctx.r11.s64 + 5304;
	// addi r3,r9,15616
	ctx.r3.s64 = ctx.r9.s64 + 15616;
	// stw r11,-21980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21980, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023704;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023718"))) PPC_WEAK_FUNC(sub_83023718);
PPC_FUNC_IMPL(__imp__sub_83023718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17500
	ctx.r3.s64 = ctx.r31.s64 + -17500;
	// addi r4,r10,29368
	ctx.r4.s64 = ctx.r10.s64 + 29368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023754;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5384
	ctx.r11.s64 = ctx.r11.s64 + 5384;
	// addi r3,r9,15640
	ctx.r3.s64 = ctx.r9.s64 + 15640;
	// stw r11,-17500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17500, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302376C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023780"))) PPC_WEAK_FUNC(sub_83023780);
PPC_FUNC_IMPL(__imp__sub_83023780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18396
	ctx.r3.s64 = ctx.r31.s64 + -18396;
	// addi r4,r10,29412
	ctx.r4.s64 = ctx.r10.s64 + 29412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830237BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// addi r3,r9,15664
	ctx.r3.s64 = ctx.r9.s64 + 15664;
	// stw r11,-18396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18396, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830237D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830237E8"))) PPC_WEAK_FUNC(sub_830237E8);
PPC_FUNC_IMPL(__imp__sub_830237E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16156
	ctx.r3.s64 = ctx.r31.s64 + -16156;
	// addi r4,r10,29452
	ctx.r4.s64 = ctx.r10.s64 + 29452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023824;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5544
	ctx.r11.s64 = ctx.r11.s64 + 5544;
	// addi r3,r9,15688
	ctx.r3.s64 = ctx.r9.s64 + 15688;
	// stw r11,-16156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302383C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023850"))) PPC_WEAK_FUNC(sub_83023850);
PPC_FUNC_IMPL(__imp__sub_83023850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15868
	ctx.r3.s64 = ctx.r31.s64 + -15868;
	// addi r4,r10,29492
	ctx.r4.s64 = ctx.r10.s64 + 29492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302388C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5624
	ctx.r11.s64 = ctx.r11.s64 + 5624;
	// addi r3,r9,15712
	ctx.r3.s64 = ctx.r9.s64 + 15712;
	// stw r11,-15868(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830238A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830238B8"))) PPC_WEAK_FUNC(sub_830238B8);
PPC_FUNC_IMPL(__imp__sub_830238B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15548
	ctx.r3.s64 = ctx.r31.s64 + -15548;
	// addi r4,r10,29532
	ctx.r4.s64 = ctx.r10.s64 + 29532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830238F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// addi r3,r9,15736
	ctx.r3.s64 = ctx.r9.s64 + 15736;
	// stw r11,-15548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302390C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023920"))) PPC_WEAK_FUNC(sub_83023920);
PPC_FUNC_IMPL(__imp__sub_83023920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19452
	ctx.r3.s64 = ctx.r31.s64 + -19452;
	// addi r4,r10,29572
	ctx.r4.s64 = ctx.r10.s64 + 29572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302395C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5784
	ctx.r11.s64 = ctx.r11.s64 + 5784;
	// addi r3,r9,15760
	ctx.r3.s64 = ctx.r9.s64 + 15760;
	// stw r11,-19452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023974;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023988"))) PPC_WEAK_FUNC(sub_83023988);
PPC_FUNC_IMPL(__imp__sub_83023988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17948
	ctx.r3.s64 = ctx.r31.s64 + -17948;
	// addi r4,r10,29612
	ctx.r4.s64 = ctx.r10.s64 + 29612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830239C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5864
	ctx.r11.s64 = ctx.r11.s64 + 5864;
	// addi r3,r9,15784
	ctx.r3.s64 = ctx.r9.s64 + 15784;
	// stw r11,-17948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17948, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830239DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830239F0"))) PPC_WEAK_FUNC(sub_830239F0);
PPC_FUNC_IMPL(__imp__sub_830239F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19356
	ctx.r3.s64 = ctx.r31.s64 + -19356;
	// addi r4,r10,29652
	ctx.r4.s64 = ctx.r10.s64 + 29652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023A2C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5944
	ctx.r11.s64 = ctx.r11.s64 + 5944;
	// addi r3,r9,15808
	ctx.r3.s64 = ctx.r9.s64 + 15808;
	// stw r11,-19356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023A44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023A58"))) PPC_WEAK_FUNC(sub_83023A58);
PPC_FUNC_IMPL(__imp__sub_83023A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15356
	ctx.r3.s64 = ctx.r31.s64 + -15356;
	// addi r4,r10,29692
	ctx.r4.s64 = ctx.r10.s64 + 29692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023A94;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6024
	ctx.r11.s64 = ctx.r11.s64 + 6024;
	// addi r3,r9,15832
	ctx.r3.s64 = ctx.r9.s64 + 15832;
	// stw r11,-15356(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023AAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023AC0"))) PPC_WEAK_FUNC(sub_83023AC0);
PPC_FUNC_IMPL(__imp__sub_83023AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20028
	ctx.r3.s64 = ctx.r31.s64 + -20028;
	// addi r4,r10,29732
	ctx.r4.s64 = ctx.r10.s64 + 29732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023AFC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// addi r3,r9,15856
	ctx.r3.s64 = ctx.r9.s64 + 15856;
	// stw r11,-20028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023B14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023B28"))) PPC_WEAK_FUNC(sub_83023B28);
PPC_FUNC_IMPL(__imp__sub_83023B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18108
	ctx.r3.s64 = ctx.r31.s64 + -18108;
	// addi r4,r10,29772
	ctx.r4.s64 = ctx.r10.s64 + 29772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023B64;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r3,r9,15880
	ctx.r3.s64 = ctx.r9.s64 + 15880;
	// stw r11,-18108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18108, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023B7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023B90"))) PPC_WEAK_FUNC(sub_83023B90);
PPC_FUNC_IMPL(__imp__sub_83023B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19132
	ctx.r3.s64 = ctx.r31.s64 + -19132;
	// addi r4,r10,29812
	ctx.r4.s64 = ctx.r10.s64 + 29812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023BCC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6264
	ctx.r11.s64 = ctx.r11.s64 + 6264;
	// addi r3,r9,15904
	ctx.r3.s64 = ctx.r9.s64 + 15904;
	// stw r11,-19132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023BE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023BF8"))) PPC_WEAK_FUNC(sub_83023BF8);
PPC_FUNC_IMPL(__imp__sub_83023BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20828
	ctx.r3.s64 = ctx.r31.s64 + -20828;
	// addi r4,r10,29852
	ctx.r4.s64 = ctx.r10.s64 + 29852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023C34;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6344
	ctx.r11.s64 = ctx.r11.s64 + 6344;
	// addi r3,r9,15928
	ctx.r3.s64 = ctx.r9.s64 + 15928;
	// stw r11,-20828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023C4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023C60"))) PPC_WEAK_FUNC(sub_83023C60);
PPC_FUNC_IMPL(__imp__sub_83023C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16764
	ctx.r3.s64 = ctx.r31.s64 + -16764;
	// addi r4,r10,29892
	ctx.r4.s64 = ctx.r10.s64 + 29892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023C9C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
	// addi r3,r9,15952
	ctx.r3.s64 = ctx.r9.s64 + 15952;
	// stw r11,-16764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16764, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023CB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023CC8"))) PPC_WEAK_FUNC(sub_83023CC8);
PPC_FUNC_IMPL(__imp__sub_83023CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15324
	ctx.r3.s64 = ctx.r31.s64 + -15324;
	// addi r4,r10,29932
	ctx.r4.s64 = ctx.r10.s64 + 29932;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023D04;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6504
	ctx.r11.s64 = ctx.r11.s64 + 6504;
	// addi r3,r9,15976
	ctx.r3.s64 = ctx.r9.s64 + 15976;
	// stw r11,-15324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023D1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023D30"))) PPC_WEAK_FUNC(sub_83023D30);
PPC_FUNC_IMPL(__imp__sub_83023D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15644
	ctx.r3.s64 = ctx.r31.s64 + -15644;
	// addi r4,r10,29972
	ctx.r4.s64 = ctx.r10.s64 + 29972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023D6C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6584
	ctx.r11.s64 = ctx.r11.s64 + 6584;
	// addi r3,r9,16000
	ctx.r3.s64 = ctx.r9.s64 + 16000;
	// stw r11,-15644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023D84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023D98"))) PPC_WEAK_FUNC(sub_83023D98);
PPC_FUNC_IMPL(__imp__sub_83023D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21308
	ctx.r3.s64 = ctx.r31.s64 + -21308;
	// addi r4,r10,30012
	ctx.r4.s64 = ctx.r10.s64 + 30012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023DD4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6664
	ctx.r11.s64 = ctx.r11.s64 + 6664;
	// addi r3,r9,16024
	ctx.r3.s64 = ctx.r9.s64 + 16024;
	// stw r11,-21308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21308, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023DEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023E00"))) PPC_WEAK_FUNC(sub_83023E00);
PPC_FUNC_IMPL(__imp__sub_83023E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16892
	ctx.r3.s64 = ctx.r31.s64 + -16892;
	// addi r4,r10,30052
	ctx.r4.s64 = ctx.r10.s64 + 30052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023E3C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6744
	ctx.r11.s64 = ctx.r11.s64 + 6744;
	// addi r3,r9,16048
	ctx.r3.s64 = ctx.r9.s64 + 16048;
	// stw r11,-16892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023E54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023E68"))) PPC_WEAK_FUNC(sub_83023E68);
PPC_FUNC_IMPL(__imp__sub_83023E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15004
	ctx.r3.s64 = ctx.r31.s64 + -15004;
	// addi r4,r10,30092
	ctx.r4.s64 = ctx.r10.s64 + 30092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023EA4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6824
	ctx.r11.s64 = ctx.r11.s64 + 6824;
	// addi r3,r9,16072
	ctx.r3.s64 = ctx.r9.s64 + 16072;
	// stw r11,-15004(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023EBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023ED0"))) PPC_WEAK_FUNC(sub_83023ED0);
PPC_FUNC_IMPL(__imp__sub_83023ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16028
	ctx.r3.s64 = ctx.r31.s64 + -16028;
	// addi r4,r10,30132
	ctx.r4.s64 = ctx.r10.s64 + 30132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023F0C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6904
	ctx.r11.s64 = ctx.r11.s64 + 6904;
	// addi r3,r9,16096
	ctx.r3.s64 = ctx.r9.s64 + 16096;
	// stw r11,-16028(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023F24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023F38"))) PPC_WEAK_FUNC(sub_83023F38);
PPC_FUNC_IMPL(__imp__sub_83023F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15996
	ctx.r3.s64 = ctx.r31.s64 + -15996;
	// addi r4,r10,30172
	ctx.r4.s64 = ctx.r10.s64 + 30172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023F74;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6984
	ctx.r11.s64 = ctx.r11.s64 + 6984;
	// addi r3,r9,16120
	ctx.r3.s64 = ctx.r9.s64 + 16120;
	// stw r11,-15996(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023F8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83023FA0"))) PPC_WEAK_FUNC(sub_83023FA0);
PPC_FUNC_IMPL(__imp__sub_83023FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19964
	ctx.r3.s64 = ctx.r31.s64 + -19964;
	// addi r4,r10,30212
	ctx.r4.s64 = ctx.r10.s64 + 30212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83023FDC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7064
	ctx.r11.s64 = ctx.r11.s64 + 7064;
	// addi r3,r9,16144
	ctx.r3.s64 = ctx.r9.s64 + 16144;
	// stw r11,-19964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83023FF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024008"))) PPC_WEAK_FUNC(sub_83024008);
PPC_FUNC_IMPL(__imp__sub_83024008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16252
	ctx.r3.s64 = ctx.r31.s64 + -16252;
	// addi r4,r10,30252
	ctx.r4.s64 = ctx.r10.s64 + 30252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024044;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7144
	ctx.r11.s64 = ctx.r11.s64 + 7144;
	// addi r3,r9,16168
	ctx.r3.s64 = ctx.r9.s64 + 16168;
	// stw r11,-16252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302405C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024070"))) PPC_WEAK_FUNC(sub_83024070);
PPC_FUNC_IMPL(__imp__sub_83024070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17404
	ctx.r3.s64 = ctx.r31.s64 + -17404;
	// addi r4,r10,30292
	ctx.r4.s64 = ctx.r10.s64 + 30292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830240AC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// addi r3,r9,16192
	ctx.r3.s64 = ctx.r9.s64 + 16192;
	// stw r11,-17404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17404, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830240C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830240D8"))) PPC_WEAK_FUNC(sub_830240D8);
PPC_FUNC_IMPL(__imp__sub_830240D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16188
	ctx.r3.s64 = ctx.r31.s64 + -16188;
	// addi r4,r10,30332
	ctx.r4.s64 = ctx.r10.s64 + 30332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024114;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7304
	ctx.r11.s64 = ctx.r11.s64 + 7304;
	// addi r3,r9,16216
	ctx.r3.s64 = ctx.r9.s64 + 16216;
	// stw r11,-16188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302412C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024140"))) PPC_WEAK_FUNC(sub_83024140);
PPC_FUNC_IMPL(__imp__sub_83024140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22140
	ctx.r3.s64 = ctx.r31.s64 + -22140;
	// addi r4,r10,30372
	ctx.r4.s64 = ctx.r10.s64 + 30372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302417C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7384
	ctx.r11.s64 = ctx.r11.s64 + 7384;
	// addi r3,r9,16240
	ctx.r3.s64 = ctx.r9.s64 + 16240;
	// stw r11,-22140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22140, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024194;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830241A8"))) PPC_WEAK_FUNC(sub_830241A8);
PPC_FUNC_IMPL(__imp__sub_830241A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15036
	ctx.r3.s64 = ctx.r31.s64 + -15036;
	// addi r4,r10,30412
	ctx.r4.s64 = ctx.r10.s64 + 30412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830241E4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7464
	ctx.r11.s64 = ctx.r11.s64 + 7464;
	// addi r3,r9,16264
	ctx.r3.s64 = ctx.r9.s64 + 16264;
	// stw r11,-15036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830241FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024210"))) PPC_WEAK_FUNC(sub_83024210);
PPC_FUNC_IMPL(__imp__sub_83024210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20764
	ctx.r3.s64 = ctx.r31.s64 + -20764;
	// addi r4,r10,30452
	ctx.r4.s64 = ctx.r10.s64 + 30452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302424C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7544
	ctx.r11.s64 = ctx.r11.s64 + 7544;
	// addi r3,r9,16288
	ctx.r3.s64 = ctx.r9.s64 + 16288;
	// stw r11,-20764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20764, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024264;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024278"))) PPC_WEAK_FUNC(sub_83024278);
PPC_FUNC_IMPL(__imp__sub_83024278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19036
	ctx.r3.s64 = ctx.r31.s64 + -19036;
	// addi r4,r10,30492
	ctx.r4.s64 = ctx.r10.s64 + 30492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830242B4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7624
	ctx.r11.s64 = ctx.r11.s64 + 7624;
	// addi r3,r9,16312
	ctx.r3.s64 = ctx.r9.s64 + 16312;
	// stw r11,-19036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830242CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830242E0"))) PPC_WEAK_FUNC(sub_830242E0);
PPC_FUNC_IMPL(__imp__sub_830242E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15964
	ctx.r3.s64 = ctx.r31.s64 + -15964;
	// addi r4,r10,30532
	ctx.r4.s64 = ctx.r10.s64 + 30532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302431C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7704
	ctx.r11.s64 = ctx.r11.s64 + 7704;
	// addi r3,r9,16336
	ctx.r3.s64 = ctx.r9.s64 + 16336;
	// stw r11,-15964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024334;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024348"))) PPC_WEAK_FUNC(sub_83024348);
PPC_FUNC_IMPL(__imp__sub_83024348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15196
	ctx.r3.s64 = ctx.r31.s64 + -15196;
	// addi r4,r10,30572
	ctx.r4.s64 = ctx.r10.s64 + 30572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024384;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7784
	ctx.r11.s64 = ctx.r11.s64 + 7784;
	// addi r3,r9,16360
	ctx.r3.s64 = ctx.r9.s64 + 16360;
	// stw r11,-15196(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302439C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830243B0"))) PPC_WEAK_FUNC(sub_830243B0);
PPC_FUNC_IMPL(__imp__sub_830243B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19068
	ctx.r3.s64 = ctx.r31.s64 + -19068;
	// addi r4,r10,30612
	ctx.r4.s64 = ctx.r10.s64 + 30612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830243EC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7864
	ctx.r11.s64 = ctx.r11.s64 + 7864;
	// addi r3,r9,16384
	ctx.r3.s64 = ctx.r9.s64 + 16384;
	// stw r11,-19068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19068, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024404;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024418"))) PPC_WEAK_FUNC(sub_83024418);
PPC_FUNC_IMPL(__imp__sub_83024418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18620
	ctx.r3.s64 = ctx.r31.s64 + -18620;
	// addi r4,r10,30652
	ctx.r4.s64 = ctx.r10.s64 + 30652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024454;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7944
	ctx.r11.s64 = ctx.r11.s64 + 7944;
	// addi r3,r9,16408
	ctx.r3.s64 = ctx.r9.s64 + 16408;
	// stw r11,-18620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302446C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024480"))) PPC_WEAK_FUNC(sub_83024480);
PPC_FUNC_IMPL(__imp__sub_83024480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18780
	ctx.r3.s64 = ctx.r31.s64 + -18780;
	// addi r4,r10,30692
	ctx.r4.s64 = ctx.r10.s64 + 30692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830244BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8024
	ctx.r11.s64 = ctx.r11.s64 + 8024;
	// addi r3,r9,16432
	ctx.r3.s64 = ctx.r9.s64 + 16432;
	// stw r11,-18780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830244D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830244E8"))) PPC_WEAK_FUNC(sub_830244E8);
PPC_FUNC_IMPL(__imp__sub_830244E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15452
	ctx.r3.s64 = ctx.r31.s64 + -15452;
	// addi r4,r10,30732
	ctx.r4.s64 = ctx.r10.s64 + 30732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024524;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8104
	ctx.r11.s64 = ctx.r11.s64 + 8104;
	// addi r3,r9,16456
	ctx.r3.s64 = ctx.r9.s64 + 16456;
	// stw r11,-15452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302453C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024550"))) PPC_WEAK_FUNC(sub_83024550);
PPC_FUNC_IMPL(__imp__sub_83024550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21212
	ctx.r3.s64 = ctx.r31.s64 + -21212;
	// addi r4,r10,30772
	ctx.r4.s64 = ctx.r10.s64 + 30772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302458C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8184
	ctx.r11.s64 = ctx.r11.s64 + 8184;
	// addi r3,r9,16480
	ctx.r3.s64 = ctx.r9.s64 + 16480;
	// stw r11,-21212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21212, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830245A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830245B8"))) PPC_WEAK_FUNC(sub_830245B8);
PPC_FUNC_IMPL(__imp__sub_830245B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16956
	ctx.r3.s64 = ctx.r31.s64 + -16956;
	// addi r4,r10,30812
	ctx.r4.s64 = ctx.r10.s64 + 30812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830245F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// addi r3,r9,16504
	ctx.r3.s64 = ctx.r9.s64 + 16504;
	// stw r11,-16956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16956, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302460C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024620"))) PPC_WEAK_FUNC(sub_83024620);
PPC_FUNC_IMPL(__imp__sub_83024620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16124
	ctx.r3.s64 = ctx.r31.s64 + -16124;
	// addi r4,r10,30852
	ctx.r4.s64 = ctx.r10.s64 + 30852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302465C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r3,r9,16528
	ctx.r3.s64 = ctx.r9.s64 + 16528;
	// stw r11,-16124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024674;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024688"))) PPC_WEAK_FUNC(sub_83024688);
PPC_FUNC_IMPL(__imp__sub_83024688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15772
	ctx.r3.s64 = ctx.r31.s64 + -15772;
	// addi r4,r10,30892
	ctx.r4.s64 = ctx.r10.s64 + 30892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830246C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8424
	ctx.r11.s64 = ctx.r11.s64 + 8424;
	// addi r3,r9,16552
	ctx.r3.s64 = ctx.r9.s64 + 16552;
	// stw r11,-15772(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830246DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830246F0"))) PPC_WEAK_FUNC(sub_830246F0);
PPC_FUNC_IMPL(__imp__sub_830246F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19388
	ctx.r3.s64 = ctx.r31.s64 + -19388;
	// addi r4,r10,30932
	ctx.r4.s64 = ctx.r10.s64 + 30932;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302472C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8504
	ctx.r11.s64 = ctx.r11.s64 + 8504;
	// addi r3,r9,16576
	ctx.r3.s64 = ctx.r9.s64 + 16576;
	// stw r11,-19388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024744;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024758"))) PPC_WEAK_FUNC(sub_83024758);
PPC_FUNC_IMPL(__imp__sub_83024758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18140
	ctx.r3.s64 = ctx.r31.s64 + -18140;
	// addi r4,r10,30972
	ctx.r4.s64 = ctx.r10.s64 + 30972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024794;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8584
	ctx.r11.s64 = ctx.r11.s64 + 8584;
	// addi r3,r9,16600
	ctx.r3.s64 = ctx.r9.s64 + 16600;
	// stw r11,-18140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18140, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830247AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830247C0"))) PPC_WEAK_FUNC(sub_830247C0);
PPC_FUNC_IMPL(__imp__sub_830247C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18844
	ctx.r3.s64 = ctx.r31.s64 + -18844;
	// addi r4,r10,31012
	ctx.r4.s64 = ctx.r10.s64 + 31012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830247FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8664
	ctx.r11.s64 = ctx.r11.s64 + 8664;
	// addi r3,r9,16624
	ctx.r3.s64 = ctx.r9.s64 + 16624;
	// stw r11,-18844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024814;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024828"))) PPC_WEAK_FUNC(sub_83024828);
PPC_FUNC_IMPL(__imp__sub_83024828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15932
	ctx.r3.s64 = ctx.r31.s64 + -15932;
	// addi r4,r10,31052
	ctx.r4.s64 = ctx.r10.s64 + 31052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024864;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8744
	ctx.r11.s64 = ctx.r11.s64 + 8744;
	// addi r3,r9,16648
	ctx.r3.s64 = ctx.r9.s64 + 16648;
	// stw r11,-15932(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302487C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024890"))) PPC_WEAK_FUNC(sub_83024890);
PPC_FUNC_IMPL(__imp__sub_83024890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17788
	ctx.r3.s64 = ctx.r31.s64 + -17788;
	// addi r4,r10,31092
	ctx.r4.s64 = ctx.r10.s64 + 31092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830248CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8824
	ctx.r11.s64 = ctx.r11.s64 + 8824;
	// addi r3,r9,16672
	ctx.r3.s64 = ctx.r9.s64 + 16672;
	// stw r11,-17788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17788, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830248E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830248F8"))) PPC_WEAK_FUNC(sub_830248F8);
PPC_FUNC_IMPL(__imp__sub_830248F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22172
	ctx.r3.s64 = ctx.r31.s64 + -22172;
	// addi r4,r10,31132
	ctx.r4.s64 = ctx.r10.s64 + 31132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024934;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8904
	ctx.r11.s64 = ctx.r11.s64 + 8904;
	// addi r3,r9,16696
	ctx.r3.s64 = ctx.r9.s64 + 16696;
	// stw r11,-22172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22172, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302494C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024960"))) PPC_WEAK_FUNC(sub_83024960);
PPC_FUNC_IMPL(__imp__sub_83024960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20476
	ctx.r3.s64 = ctx.r31.s64 + -20476;
	// addi r4,r10,31172
	ctx.r4.s64 = ctx.r10.s64 + 31172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302499C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// addi r3,r9,16720
	ctx.r3.s64 = ctx.r9.s64 + 16720;
	// stw r11,-20476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830249B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830249C8"))) PPC_WEAK_FUNC(sub_830249C8);
PPC_FUNC_IMPL(__imp__sub_830249C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21052
	ctx.r3.s64 = ctx.r31.s64 + -21052;
	// addi r4,r10,31212
	ctx.r4.s64 = ctx.r10.s64 + 31212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024A04;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9064
	ctx.r11.s64 = ctx.r11.s64 + 9064;
	// addi r3,r9,16744
	ctx.r3.s64 = ctx.r9.s64 + 16744;
	// stw r11,-21052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21052, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024A1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024A30"))) PPC_WEAK_FUNC(sub_83024A30);
PPC_FUNC_IMPL(__imp__sub_83024A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20668
	ctx.r3.s64 = ctx.r31.s64 + -20668;
	// addi r4,r10,31252
	ctx.r4.s64 = ctx.r10.s64 + 31252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024A6C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9144
	ctx.r11.s64 = ctx.r11.s64 + 9144;
	// addi r3,r9,16768
	ctx.r3.s64 = ctx.r9.s64 + 16768;
	// stw r11,-20668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024A84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024A98"))) PPC_WEAK_FUNC(sub_83024A98);
PPC_FUNC_IMPL(__imp__sub_83024A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20060
	ctx.r3.s64 = ctx.r31.s64 + -20060;
	// addi r4,r10,31292
	ctx.r4.s64 = ctx.r10.s64 + 31292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024AD4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9224
	ctx.r11.s64 = ctx.r11.s64 + 9224;
	// addi r3,r9,16792
	ctx.r3.s64 = ctx.r9.s64 + 16792;
	// stw r11,-20060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024AEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024B00"))) PPC_WEAK_FUNC(sub_83024B00);
PPC_FUNC_IMPL(__imp__sub_83024B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17020
	ctx.r3.s64 = ctx.r31.s64 + -17020;
	// addi r4,r10,31332
	ctx.r4.s64 = ctx.r10.s64 + 31332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024B3C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9304
	ctx.r11.s64 = ctx.r11.s64 + 9304;
	// addi r3,r9,16816
	ctx.r3.s64 = ctx.r9.s64 + 16816;
	// stw r11,-17020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17020, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024B54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024B68"))) PPC_WEAK_FUNC(sub_83024B68);
PPC_FUNC_IMPL(__imp__sub_83024B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21628
	ctx.r3.s64 = ctx.r31.s64 + -21628;
	// addi r4,r10,31372
	ctx.r4.s64 = ctx.r10.s64 + 31372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024BA4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9384
	ctx.r11.s64 = ctx.r11.s64 + 9384;
	// addi r3,r9,16840
	ctx.r3.s64 = ctx.r9.s64 + 16840;
	// stw r11,-21628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21628, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024BBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024BD0"))) PPC_WEAK_FUNC(sub_83024BD0);
PPC_FUNC_IMPL(__imp__sub_83024BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16700
	ctx.r3.s64 = ctx.r31.s64 + -16700;
	// addi r4,r10,31412
	ctx.r4.s64 = ctx.r10.s64 + 31412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024C0C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9464
	ctx.r11.s64 = ctx.r11.s64 + 9464;
	// addi r3,r9,16864
	ctx.r3.s64 = ctx.r9.s64 + 16864;
	// stw r11,-16700(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024C24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024C38"))) PPC_WEAK_FUNC(sub_83024C38);
PPC_FUNC_IMPL(__imp__sub_83024C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16092
	ctx.r3.s64 = ctx.r31.s64 + -16092;
	// addi r4,r10,31452
	ctx.r4.s64 = ctx.r10.s64 + 31452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024C74;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// addi r3,r9,16888
	ctx.r3.s64 = ctx.r9.s64 + 16888;
	// stw r11,-16092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024C8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024CA0"))) PPC_WEAK_FUNC(sub_83024CA0);
PPC_FUNC_IMPL(__imp__sub_83024CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21692
	ctx.r3.s64 = ctx.r31.s64 + -21692;
	// addi r4,r10,31492
	ctx.r4.s64 = ctx.r10.s64 + 31492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024CDC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// addi r3,r9,16912
	ctx.r3.s64 = ctx.r9.s64 + 16912;
	// stw r11,-21692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21692, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024CF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024D08"))) PPC_WEAK_FUNC(sub_83024D08);
PPC_FUNC_IMPL(__imp__sub_83024D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21436
	ctx.r3.s64 = ctx.r31.s64 + -21436;
	// addi r4,r10,31532
	ctx.r4.s64 = ctx.r10.s64 + 31532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024D44;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9704
	ctx.r11.s64 = ctx.r11.s64 + 9704;
	// addi r3,r9,16936
	ctx.r3.s64 = ctx.r9.s64 + 16936;
	// stw r11,-21436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21436, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024D5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024D70"))) PPC_WEAK_FUNC(sub_83024D70);
PPC_FUNC_IMPL(__imp__sub_83024D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21244
	ctx.r3.s64 = ctx.r31.s64 + -21244;
	// addi r4,r10,31572
	ctx.r4.s64 = ctx.r10.s64 + 31572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024DAC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9784
	ctx.r11.s64 = ctx.r11.s64 + 9784;
	// addi r3,r9,16960
	ctx.r3.s64 = ctx.r9.s64 + 16960;
	// stw r11,-21244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21244, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024DC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024DD8"))) PPC_WEAK_FUNC(sub_83024DD8);
PPC_FUNC_IMPL(__imp__sub_83024DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20220
	ctx.r3.s64 = ctx.r31.s64 + -20220;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024E14;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9864
	ctx.r11.s64 = ctx.r11.s64 + 9864;
	// addi r3,r9,16984
	ctx.r3.s64 = ctx.r9.s64 + 16984;
	// stw r11,-20220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024E2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024E40"))) PPC_WEAK_FUNC(sub_83024E40);
PPC_FUNC_IMPL(__imp__sub_83024E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20604
	ctx.r3.s64 = ctx.r31.s64 + -20604;
	// addi r4,r10,31652
	ctx.r4.s64 = ctx.r10.s64 + 31652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024E7C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// addi r3,r9,17008
	ctx.r3.s64 = ctx.r9.s64 + 17008;
	// stw r11,-20604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024E94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024EA8"))) PPC_WEAK_FUNC(sub_83024EA8);
PPC_FUNC_IMPL(__imp__sub_83024EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16668
	ctx.r3.s64 = ctx.r31.s64 + -16668;
	// addi r4,r10,31692
	ctx.r4.s64 = ctx.r10.s64 + 31692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024EE4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10024
	ctx.r11.s64 = ctx.r11.s64 + 10024;
	// addi r3,r9,17032
	ctx.r3.s64 = ctx.r9.s64 + 17032;
	// stw r11,-16668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024EFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024F10"))) PPC_WEAK_FUNC(sub_83024F10);
PPC_FUNC_IMPL(__imp__sub_83024F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20892
	ctx.r3.s64 = ctx.r31.s64 + -20892;
	// addi r4,r10,31732
	ctx.r4.s64 = ctx.r10.s64 + 31732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024F4C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10104
	ctx.r11.s64 = ctx.r11.s64 + 10104;
	// addi r3,r9,17056
	ctx.r3.s64 = ctx.r9.s64 + 17056;
	// stw r11,-20892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024F64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024F78"))) PPC_WEAK_FUNC(sub_83024F78);
PPC_FUNC_IMPL(__imp__sub_83024F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18076
	ctx.r3.s64 = ctx.r31.s64 + -18076;
	// addi r4,r10,31772
	ctx.r4.s64 = ctx.r10.s64 + 31772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83024FB4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10184
	ctx.r11.s64 = ctx.r11.s64 + 10184;
	// addi r3,r9,17080
	ctx.r3.s64 = ctx.r9.s64 + 17080;
	// stw r11,-18076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18076, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83024FCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83024FE0"))) PPC_WEAK_FUNC(sub_83024FE0);
PPC_FUNC_IMPL(__imp__sub_83024FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17244
	ctx.r3.s64 = ctx.r31.s64 + -17244;
	// addi r4,r10,31812
	ctx.r4.s64 = ctx.r10.s64 + 31812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302501C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10264
	ctx.r11.s64 = ctx.r11.s64 + 10264;
	// addi r3,r9,17104
	ctx.r3.s64 = ctx.r9.s64 + 17104;
	// stw r11,-17244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17244, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025034;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025048"))) PPC_WEAK_FUNC(sub_83025048);
PPC_FUNC_IMPL(__imp__sub_83025048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-18204
	ctx.r3.s64 = ctx.r31.s64 + -18204;
	// addi r4,r10,31852
	ctx.r4.s64 = ctx.r10.s64 + 31852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025084;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10344
	ctx.r11.s64 = ctx.r11.s64 + 10344;
	// addi r3,r9,17128
	ctx.r3.s64 = ctx.r9.s64 + 17128;
	// stw r11,-18204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -18204, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302509C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830250B0"))) PPC_WEAK_FUNC(sub_830250B0);
PPC_FUNC_IMPL(__imp__sub_830250B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20572
	ctx.r3.s64 = ctx.r31.s64 + -20572;
	// addi r4,r10,31892
	ctx.r4.s64 = ctx.r10.s64 + 31892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830250EC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10424
	ctx.r11.s64 = ctx.r11.s64 + 10424;
	// addi r3,r9,17152
	ctx.r3.s64 = ctx.r9.s64 + 17152;
	// stw r11,-20572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025104;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025118"))) PPC_WEAK_FUNC(sub_83025118);
PPC_FUNC_IMPL(__imp__sub_83025118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19292
	ctx.r3.s64 = ctx.r31.s64 + -19292;
	// addi r4,r10,31932
	ctx.r4.s64 = ctx.r10.s64 + 31932;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025154;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10504
	ctx.r11.s64 = ctx.r11.s64 + 10504;
	// addi r3,r9,17176
	ctx.r3.s64 = ctx.r9.s64 + 17176;
	// stw r11,-19292(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19292, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302516C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025180"))) PPC_WEAK_FUNC(sub_83025180);
PPC_FUNC_IMPL(__imp__sub_83025180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21948
	ctx.r3.s64 = ctx.r31.s64 + -21948;
	// addi r4,r10,31972
	ctx.r4.s64 = ctx.r10.s64 + 31972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830251BC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10584
	ctx.r11.s64 = ctx.r11.s64 + 10584;
	// addi r3,r9,17200
	ctx.r3.s64 = ctx.r9.s64 + 17200;
	// stw r11,-21948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21948, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830251D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830251E8"))) PPC_WEAK_FUNC(sub_830251E8);
PPC_FUNC_IMPL(__imp__sub_830251E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17820
	ctx.r3.s64 = ctx.r31.s64 + -17820;
	// addi r4,r10,32012
	ctx.r4.s64 = ctx.r10.s64 + 32012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025224;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10664
	ctx.r11.s64 = ctx.r11.s64 + 10664;
	// addi r3,r9,17224
	ctx.r3.s64 = ctx.r9.s64 + 17224;
	// stw r11,-17820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17820, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302523C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025250"))) PPC_WEAK_FUNC(sub_83025250);
PPC_FUNC_IMPL(__imp__sub_83025250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-19644
	ctx.r3.s64 = ctx.r31.s64 + -19644;
	// addi r4,r10,32052
	ctx.r4.s64 = ctx.r10.s64 + 32052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302528C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10744
	ctx.r11.s64 = ctx.r11.s64 + 10744;
	// addi r3,r9,17248
	ctx.r3.s64 = ctx.r9.s64 + 17248;
	// stw r11,-19644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -19644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830252A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830252B8"))) PPC_WEAK_FUNC(sub_830252B8);
PPC_FUNC_IMPL(__imp__sub_830252B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20316
	ctx.r3.s64 = ctx.r31.s64 + -20316;
	// addi r4,r10,32092
	ctx.r4.s64 = ctx.r10.s64 + 32092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830252F4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10824
	ctx.r11.s64 = ctx.r11.s64 + 10824;
	// addi r3,r9,17272
	ctx.r3.s64 = ctx.r9.s64 + 17272;
	// stw r11,-20316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302530C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025320"))) PPC_WEAK_FUNC(sub_83025320);
PPC_FUNC_IMPL(__imp__sub_83025320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-15516
	ctx.r3.s64 = ctx.r31.s64 + -15516;
	// addi r4,r10,32128
	ctx.r4.s64 = ctx.r10.s64 + 32128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302535C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10904
	ctx.r11.s64 = ctx.r11.s64 + 10904;
	// addi r3,r9,17296
	ctx.r3.s64 = ctx.r9.s64 + 17296;
	// stw r11,-15516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -15516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025374;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025388"))) PPC_WEAK_FUNC(sub_83025388);
PPC_FUNC_IMPL(__imp__sub_83025388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17660
	ctx.r3.s64 = ctx.r31.s64 + -17660;
	// addi r4,r10,32164
	ctx.r4.s64 = ctx.r10.s64 + 32164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830253C4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10984
	ctx.r11.s64 = ctx.r11.s64 + 10984;
	// addi r3,r9,17320
	ctx.r3.s64 = ctx.r9.s64 + 17320;
	// stw r11,-17660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830253DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830253F0"))) PPC_WEAK_FUNC(sub_830253F0);
PPC_FUNC_IMPL(__imp__sub_830253F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17468
	ctx.r3.s64 = ctx.r31.s64 + -17468;
	// addi r4,r10,32200
	ctx.r4.s64 = ctx.r10.s64 + 32200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302542C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11064
	ctx.r11.s64 = ctx.r11.s64 + 11064;
	// addi r3,r9,17344
	ctx.r3.s64 = ctx.r9.s64 + 17344;
	// stw r11,-17468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17468, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025444;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025458"))) PPC_WEAK_FUNC(sub_83025458);
PPC_FUNC_IMPL(__imp__sub_83025458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-16380
	ctx.r3.s64 = ctx.r31.s64 + -16380;
	// addi r4,r10,32236
	ctx.r4.s64 = ctx.r10.s64 + 32236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025494;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11144
	ctx.r11.s64 = ctx.r11.s64 + 11144;
	// addi r3,r9,17368
	ctx.r3.s64 = ctx.r9.s64 + 17368;
	// stw r11,-16380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830254AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830254C0"))) PPC_WEAK_FUNC(sub_830254C0);
PPC_FUNC_IMPL(__imp__sub_830254C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20732
	ctx.r3.s64 = ctx.r31.s64 + -20732;
	// addi r4,r10,32272
	ctx.r4.s64 = ctx.r10.s64 + 32272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830254FC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11224
	ctx.r11.s64 = ctx.r11.s64 + 11224;
	// addi r3,r9,17392
	ctx.r3.s64 = ctx.r9.s64 + 17392;
	// stw r11,-20732(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20732, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025514;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025528"))) PPC_WEAK_FUNC(sub_83025528);
PPC_FUNC_IMPL(__imp__sub_83025528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17276
	ctx.r3.s64 = ctx.r31.s64 + -17276;
	// addi r4,r10,32308
	ctx.r4.s64 = ctx.r10.s64 + 32308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025564;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11304
	ctx.r11.s64 = ctx.r11.s64 + 11304;
	// addi r3,r9,17416
	ctx.r3.s64 = ctx.r9.s64 + 17416;
	// stw r11,-17276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17276, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302557C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025590"))) PPC_WEAK_FUNC(sub_83025590);
PPC_FUNC_IMPL(__imp__sub_83025590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17212
	ctx.r3.s64 = ctx.r31.s64 + -17212;
	// addi r4,r10,32344
	ctx.r4.s64 = ctx.r10.s64 + 32344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830255CC;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11384
	ctx.r11.s64 = ctx.r11.s64 + 11384;
	// addi r3,r9,17440
	ctx.r3.s64 = ctx.r9.s64 + 17440;
	// stw r11,-17212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17212, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830255E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830255F8"))) PPC_WEAK_FUNC(sub_830255F8);
PPC_FUNC_IMPL(__imp__sub_830255F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-20860
	ctx.r3.s64 = ctx.r31.s64 + -20860;
	// addi r4,r10,32380
	ctx.r4.s64 = ctx.r10.s64 + 32380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025634;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11464
	ctx.r11.s64 = ctx.r11.s64 + 11464;
	// addi r3,r9,17464
	ctx.r3.s64 = ctx.r9.s64 + 17464;
	// stw r11,-20860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302564C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025660"))) PPC_WEAK_FUNC(sub_83025660);
PPC_FUNC_IMPL(__imp__sub_83025660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17884
	ctx.r3.s64 = ctx.r31.s64 + -17884;
	// addi r4,r10,32416
	ctx.r4.s64 = ctx.r10.s64 + 32416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302569C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11544
	ctx.r11.s64 = ctx.r11.s64 + 11544;
	// addi r3,r9,17488
	ctx.r3.s64 = ctx.r9.s64 + 17488;
	// stw r11,-17884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17884, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830256B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830256C8"))) PPC_WEAK_FUNC(sub_830256C8);
PPC_FUNC_IMPL(__imp__sub_830256C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-14940
	ctx.r3.s64 = ctx.r31.s64 + -14940;
	// addi r4,r10,32452
	ctx.r4.s64 = ctx.r10.s64 + 32452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025704;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11624
	ctx.r11.s64 = ctx.r11.s64 + 11624;
	// addi r3,r9,17512
	ctx.r3.s64 = ctx.r9.s64 + 17512;
	// stw r11,-14940(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302571C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025730"))) PPC_WEAK_FUNC(sub_83025730);
PPC_FUNC_IMPL(__imp__sub_83025730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-21660
	ctx.r3.s64 = ctx.r31.s64 + -21660;
	// addi r4,r10,32488
	ctx.r4.s64 = ctx.r10.s64 + 32488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302576C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11704
	ctx.r11.s64 = ctx.r11.s64 + 11704;
	// addi r3,r9,17536
	ctx.r3.s64 = ctx.r9.s64 + 17536;
	// stw r11,-21660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025784;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025798"))) PPC_WEAK_FUNC(sub_83025798);
PPC_FUNC_IMPL(__imp__sub_83025798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-17308
	ctx.r3.s64 = ctx.r31.s64 + -17308;
	// addi r4,r10,32524
	ctx.r4.s64 = ctx.r10.s64 + 32524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830257D4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11784
	ctx.r11.s64 = ctx.r11.s64 + 11784;
	// addi r3,r9,17560
	ctx.r3.s64 = ctx.r9.s64 + 17560;
	// stw r11,-17308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17308, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830257EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025800"))) PPC_WEAK_FUNC(sub_83025800);
PPC_FUNC_IMPL(__imp__sub_83025800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r31,-31983
	ctx.r31.s64 = -2096037888;
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-22204
	ctx.r3.s64 = ctx.r31.s64 + -22204;
	// addi r4,r10,32560
	ctx.r4.s64 = ctx.r10.s64 + 32560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302583C;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11864
	ctx.r11.s64 = ctx.r11.s64 + 11864;
	// addi r3,r9,17584
	ctx.r3.s64 = ctx.r9.s64 + 17584;
	// stw r11,-22204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22204, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025868"))) PPC_WEAK_FUNC(sub_83025868);
PPC_FUNC_IMPL(__imp__sub_83025868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r3,r31,-14844
	ctx.r3.s64 = ctx.r31.s64 + -14844;
	// addi r4,r10,-32128
	ctx.r4.s64 = ctx.r10.s64 + -32128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82b38290
	ctx.lr = 0x830258A4;
	sub_82B38290(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32604
	ctx.r11.s64 = ctx.r11.s64 + 32604;
	// addi r3,r9,17608
	ctx.r3.s64 = ctx.r9.s64 + 17608;
	// stw r11,-14844(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830258BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830258D0"))) PPC_WEAK_FUNC(sub_830258D0);
PPC_FUNC_IMPL(__imp__sub_830258D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-14780
	ctx.r3.s64 = ctx.r31.s64 + -14780;
	// addi r4,r10,-27876
	ctx.r4.s64 = ctx.r10.s64 + -27876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302590C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32108
	ctx.r11.s64 = ctx.r11.s64 + -32108;
	// addi r3,r9,17632
	ctx.r3.s64 = ctx.r9.s64 + 17632;
	// stw r11,-14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025924;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025938"))) PPC_WEAK_FUNC(sub_83025938);
PPC_FUNC_IMPL(__imp__sub_83025938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14588
	ctx.r3.s64 = ctx.r31.s64 + -14588;
	// addi r4,r10,-27844
	ctx.r4.s64 = ctx.r10.s64 + -27844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025974;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32000
	ctx.r11.s64 = ctx.r11.s64 + -32000;
	// addi r3,r9,17656
	ctx.r3.s64 = ctx.r9.s64 + 17656;
	// stw r11,-14588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302598C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830259A0"))) PPC_WEAK_FUNC(sub_830259A0);
PPC_FUNC_IMPL(__imp__sub_830259A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13276
	ctx.r3.s64 = ctx.r31.s64 + -13276;
	// addi r4,r10,-27808
	ctx.r4.s64 = ctx.r10.s64 + -27808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830259DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31992
	ctx.r11.s64 = ctx.r11.s64 + -31992;
	// addi r3,r9,17680
	ctx.r3.s64 = ctx.r9.s64 + 17680;
	// stw r11,-13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13276, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830259F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025A08"))) PPC_WEAK_FUNC(sub_83025A08);
PPC_FUNC_IMPL(__imp__sub_83025A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13788
	ctx.r3.s64 = ctx.r31.s64 + -13788;
	// addi r4,r10,-27772
	ctx.r4.s64 = ctx.r10.s64 + -27772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025A44;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31984
	ctx.r11.s64 = ctx.r11.s64 + -31984;
	// addi r3,r9,17704
	ctx.r3.s64 = ctx.r9.s64 + 17704;
	// stw r11,-13788(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13788, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025A5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025A70"))) PPC_WEAK_FUNC(sub_83025A70);
PPC_FUNC_IMPL(__imp__sub_83025A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14108
	ctx.r3.s64 = ctx.r31.s64 + -14108;
	// addi r4,r10,-27736
	ctx.r4.s64 = ctx.r10.s64 + -27736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025AAC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31976
	ctx.r11.s64 = ctx.r11.s64 + -31976;
	// addi r3,r9,17728
	ctx.r3.s64 = ctx.r9.s64 + 17728;
	// stw r11,-14108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14108, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025AC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025AD8"))) PPC_WEAK_FUNC(sub_83025AD8);
PPC_FUNC_IMPL(__imp__sub_83025AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13564
	ctx.r3.s64 = ctx.r31.s64 + -13564;
	// addi r4,r10,-27700
	ctx.r4.s64 = ctx.r10.s64 + -27700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025B14;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31968
	ctx.r11.s64 = ctx.r11.s64 + -31968;
	// addi r3,r9,17752
	ctx.r3.s64 = ctx.r9.s64 + 17752;
	// stw r11,-13564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13564, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025B2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025B40"))) PPC_WEAK_FUNC(sub_83025B40);
PPC_FUNC_IMPL(__imp__sub_83025B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14460
	ctx.r3.s64 = ctx.r31.s64 + -14460;
	// addi r4,r10,-27664
	ctx.r4.s64 = ctx.r10.s64 + -27664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025B7C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31960
	ctx.r11.s64 = ctx.r11.s64 + -31960;
	// addi r3,r9,17776
	ctx.r3.s64 = ctx.r9.s64 + 17776;
	// stw r11,-14460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14460, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025B94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025BA8"))) PPC_WEAK_FUNC(sub_83025BA8);
PPC_FUNC_IMPL(__imp__sub_83025BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14812
	ctx.r3.s64 = ctx.r31.s64 + -14812;
	// addi r4,r10,-27628
	ctx.r4.s64 = ctx.r10.s64 + -27628;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025BE4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31952
	ctx.r11.s64 = ctx.r11.s64 + -31952;
	// addi r3,r9,17800
	ctx.r3.s64 = ctx.r9.s64 + 17800;
	// stw r11,-14812(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025BFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025C10"))) PPC_WEAK_FUNC(sub_83025C10);
PPC_FUNC_IMPL(__imp__sub_83025C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14748
	ctx.r3.s64 = ctx.r31.s64 + -14748;
	// addi r4,r10,-27592
	ctx.r4.s64 = ctx.r10.s64 + -27592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025C4C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31944
	ctx.r11.s64 = ctx.r11.s64 + -31944;
	// addi r3,r9,17824
	ctx.r3.s64 = ctx.r9.s64 + 17824;
	// stw r11,-14748(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14748, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025C64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025C78"))) PPC_WEAK_FUNC(sub_83025C78);
PPC_FUNC_IMPL(__imp__sub_83025C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13244
	ctx.r3.s64 = ctx.r31.s64 + -13244;
	// addi r4,r10,-27556
	ctx.r4.s64 = ctx.r10.s64 + -27556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025CB4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31936
	ctx.r11.s64 = ctx.r11.s64 + -31936;
	// addi r3,r9,17848
	ctx.r3.s64 = ctx.r9.s64 + 17848;
	// stw r11,-13244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13244, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025CCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025CE0"))) PPC_WEAK_FUNC(sub_83025CE0);
PPC_FUNC_IMPL(__imp__sub_83025CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13852
	ctx.r3.s64 = ctx.r31.s64 + -13852;
	// addi r4,r10,-27520
	ctx.r4.s64 = ctx.r10.s64 + -27520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025D1C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31928
	ctx.r11.s64 = ctx.r11.s64 + -31928;
	// addi r3,r9,17872
	ctx.r3.s64 = ctx.r9.s64 + 17872;
	// stw r11,-13852(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13852, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025D34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025D48"))) PPC_WEAK_FUNC(sub_83025D48);
PPC_FUNC_IMPL(__imp__sub_83025D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13180
	ctx.r3.s64 = ctx.r31.s64 + -13180;
	// addi r4,r10,-27480
	ctx.r4.s64 = ctx.r10.s64 + -27480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025D84;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31920
	ctx.r11.s64 = ctx.r11.s64 + -31920;
	// addi r3,r9,17896
	ctx.r3.s64 = ctx.r9.s64 + 17896;
	// stw r11,-13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13180, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025D9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025DB0"))) PPC_WEAK_FUNC(sub_83025DB0);
PPC_FUNC_IMPL(__imp__sub_83025DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14364
	ctx.r3.s64 = ctx.r31.s64 + -14364;
	// addi r4,r10,-27444
	ctx.r4.s64 = ctx.r10.s64 + -27444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025DEC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31912
	ctx.r11.s64 = ctx.r11.s64 + -31912;
	// addi r3,r9,17920
	ctx.r3.s64 = ctx.r9.s64 + 17920;
	// stw r11,-14364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14364, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025E04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025E18"))) PPC_WEAK_FUNC(sub_83025E18);
PPC_FUNC_IMPL(__imp__sub_83025E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13500
	ctx.r3.s64 = ctx.r31.s64 + -13500;
	// addi r4,r10,-27404
	ctx.r4.s64 = ctx.r10.s64 + -27404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025E54;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31904
	ctx.r11.s64 = ctx.r11.s64 + -31904;
	// addi r3,r9,17944
	ctx.r3.s64 = ctx.r9.s64 + 17944;
	// stw r11,-13500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13500, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025E6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025E80"))) PPC_WEAK_FUNC(sub_83025E80);
PPC_FUNC_IMPL(__imp__sub_83025E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13724
	ctx.r3.s64 = ctx.r31.s64 + -13724;
	// addi r4,r10,-27368
	ctx.r4.s64 = ctx.r10.s64 + -27368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025EBC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31896
	ctx.r11.s64 = ctx.r11.s64 + -31896;
	// addi r3,r9,17968
	ctx.r3.s64 = ctx.r9.s64 + 17968;
	// stw r11,-13724(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13724, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025ED4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025EE8"))) PPC_WEAK_FUNC(sub_83025EE8);
PPC_FUNC_IMPL(__imp__sub_83025EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14012
	ctx.r3.s64 = ctx.r31.s64 + -14012;
	// addi r4,r10,-27332
	ctx.r4.s64 = ctx.r10.s64 + -27332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025F24;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31888
	ctx.r11.s64 = ctx.r11.s64 + -31888;
	// addi r3,r9,17992
	ctx.r3.s64 = ctx.r9.s64 + 17992;
	// stw r11,-14012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14012, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025F3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025F50"))) PPC_WEAK_FUNC(sub_83025F50);
PPC_FUNC_IMPL(__imp__sub_83025F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14396
	ctx.r3.s64 = ctx.r31.s64 + -14396;
	// addi r4,r10,-27292
	ctx.r4.s64 = ctx.r10.s64 + -27292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025F8C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31880
	ctx.r11.s64 = ctx.r11.s64 + -31880;
	// addi r3,r9,18016
	ctx.r3.s64 = ctx.r9.s64 + 18016;
	// stw r11,-14396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14396, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83025FA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83025FB8"))) PPC_WEAK_FUNC(sub_83025FB8);
PPC_FUNC_IMPL(__imp__sub_83025FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14236
	ctx.r3.s64 = ctx.r31.s64 + -14236;
	// addi r4,r10,-27256
	ctx.r4.s64 = ctx.r10.s64 + -27256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83025FF4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31872
	ctx.r11.s64 = ctx.r11.s64 + -31872;
	// addi r3,r9,18040
	ctx.r3.s64 = ctx.r9.s64 + 18040;
	// stw r11,-14236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14236, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302600C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026020"))) PPC_WEAK_FUNC(sub_83026020);
PPC_FUNC_IMPL(__imp__sub_83026020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13948
	ctx.r3.s64 = ctx.r31.s64 + -13948;
	// addi r4,r10,-27216
	ctx.r4.s64 = ctx.r10.s64 + -27216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302605C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31864
	ctx.r11.s64 = ctx.r11.s64 + -31864;
	// addi r3,r9,18064
	ctx.r3.s64 = ctx.r9.s64 + 18064;
	// stw r11,-13948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13948, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026074;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026088"))) PPC_WEAK_FUNC(sub_83026088);
PPC_FUNC_IMPL(__imp__sub_83026088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14204
	ctx.r3.s64 = ctx.r31.s64 + -14204;
	// addi r4,r10,-27180
	ctx.r4.s64 = ctx.r10.s64 + -27180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830260C4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31856
	ctx.r11.s64 = ctx.r11.s64 + -31856;
	// addi r3,r9,18088
	ctx.r3.s64 = ctx.r9.s64 + 18088;
	// stw r11,-14204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14204, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830260DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830260F0"))) PPC_WEAK_FUNC(sub_830260F0);
PPC_FUNC_IMPL(__imp__sub_830260F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14172
	ctx.r3.s64 = ctx.r31.s64 + -14172;
	// addi r4,r10,-27144
	ctx.r4.s64 = ctx.r10.s64 + -27144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302612C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31848
	ctx.r11.s64 = ctx.r11.s64 + -31848;
	// addi r3,r9,18112
	ctx.r3.s64 = ctx.r9.s64 + 18112;
	// stw r11,-14172(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14172, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026144;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026158"))) PPC_WEAK_FUNC(sub_83026158);
PPC_FUNC_IMPL(__imp__sub_83026158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13468
	ctx.r3.s64 = ctx.r31.s64 + -13468;
	// addi r4,r10,-27108
	ctx.r4.s64 = ctx.r10.s64 + -27108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026194;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31840
	ctx.r11.s64 = ctx.r11.s64 + -31840;
	// addi r3,r9,18136
	ctx.r3.s64 = ctx.r9.s64 + 18136;
	// stw r11,-13468(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13468, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830261AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830261C0"))) PPC_WEAK_FUNC(sub_830261C0);
PPC_FUNC_IMPL(__imp__sub_830261C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14300
	ctx.r3.s64 = ctx.r31.s64 + -14300;
	// addi r4,r10,-27072
	ctx.r4.s64 = ctx.r10.s64 + -27072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830261FC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31832
	ctx.r11.s64 = ctx.r11.s64 + -31832;
	// addi r3,r9,18160
	ctx.r3.s64 = ctx.r9.s64 + 18160;
	// stw r11,-14300(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14300, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026214;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026228"))) PPC_WEAK_FUNC(sub_83026228);
PPC_FUNC_IMPL(__imp__sub_83026228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14684
	ctx.r3.s64 = ctx.r31.s64 + -14684;
	// addi r4,r10,-27036
	ctx.r4.s64 = ctx.r10.s64 + -27036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026264;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31824
	ctx.r11.s64 = ctx.r11.s64 + -31824;
	// addi r3,r9,18184
	ctx.r3.s64 = ctx.r9.s64 + 18184;
	// stw r11,-14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14684, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302627C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026290"))) PPC_WEAK_FUNC(sub_83026290);
PPC_FUNC_IMPL(__imp__sub_83026290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13660
	ctx.r3.s64 = ctx.r31.s64 + -13660;
	// addi r4,r10,-26996
	ctx.r4.s64 = ctx.r10.s64 + -26996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830262CC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31816
	ctx.r11.s64 = ctx.r11.s64 + -31816;
	// addi r3,r9,18208
	ctx.r3.s64 = ctx.r9.s64 + 18208;
	// stw r11,-13660(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830262E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830262F8"))) PPC_WEAK_FUNC(sub_830262F8);
PPC_FUNC_IMPL(__imp__sub_830262F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13596
	ctx.r3.s64 = ctx.r31.s64 + -13596;
	// addi r4,r10,-26956
	ctx.r4.s64 = ctx.r10.s64 + -26956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026334;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31808
	ctx.r11.s64 = ctx.r11.s64 + -31808;
	// addi r3,r9,18232
	ctx.r3.s64 = ctx.r9.s64 + 18232;
	// stw r11,-13596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13596, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302634C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026360"))) PPC_WEAK_FUNC(sub_83026360);
PPC_FUNC_IMPL(__imp__sub_83026360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14268
	ctx.r3.s64 = ctx.r31.s64 + -14268;
	// addi r4,r10,-26916
	ctx.r4.s64 = ctx.r10.s64 + -26916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302639C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31800
	ctx.r11.s64 = ctx.r11.s64 + -31800;
	// addi r3,r9,18256
	ctx.r3.s64 = ctx.r9.s64 + 18256;
	// stw r11,-14268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14268, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830263B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830263C8"))) PPC_WEAK_FUNC(sub_830263C8);
PPC_FUNC_IMPL(__imp__sub_830263C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14492
	ctx.r3.s64 = ctx.r31.s64 + -14492;
	// addi r4,r10,-26876
	ctx.r4.s64 = ctx.r10.s64 + -26876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026404;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31792
	ctx.r11.s64 = ctx.r11.s64 + -31792;
	// addi r3,r9,18280
	ctx.r3.s64 = ctx.r9.s64 + 18280;
	// stw r11,-14492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14492, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302641C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026430"))) PPC_WEAK_FUNC(sub_83026430);
PPC_FUNC_IMPL(__imp__sub_83026430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13980
	ctx.r3.s64 = ctx.r31.s64 + -13980;
	// addi r4,r10,-26836
	ctx.r4.s64 = ctx.r10.s64 + -26836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302646C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31784
	ctx.r11.s64 = ctx.r11.s64 + -31784;
	// addi r3,r9,18304
	ctx.r3.s64 = ctx.r9.s64 + 18304;
	// stw r11,-13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13980, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026484;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026498"))) PPC_WEAK_FUNC(sub_83026498);
PPC_FUNC_IMPL(__imp__sub_83026498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14076
	ctx.r3.s64 = ctx.r31.s64 + -14076;
	// addi r4,r10,-26796
	ctx.r4.s64 = ctx.r10.s64 + -26796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830264D4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31776
	ctx.r11.s64 = ctx.r11.s64 + -31776;
	// addi r3,r9,18328
	ctx.r3.s64 = ctx.r9.s64 + 18328;
	// stw r11,-14076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14076, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830264EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026500"))) PPC_WEAK_FUNC(sub_83026500);
PPC_FUNC_IMPL(__imp__sub_83026500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13916
	ctx.r3.s64 = ctx.r31.s64 + -13916;
	// addi r4,r10,-26756
	ctx.r4.s64 = ctx.r10.s64 + -26756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302653C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31768
	ctx.r11.s64 = ctx.r11.s64 + -31768;
	// addi r3,r9,18352
	ctx.r3.s64 = ctx.r9.s64 + 18352;
	// stw r11,-13916(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13916, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026554;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026568"))) PPC_WEAK_FUNC(sub_83026568);
PPC_FUNC_IMPL(__imp__sub_83026568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13820
	ctx.r3.s64 = ctx.r31.s64 + -13820;
	// addi r4,r10,-26720
	ctx.r4.s64 = ctx.r10.s64 + -26720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830265A4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31760
	ctx.r11.s64 = ctx.r11.s64 + -31760;
	// addi r3,r9,18376
	ctx.r3.s64 = ctx.r9.s64 + 18376;
	// stw r11,-13820(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13820, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830265BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830265D0"))) PPC_WEAK_FUNC(sub_830265D0);
PPC_FUNC_IMPL(__imp__sub_830265D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13340
	ctx.r3.s64 = ctx.r31.s64 + -13340;
	// addi r4,r10,-26680
	ctx.r4.s64 = ctx.r10.s64 + -26680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302660C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31752
	ctx.r11.s64 = ctx.r11.s64 + -31752;
	// addi r3,r9,18400
	ctx.r3.s64 = ctx.r9.s64 + 18400;
	// stw r11,-13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13340, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026624;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026638"))) PPC_WEAK_FUNC(sub_83026638);
PPC_FUNC_IMPL(__imp__sub_83026638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14652
	ctx.r3.s64 = ctx.r31.s64 + -14652;
	// addi r4,r10,-26640
	ctx.r4.s64 = ctx.r10.s64 + -26640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026674;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31744
	ctx.r11.s64 = ctx.r11.s64 + -31744;
	// addi r3,r9,18424
	ctx.r3.s64 = ctx.r9.s64 + 18424;
	// stw r11,-14652(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302668C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830266A0"))) PPC_WEAK_FUNC(sub_830266A0);
PPC_FUNC_IMPL(__imp__sub_830266A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14524
	ctx.r3.s64 = ctx.r31.s64 + -14524;
	// addi r4,r10,-26600
	ctx.r4.s64 = ctx.r10.s64 + -26600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830266DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// addi r3,r9,18448
	ctx.r3.s64 = ctx.r9.s64 + 18448;
	// stw r11,-14524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14524, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830266F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026708"))) PPC_WEAK_FUNC(sub_83026708);
PPC_FUNC_IMPL(__imp__sub_83026708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13532
	ctx.r3.s64 = ctx.r31.s64 + -13532;
	// addi r4,r10,-26564
	ctx.r4.s64 = ctx.r10.s64 + -26564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026744;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31728
	ctx.r11.s64 = ctx.r11.s64 + -31728;
	// addi r3,r9,18472
	ctx.r3.s64 = ctx.r9.s64 + 18472;
	// stw r11,-13532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13532, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302675C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026770"))) PPC_WEAK_FUNC(sub_83026770);
PPC_FUNC_IMPL(__imp__sub_83026770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14332
	ctx.r3.s64 = ctx.r31.s64 + -14332;
	// addi r4,r10,-26528
	ctx.r4.s64 = ctx.r10.s64 + -26528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830267AC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31720
	ctx.r11.s64 = ctx.r11.s64 + -31720;
	// addi r3,r9,18496
	ctx.r3.s64 = ctx.r9.s64 + 18496;
	// stw r11,-14332(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14332, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830267C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830267D8"))) PPC_WEAK_FUNC(sub_830267D8);
PPC_FUNC_IMPL(__imp__sub_830267D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14140
	ctx.r3.s64 = ctx.r31.s64 + -14140;
	// addi r4,r10,-26488
	ctx.r4.s64 = ctx.r10.s64 + -26488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026814;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// addi r3,r9,18520
	ctx.r3.s64 = ctx.r9.s64 + 18520;
	// stw r11,-14140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14140, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302682C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026840"))) PPC_WEAK_FUNC(sub_83026840);
PPC_FUNC_IMPL(__imp__sub_83026840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13212
	ctx.r3.s64 = ctx.r31.s64 + -13212;
	// addi r4,r10,-26452
	ctx.r4.s64 = ctx.r10.s64 + -26452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302687C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31704
	ctx.r11.s64 = ctx.r11.s64 + -31704;
	// addi r3,r9,18544
	ctx.r3.s64 = ctx.r9.s64 + 18544;
	// stw r11,-13212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13212, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026894;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830268A8"))) PPC_WEAK_FUNC(sub_830268A8);
PPC_FUNC_IMPL(__imp__sub_830268A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14428
	ctx.r3.s64 = ctx.r31.s64 + -14428;
	// addi r4,r10,-26416
	ctx.r4.s64 = ctx.r10.s64 + -26416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830268E4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31696
	ctx.r11.s64 = ctx.r11.s64 + -31696;
	// addi r3,r9,18568
	ctx.r3.s64 = ctx.r9.s64 + 18568;
	// stw r11,-14428(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14428, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830268FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026910"))) PPC_WEAK_FUNC(sub_83026910);
PPC_FUNC_IMPL(__imp__sub_83026910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13692
	ctx.r3.s64 = ctx.r31.s64 + -13692;
	// addi r4,r10,-26376
	ctx.r4.s64 = ctx.r10.s64 + -26376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302694C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31688
	ctx.r11.s64 = ctx.r11.s64 + -31688;
	// addi r3,r9,18592
	ctx.r3.s64 = ctx.r9.s64 + 18592;
	// stw r11,-13692(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13692, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026964;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026978"))) PPC_WEAK_FUNC(sub_83026978);
PPC_FUNC_IMPL(__imp__sub_83026978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14716
	ctx.r3.s64 = ctx.r31.s64 + -14716;
	// addi r4,r10,-26336
	ctx.r4.s64 = ctx.r10.s64 + -26336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830269B4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31680
	ctx.r11.s64 = ctx.r11.s64 + -31680;
	// addi r3,r9,18616
	ctx.r3.s64 = ctx.r9.s64 + 18616;
	// stw r11,-14716(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14716, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830269CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830269E0"))) PPC_WEAK_FUNC(sub_830269E0);
PPC_FUNC_IMPL(__imp__sub_830269E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13404
	ctx.r3.s64 = ctx.r31.s64 + -13404;
	// addi r4,r10,-26300
	ctx.r4.s64 = ctx.r10.s64 + -26300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026A1C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31672
	ctx.r11.s64 = ctx.r11.s64 + -31672;
	// addi r3,r9,18640
	ctx.r3.s64 = ctx.r9.s64 + 18640;
	// stw r11,-13404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13404, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026A34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026A48"))) PPC_WEAK_FUNC(sub_83026A48);
PPC_FUNC_IMPL(__imp__sub_83026A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13372
	ctx.r3.s64 = ctx.r31.s64 + -13372;
	// addi r4,r10,-26256
	ctx.r4.s64 = ctx.r10.s64 + -26256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026A84;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// addi r3,r9,18664
	ctx.r3.s64 = ctx.r9.s64 + 18664;
	// stw r11,-13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13372, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026A9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026AB0"))) PPC_WEAK_FUNC(sub_83026AB0);
PPC_FUNC_IMPL(__imp__sub_83026AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14556
	ctx.r3.s64 = ctx.r31.s64 + -14556;
	// addi r4,r10,-26216
	ctx.r4.s64 = ctx.r10.s64 + -26216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026AEC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31656
	ctx.r11.s64 = ctx.r11.s64 + -31656;
	// addi r3,r9,18688
	ctx.r3.s64 = ctx.r9.s64 + 18688;
	// stw r11,-14556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026B04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026B18"))) PPC_WEAK_FUNC(sub_83026B18);
PPC_FUNC_IMPL(__imp__sub_83026B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13756
	ctx.r3.s64 = ctx.r31.s64 + -13756;
	// addi r4,r10,-26180
	ctx.r4.s64 = ctx.r10.s64 + -26180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026B54;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31648
	ctx.r11.s64 = ctx.r11.s64 + -31648;
	// addi r3,r9,18712
	ctx.r3.s64 = ctx.r9.s64 + 18712;
	// stw r11,-13756(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13756, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026B6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026B80"))) PPC_WEAK_FUNC(sub_83026B80);
PPC_FUNC_IMPL(__imp__sub_83026B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13628
	ctx.r3.s64 = ctx.r31.s64 + -13628;
	// addi r4,r10,-26144
	ctx.r4.s64 = ctx.r10.s64 + -26144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026BBC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31640
	ctx.r11.s64 = ctx.r11.s64 + -31640;
	// addi r3,r9,18736
	ctx.r3.s64 = ctx.r9.s64 + 18736;
	// stw r11,-13628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13628, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026BD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026BE8"))) PPC_WEAK_FUNC(sub_83026BE8);
PPC_FUNC_IMPL(__imp__sub_83026BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13308
	ctx.r3.s64 = ctx.r31.s64 + -13308;
	// addi r4,r10,-26104
	ctx.r4.s64 = ctx.r10.s64 + -26104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026C24;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31632
	ctx.r11.s64 = ctx.r11.s64 + -31632;
	// addi r3,r9,18760
	ctx.r3.s64 = ctx.r9.s64 + 18760;
	// stw r11,-13308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13308, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026C3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026C50"))) PPC_WEAK_FUNC(sub_83026C50);
PPC_FUNC_IMPL(__imp__sub_83026C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14044
	ctx.r3.s64 = ctx.r31.s64 + -14044;
	// addi r4,r10,-26064
	ctx.r4.s64 = ctx.r10.s64 + -26064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026C8C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31624
	ctx.r11.s64 = ctx.r11.s64 + -31624;
	// addi r3,r9,18784
	ctx.r3.s64 = ctx.r9.s64 + 18784;
	// stw r11,-14044(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14044, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026CA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026CB8"))) PPC_WEAK_FUNC(sub_83026CB8);
PPC_FUNC_IMPL(__imp__sub_83026CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13884
	ctx.r3.s64 = ctx.r31.s64 + -13884;
	// addi r4,r10,-26024
	ctx.r4.s64 = ctx.r10.s64 + -26024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026CF4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31616
	ctx.r11.s64 = ctx.r11.s64 + -31616;
	// addi r3,r9,18808
	ctx.r3.s64 = ctx.r9.s64 + 18808;
	// stw r11,-13884(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13884, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026D0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026D20"))) PPC_WEAK_FUNC(sub_83026D20);
PPC_FUNC_IMPL(__imp__sub_83026D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-13436
	ctx.r3.s64 = ctx.r31.s64 + -13436;
	// addi r4,r10,-25984
	ctx.r4.s64 = ctx.r10.s64 + -25984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026D5C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31608
	ctx.r11.s64 = ctx.r11.s64 + -31608;
	// addi r3,r9,18832
	ctx.r3.s64 = ctx.r9.s64 + 18832;
	// stw r11,-13436(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13436, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026D74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026D88"))) PPC_WEAK_FUNC(sub_83026D88);
PPC_FUNC_IMPL(__imp__sub_83026D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-14780
	ctx.r5.s64 = ctx.r11.s64 + -14780;
	// addi r3,r31,-14620
	ctx.r3.s64 = ctx.r31.s64 + -14620;
	// addi r4,r10,-25944
	ctx.r4.s64 = ctx.r10.s64 + -25944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026DC4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31600
	ctx.r11.s64 = ctx.r11.s64 + -31600;
	// addi r3,r9,18856
	ctx.r3.s64 = ctx.r9.s64 + 18856;
	// stw r11,-14620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026DDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026DF0"))) PPC_WEAK_FUNC(sub_83026DF0);
PPC_FUNC_IMPL(__imp__sub_83026DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-13148
	ctx.r3.s64 = ctx.r31.s64 + -13148;
	// addi r4,r10,-25824
	ctx.r4.s64 = ctx.r10.s64 + -25824;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026E2C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25904
	ctx.r11.s64 = ctx.r11.s64 + -25904;
	// addi r3,r9,18880
	ctx.r3.s64 = ctx.r9.s64 + 18880;
	// stw r11,-13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13148, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026E44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026E58"))) PPC_WEAK_FUNC(sub_83026E58);
PPC_FUNC_IMPL(__imp__sub_83026E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r5,r11,20888
	ctx.r5.s64 = ctx.r11.s64 + 20888;
	// addi r3,r31,-12188
	ctx.r3.s64 = ctx.r31.s64 + -12188;
	// addi r4,r10,-21608
	ctx.r4.s64 = ctx.r10.s64 + -21608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026E94;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25796
	ctx.r11.s64 = ctx.r11.s64 + -25796;
	// addi r3,r9,18904
	ctx.r3.s64 = ctx.r9.s64 + 18904;
	// stw r11,-12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026EAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026EC0"))) PPC_WEAK_FUNC(sub_83026EC0);
PPC_FUNC_IMPL(__imp__sub_83026EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-13116
	ctx.r3.s64 = ctx.r31.s64 + -13116;
	// addi r4,r10,-21576
	ctx.r4.s64 = ctx.r10.s64 + -21576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026EFC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25688
	ctx.r11.s64 = ctx.r11.s64 + -25688;
	// addi r3,r9,18928
	ctx.r3.s64 = ctx.r9.s64 + 18928;
	// stw r11,-13116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026F14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026F28"))) PPC_WEAK_FUNC(sub_83026F28);
PPC_FUNC_IMPL(__imp__sub_83026F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-13020
	ctx.r3.s64 = ctx.r31.s64 + -13020;
	// addi r4,r10,-21540
	ctx.r4.s64 = ctx.r10.s64 + -21540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026F64;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25680
	ctx.r11.s64 = ctx.r11.s64 + -25680;
	// addi r3,r9,18952
	ctx.r3.s64 = ctx.r9.s64 + 18952;
	// stw r11,-13020(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13020, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026F7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026F90"))) PPC_WEAK_FUNC(sub_83026F90);
PPC_FUNC_IMPL(__imp__sub_83026F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12764
	ctx.r3.s64 = ctx.r31.s64 + -12764;
	// addi r4,r10,-21504
	ctx.r4.s64 = ctx.r10.s64 + -21504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83026FCC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25672
	ctx.r11.s64 = ctx.r11.s64 + -25672;
	// addi r3,r9,18976
	ctx.r3.s64 = ctx.r9.s64 + 18976;
	// stw r11,-12764(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12764, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83026FE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83026FF8"))) PPC_WEAK_FUNC(sub_83026FF8);
PPC_FUNC_IMPL(__imp__sub_83026FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12508
	ctx.r3.s64 = ctx.r31.s64 + -12508;
	// addi r4,r10,-21468
	ctx.r4.s64 = ctx.r10.s64 + -21468;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027034;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25664
	ctx.r11.s64 = ctx.r11.s64 + -25664;
	// addi r3,r9,19000
	ctx.r3.s64 = ctx.r9.s64 + 19000;
	// stw r11,-12508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302704C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027060"))) PPC_WEAK_FUNC(sub_83027060);
PPC_FUNC_IMPL(__imp__sub_83027060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12828
	ctx.r3.s64 = ctx.r31.s64 + -12828;
	// addi r4,r10,-21432
	ctx.r4.s64 = ctx.r10.s64 + -21432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302709C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25656
	ctx.r11.s64 = ctx.r11.s64 + -25656;
	// addi r3,r9,19024
	ctx.r3.s64 = ctx.r9.s64 + 19024;
	// stw r11,-12828(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830270B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830270C8"))) PPC_WEAK_FUNC(sub_830270C8);
PPC_FUNC_IMPL(__imp__sub_830270C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12892
	ctx.r3.s64 = ctx.r31.s64 + -12892;
	// addi r4,r10,-21396
	ctx.r4.s64 = ctx.r10.s64 + -21396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027104;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25648
	ctx.r11.s64 = ctx.r11.s64 + -25648;
	// addi r3,r9,19048
	ctx.r3.s64 = ctx.r9.s64 + 19048;
	// stw r11,-12892(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302711C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027130"))) PPC_WEAK_FUNC(sub_83027130);
PPC_FUNC_IMPL(__imp__sub_83027130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12284
	ctx.r3.s64 = ctx.r31.s64 + -12284;
	// addi r4,r10,-21360
	ctx.r4.s64 = ctx.r10.s64 + -21360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302716C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25640
	ctx.r11.s64 = ctx.r11.s64 + -25640;
	// addi r3,r9,19072
	ctx.r3.s64 = ctx.r9.s64 + 19072;
	// stw r11,-12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027184;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027198"))) PPC_WEAK_FUNC(sub_83027198);
PPC_FUNC_IMPL(__imp__sub_83027198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12444
	ctx.r3.s64 = ctx.r31.s64 + -12444;
	// addi r4,r10,-21324
	ctx.r4.s64 = ctx.r10.s64 + -21324;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830271D4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25632
	ctx.r11.s64 = ctx.r11.s64 + -25632;
	// addi r3,r9,19096
	ctx.r3.s64 = ctx.r9.s64 + 19096;
	// stw r11,-12444(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830271EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027200"))) PPC_WEAK_FUNC(sub_83027200);
PPC_FUNC_IMPL(__imp__sub_83027200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-13084
	ctx.r3.s64 = ctx.r31.s64 + -13084;
	// addi r4,r10,-21288
	ctx.r4.s64 = ctx.r10.s64 + -21288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302723C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25624
	ctx.r11.s64 = ctx.r11.s64 + -25624;
	// addi r3,r9,19120
	ctx.r3.s64 = ctx.r9.s64 + 19120;
	// stw r11,-13084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13084, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027254;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027268"))) PPC_WEAK_FUNC(sub_83027268);
PPC_FUNC_IMPL(__imp__sub_83027268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12316
	ctx.r3.s64 = ctx.r31.s64 + -12316;
	// addi r4,r10,-21252
	ctx.r4.s64 = ctx.r10.s64 + -21252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830272A4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25616
	ctx.r11.s64 = ctx.r11.s64 + -25616;
	// addi r3,r9,19144
	ctx.r3.s64 = ctx.r9.s64 + 19144;
	// stw r11,-12316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830272BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830272D0"))) PPC_WEAK_FUNC(sub_830272D0);
PPC_FUNC_IMPL(__imp__sub_830272D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-13052
	ctx.r3.s64 = ctx.r31.s64 + -13052;
	// addi r4,r10,-21212
	ctx.r4.s64 = ctx.r10.s64 + -21212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302730C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25608
	ctx.r11.s64 = ctx.r11.s64 + -25608;
	// addi r3,r9,19168
	ctx.r3.s64 = ctx.r9.s64 + 19168;
	// stw r11,-13052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -13052, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027324;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027338"))) PPC_WEAK_FUNC(sub_83027338);
PPC_FUNC_IMPL(__imp__sub_83027338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12348
	ctx.r3.s64 = ctx.r31.s64 + -12348;
	// addi r4,r10,-21176
	ctx.r4.s64 = ctx.r10.s64 + -21176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027374;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25600
	ctx.r11.s64 = ctx.r11.s64 + -25600;
	// addi r3,r9,19192
	ctx.r3.s64 = ctx.r9.s64 + 19192;
	// stw r11,-12348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302738C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830273A0"))) PPC_WEAK_FUNC(sub_830273A0);
PPC_FUNC_IMPL(__imp__sub_830273A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-11964
	ctx.r3.s64 = ctx.r31.s64 + -11964;
	// addi r4,r10,-21136
	ctx.r4.s64 = ctx.r10.s64 + -21136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830273DC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25592
	ctx.r11.s64 = ctx.r11.s64 + -25592;
	// addi r3,r9,19216
	ctx.r3.s64 = ctx.r9.s64 + 19216;
	// stw r11,-11964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830273F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027408"))) PPC_WEAK_FUNC(sub_83027408);
PPC_FUNC_IMPL(__imp__sub_83027408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-11484
	ctx.r3.s64 = ctx.r31.s64 + -11484;
	// addi r4,r10,-21100
	ctx.r4.s64 = ctx.r10.s64 + -21100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027444;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25584
	ctx.r11.s64 = ctx.r11.s64 + -25584;
	// addi r3,r9,19240
	ctx.r3.s64 = ctx.r9.s64 + 19240;
	// stw r11,-11484(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302745C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027470"))) PPC_WEAK_FUNC(sub_83027470);
PPC_FUNC_IMPL(__imp__sub_83027470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12796
	ctx.r3.s64 = ctx.r31.s64 + -12796;
	// addi r4,r10,-21064
	ctx.r4.s64 = ctx.r10.s64 + -21064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830274AC;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25576
	ctx.r11.s64 = ctx.r11.s64 + -25576;
	// addi r3,r9,19264
	ctx.r3.s64 = ctx.r9.s64 + 19264;
	// stw r11,-12796(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12796, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830274C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830274D8"))) PPC_WEAK_FUNC(sub_830274D8);
PPC_FUNC_IMPL(__imp__sub_830274D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-11676
	ctx.r3.s64 = ctx.r31.s64 + -11676;
	// addi r4,r10,-21024
	ctx.r4.s64 = ctx.r10.s64 + -21024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027514;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25568
	ctx.r11.s64 = ctx.r11.s64 + -25568;
	// addi r3,r9,19288
	ctx.r3.s64 = ctx.r9.s64 + 19288;
	// stw r11,-11676(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302752C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027540"))) PPC_WEAK_FUNC(sub_83027540);
PPC_FUNC_IMPL(__imp__sub_83027540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12476
	ctx.r3.s64 = ctx.r31.s64 + -12476;
	// addi r4,r10,-20988
	ctx.r4.s64 = ctx.r10.s64 + -20988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302757C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25560
	ctx.r11.s64 = ctx.r11.s64 + -25560;
	// addi r3,r9,19312
	ctx.r3.s64 = ctx.r9.s64 + 19312;
	// stw r11,-12476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027594;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830275A8"))) PPC_WEAK_FUNC(sub_830275A8);
PPC_FUNC_IMPL(__imp__sub_830275A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-11516
	ctx.r3.s64 = ctx.r31.s64 + -11516;
	// addi r4,r10,-20948
	ctx.r4.s64 = ctx.r10.s64 + -20948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830275E4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25552
	ctx.r11.s64 = ctx.r11.s64 + -25552;
	// addi r3,r9,19336
	ctx.r3.s64 = ctx.r9.s64 + 19336;
	// stw r11,-11516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830275FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027610"))) PPC_WEAK_FUNC(sub_83027610);
PPC_FUNC_IMPL(__imp__sub_83027610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12668
	ctx.r3.s64 = ctx.r31.s64 + -12668;
	// addi r4,r10,-20912
	ctx.r4.s64 = ctx.r10.s64 + -20912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302764C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25544
	ctx.r11.s64 = ctx.r11.s64 + -25544;
	// addi r3,r9,19360
	ctx.r3.s64 = ctx.r9.s64 + 19360;
	// stw r11,-12668(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027664;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027678"))) PPC_WEAK_FUNC(sub_83027678);
PPC_FUNC_IMPL(__imp__sub_83027678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12860
	ctx.r3.s64 = ctx.r31.s64 + -12860;
	// addi r4,r10,-20876
	ctx.r4.s64 = ctx.r10.s64 + -20876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830276B4;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// addi r3,r9,19384
	ctx.r3.s64 = ctx.r9.s64 + 19384;
	// stw r11,-12860(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830276CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830276E0"))) PPC_WEAK_FUNC(sub_830276E0);
PPC_FUNC_IMPL(__imp__sub_830276E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-12156
	ctx.r3.s64 = ctx.r31.s64 + -12156;
	// addi r4,r10,-20840
	ctx.r4.s64 = ctx.r10.s64 + -20840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8302771C;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25528
	ctx.r11.s64 = ctx.r11.s64 + -25528;
	// addi r3,r9,19408
	ctx.r3.s64 = ctx.r9.s64 + 19408;
	// stw r11,-12156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83027734;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83027748"))) PPC_WEAK_FUNC(sub_83027748);
PPC_FUNC_IMPL(__imp__sub_83027748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-11804
	ctx.r3.s64 = ctx.r31.s64 + -11804;
	// addi r4,r10,-20804
	ctx.r4.s64 = ctx.r10.s64 + -20804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83027784;
	sub_82B38290(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25520
	ctx.r11.s64 = ctx.r11.s64 + -25520;
	// addi r3,r9,19432
	ctx.r3.s64 = ctx.r9.s64 + 19432;
	// stw r11,-11804(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8302779C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}


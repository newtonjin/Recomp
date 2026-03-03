#include "umvc3_recomp_init.h"

__attribute__((alias("__imp__sub_83001598"))) PPC_WEAK_FUNC(sub_83001598);
PPC_FUNC_IMPL(__imp__sub_83001598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8856
	ctx.r3.s64 = ctx.r31.s64 + -8856;
	// addi r4,r10,836
	ctx.r4.s64 = ctx.r10.s64 + 836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830015D4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// addi r3,r9,-16384
	ctx.r3.s64 = ctx.r9.s64 + -16384;
	// stw r11,-8856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830015EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001600"))) PPC_WEAK_FUNC(sub_83001600);
PPC_FUNC_IMPL(__imp__sub_83001600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8824
	ctx.r3.s64 = ctx.r31.s64 + -8824;
	// addi r4,r10,1432
	ctx.r4.s64 = ctx.r10.s64 + 1432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x8300163C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,868
	ctx.r11.s64 = ctx.r11.s64 + 868;
	// addi r3,r9,-16360
	ctx.r3.s64 = ctx.r9.s64 + -16360;
	// stw r11,-8824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001654;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001668"))) PPC_WEAK_FUNC(sub_83001668);
PPC_FUNC_IMPL(__imp__sub_83001668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8792
	ctx.r3.s64 = ctx.r31.s64 + -8792;
	// addi r4,r10,2024
	ctx.r4.s64 = ctx.r10.s64 + 2024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830016A4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1468
	ctx.r11.s64 = ctx.r11.s64 + 1468;
	// addi r3,r9,-16336
	ctx.r3.s64 = ctx.r9.s64 + -16336;
	// stw r11,-8792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830016BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830016D0"))) PPC_WEAK_FUNC(sub_830016D0);
PPC_FUNC_IMPL(__imp__sub_830016D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8760
	ctx.r3.s64 = ctx.r31.s64 + -8760;
	// addi r4,r10,2592
	ctx.r4.s64 = ctx.r10.s64 + 2592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300170C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// addi r3,r9,-16312
	ctx.r3.s64 = ctx.r9.s64 + -16312;
	// stw r11,-8760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001724;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001738"))) PPC_WEAK_FUNC(sub_83001738);
PPC_FUNC_IMPL(__imp__sub_83001738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8728
	ctx.r3.s64 = ctx.r31.s64 + -8728;
	// addi r4,r10,3136
	ctx.r4.s64 = ctx.r10.s64 + 3136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001774;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2612
	ctx.r11.s64 = ctx.r11.s64 + 2612;
	// addi r3,r9,-16288
	ctx.r3.s64 = ctx.r9.s64 + -16288;
	// stw r11,-8728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300178C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830017A0"))) PPC_WEAK_FUNC(sub_830017A0);
PPC_FUNC_IMPL(__imp__sub_830017A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8696
	ctx.r3.s64 = ctx.r31.s64 + -8696;
	// addi r4,r10,3732
	ctx.r4.s64 = ctx.r10.s64 + 3732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x830017DC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3156
	ctx.r11.s64 = ctx.r11.s64 + 3156;
	// addi r3,r9,-16264
	ctx.r3.s64 = ctx.r9.s64 + -16264;
	// stw r11,-8696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830017F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001808"))) PPC_WEAK_FUNC(sub_83001808);
PPC_FUNC_IMPL(__imp__sub_83001808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8664
	ctx.r3.s64 = ctx.r31.s64 + -8664;
	// addi r4,r10,4260
	ctx.r4.s64 = ctx.r10.s64 + 4260;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001844;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
	// addi r3,r9,-16240
	ctx.r3.s64 = ctx.r9.s64 + -16240;
	// stw r11,-8664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300185C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001870"))) PPC_WEAK_FUNC(sub_83001870);
PPC_FUNC_IMPL(__imp__sub_83001870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-8632
	ctx.r3.s64 = ctx.r31.s64 + -8632;
	// addi r4,r10,4804
	ctx.r4.s64 = ctx.r10.s64 + 4804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6400
	ctx.r6.s64 = 6400;
	// bl 0x82b38290
	ctx.lr = 0x830018AC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4288
	ctx.r11.s64 = ctx.r11.s64 + 4288;
	// addi r3,r9,-16216
	ctx.r3.s64 = ctx.r9.s64 + -16216;
	// stw r11,-8632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830018C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830018D8"))) PPC_WEAK_FUNC(sub_830018D8);
PPC_FUNC_IMPL(__imp__sub_830018D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-8600
	ctx.r3.s64 = ctx.r31.s64 + -8600;
	// addi r4,r10,5436
	ctx.r4.s64 = ctx.r10.s64 + 5436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x83001914;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4900
	ctx.r11.s64 = ctx.r11.s64 + 4900;
	// addi r3,r9,-16192
	ctx.r3.s64 = ctx.r9.s64 + -16192;
	// stw r11,-8600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300192C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001940"))) PPC_WEAK_FUNC(sub_83001940);
PPC_FUNC_IMPL(__imp__sub_83001940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-8568
	ctx.r3.s64 = ctx.r31.s64 + -8568;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300197C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// addi r3,r9,-16168
	ctx.r3.s64 = ctx.r9.s64 + -16168;
	// stw r11,-8568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001994;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830019A8"))) PPC_WEAK_FUNC(sub_830019A8);
PPC_FUNC_IMPL(__imp__sub_830019A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-8536
	ctx.r3.s64 = ctx.r31.s64 + -8536;
	// addi r4,r10,6524
	ctx.r4.s64 = ctx.r10.s64 + 6524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830019E4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6008
	ctx.r11.s64 = ctx.r11.s64 + 6008;
	// addi r3,r9,-16144
	ctx.r3.s64 = ctx.r9.s64 + -16144;
	// stw r11,-8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830019FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001A10"))) PPC_WEAK_FUNC(sub_83001A10);
PPC_FUNC_IMPL(__imp__sub_83001A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8504
	ctx.r3.s64 = ctx.r31.s64 + -8504;
	// addi r4,r10,7072
	ctx.r4.s64 = ctx.r10.s64 + 7072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83001A4C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6544
	ctx.r11.s64 = ctx.r11.s64 + 6544;
	// addi r3,r9,-16120
	ctx.r3.s64 = ctx.r9.s64 + -16120;
	// stw r11,-8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001A64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001A78"))) PPC_WEAK_FUNC(sub_83001A78);
PPC_FUNC_IMPL(__imp__sub_83001A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8472
	ctx.r3.s64 = ctx.r31.s64 + -8472;
	// addi r4,r10,7668
	ctx.r4.s64 = ctx.r10.s64 + 7668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001AB4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7152
	ctx.r11.s64 = ctx.r11.s64 + 7152;
	// addi r3,r9,-16096
	ctx.r3.s64 = ctx.r9.s64 + -16096;
	// stw r11,-8472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001ACC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001AE0"))) PPC_WEAK_FUNC(sub_83001AE0);
PPC_FUNC_IMPL(__imp__sub_83001AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8440
	ctx.r3.s64 = ctx.r31.s64 + -8440;
	// addi r4,r10,8212
	ctx.r4.s64 = ctx.r10.s64 + 8212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001B1C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7700
	ctx.r11.s64 = ctx.r11.s64 + 7700;
	// addi r3,r9,-16072
	ctx.r3.s64 = ctx.r9.s64 + -16072;
	// stw r11,-8440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001B34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001B48"))) PPC_WEAK_FUNC(sub_83001B48);
PPC_FUNC_IMPL(__imp__sub_83001B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8408
	ctx.r3.s64 = ctx.r31.s64 + -8408;
	// addi r4,r10,8764
	ctx.r4.s64 = ctx.r10.s64 + 8764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001B84;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8248
	ctx.r11.s64 = ctx.r11.s64 + 8248;
	// addi r3,r9,-16048
	ctx.r3.s64 = ctx.r9.s64 + -16048;
	// stw r11,-8408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001B9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001BB0"))) PPC_WEAK_FUNC(sub_83001BB0);
PPC_FUNC_IMPL(__imp__sub_83001BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8376
	ctx.r3.s64 = ctx.r31.s64 + -8376;
	// addi r4,r10,9308
	ctx.r4.s64 = ctx.r10.s64 + 9308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83001BEC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8800
	ctx.r11.s64 = ctx.r11.s64 + 8800;
	// addi r3,r9,-16024
	ctx.r3.s64 = ctx.r9.s64 + -16024;
	// stw r11,-8376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001C04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001C18"))) PPC_WEAK_FUNC(sub_83001C18);
PPC_FUNC_IMPL(__imp__sub_83001C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8344
	ctx.r3.s64 = ctx.r31.s64 + -8344;
	// addi r4,r10,9844
	ctx.r4.s64 = ctx.r10.s64 + 9844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001C54;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9336
	ctx.r11.s64 = ctx.r11.s64 + 9336;
	// addi r3,r9,-16000
	ctx.r3.s64 = ctx.r9.s64 + -16000;
	// stw r11,-8344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001C6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001C80"))) PPC_WEAK_FUNC(sub_83001C80);
PPC_FUNC_IMPL(__imp__sub_83001C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8312
	ctx.r3.s64 = ctx.r31.s64 + -8312;
	// addi r4,r10,10388
	ctx.r4.s64 = ctx.r10.s64 + 10388;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001CBC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9876
	ctx.r11.s64 = ctx.r11.s64 + 9876;
	// addi r3,r9,-15976
	ctx.r3.s64 = ctx.r9.s64 + -15976;
	// stw r11,-8312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001CD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001CE8"))) PPC_WEAK_FUNC(sub_83001CE8);
PPC_FUNC_IMPL(__imp__sub_83001CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8280
	ctx.r3.s64 = ctx.r31.s64 + -8280;
	// addi r4,r10,10952
	ctx.r4.s64 = ctx.r10.s64 + 10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83001D24;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10408
	ctx.r11.s64 = ctx.r11.s64 + 10408;
	// addi r3,r9,-15952
	ctx.r3.s64 = ctx.r9.s64 + -15952;
	// stw r11,-8280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001D3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001D50"))) PPC_WEAK_FUNC(sub_83001D50);
PPC_FUNC_IMPL(__imp__sub_83001D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8248
	ctx.r3.s64 = ctx.r31.s64 + -8248;
	// addi r4,r10,11484
	ctx.r4.s64 = ctx.r10.s64 + 11484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001D8C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10972
	ctx.r11.s64 = ctx.r11.s64 + 10972;
	// addi r3,r9,-15928
	ctx.r3.s64 = ctx.r9.s64 + -15928;
	// stw r11,-8248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001DA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001DB8"))) PPC_WEAK_FUNC(sub_83001DB8);
PPC_FUNC_IMPL(__imp__sub_83001DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8216
	ctx.r3.s64 = ctx.r31.s64 + -8216;
	// addi r4,r10,12020
	ctx.r4.s64 = ctx.r10.s64 + 12020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001DF4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11512
	ctx.r11.s64 = ctx.r11.s64 + 11512;
	// addi r3,r9,-15904
	ctx.r3.s64 = ctx.r9.s64 + -15904;
	// stw r11,-8216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001E0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001E20"))) PPC_WEAK_FUNC(sub_83001E20);
PPC_FUNC_IMPL(__imp__sub_83001E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8184
	ctx.r3.s64 = ctx.r31.s64 + -8184;
	// addi r4,r10,12556
	ctx.r4.s64 = ctx.r10.s64 + 12556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001E5C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12044
	ctx.r11.s64 = ctx.r11.s64 + 12044;
	// addi r3,r9,-15880
	ctx.r3.s64 = ctx.r9.s64 + -15880;
	// stw r11,-8184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001E74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001E88"))) PPC_WEAK_FUNC(sub_83001E88);
PPC_FUNC_IMPL(__imp__sub_83001E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8152
	ctx.r3.s64 = ctx.r31.s64 + -8152;
	// addi r4,r10,13132
	ctx.r4.s64 = ctx.r10.s64 + 13132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001EC4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12580
	ctx.r11.s64 = ctx.r11.s64 + 12580;
	// addi r3,r9,-15856
	ctx.r3.s64 = ctx.r9.s64 + -15856;
	// stw r11,-8152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001EDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001EF0"))) PPC_WEAK_FUNC(sub_83001EF0);
PPC_FUNC_IMPL(__imp__sub_83001EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8120
	ctx.r3.s64 = ctx.r31.s64 + -8120;
	// addi r4,r10,13712
	ctx.r4.s64 = ctx.r10.s64 + 13712;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83001F2C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13160
	ctx.r11.s64 = ctx.r11.s64 + 13160;
	// addi r3,r9,-15832
	ctx.r3.s64 = ctx.r9.s64 + -15832;
	// stw r11,-8120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001F44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001F58"))) PPC_WEAK_FUNC(sub_83001F58);
PPC_FUNC_IMPL(__imp__sub_83001F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8088
	ctx.r3.s64 = ctx.r31.s64 + -8088;
	// addi r4,r10,14260
	ctx.r4.s64 = ctx.r10.s64 + 14260;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83001F94;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13744
	ctx.r11.s64 = ctx.r11.s64 + 13744;
	// addi r3,r9,-15808
	ctx.r3.s64 = ctx.r9.s64 + -15808;
	// stw r11,-8088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83001FAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83001FC0"))) PPC_WEAK_FUNC(sub_83001FC0);
PPC_FUNC_IMPL(__imp__sub_83001FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-8056
	ctx.r3.s64 = ctx.r31.s64 + -8056;
	// addi r4,r10,14812
	ctx.r4.s64 = ctx.r10.s64 + 14812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83001FFC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14280
	ctx.r11.s64 = ctx.r11.s64 + 14280;
	// addi r3,r9,-15784
	ctx.r3.s64 = ctx.r9.s64 + -15784;
	// stw r11,-8056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002014;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002028"))) PPC_WEAK_FUNC(sub_83002028);
PPC_FUNC_IMPL(__imp__sub_83002028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-8024
	ctx.r3.s64 = ctx.r31.s64 + -8024;
	// addi r4,r10,15348
	ctx.r4.s64 = ctx.r10.s64 + 15348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002064;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14836
	ctx.r11.s64 = ctx.r11.s64 + 14836;
	// addi r3,r9,-15760
	ctx.r3.s64 = ctx.r9.s64 + -15760;
	// stw r11,-8024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300207C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002090"))) PPC_WEAK_FUNC(sub_83002090);
PPC_FUNC_IMPL(__imp__sub_83002090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7992
	ctx.r3.s64 = ctx.r31.s64 + -7992;
	// addi r4,r10,15924
	ctx.r4.s64 = ctx.r10.s64 + 15924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x830020CC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15368
	ctx.r11.s64 = ctx.r11.s64 + 15368;
	// addi r3,r9,-15736
	ctx.r3.s64 = ctx.r9.s64 + -15736;
	// stw r11,-7992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830020E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830020F8"))) PPC_WEAK_FUNC(sub_830020F8);
PPC_FUNC_IMPL(__imp__sub_830020F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7960
	ctx.r3.s64 = ctx.r31.s64 + -7960;
	// addi r4,r10,16460
	ctx.r4.s64 = ctx.r10.s64 + 16460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002134;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15948
	ctx.r11.s64 = ctx.r11.s64 + 15948;
	// addi r3,r9,-15712
	ctx.r3.s64 = ctx.r9.s64 + -15712;
	// stw r11,-7960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300214C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002160"))) PPC_WEAK_FUNC(sub_83002160);
PPC_FUNC_IMPL(__imp__sub_83002160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7928
	ctx.r3.s64 = ctx.r31.s64 + -7928;
	// addi r4,r10,16996
	ctx.r4.s64 = ctx.r10.s64 + 16996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300219C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16484
	ctx.r11.s64 = ctx.r11.s64 + 16484;
	// addi r3,r9,-15688
	ctx.r3.s64 = ctx.r9.s64 + -15688;
	// stw r11,-7928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830021B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830021C8"))) PPC_WEAK_FUNC(sub_830021C8);
PPC_FUNC_IMPL(__imp__sub_830021C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7896
	ctx.r3.s64 = ctx.r31.s64 + -7896;
	// addi r4,r10,17616
	ctx.r4.s64 = ctx.r10.s64 + 17616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x83002204;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17020
	ctx.r11.s64 = ctx.r11.s64 + 17020;
	// addi r3,r9,-15664
	ctx.r3.s64 = ctx.r9.s64 + -15664;
	// stw r11,-7896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300221C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002230"))) PPC_WEAK_FUNC(sub_83002230);
PPC_FUNC_IMPL(__imp__sub_83002230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7864
	ctx.r3.s64 = ctx.r31.s64 + -7864;
	// addi r4,r10,18168
	ctx.r4.s64 = ctx.r10.s64 + 18168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x8300226C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17636
	ctx.r11.s64 = ctx.r11.s64 + 17636;
	// addi r3,r9,-15640
	ctx.r3.s64 = ctx.r9.s64 + -15640;
	// stw r11,-7864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002284;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002298"))) PPC_WEAK_FUNC(sub_83002298);
PPC_FUNC_IMPL(__imp__sub_83002298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7832
	ctx.r3.s64 = ctx.r31.s64 + -7832;
	// addi r4,r10,18740
	ctx.r4.s64 = ctx.r10.s64 + 18740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x830022D4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18192
	ctx.r11.s64 = ctx.r11.s64 + 18192;
	// addi r3,r9,-15616
	ctx.r3.s64 = ctx.r9.s64 + -15616;
	// stw r11,-7832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830022EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002300"))) PPC_WEAK_FUNC(sub_83002300);
PPC_FUNC_IMPL(__imp__sub_83002300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7800
	ctx.r3.s64 = ctx.r31.s64 + -7800;
	// addi r4,r10,19276
	ctx.r4.s64 = ctx.r10.s64 + 19276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x8300233C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18764
	ctx.r11.s64 = ctx.r11.s64 + 18764;
	// addi r3,r9,-15592
	ctx.r3.s64 = ctx.r9.s64 + -15592;
	// stw r11,-7800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002354;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002368"))) PPC_WEAK_FUNC(sub_83002368);
PPC_FUNC_IMPL(__imp__sub_83002368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-7768
	ctx.r3.s64 = ctx.r31.s64 + -7768;
	// addi r4,r10,19832
	ctx.r4.s64 = ctx.r10.s64 + 19832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830023A4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19296
	ctx.r11.s64 = ctx.r11.s64 + 19296;
	// addi r3,r9,-15568
	ctx.r3.s64 = ctx.r9.s64 + -15568;
	// stw r11,-7768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830023BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830023D0"))) PPC_WEAK_FUNC(sub_830023D0);
PPC_FUNC_IMPL(__imp__sub_830023D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-7736
	ctx.r3.s64 = ctx.r31.s64 + -7736;
	// addi r4,r10,20400
	ctx.r4.s64 = ctx.r10.s64 + 20400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300240C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19856
	ctx.r11.s64 = ctx.r11.s64 + 19856;
	// addi r3,r9,-15544
	ctx.r3.s64 = ctx.r9.s64 + -15544;
	// stw r11,-7736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002424;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002438"))) PPC_WEAK_FUNC(sub_83002438);
PPC_FUNC_IMPL(__imp__sub_83002438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-7704
	ctx.r3.s64 = ctx.r31.s64 + -7704;
	// addi r4,r10,20956
	ctx.r4.s64 = ctx.r10.s64 + 20956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002474;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20420
	ctx.r11.s64 = ctx.r11.s64 + 20420;
	// addi r3,r9,-15520
	ctx.r3.s64 = ctx.r9.s64 + -15520;
	// stw r11,-7704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300248C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830024A0"))) PPC_WEAK_FUNC(sub_830024A0);
PPC_FUNC_IMPL(__imp__sub_830024A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-7672
	ctx.r3.s64 = ctx.r31.s64 + -7672;
	// addi r4,r10,21492
	ctx.r4.s64 = ctx.r10.s64 + 21492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830024DC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20980
	ctx.r11.s64 = ctx.r11.s64 + 20980;
	// addi r3,r9,-15496
	ctx.r3.s64 = ctx.r9.s64 + -15496;
	// stw r11,-7672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830024F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002508"))) PPC_WEAK_FUNC(sub_83002508);
PPC_FUNC_IMPL(__imp__sub_83002508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7640
	ctx.r3.s64 = ctx.r31.s64 + -7640;
	// addi r4,r10,22044
	ctx.r4.s64 = ctx.r10.s64 + 22044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002544;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21512
	ctx.r11.s64 = ctx.r11.s64 + 21512;
	// addi r3,r9,-15472
	ctx.r3.s64 = ctx.r9.s64 + -15472;
	// stw r11,-7640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300255C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002570"))) PPC_WEAK_FUNC(sub_83002570);
PPC_FUNC_IMPL(__imp__sub_83002570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7608
	ctx.r3.s64 = ctx.r31.s64 + -7608;
	// addi r4,r10,22588
	ctx.r4.s64 = ctx.r10.s64 + 22588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830025AC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22064
	ctx.r11.s64 = ctx.r11.s64 + 22064;
	// addi r3,r9,-15448
	ctx.r3.s64 = ctx.r9.s64 + -15448;
	// stw r11,-7608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830025C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830025D8"))) PPC_WEAK_FUNC(sub_830025D8);
PPC_FUNC_IMPL(__imp__sub_830025D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7576
	ctx.r3.s64 = ctx.r31.s64 + -7576;
	// addi r4,r10,23124
	ctx.r4.s64 = ctx.r10.s64 + 23124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x83002614;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22608
	ctx.r11.s64 = ctx.r11.s64 + 22608;
	// addi r3,r9,-15424
	ctx.r3.s64 = ctx.r9.s64 + -15424;
	// stw r11,-7576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300262C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002640"))) PPC_WEAK_FUNC(sub_83002640);
PPC_FUNC_IMPL(__imp__sub_83002640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7544
	ctx.r3.s64 = ctx.r31.s64 + -7544;
	// addi r4,r10,23696
	ctx.r4.s64 = ctx.r10.s64 + 23696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300267C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23156
	ctx.r11.s64 = ctx.r11.s64 + 23156;
	// addi r3,r9,-15400
	ctx.r3.s64 = ctx.r9.s64 + -15400;
	// stw r11,-7544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002694;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830026A8"))) PPC_WEAK_FUNC(sub_830026A8);
PPC_FUNC_IMPL(__imp__sub_830026A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7512
	ctx.r3.s64 = ctx.r31.s64 + -7512;
	// addi r4,r10,24228
	ctx.r4.s64 = ctx.r10.s64 + 24228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830026E4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23716
	ctx.r11.s64 = ctx.r11.s64 + 23716;
	// addi r3,r9,-15376
	ctx.r3.s64 = ctx.r9.s64 + -15376;
	// stw r11,-7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830026FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002710"))) PPC_WEAK_FUNC(sub_83002710);
PPC_FUNC_IMPL(__imp__sub_83002710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7480
	ctx.r3.s64 = ctx.r31.s64 + -7480;
	// addi r4,r10,24764
	ctx.r4.s64 = ctx.r10.s64 + 24764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300274C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24256
	ctx.r11.s64 = ctx.r11.s64 + 24256;
	// addi r3,r9,-15352
	ctx.r3.s64 = ctx.r9.s64 + -15352;
	// stw r11,-7480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002764;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002778"))) PPC_WEAK_FUNC(sub_83002778);
PPC_FUNC_IMPL(__imp__sub_83002778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7448
	ctx.r3.s64 = ctx.r31.s64 + -7448;
	// addi r4,r10,25300
	ctx.r4.s64 = ctx.r10.s64 + 25300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830027B4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24788
	ctx.r11.s64 = ctx.r11.s64 + 24788;
	// addi r3,r9,-15328
	ctx.r3.s64 = ctx.r9.s64 + -15328;
	// stw r11,-7448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830027CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830027E0"))) PPC_WEAK_FUNC(sub_830027E0);
PPC_FUNC_IMPL(__imp__sub_830027E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7416
	ctx.r3.s64 = ctx.r31.s64 + -7416;
	// addi r4,r10,25864
	ctx.r4.s64 = ctx.r10.s64 + 25864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300281C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25324
	ctx.r11.s64 = ctx.r11.s64 + 25324;
	// addi r3,r9,-15304
	ctx.r3.s64 = ctx.r9.s64 + -15304;
	// stw r11,-7416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002834;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002848"))) PPC_WEAK_FUNC(sub_83002848);
PPC_FUNC_IMPL(__imp__sub_83002848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7384
	ctx.r3.s64 = ctx.r31.s64 + -7384;
	// addi r4,r10,26452
	ctx.r4.s64 = ctx.r10.s64 + 26452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83002884;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25904
	ctx.r11.s64 = ctx.r11.s64 + 25904;
	// addi r3,r9,-15280
	ctx.r3.s64 = ctx.r9.s64 + -15280;
	// stw r11,-7384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300289C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830028B0"))) PPC_WEAK_FUNC(sub_830028B0);
PPC_FUNC_IMPL(__imp__sub_830028B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7352
	ctx.r3.s64 = ctx.r31.s64 + -7352;
	// addi r4,r10,26996
	ctx.r4.s64 = ctx.r10.s64 + 26996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830028EC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26484
	ctx.r11.s64 = ctx.r11.s64 + 26484;
	// addi r3,r9,-15256
	ctx.r3.s64 = ctx.r9.s64 + -15256;
	// stw r11,-7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002904;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002918"))) PPC_WEAK_FUNC(sub_83002918);
PPC_FUNC_IMPL(__imp__sub_83002918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7320
	ctx.r3.s64 = ctx.r31.s64 + -7320;
	// addi r4,r10,27596
	ctx.r4.s64 = ctx.r10.s64 + 27596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002954;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27032
	ctx.r11.s64 = ctx.r11.s64 + 27032;
	// addi r3,r9,-15232
	ctx.r3.s64 = ctx.r9.s64 + -15232;
	// stw r11,-7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300296C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002980"))) PPC_WEAK_FUNC(sub_83002980);
PPC_FUNC_IMPL(__imp__sub_83002980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7288
	ctx.r3.s64 = ctx.r31.s64 + -7288;
	// addi r4,r10,28132
	ctx.r4.s64 = ctx.r10.s64 + 28132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x830029BC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27624
	ctx.r11.s64 = ctx.r11.s64 + 27624;
	// addi r3,r9,-15208
	ctx.r3.s64 = ctx.r9.s64 + -15208;
	// stw r11,-7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830029D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830029E8"))) PPC_WEAK_FUNC(sub_830029E8);
PPC_FUNC_IMPL(__imp__sub_830029E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-7256
	ctx.r3.s64 = ctx.r31.s64 + -7256;
	// addi r4,r10,28740
	ctx.r4.s64 = ctx.r10.s64 + 28740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83002A24;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28164
	ctx.r11.s64 = ctx.r11.s64 + 28164;
	// addi r3,r9,-15184
	ctx.r3.s64 = ctx.r9.s64 + -15184;
	// stw r11,-7256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002A3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002A50"))) PPC_WEAK_FUNC(sub_83002A50);
PPC_FUNC_IMPL(__imp__sub_83002A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-7224
	ctx.r3.s64 = ctx.r31.s64 + -7224;
	// addi r4,r10,29276
	ctx.r4.s64 = ctx.r10.s64 + 29276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002A8C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28764
	ctx.r11.s64 = ctx.r11.s64 + 28764;
	// addi r3,r9,-15160
	ctx.r3.s64 = ctx.r9.s64 + -15160;
	// stw r11,-7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002AA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002AB8"))) PPC_WEAK_FUNC(sub_83002AB8);
PPC_FUNC_IMPL(__imp__sub_83002AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7192
	ctx.r3.s64 = ctx.r31.s64 + -7192;
	// addi r4,r10,29812
	ctx.r4.s64 = ctx.r10.s64 + 29812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002AF4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29300
	ctx.r11.s64 = ctx.r11.s64 + 29300;
	// addi r3,r9,-15136
	ctx.r3.s64 = ctx.r9.s64 + -15136;
	// stw r11,-7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002B0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002B20"))) PPC_WEAK_FUNC(sub_83002B20);
PPC_FUNC_IMPL(__imp__sub_83002B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7160
	ctx.r3.s64 = ctx.r31.s64 + -7160;
	// addi r4,r10,30348
	ctx.r4.s64 = ctx.r10.s64 + 30348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002B5C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29836
	ctx.r11.s64 = ctx.r11.s64 + 29836;
	// addi r3,r9,-15112
	ctx.r3.s64 = ctx.r9.s64 + -15112;
	// stw r11,-7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002B74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002B88"))) PPC_WEAK_FUNC(sub_83002B88);
PPC_FUNC_IMPL(__imp__sub_83002B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7128
	ctx.r3.s64 = ctx.r31.s64 + -7128;
	// addi r4,r10,30884
	ctx.r4.s64 = ctx.r10.s64 + 30884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002BC4;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30376
	ctx.r11.s64 = ctx.r11.s64 + 30376;
	// addi r3,r9,-15088
	ctx.r3.s64 = ctx.r9.s64 + -15088;
	// stw r11,-7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002BDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002BF0"))) PPC_WEAK_FUNC(sub_83002BF0);
PPC_FUNC_IMPL(__imp__sub_83002BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7096
	ctx.r3.s64 = ctx.r31.s64 + -7096;
	// addi r4,r10,31420
	ctx.r4.s64 = ctx.r10.s64 + 31420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002C2C;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30908
	ctx.r11.s64 = ctx.r11.s64 + 30908;
	// addi r3,r9,-15064
	ctx.r3.s64 = ctx.r9.s64 + -15064;
	// stw r11,-7096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002C44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002C58"))) PPC_WEAK_FUNC(sub_83002C58);
PPC_FUNC_IMPL(__imp__sub_83002C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7064
	ctx.r3.s64 = ctx.r31.s64 + -7064;
	// addi r4,r10,31948
	ctx.r4.s64 = ctx.r10.s64 + 31948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002C94;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31440
	ctx.r11.s64 = ctx.r11.s64 + 31440;
	// addi r3,r9,-15040
	ctx.r3.s64 = ctx.r9.s64 + -15040;
	// stw r11,-7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002CAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002CC0"))) PPC_WEAK_FUNC(sub_83002CC0);
PPC_FUNC_IMPL(__imp__sub_83002CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7032
	ctx.r3.s64 = ctx.r31.s64 + -7032;
	// addi r4,r10,32484
	ctx.r4.s64 = ctx.r10.s64 + 32484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002CFC;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31972
	ctx.r11.s64 = ctx.r11.s64 + 31972;
	// addi r3,r9,-15016
	ctx.r3.s64 = ctx.r9.s64 + -15016;
	// stw r11,-7032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002D14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002D28"))) PPC_WEAK_FUNC(sub_83002D28);
PPC_FUNC_IMPL(__imp__sub_83002D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-7000
	ctx.r3.s64 = ctx.r31.s64 + -7000;
	// addi r4,r10,-32516
	ctx.r4.s64 = ctx.r10.s64 + -32516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002D64;
	sub_82B38290(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32508
	ctx.r11.s64 = ctx.r11.s64 + 32508;
	// addi r3,r9,-14992
	ctx.r3.s64 = ctx.r9.s64 + -14992;
	// stw r11,-7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002D7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002D90"))) PPC_WEAK_FUNC(sub_83002D90);
PPC_FUNC_IMPL(__imp__sub_83002D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6968
	ctx.r3.s64 = ctx.r31.s64 + -6968;
	// addi r4,r10,-31980
	ctx.r4.s64 = ctx.r10.s64 + -31980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002DCC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32492
	ctx.r11.s64 = ctx.r11.s64 + -32492;
	// addi r3,r9,-14968
	ctx.r3.s64 = ctx.r9.s64 + -14968;
	// stw r11,-6968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002DE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002DF8"))) PPC_WEAK_FUNC(sub_83002DF8);
PPC_FUNC_IMPL(__imp__sub_83002DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6936
	ctx.r3.s64 = ctx.r31.s64 + -6936;
	// addi r4,r10,-31436
	ctx.r4.s64 = ctx.r10.s64 + -31436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002E34;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31952
	ctx.r11.s64 = ctx.r11.s64 + -31952;
	// addi r3,r9,-14944
	ctx.r3.s64 = ctx.r9.s64 + -14944;
	// stw r11,-6936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002E4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002E60"))) PPC_WEAK_FUNC(sub_83002E60);
PPC_FUNC_IMPL(__imp__sub_83002E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6904
	ctx.r3.s64 = ctx.r31.s64 + -6904;
	// addi r4,r10,-30900
	ctx.r4.s64 = ctx.r10.s64 + -30900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83002E9C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31412
	ctx.r11.s64 = ctx.r11.s64 + -31412;
	// addi r3,r9,-14920
	ctx.r3.s64 = ctx.r9.s64 + -14920;
	// stw r11,-6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002EB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002EC8"))) PPC_WEAK_FUNC(sub_83002EC8);
PPC_FUNC_IMPL(__imp__sub_83002EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6872
	ctx.r3.s64 = ctx.r31.s64 + -6872;
	// addi r4,r10,-30308
	ctx.r4.s64 = ctx.r10.s64 + -30308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x83002F04;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30876
	ctx.r11.s64 = ctx.r11.s64 + -30876;
	// addi r3,r9,-14896
	ctx.r3.s64 = ctx.r9.s64 + -14896;
	// stw r11,-6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002F1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F30"))) PPC_WEAK_FUNC(sub_83002F30);
PPC_FUNC_IMPL(__imp__sub_83002F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6840
	ctx.r3.s64 = ctx.r31.s64 + -6840;
	// addi r4,r10,-29780
	ctx.r4.s64 = ctx.r10.s64 + -29780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x83002F6C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30288
	ctx.r11.s64 = ctx.r11.s64 + -30288;
	// addi r3,r9,-14872
	ctx.r3.s64 = ctx.r9.s64 + -14872;
	// stw r11,-6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002F84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83002F98"))) PPC_WEAK_FUNC(sub_83002F98);
PPC_FUNC_IMPL(__imp__sub_83002F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-6808
	ctx.r3.s64 = ctx.r31.s64 + -6808;
	// addi r4,r10,-29208
	ctx.r4.s64 = ctx.r10.s64 + -29208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83002FD4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29756
	ctx.r11.s64 = ctx.r11.s64 + -29756;
	// addi r3,r9,-14848
	ctx.r3.s64 = ctx.r9.s64 + -14848;
	// stw r11,-6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83002FEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003000"))) PPC_WEAK_FUNC(sub_83003000);
PPC_FUNC_IMPL(__imp__sub_83003000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6776
	ctx.r3.s64 = ctx.r31.s64 + -6776;
	// addi r4,r10,-28640
	ctx.r4.s64 = ctx.r10.s64 + -28640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x8300303C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29180
	ctx.r11.s64 = ctx.r11.s64 + -29180;
	// addi r3,r9,-14824
	ctx.r3.s64 = ctx.r9.s64 + -14824;
	// stw r11,-6776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003054;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003068"))) PPC_WEAK_FUNC(sub_83003068);
PPC_FUNC_IMPL(__imp__sub_83003068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6744
	ctx.r3.s64 = ctx.r31.s64 + -6744;
	// addi r4,r10,-28100
	ctx.r4.s64 = ctx.r10.s64 + -28100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830030A4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28608
	ctx.r11.s64 = ctx.r11.s64 + -28608;
	// addi r3,r9,-14800
	ctx.r3.s64 = ctx.r9.s64 + -14800;
	// stw r11,-6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830030BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830030D0"))) PPC_WEAK_FUNC(sub_830030D0);
PPC_FUNC_IMPL(__imp__sub_830030D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6712
	ctx.r3.s64 = ctx.r31.s64 + -6712;
	// addi r4,r10,-27564
	ctx.r4.s64 = ctx.r10.s64 + -27564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300310C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28072
	ctx.r11.s64 = ctx.r11.s64 + -28072;
	// addi r3,r9,-14776
	ctx.r3.s64 = ctx.r9.s64 + -14776;
	// stw r11,-6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003124;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003138"))) PPC_WEAK_FUNC(sub_83003138);
PPC_FUNC_IMPL(__imp__sub_83003138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6680
	ctx.r3.s64 = ctx.r31.s64 + -6680;
	// addi r4,r10,-27020
	ctx.r4.s64 = ctx.r10.s64 + -27020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003174;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27532
	ctx.r11.s64 = ctx.r11.s64 + -27532;
	// addi r3,r9,-14752
	ctx.r3.s64 = ctx.r9.s64 + -14752;
	// stw r11,-6680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300318C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830031A0"))) PPC_WEAK_FUNC(sub_830031A0);
PPC_FUNC_IMPL(__imp__sub_830031A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6648
	ctx.r3.s64 = ctx.r31.s64 + -6648;
	// addi r4,r10,-26476
	ctx.r4.s64 = ctx.r10.s64 + -26476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830031DC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26996
	ctx.r11.s64 = ctx.r11.s64 + -26996;
	// addi r3,r9,-14728
	ctx.r3.s64 = ctx.r9.s64 + -14728;
	// stw r11,-6648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830031F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003208"))) PPC_WEAK_FUNC(sub_83003208);
PPC_FUNC_IMPL(__imp__sub_83003208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6616
	ctx.r3.s64 = ctx.r31.s64 + -6616;
	// addi r4,r10,-25904
	ctx.r4.s64 = ctx.r10.s64 + -25904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83003244;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26452
	ctx.r11.s64 = ctx.r11.s64 + -26452;
	// addi r3,r9,-14704
	ctx.r3.s64 = ctx.r9.s64 + -14704;
	// stw r11,-6616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300325C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003270"))) PPC_WEAK_FUNC(sub_83003270);
PPC_FUNC_IMPL(__imp__sub_83003270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6584
	ctx.r3.s64 = ctx.r31.s64 + -6584;
	// addi r4,r10,-25356
	ctx.r4.s64 = ctx.r10.s64 + -25356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830032AC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25876
	ctx.r11.s64 = ctx.r11.s64 + -25876;
	// addi r3,r9,-14680
	ctx.r3.s64 = ctx.r9.s64 + -14680;
	// stw r11,-6584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830032C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830032D8"))) PPC_WEAK_FUNC(sub_830032D8);
PPC_FUNC_IMPL(__imp__sub_830032D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6552
	ctx.r3.s64 = ctx.r31.s64 + -6552;
	// addi r4,r10,-24792
	ctx.r4.s64 = ctx.r10.s64 + -24792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83003314;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25328
	ctx.r11.s64 = ctx.r11.s64 + -25328;
	// addi r3,r9,-14656
	ctx.r3.s64 = ctx.r9.s64 + -14656;
	// stw r11,-6552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300332C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003340"))) PPC_WEAK_FUNC(sub_83003340);
PPC_FUNC_IMPL(__imp__sub_83003340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-6520
	ctx.r3.s64 = ctx.r31.s64 + -6520;
	// addi r4,r10,-24252
	ctx.r4.s64 = ctx.r10.s64 + -24252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300337C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24764
	ctx.r11.s64 = ctx.r11.s64 + -24764;
	// addi r3,r9,-14632
	ctx.r3.s64 = ctx.r9.s64 + -14632;
	// stw r11,-6520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003394;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830033A8"))) PPC_WEAK_FUNC(sub_830033A8);
PPC_FUNC_IMPL(__imp__sub_830033A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6488
	ctx.r3.s64 = ctx.r31.s64 + -6488;
	// addi r4,r10,-23708
	ctx.r4.s64 = ctx.r10.s64 + -23708;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830033E4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24220
	ctx.r11.s64 = ctx.r11.s64 + -24220;
	// addi r3,r9,-14608
	ctx.r3.s64 = ctx.r9.s64 + -14608;
	// stw r11,-6488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830033FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003410"))) PPC_WEAK_FUNC(sub_83003410);
PPC_FUNC_IMPL(__imp__sub_83003410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6456
	ctx.r3.s64 = ctx.r31.s64 + -6456;
	// addi r4,r10,-23148
	ctx.r4.s64 = ctx.r10.s64 + -23148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300344C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23680
	ctx.r11.s64 = ctx.r11.s64 + -23680;
	// addi r3,r9,-14584
	ctx.r3.s64 = ctx.r9.s64 + -14584;
	// stw r11,-6456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003464;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003478"))) PPC_WEAK_FUNC(sub_83003478);
PPC_FUNC_IMPL(__imp__sub_83003478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6424
	ctx.r3.s64 = ctx.r31.s64 + -6424;
	// addi r4,r10,-22612
	ctx.r4.s64 = ctx.r10.s64 + -22612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830034B4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// addi r3,r9,-14560
	ctx.r3.s64 = ctx.r9.s64 + -14560;
	// stw r11,-6424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830034CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830034E0"))) PPC_WEAK_FUNC(sub_830034E0);
PPC_FUNC_IMPL(__imp__sub_830034E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6392
	ctx.r3.s64 = ctx.r31.s64 + -6392;
	// addi r4,r10,-22000
	ctx.r4.s64 = ctx.r10.s64 + -22000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x8300351C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// addi r3,r9,-14536
	ctx.r3.s64 = ctx.r9.s64 + -14536;
	// stw r11,-6392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003534;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003548"))) PPC_WEAK_FUNC(sub_83003548);
PPC_FUNC_IMPL(__imp__sub_83003548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6360
	ctx.r3.s64 = ctx.r31.s64 + -6360;
	// addi r4,r10,-21460
	ctx.r4.s64 = ctx.r10.s64 + -21460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83003584;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21968
	ctx.r11.s64 = ctx.r11.s64 + -21968;
	// addi r3,r9,-14512
	ctx.r3.s64 = ctx.r9.s64 + -14512;
	// stw r11,-6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300359C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830035B0"))) PPC_WEAK_FUNC(sub_830035B0);
PPC_FUNC_IMPL(__imp__sub_830035B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6328
	ctx.r3.s64 = ctx.r31.s64 + -6328;
	// addi r4,r10,-20924
	ctx.r4.s64 = ctx.r10.s64 + -20924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830035EC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21436
	ctx.r11.s64 = ctx.r11.s64 + -21436;
	// addi r3,r9,-14488
	ctx.r3.s64 = ctx.r9.s64 + -14488;
	// stw r11,-6328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003604;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003618"))) PPC_WEAK_FUNC(sub_83003618);
PPC_FUNC_IMPL(__imp__sub_83003618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6296
	ctx.r3.s64 = ctx.r31.s64 + -6296;
	// addi r4,r10,-20364
	ctx.r4.s64 = ctx.r10.s64 + -20364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83003654;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20900
	ctx.r11.s64 = ctx.r11.s64 + -20900;
	// addi r3,r9,-14464
	ctx.r3.s64 = ctx.r9.s64 + -14464;
	// stw r11,-6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300366C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003680"))) PPC_WEAK_FUNC(sub_83003680);
PPC_FUNC_IMPL(__imp__sub_83003680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6264
	ctx.r3.s64 = ctx.r31.s64 + -6264;
	// addi r4,r10,-19828
	ctx.r4.s64 = ctx.r10.s64 + -19828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830036BC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20336
	ctx.r11.s64 = ctx.r11.s64 + -20336;
	// addi r3,r9,-14440
	ctx.r3.s64 = ctx.r9.s64 + -14440;
	// stw r11,-6264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830036D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830036E8"))) PPC_WEAK_FUNC(sub_830036E8);
PPC_FUNC_IMPL(__imp__sub_830036E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6232
	ctx.r3.s64 = ctx.r31.s64 + -6232;
	// addi r4,r10,-19284
	ctx.r4.s64 = ctx.r10.s64 + -19284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003724;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19796
	ctx.r11.s64 = ctx.r11.s64 + -19796;
	// addi r3,r9,-14416
	ctx.r3.s64 = ctx.r9.s64 + -14416;
	// stw r11,-6232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300373C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003750"))) PPC_WEAK_FUNC(sub_83003750);
PPC_FUNC_IMPL(__imp__sub_83003750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6200
	ctx.r3.s64 = ctx.r31.s64 + -6200;
	// addi r4,r10,-18720
	ctx.r4.s64 = ctx.r10.s64 + -18720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x8300378C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19256
	ctx.r11.s64 = ctx.r11.s64 + -19256;
	// addi r3,r9,-14392
	ctx.r3.s64 = ctx.r9.s64 + -14392;
	// stw r11,-6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830037A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830037B8"))) PPC_WEAK_FUNC(sub_830037B8);
PPC_FUNC_IMPL(__imp__sub_830037B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6168
	ctx.r3.s64 = ctx.r31.s64 + -6168;
	// addi r4,r10,-18096
	ctx.r4.s64 = ctx.r10.s64 + -18096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830037F4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18696
	ctx.r11.s64 = ctx.r11.s64 + -18696;
	// addi r3,r9,-14368
	ctx.r3.s64 = ctx.r9.s64 + -14368;
	// stw r11,-6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300380C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003820"))) PPC_WEAK_FUNC(sub_83003820);
PPC_FUNC_IMPL(__imp__sub_83003820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6136
	ctx.r3.s64 = ctx.r31.s64 + -6136;
	// addi r4,r10,-17540
	ctx.r4.s64 = ctx.r10.s64 + -17540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300385C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18072
	ctx.r11.s64 = ctx.r11.s64 + -18072;
	// addi r3,r9,-14344
	ctx.r3.s64 = ctx.r9.s64 + -14344;
	// stw r11,-6136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003874;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003888"))) PPC_WEAK_FUNC(sub_83003888);
PPC_FUNC_IMPL(__imp__sub_83003888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-6104
	ctx.r3.s64 = ctx.r31.s64 + -6104;
	// addi r4,r10,-16952
	ctx.r4.s64 = ctx.r10.s64 + -16952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x830038C4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17516
	ctx.r11.s64 = ctx.r11.s64 + -17516;
	// addi r3,r9,-14320
	ctx.r3.s64 = ctx.r9.s64 + -14320;
	// stw r11,-6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830038DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830038F0"))) PPC_WEAK_FUNC(sub_830038F0);
PPC_FUNC_IMPL(__imp__sub_830038F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-6072
	ctx.r3.s64 = ctx.r31.s64 + -6072;
	// addi r4,r10,-16344
	ctx.r4.s64 = ctx.r10.s64 + -16344;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300392C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16928
	ctx.r11.s64 = ctx.r11.s64 + -16928;
	// addi r3,r9,-14296
	ctx.r3.s64 = ctx.r9.s64 + -14296;
	// stw r11,-6072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003944;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003958"))) PPC_WEAK_FUNC(sub_83003958);
PPC_FUNC_IMPL(__imp__sub_83003958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-6040
	ctx.r3.s64 = ctx.r31.s64 + -6040;
	// addi r4,r10,-15780
	ctx.r4.s64 = ctx.r10.s64 + -15780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003994;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16316
	ctx.r11.s64 = ctx.r11.s64 + -16316;
	// addi r3,r9,-14272
	ctx.r3.s64 = ctx.r9.s64 + -14272;
	// stw r11,-6040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830039AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830039C0"))) PPC_WEAK_FUNC(sub_830039C0);
PPC_FUNC_IMPL(__imp__sub_830039C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-6008
	ctx.r3.s64 = ctx.r31.s64 + -6008;
	// addi r4,r10,-15244
	ctx.r4.s64 = ctx.r10.s64 + -15244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x830039FC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15756
	ctx.r11.s64 = ctx.r11.s64 + -15756;
	// addi r3,r9,-14248
	ctx.r3.s64 = ctx.r9.s64 + -14248;
	// stw r11,-6008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003A14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003A28"))) PPC_WEAK_FUNC(sub_83003A28);
PPC_FUNC_IMPL(__imp__sub_83003A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5976
	ctx.r3.s64 = ctx.r31.s64 + -5976;
	// addi r4,r10,-14680
	ctx.r4.s64 = ctx.r10.s64 + -14680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x83003A64;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15220
	ctx.r11.s64 = ctx.r11.s64 + -15220;
	// addi r3,r9,-14224
	ctx.r3.s64 = ctx.r9.s64 + -14224;
	// stw r11,-5976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003A7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003A90"))) PPC_WEAK_FUNC(sub_83003A90);
PPC_FUNC_IMPL(__imp__sub_83003A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5944
	ctx.r3.s64 = ctx.r31.s64 + -5944;
	// addi r4,r10,-13752
	ctx.r4.s64 = ctx.r10.s64 + -13752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6368
	ctx.r6.s64 = 6368;
	// bl 0x82b38290
	ctx.lr = 0x83003ACC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14656
	ctx.r11.s64 = ctx.r11.s64 + -14656;
	// addi r3,r9,-14200
	ctx.r3.s64 = ctx.r9.s64 + -14200;
	// stw r11,-5944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003AE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003AF8"))) PPC_WEAK_FUNC(sub_83003AF8);
PPC_FUNC_IMPL(__imp__sub_83003AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5912
	ctx.r3.s64 = ctx.r31.s64 + -5912;
	// addi r4,r10,-13220
	ctx.r4.s64 = ctx.r10.s64 + -13220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6304
	ctx.r6.s64 = 6304;
	// bl 0x82b38290
	ctx.lr = 0x83003B34;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13728
	ctx.r11.s64 = ctx.r11.s64 + -13728;
	// addi r3,r9,-14176
	ctx.r3.s64 = ctx.r9.s64 + -14176;
	// stw r11,-5912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003B4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003B60"))) PPC_WEAK_FUNC(sub_83003B60);
PPC_FUNC_IMPL(__imp__sub_83003B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5880
	ctx.r3.s64 = ctx.r31.s64 + -5880;
	// addi r4,r10,-12664
	ctx.r4.s64 = ctx.r10.s64 + -12664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83003B9C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13192
	ctx.r11.s64 = ctx.r11.s64 + -13192;
	// addi r3,r9,-14152
	ctx.r3.s64 = ctx.r9.s64 + -14152;
	// stw r11,-5880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003BB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003BC8"))) PPC_WEAK_FUNC(sub_83003BC8);
PPC_FUNC_IMPL(__imp__sub_83003BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-5848
	ctx.r3.s64 = ctx.r31.s64 + -5848;
	// addi r4,r10,-12104
	ctx.r4.s64 = ctx.r10.s64 + -12104;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83003C04;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12640
	ctx.r11.s64 = ctx.r11.s64 + -12640;
	// addi r3,r9,-14128
	ctx.r3.s64 = ctx.r9.s64 + -14128;
	// stw r11,-5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003C1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003C30"))) PPC_WEAK_FUNC(sub_83003C30);
PPC_FUNC_IMPL(__imp__sub_83003C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-5816
	ctx.r3.s64 = ctx.r31.s64 + -5816;
	// addi r4,r10,-11544
	ctx.r4.s64 = ctx.r10.s64 + -11544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003C6C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12080
	ctx.r11.s64 = ctx.r11.s64 + -12080;
	// addi r3,r9,-14104
	ctx.r3.s64 = ctx.r9.s64 + -14104;
	// stw r11,-5816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003C84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003C98"))) PPC_WEAK_FUNC(sub_83003C98);
PPC_FUNC_IMPL(__imp__sub_83003C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5784
	ctx.r3.s64 = ctx.r31.s64 + -5784;
	// addi r4,r10,-11012
	ctx.r4.s64 = ctx.r10.s64 + -11012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003CD4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11524
	ctx.r11.s64 = ctx.r11.s64 + -11524;
	// addi r3,r9,-14080
	ctx.r3.s64 = ctx.r9.s64 + -14080;
	// stw r11,-5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003CEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003D00"))) PPC_WEAK_FUNC(sub_83003D00);
PPC_FUNC_IMPL(__imp__sub_83003D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5752
	ctx.r3.s64 = ctx.r31.s64 + -5752;
	// addi r4,r10,-10476
	ctx.r4.s64 = ctx.r10.s64 + -10476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003D3C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10984
	ctx.r11.s64 = ctx.r11.s64 + -10984;
	// addi r3,r9,-14056
	ctx.r3.s64 = ctx.r9.s64 + -14056;
	// stw r11,-5752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003D54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003D68"))) PPC_WEAK_FUNC(sub_83003D68);
PPC_FUNC_IMPL(__imp__sub_83003D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5720
	ctx.r3.s64 = ctx.r31.s64 + -5720;
	// addi r4,r10,-9940
	ctx.r4.s64 = ctx.r10.s64 + -9940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003DA4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// addi r3,r9,-14032
	ctx.r3.s64 = ctx.r9.s64 + -14032;
	// stw r11,-5720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003DBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003DD0"))) PPC_WEAK_FUNC(sub_83003DD0);
PPC_FUNC_IMPL(__imp__sub_83003DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-5688
	ctx.r3.s64 = ctx.r31.s64 + -5688;
	// addi r4,r10,-9364
	ctx.r4.s64 = ctx.r10.s64 + -9364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6400
	ctx.r6.s64 = 6400;
	// bl 0x82b38290
	ctx.lr = 0x83003E0C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9920
	ctx.r11.s64 = ctx.r11.s64 + -9920;
	// addi r3,r9,-14008
	ctx.r3.s64 = ctx.r9.s64 + -14008;
	// stw r11,-5688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003E24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003E38"))) PPC_WEAK_FUNC(sub_83003E38);
PPC_FUNC_IMPL(__imp__sub_83003E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5656
	ctx.r3.s64 = ctx.r31.s64 + -5656;
	// addi r4,r10,-8828
	ctx.r4.s64 = ctx.r10.s64 + -8828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003E74;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9336
	ctx.r11.s64 = ctx.r11.s64 + -9336;
	// addi r3,r9,-13984
	ctx.r3.s64 = ctx.r9.s64 + -13984;
	// stw r11,-5656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003E8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003EA0"))) PPC_WEAK_FUNC(sub_83003EA0);
PPC_FUNC_IMPL(__imp__sub_83003EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5624
	ctx.r3.s64 = ctx.r31.s64 + -5624;
	// addi r4,r10,-8292
	ctx.r4.s64 = ctx.r10.s64 + -8292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003EDC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8804
	ctx.r11.s64 = ctx.r11.s64 + -8804;
	// addi r3,r9,-13960
	ctx.r3.s64 = ctx.r9.s64 + -13960;
	// stw r11,-5624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003EF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003F08"))) PPC_WEAK_FUNC(sub_83003F08);
PPC_FUNC_IMPL(__imp__sub_83003F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5592
	ctx.r3.s64 = ctx.r31.s64 + -5592;
	// addi r4,r10,-7732
	ctx.r4.s64 = ctx.r10.s64 + -7732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83003F44;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8264
	ctx.r11.s64 = ctx.r11.s64 + -8264;
	// addi r3,r9,-13936
	ctx.r3.s64 = ctx.r9.s64 + -13936;
	// stw r11,-5592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003F5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003F70"))) PPC_WEAK_FUNC(sub_83003F70);
PPC_FUNC_IMPL(__imp__sub_83003F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5560
	ctx.r3.s64 = ctx.r31.s64 + -5560;
	// addi r4,r10,-7168
	ctx.r4.s64 = ctx.r10.s64 + -7168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83003FAC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7704
	ctx.r11.s64 = ctx.r11.s64 + -7704;
	// addi r3,r9,-13912
	ctx.r3.s64 = ctx.r9.s64 + -13912;
	// stw r11,-5560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83003FC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83003FD8"))) PPC_WEAK_FUNC(sub_83003FD8);
PPC_FUNC_IMPL(__imp__sub_83003FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5528
	ctx.r3.s64 = ctx.r31.s64 + -5528;
	// addi r4,r10,-6596
	ctx.r4.s64 = ctx.r10.s64 + -6596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004014;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7140
	ctx.r11.s64 = ctx.r11.s64 + -7140;
	// addi r3,r9,-13888
	ctx.r3.s64 = ctx.r9.s64 + -13888;
	// stw r11,-5528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300402C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004040"))) PPC_WEAK_FUNC(sub_83004040);
PPC_FUNC_IMPL(__imp__sub_83004040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5496
	ctx.r3.s64 = ctx.r31.s64 + -5496;
	// addi r4,r10,-6012
	ctx.r4.s64 = ctx.r10.s64 + -6012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x8300407C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6572
	ctx.r11.s64 = ctx.r11.s64 + -6572;
	// addi r3,r9,-13864
	ctx.r3.s64 = ctx.r9.s64 + -13864;
	// stw r11,-5496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830040A8"))) PPC_WEAK_FUNC(sub_830040A8);
PPC_FUNC_IMPL(__imp__sub_830040A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5464
	ctx.r3.s64 = ctx.r31.s64 + -5464;
	// addi r4,r10,-5440
	ctx.r4.s64 = ctx.r10.s64 + -5440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830040E4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5988
	ctx.r11.s64 = ctx.r11.s64 + -5988;
	// addi r3,r9,-13840
	ctx.r3.s64 = ctx.r9.s64 + -13840;
	// stw r11,-5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830040FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004110"))) PPC_WEAK_FUNC(sub_83004110);
PPC_FUNC_IMPL(__imp__sub_83004110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5432
	ctx.r3.s64 = ctx.r31.s64 + -5432;
	// addi r4,r10,-4892
	ctx.r4.s64 = ctx.r10.s64 + -4892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300414C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5412
	ctx.r11.s64 = ctx.r11.s64 + -5412;
	// addi r3,r9,-13816
	ctx.r3.s64 = ctx.r9.s64 + -13816;
	// stw r11,-5432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004164;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004178"))) PPC_WEAK_FUNC(sub_83004178);
PPC_FUNC_IMPL(__imp__sub_83004178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5400
	ctx.r3.s64 = ctx.r31.s64 + -5400;
	// addi r4,r10,-4300
	ctx.r4.s64 = ctx.r10.s64 + -4300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830041B4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4864
	ctx.r11.s64 = ctx.r11.s64 + -4864;
	// addi r3,r9,-13792
	ctx.r3.s64 = ctx.r9.s64 + -13792;
	// stw r11,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830041CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830041E0"))) PPC_WEAK_FUNC(sub_830041E0);
PPC_FUNC_IMPL(__imp__sub_830041E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5368
	ctx.r3.s64 = ctx.r31.s64 + -5368;
	// addi r4,r10,-3772
	ctx.r4.s64 = ctx.r10.s64 + -3772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300421C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4280
	ctx.r11.s64 = ctx.r11.s64 + -4280;
	// addi r3,r9,-13768
	ctx.r3.s64 = ctx.r9.s64 + -13768;
	// stw r11,-5368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004234;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004248"))) PPC_WEAK_FUNC(sub_83004248);
PPC_FUNC_IMPL(__imp__sub_83004248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5336
	ctx.r3.s64 = ctx.r31.s64 + -5336;
	// addi r4,r10,-3244
	ctx.r4.s64 = ctx.r10.s64 + -3244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004284;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3752
	ctx.r11.s64 = ctx.r11.s64 + -3752;
	// addi r3,r9,-13744
	ctx.r3.s64 = ctx.r9.s64 + -13744;
	// stw r11,-5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300429C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830042B0"))) PPC_WEAK_FUNC(sub_830042B0);
PPC_FUNC_IMPL(__imp__sub_830042B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5304
	ctx.r3.s64 = ctx.r31.s64 + -5304;
	// addi r4,r10,-2708
	ctx.r4.s64 = ctx.r10.s64 + -2708;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830042EC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3220
	ctx.r11.s64 = ctx.r11.s64 + -3220;
	// addi r3,r9,-13720
	ctx.r3.s64 = ctx.r9.s64 + -13720;
	// stw r11,-5304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004304;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004318"))) PPC_WEAK_FUNC(sub_83004318);
PPC_FUNC_IMPL(__imp__sub_83004318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5272
	ctx.r3.s64 = ctx.r31.s64 + -5272;
	// addi r4,r10,-2172
	ctx.r4.s64 = ctx.r10.s64 + -2172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83004354;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2684
	ctx.r11.s64 = ctx.r11.s64 + -2684;
	// addi r3,r9,-13696
	ctx.r3.s64 = ctx.r9.s64 + -13696;
	// stw r11,-5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300436C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004380"))) PPC_WEAK_FUNC(sub_83004380);
PPC_FUNC_IMPL(__imp__sub_83004380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5240
	ctx.r3.s64 = ctx.r31.s64 + -5240;
	// addi r4,r10,-1556
	ctx.r4.s64 = ctx.r10.s64 + -1556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830043BC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2148
	ctx.r11.s64 = ctx.r11.s64 + -2148;
	// addi r3,r9,-13672
	ctx.r3.s64 = ctx.r9.s64 + -13672;
	// stw r11,-5240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830043D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830043E8"))) PPC_WEAK_FUNC(sub_830043E8);
PPC_FUNC_IMPL(__imp__sub_830043E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5208
	ctx.r3.s64 = ctx.r31.s64 + -5208;
	// addi r4,r10,-984
	ctx.r4.s64 = ctx.r10.s64 + -984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83004424;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1524
	ctx.r11.s64 = ctx.r11.s64 + -1524;
	// addi r3,r9,-13648
	ctx.r3.s64 = ctx.r9.s64 + -13648;
	// stw r11,-5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300443C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004450"))) PPC_WEAK_FUNC(sub_83004450);
PPC_FUNC_IMPL(__imp__sub_83004450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5176
	ctx.r3.s64 = ctx.r31.s64 + -5176;
	// addi r4,r10,-436
	ctx.r4.s64 = ctx.r10.s64 + -436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300448C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-960
	ctx.r11.s64 = ctx.r11.s64 + -960;
	// addi r3,r9,-13624
	ctx.r3.s64 = ctx.r9.s64 + -13624;
	// stw r11,-5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830044A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830044B8"))) PPC_WEAK_FUNC(sub_830044B8);
PPC_FUNC_IMPL(__imp__sub_830044B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5144
	ctx.r3.s64 = ctx.r31.s64 + -5144;
	// addi r4,r10,100
	ctx.r4.s64 = ctx.r10.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830044F4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-408
	ctx.r11.s64 = ctx.r11.s64 + -408;
	// addi r3,r9,-13600
	ctx.r3.s64 = ctx.r9.s64 + -13600;
	// stw r11,-5144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300450C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004520"))) PPC_WEAK_FUNC(sub_83004520);
PPC_FUNC_IMPL(__imp__sub_83004520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-5112
	ctx.r3.s64 = ctx.r31.s64 + -5112;
	// addi r4,r10,724
	ctx.r4.s64 = ctx.r10.s64 + 724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300455C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// addi r3,r9,-13576
	ctx.r3.s64 = ctx.r9.s64 + -13576;
	// stw r11,-5112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004574;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004588"))) PPC_WEAK_FUNC(sub_83004588);
PPC_FUNC_IMPL(__imp__sub_83004588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-5080
	ctx.r3.s64 = ctx.r31.s64 + -5080;
	// addi r4,r10,1360
	ctx.r4.s64 = ctx.r10.s64 + 1360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x830045C4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,748
	ctx.r11.s64 = ctx.r11.s64 + 748;
	// addi r3,r9,-13552
	ctx.r3.s64 = ctx.r9.s64 + -13552;
	// stw r11,-5080(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830045DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830045F0"))) PPC_WEAK_FUNC(sub_830045F0);
PPC_FUNC_IMPL(__imp__sub_830045F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-5048
	ctx.r3.s64 = ctx.r31.s64 + -5048;
	// addi r4,r10,1892
	ctx.r4.s64 = ctx.r10.s64 + 1892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300462C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// addi r3,r9,-13528
	ctx.r3.s64 = ctx.r9.s64 + -13528;
	// stw r11,-5048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004644;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004658"))) PPC_WEAK_FUNC(sub_83004658);
PPC_FUNC_IMPL(__imp__sub_83004658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-5016
	ctx.r3.s64 = ctx.r31.s64 + -5016;
	// addi r4,r10,2480
	ctx.r4.s64 = ctx.r10.s64 + 2480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004694;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1920
	ctx.r11.s64 = ctx.r11.s64 + 1920;
	// addi r3,r9,-13504
	ctx.r3.s64 = ctx.r9.s64 + -13504;
	// stw r11,-5016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830046AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830046C0"))) PPC_WEAK_FUNC(sub_830046C0);
PPC_FUNC_IMPL(__imp__sub_830046C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4984
	ctx.r3.s64 = ctx.r31.s64 + -4984;
	// addi r4,r10,3048
	ctx.r4.s64 = ctx.r10.s64 + 3048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830046FC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2508
	ctx.r11.s64 = ctx.r11.s64 + 2508;
	// addi r3,r9,-13480
	ctx.r3.s64 = ctx.r9.s64 + -13480;
	// stw r11,-4984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004714;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004728"))) PPC_WEAK_FUNC(sub_83004728);
PPC_FUNC_IMPL(__imp__sub_83004728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4952
	ctx.r3.s64 = ctx.r31.s64 + -4952;
	// addi r4,r10,3632
	ctx.r4.s64 = ctx.r10.s64 + 3632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83004764;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3076
	ctx.r11.s64 = ctx.r11.s64 + 3076;
	// addi r3,r9,-13456
	ctx.r3.s64 = ctx.r9.s64 + -13456;
	// stw r11,-4952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300477C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004790"))) PPC_WEAK_FUNC(sub_83004790);
PPC_FUNC_IMPL(__imp__sub_83004790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4920
	ctx.r3.s64 = ctx.r31.s64 + -4920;
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830047CC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3660
	ctx.r11.s64 = ctx.r11.s64 + 3660;
	// addi r3,r9,-13432
	ctx.r3.s64 = ctx.r9.s64 + -13432;
	// stw r11,-4920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830047E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830047F8"))) PPC_WEAK_FUNC(sub_830047F8);
PPC_FUNC_IMPL(__imp__sub_830047F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4888
	ctx.r3.s64 = ctx.r31.s64 + -4888;
	// addi r4,r10,4800
	ctx.r4.s64 = ctx.r10.s64 + 4800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83004834;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4228
	ctx.r11.s64 = ctx.r11.s64 + 4228;
	// addi r3,r9,-13408
	ctx.r3.s64 = ctx.r9.s64 + -13408;
	// stw r11,-4888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300484C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004860"))) PPC_WEAK_FUNC(sub_83004860);
PPC_FUNC_IMPL(__imp__sub_83004860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4856
	ctx.r3.s64 = ctx.r31.s64 + -4856;
	// addi r4,r10,5368
	ctx.r4.s64 = ctx.r10.s64 + 5368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300489C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4828
	ctx.r11.s64 = ctx.r11.s64 + 4828;
	// addi r3,r9,-13384
	ctx.r3.s64 = ctx.r9.s64 + -13384;
	// stw r11,-4856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830048B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830048C8"))) PPC_WEAK_FUNC(sub_830048C8);
PPC_FUNC_IMPL(__imp__sub_830048C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4824
	ctx.r3.s64 = ctx.r31.s64 + -4824;
	// addi r4,r10,5908
	ctx.r4.s64 = ctx.r10.s64 + 5908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004904;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5396
	ctx.r11.s64 = ctx.r11.s64 + 5396;
	// addi r3,r9,-13360
	ctx.r3.s64 = ctx.r9.s64 + -13360;
	// stw r11,-4824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300491C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004930"))) PPC_WEAK_FUNC(sub_83004930);
PPC_FUNC_IMPL(__imp__sub_83004930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4792
	ctx.r3.s64 = ctx.r31.s64 + -4792;
	// addi r4,r10,6448
	ctx.r4.s64 = ctx.r10.s64 + 6448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300496C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5932
	ctx.r11.s64 = ctx.r11.s64 + 5932;
	// addi r3,r9,-13336
	ctx.r3.s64 = ctx.r9.s64 + -13336;
	// stw r11,-4792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004984;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004998"))) PPC_WEAK_FUNC(sub_83004998);
PPC_FUNC_IMPL(__imp__sub_83004998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4760
	ctx.r3.s64 = ctx.r31.s64 + -4760;
	// addi r4,r10,6980
	ctx.r4.s64 = ctx.r10.s64 + 6980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830049D4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6472
	ctx.r11.s64 = ctx.r11.s64 + 6472;
	// addi r3,r9,-13312
	ctx.r3.s64 = ctx.r9.s64 + -13312;
	// stw r11,-4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830049EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004A00"))) PPC_WEAK_FUNC(sub_83004A00);
PPC_FUNC_IMPL(__imp__sub_83004A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4728
	ctx.r3.s64 = ctx.r31.s64 + -4728;
	// addi r4,r10,7540
	ctx.r4.s64 = ctx.r10.s64 + 7540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004A3C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7008
	ctx.r11.s64 = ctx.r11.s64 + 7008;
	// addi r3,r9,-13288
	ctx.r3.s64 = ctx.r9.s64 + -13288;
	// stw r11,-4728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004A54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004A68"))) PPC_WEAK_FUNC(sub_83004A68);
PPC_FUNC_IMPL(__imp__sub_83004A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4696
	ctx.r3.s64 = ctx.r31.s64 + -4696;
	// addi r4,r10,8136
	ctx.r4.s64 = ctx.r10.s64 + 8136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83004AA4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7564
	ctx.r11.s64 = ctx.r11.s64 + 7564;
	// addi r3,r9,-13264
	ctx.r3.s64 = ctx.r9.s64 + -13264;
	// stw r11,-4696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004ABC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004AD0"))) PPC_WEAK_FUNC(sub_83004AD0);
PPC_FUNC_IMPL(__imp__sub_83004AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-4664
	ctx.r3.s64 = ctx.r31.s64 + -4664;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6400
	ctx.r6.s64 = 6400;
	// bl 0x82b38290
	ctx.lr = 0x83004B0C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8160
	ctx.r11.s64 = ctx.r11.s64 + 8160;
	// addi r3,r9,-13240
	ctx.r3.s64 = ctx.r9.s64 + -13240;
	// stw r11,-4664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004B24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004B38"))) PPC_WEAK_FUNC(sub_83004B38);
PPC_FUNC_IMPL(__imp__sub_83004B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-4632
	ctx.r3.s64 = ctx.r31.s64 + -4632;
	// addi r4,r10,9292
	ctx.r4.s64 = ctx.r10.s64 + 9292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x83004B74;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8748
	ctx.r11.s64 = ctx.r11.s64 + 8748;
	// addi r3,r9,-13216
	ctx.r3.s64 = ctx.r9.s64 + -13216;
	// stw r11,-4632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004B8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004BA0"))) PPC_WEAK_FUNC(sub_83004BA0);
PPC_FUNC_IMPL(__imp__sub_83004BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-4600
	ctx.r3.s64 = ctx.r31.s64 + -4600;
	// addi r4,r10,9828
	ctx.r4.s64 = ctx.r10.s64 + 9828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83004BDC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9316
	ctx.r11.s64 = ctx.r11.s64 + 9316;
	// addi r3,r9,-13192
	ctx.r3.s64 = ctx.r9.s64 + -13192;
	// stw r11,-4600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004BF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004C08"))) PPC_WEAK_FUNC(sub_83004C08);
PPC_FUNC_IMPL(__imp__sub_83004C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-4568
	ctx.r3.s64 = ctx.r31.s64 + -4568;
	// addi r4,r10,10356
	ctx.r4.s64 = ctx.r10.s64 + 10356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004C44;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9848
	ctx.r11.s64 = ctx.r11.s64 + 9848;
	// addi r3,r9,-13168
	ctx.r3.s64 = ctx.r9.s64 + -13168;
	// stw r11,-4568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004C5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004C70"))) PPC_WEAK_FUNC(sub_83004C70);
PPC_FUNC_IMPL(__imp__sub_83004C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4536
	ctx.r3.s64 = ctx.r31.s64 + -4536;
	// addi r4,r10,10920
	ctx.r4.s64 = ctx.r10.s64 + 10920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004CAC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10384
	ctx.r11.s64 = ctx.r11.s64 + 10384;
	// addi r3,r9,-13144
	ctx.r3.s64 = ctx.r9.s64 + -13144;
	// stw r11,-4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004CC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004CD8"))) PPC_WEAK_FUNC(sub_83004CD8);
PPC_FUNC_IMPL(__imp__sub_83004CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4504
	ctx.r3.s64 = ctx.r31.s64 + -4504;
	// addi r4,r10,11460
	ctx.r4.s64 = ctx.r10.s64 + 11460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004D14;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10944
	ctx.r11.s64 = ctx.r11.s64 + 10944;
	// addi r3,r9,-13120
	ctx.r3.s64 = ctx.r9.s64 + -13120;
	// stw r11,-4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004D2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004D40"))) PPC_WEAK_FUNC(sub_83004D40);
PPC_FUNC_IMPL(__imp__sub_83004D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4472
	ctx.r3.s64 = ctx.r31.s64 + -4472;
	// addi r4,r10,12032
	ctx.r4.s64 = ctx.r10.s64 + 12032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004D7C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11496
	ctx.r11.s64 = ctx.r11.s64 + 11496;
	// addi r3,r9,-13096
	ctx.r3.s64 = ctx.r9.s64 + -13096;
	// stw r11,-4472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004D94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004DA8"))) PPC_WEAK_FUNC(sub_83004DA8);
PPC_FUNC_IMPL(__imp__sub_83004DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4440
	ctx.r3.s64 = ctx.r31.s64 + -4440;
	// addi r4,r10,12588
	ctx.r4.s64 = ctx.r10.s64 + 12588;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004DE4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12056
	ctx.r11.s64 = ctx.r11.s64 + 12056;
	// addi r3,r9,-13072
	ctx.r3.s64 = ctx.r9.s64 + -13072;
	// stw r11,-4440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004DFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E10"))) PPC_WEAK_FUNC(sub_83004E10);
PPC_FUNC_IMPL(__imp__sub_83004E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4408
	ctx.r3.s64 = ctx.r31.s64 + -4408;
	// addi r4,r10,13208
	ctx.r4.s64 = ctx.r10.s64 + 13208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6272
	ctx.r6.s64 = 6272;
	// bl 0x82b38290
	ctx.lr = 0x83004E4C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12616
	ctx.r11.s64 = ctx.r11.s64 + 12616;
	// addi r3,r9,-13048
	ctx.r3.s64 = ctx.r9.s64 + -13048;
	// stw r11,-4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004E64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004E78"))) PPC_WEAK_FUNC(sub_83004E78);
PPC_FUNC_IMPL(__imp__sub_83004E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4376
	ctx.r3.s64 = ctx.r31.s64 + -4376;
	// addi r4,r10,13740
	ctx.r4.s64 = ctx.r10.s64 + 13740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004EB4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13232
	ctx.r11.s64 = ctx.r11.s64 + 13232;
	// addi r3,r9,-13024
	ctx.r3.s64 = ctx.r9.s64 + -13024;
	// stw r11,-4376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004ECC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004EE0"))) PPC_WEAK_FUNC(sub_83004EE0);
PPC_FUNC_IMPL(__imp__sub_83004EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4344
	ctx.r3.s64 = ctx.r31.s64 + -4344;
	// addi r4,r10,14312
	ctx.r4.s64 = ctx.r10.s64 + 14312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83004F1C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13772
	ctx.r11.s64 = ctx.r11.s64 + 13772;
	// addi r3,r9,-13000
	ctx.r3.s64 = ctx.r9.s64 + -13000;
	// stw r11,-4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004F34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004F48"))) PPC_WEAK_FUNC(sub_83004F48);
PPC_FUNC_IMPL(__imp__sub_83004F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4312
	ctx.r3.s64 = ctx.r31.s64 + -4312;
	// addi r4,r10,15020
	ctx.r4.s64 = ctx.r10.s64 + 15020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x83004F84;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14416
	ctx.r11.s64 = ctx.r11.s64 + 14416;
	// addi r3,r9,-12976
	ctx.r3.s64 = ctx.r9.s64 + -12976;
	// stw r11,-4312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83004F9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83004FB0"))) PPC_WEAK_FUNC(sub_83004FB0);
PPC_FUNC_IMPL(__imp__sub_83004FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4280
	ctx.r3.s64 = ctx.r31.s64 + -4280;
	// addi r4,r10,15556
	ctx.r4.s64 = ctx.r10.s64 + 15556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83004FEC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15048
	ctx.r11.s64 = ctx.r11.s64 + 15048;
	// addi r3,r9,-12952
	ctx.r3.s64 = ctx.r9.s64 + -12952;
	// stw r11,-4280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005004;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005018"))) PPC_WEAK_FUNC(sub_83005018);
PPC_FUNC_IMPL(__imp__sub_83005018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4248
	ctx.r3.s64 = ctx.r31.s64 + -4248;
	// addi r4,r10,16108
	ctx.r4.s64 = ctx.r10.s64 + 16108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83005054;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15580
	ctx.r11.s64 = ctx.r11.s64 + 15580;
	// addi r3,r9,-12928
	ctx.r3.s64 = ctx.r9.s64 + -12928;
	// stw r11,-4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300506C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005080"))) PPC_WEAK_FUNC(sub_83005080);
PPC_FUNC_IMPL(__imp__sub_83005080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4216
	ctx.r3.s64 = ctx.r31.s64 + -4216;
	// addi r4,r10,16644
	ctx.r4.s64 = ctx.r10.s64 + 16644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x830050BC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16128
	ctx.r11.s64 = ctx.r11.s64 + 16128;
	// addi r3,r9,-12904
	ctx.r3.s64 = ctx.r9.s64 + -12904;
	// stw r11,-4216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830050D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830050E8"))) PPC_WEAK_FUNC(sub_830050E8);
PPC_FUNC_IMPL(__imp__sub_830050E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-4184
	ctx.r3.s64 = ctx.r31.s64 + -4184;
	// addi r4,r10,17196
	ctx.r4.s64 = ctx.r10.s64 + 17196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83005124;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16664
	ctx.r11.s64 = ctx.r11.s64 + 16664;
	// addi r3,r9,-12880
	ctx.r3.s64 = ctx.r9.s64 + -12880;
	// stw r11,-4184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300513C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005150"))) PPC_WEAK_FUNC(sub_83005150);
PPC_FUNC_IMPL(__imp__sub_83005150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-4152
	ctx.r3.s64 = ctx.r31.s64 + -4152;
	// addi r4,r10,17732
	ctx.r4.s64 = ctx.r10.s64 + 17732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x8300518C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17220
	ctx.r11.s64 = ctx.r11.s64 + 17220;
	// addi r3,r9,-12856
	ctx.r3.s64 = ctx.r9.s64 + -12856;
	// stw r11,-4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830051A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830051B8"))) PPC_WEAK_FUNC(sub_830051B8);
PPC_FUNC_IMPL(__imp__sub_830051B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-4120
	ctx.r3.s64 = ctx.r31.s64 + -4120;
	// addi r4,r10,18276
	ctx.r4.s64 = ctx.r10.s64 + 18276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830051F4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r3,r9,-12832
	ctx.r3.s64 = ctx.r9.s64 + -12832;
	// stw r11,-4120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300520C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005220"))) PPC_WEAK_FUNC(sub_83005220);
PPC_FUNC_IMPL(__imp__sub_83005220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4088
	ctx.r3.s64 = ctx.r31.s64 + -4088;
	// addi r4,r10,18812
	ctx.r4.s64 = ctx.r10.s64 + 18812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300525C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18304
	ctx.r11.s64 = ctx.r11.s64 + 18304;
	// addi r3,r9,-12808
	ctx.r3.s64 = ctx.r9.s64 + -12808;
	// stw r11,-4088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005274;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005288"))) PPC_WEAK_FUNC(sub_83005288);
PPC_FUNC_IMPL(__imp__sub_83005288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4056
	ctx.r3.s64 = ctx.r31.s64 + -4056;
	// addi r4,r10,19348
	ctx.r4.s64 = ctx.r10.s64 + 19348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830052C4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18840
	ctx.r11.s64 = ctx.r11.s64 + 18840;
	// addi r3,r9,-12784
	ctx.r3.s64 = ctx.r9.s64 + -12784;
	// stw r11,-4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830052DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830052F0"))) PPC_WEAK_FUNC(sub_830052F0);
PPC_FUNC_IMPL(__imp__sub_830052F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-4024
	ctx.r3.s64 = ctx.r31.s64 + -4024;
	// addi r4,r10,19892
	ctx.r4.s64 = ctx.r10.s64 + 19892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300532C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19376
	ctx.r11.s64 = ctx.r11.s64 + 19376;
	// addi r3,r9,-12760
	ctx.r3.s64 = ctx.r9.s64 + -12760;
	// stw r11,-4024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005344;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005358"))) PPC_WEAK_FUNC(sub_83005358);
PPC_FUNC_IMPL(__imp__sub_83005358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3992
	ctx.r3.s64 = ctx.r31.s64 + -3992;
	// addi r4,r10,20428
	ctx.r4.s64 = ctx.r10.s64 + 20428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005394;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19920
	ctx.r11.s64 = ctx.r11.s64 + 19920;
	// addi r3,r9,-12736
	ctx.r3.s64 = ctx.r9.s64 + -12736;
	// stw r11,-3992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830053AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830053C0"))) PPC_WEAK_FUNC(sub_830053C0);
PPC_FUNC_IMPL(__imp__sub_830053C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-3960
	ctx.r3.s64 = ctx.r31.s64 + -3960;
	// addi r4,r10,21012
	ctx.r4.s64 = ctx.r10.s64 + 21012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x830053FC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20456
	ctx.r11.s64 = ctx.r11.s64 + 20456;
	// addi r3,r9,-12712
	ctx.r3.s64 = ctx.r9.s64 + -12712;
	// stw r11,-3960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005428"))) PPC_WEAK_FUNC(sub_83005428);
PPC_FUNC_IMPL(__imp__sub_83005428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-3928
	ctx.r3.s64 = ctx.r31.s64 + -3928;
	// addi r4,r10,21572
	ctx.r4.s64 = ctx.r10.s64 + 21572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005464;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21040
	ctx.r11.s64 = ctx.r11.s64 + 21040;
	// addi r3,r9,-12688
	ctx.r3.s64 = ctx.r9.s64 + -12688;
	// stw r11,-3928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300547C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005490"))) PPC_WEAK_FUNC(sub_83005490);
PPC_FUNC_IMPL(__imp__sub_83005490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-3896
	ctx.r3.s64 = ctx.r31.s64 + -3896;
	// addi r4,r10,22112
	ctx.r4.s64 = ctx.r10.s64 + 22112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830054CC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21596
	ctx.r11.s64 = ctx.r11.s64 + 21596;
	// addi r3,r9,-12664
	ctx.r3.s64 = ctx.r9.s64 + -12664;
	// stw r11,-3896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830054E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830054F8"))) PPC_WEAK_FUNC(sub_830054F8);
PPC_FUNC_IMPL(__imp__sub_830054F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3864
	ctx.r3.s64 = ctx.r31.s64 + -3864;
	// addi r4,r10,22652
	ctx.r4.s64 = ctx.r10.s64 + 22652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005534;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22144
	ctx.r11.s64 = ctx.r11.s64 + 22144;
	// addi r3,r9,-12640
	ctx.r3.s64 = ctx.r9.s64 + -12640;
	// stw r11,-3864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300554C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005560"))) PPC_WEAK_FUNC(sub_83005560);
PPC_FUNC_IMPL(__imp__sub_83005560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3832
	ctx.r3.s64 = ctx.r31.s64 + -3832;
	// addi r4,r10,23188
	ctx.r4.s64 = ctx.r10.s64 + 23188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300559C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22676
	ctx.r11.s64 = ctx.r11.s64 + 22676;
	// addi r3,r9,-12616
	ctx.r3.s64 = ctx.r9.s64 + -12616;
	// stw r11,-3832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830055B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830055C8"))) PPC_WEAK_FUNC(sub_830055C8);
PPC_FUNC_IMPL(__imp__sub_830055C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3800
	ctx.r3.s64 = ctx.r31.s64 + -3800;
	// addi r4,r10,23756
	ctx.r4.s64 = ctx.r10.s64 + 23756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x83005604;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23220
	ctx.r11.s64 = ctx.r11.s64 + 23220;
	// addi r3,r9,-12592
	ctx.r3.s64 = ctx.r9.s64 + -12592;
	// stw r11,-3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300561C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005630"))) PPC_WEAK_FUNC(sub_83005630);
PPC_FUNC_IMPL(__imp__sub_83005630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3768
	ctx.r3.s64 = ctx.r31.s64 + -3768;
	// addi r4,r10,24292
	ctx.r4.s64 = ctx.r10.s64 + 24292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300566C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23780
	ctx.r11.s64 = ctx.r11.s64 + 23780;
	// addi r3,r9,-12568
	ctx.r3.s64 = ctx.r9.s64 + -12568;
	// stw r11,-3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005684;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005698"))) PPC_WEAK_FUNC(sub_83005698);
PPC_FUNC_IMPL(__imp__sub_83005698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3736
	ctx.r3.s64 = ctx.r31.s64 + -3736;
	// addi r4,r10,24828
	ctx.r4.s64 = ctx.r10.s64 + 24828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830056D4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24316
	ctx.r11.s64 = ctx.r11.s64 + 24316;
	// addi r3,r9,-12544
	ctx.r3.s64 = ctx.r9.s64 + -12544;
	// stw r11,-3736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830056EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005700"))) PPC_WEAK_FUNC(sub_83005700);
PPC_FUNC_IMPL(__imp__sub_83005700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3704
	ctx.r3.s64 = ctx.r31.s64 + -3704;
	// addi r4,r10,25364
	ctx.r4.s64 = ctx.r10.s64 + 25364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300573C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24852
	ctx.r11.s64 = ctx.r11.s64 + 24852;
	// addi r3,r9,-12520
	ctx.r3.s64 = ctx.r9.s64 + -12520;
	// stw r11,-3704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005754;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005768"))) PPC_WEAK_FUNC(sub_83005768);
PPC_FUNC_IMPL(__imp__sub_83005768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-3672
	ctx.r3.s64 = ctx.r31.s64 + -3672;
	// addi r4,r10,25964
	ctx.r4.s64 = ctx.r10.s64 + 25964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830057A4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25388
	ctx.r11.s64 = ctx.r11.s64 + 25388;
	// addi r3,r9,-12496
	ctx.r3.s64 = ctx.r9.s64 + -12496;
	// stw r11,-3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830057BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830057D0"))) PPC_WEAK_FUNC(sub_830057D0);
PPC_FUNC_IMPL(__imp__sub_830057D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3640
	ctx.r3.s64 = ctx.r31.s64 + -3640;
	// addi r4,r10,26576
	ctx.r4.s64 = ctx.r10.s64 + 26576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x8300580C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26004
	ctx.r11.s64 = ctx.r11.s64 + 26004;
	// addi r3,r9,-12472
	ctx.r3.s64 = ctx.r9.s64 + -12472;
	// stw r11,-3640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005824;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005838"))) PPC_WEAK_FUNC(sub_83005838);
PPC_FUNC_IMPL(__imp__sub_83005838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3608
	ctx.r3.s64 = ctx.r31.s64 + -3608;
	// addi r4,r10,27116
	ctx.r4.s64 = ctx.r10.s64 + 27116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005874;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26604
	ctx.r11.s64 = ctx.r11.s64 + 26604;
	// addi r3,r9,-12448
	ctx.r3.s64 = ctx.r9.s64 + -12448;
	// stw r11,-3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300588C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830058A0"))) PPC_WEAK_FUNC(sub_830058A0);
PPC_FUNC_IMPL(__imp__sub_830058A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3576
	ctx.r3.s64 = ctx.r31.s64 + -3576;
	// addi r4,r10,27668
	ctx.r4.s64 = ctx.r10.s64 + 27668;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830058DC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27144
	ctx.r11.s64 = ctx.r11.s64 + 27144;
	// addi r3,r9,-12424
	ctx.r3.s64 = ctx.r9.s64 + -12424;
	// stw r11,-3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830058F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005908"))) PPC_WEAK_FUNC(sub_83005908);
PPC_FUNC_IMPL(__imp__sub_83005908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-3544
	ctx.r3.s64 = ctx.r31.s64 + -3544;
	// addi r4,r10,28224
	ctx.r4.s64 = ctx.r10.s64 + 28224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83005944;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// addi r3,r9,-12400
	ctx.r3.s64 = ctx.r9.s64 + -12400;
	// stw r11,-3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300595C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005970"))) PPC_WEAK_FUNC(sub_83005970);
PPC_FUNC_IMPL(__imp__sub_83005970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3512
	ctx.r3.s64 = ctx.r31.s64 + -3512;
	// addi r4,r10,28756
	ctx.r4.s64 = ctx.r10.s64 + 28756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830059AC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28248
	ctx.r11.s64 = ctx.r11.s64 + 28248;
	// addi r3,r9,-12376
	ctx.r3.s64 = ctx.r9.s64 + -12376;
	// stw r11,-3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830059C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830059D8"))) PPC_WEAK_FUNC(sub_830059D8);
PPC_FUNC_IMPL(__imp__sub_830059D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3480
	ctx.r3.s64 = ctx.r31.s64 + -3480;
	// addi r4,r10,29292
	ctx.r4.s64 = ctx.r10.s64 + 29292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005A14;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28780
	ctx.r11.s64 = ctx.r11.s64 + 28780;
	// addi r3,r9,-12352
	ctx.r3.s64 = ctx.r9.s64 + -12352;
	// stw r11,-3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005A2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005A40"))) PPC_WEAK_FUNC(sub_83005A40);
PPC_FUNC_IMPL(__imp__sub_83005A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3448
	ctx.r3.s64 = ctx.r31.s64 + -3448;
	// addi r4,r10,29852
	ctx.r4.s64 = ctx.r10.s64 + 29852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005A7C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29316
	ctx.r11.s64 = ctx.r11.s64 + 29316;
	// addi r3,r9,-12328
	ctx.r3.s64 = ctx.r9.s64 + -12328;
	// stw r11,-3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005A94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005AA8"))) PPC_WEAK_FUNC(sub_83005AA8);
PPC_FUNC_IMPL(__imp__sub_83005AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3416
	ctx.r3.s64 = ctx.r31.s64 + -3416;
	// addi r4,r10,30388
	ctx.r4.s64 = ctx.r10.s64 + 30388;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005AE4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29880
	ctx.r11.s64 = ctx.r11.s64 + 29880;
	// addi r3,r9,-12304
	ctx.r3.s64 = ctx.r9.s64 + -12304;
	// stw r11,-3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005AFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005B10"))) PPC_WEAK_FUNC(sub_83005B10);
PPC_FUNC_IMPL(__imp__sub_83005B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3384
	ctx.r3.s64 = ctx.r31.s64 + -3384;
	// addi r4,r10,30992
	ctx.r4.s64 = ctx.r10.s64 + 30992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005B4C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30420
	ctx.r11.s64 = ctx.r11.s64 + 30420;
	// addi r3,r9,-12280
	ctx.r3.s64 = ctx.r9.s64 + -12280;
	// stw r11,-3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005B64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005B78"))) PPC_WEAK_FUNC(sub_83005B78);
PPC_FUNC_IMPL(__imp__sub_83005B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3352
	ctx.r3.s64 = ctx.r31.s64 + -3352;
	// addi r4,r10,31524
	ctx.r4.s64 = ctx.r10.s64 + 31524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005BB4;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31016
	ctx.r11.s64 = ctx.r11.s64 + 31016;
	// addi r3,r9,-12256
	ctx.r3.s64 = ctx.r9.s64 + -12256;
	// stw r11,-3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005BCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005BE0"))) PPC_WEAK_FUNC(sub_83005BE0);
PPC_FUNC_IMPL(__imp__sub_83005BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3320
	ctx.r3.s64 = ctx.r31.s64 + -3320;
	// addi r4,r10,32060
	ctx.r4.s64 = ctx.r10.s64 + 32060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005C1C;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31548
	ctx.r11.s64 = ctx.r11.s64 + 31548;
	// addi r3,r9,-12232
	ctx.r3.s64 = ctx.r9.s64 + -12232;
	// stw r11,-3320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005C34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005C48"))) PPC_WEAK_FUNC(sub_83005C48);
PPC_FUNC_IMPL(__imp__sub_83005C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3288
	ctx.r3.s64 = ctx.r31.s64 + -3288;
	// addi r4,r10,32624
	ctx.r4.s64 = ctx.r10.s64 + 32624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x83005C84;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32084
	ctx.r11.s64 = ctx.r11.s64 + 32084;
	// addi r3,r9,-12208
	ctx.r3.s64 = ctx.r9.s64 + -12208;
	// stw r11,-3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005C9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005CB0"))) PPC_WEAK_FUNC(sub_83005CB0);
PPC_FUNC_IMPL(__imp__sub_83005CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3256
	ctx.r3.s64 = ctx.r31.s64 + -3256;
	// addi r4,r10,-32360
	ctx.r4.s64 = ctx.r10.s64 + -32360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005CEC;
	sub_82B38290(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32648
	ctx.r11.s64 = ctx.r11.s64 + 32648;
	// addi r3,r9,-12184
	ctx.r3.s64 = ctx.r9.s64 + -12184;
	// stw r11,-3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005D04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005D18"))) PPC_WEAK_FUNC(sub_83005D18);
PPC_FUNC_IMPL(__imp__sub_83005D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3224
	ctx.r3.s64 = ctx.r31.s64 + -3224;
	// addi r4,r10,-31828
	ctx.r4.s64 = ctx.r10.s64 + -31828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005D54;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32336
	ctx.r11.s64 = ctx.r11.s64 + -32336;
	// addi r3,r9,-12160
	ctx.r3.s64 = ctx.r9.s64 + -12160;
	// stw r11,-3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005D6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005D80"))) PPC_WEAK_FUNC(sub_83005D80);
PPC_FUNC_IMPL(__imp__sub_83005D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3192
	ctx.r3.s64 = ctx.r31.s64 + -3192;
	// addi r4,r10,-31176
	ctx.r4.s64 = ctx.r10.s64 + -31176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005DBC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31800
	ctx.r11.s64 = ctx.r11.s64 + -31800;
	// addi r3,r9,-12136
	ctx.r3.s64 = ctx.r9.s64 + -12136;
	// stw r11,-3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005DD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005DE8"))) PPC_WEAK_FUNC(sub_83005DE8);
PPC_FUNC_IMPL(__imp__sub_83005DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3160
	ctx.r3.s64 = ctx.r31.s64 + -3160;
	// addi r4,r10,-30580
	ctx.r4.s64 = ctx.r10.s64 + -30580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005E24;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31144
	ctx.r11.s64 = ctx.r11.s64 + -31144;
	// addi r3,r9,-12112
	ctx.r3.s64 = ctx.r9.s64 + -12112;
	// stw r11,-3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005E3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005E50"))) PPC_WEAK_FUNC(sub_83005E50);
PPC_FUNC_IMPL(__imp__sub_83005E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3128
	ctx.r3.s64 = ctx.r31.s64 + -3128;
	// addi r4,r10,-30036
	ctx.r4.s64 = ctx.r10.s64 + -30036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83005E8C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30544
	ctx.r11.s64 = ctx.r11.s64 + -30544;
	// addi r3,r9,-12088
	ctx.r3.s64 = ctx.r9.s64 + -12088;
	// stw r11,-3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005EA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005EB8"))) PPC_WEAK_FUNC(sub_83005EB8);
PPC_FUNC_IMPL(__imp__sub_83005EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-3096
	ctx.r3.s64 = ctx.r31.s64 + -3096;
	// addi r4,r10,-29376
	ctx.r4.s64 = ctx.r10.s64 + -29376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6256
	ctx.r6.s64 = 6256;
	// bl 0x82b38290
	ctx.lr = 0x83005EF4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30000
	ctx.r11.s64 = ctx.r11.s64 + -30000;
	// addi r3,r9,-12064
	ctx.r3.s64 = ctx.r9.s64 + -12064;
	// stw r11,-3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005F0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005F20"))) PPC_WEAK_FUNC(sub_83005F20);
PPC_FUNC_IMPL(__imp__sub_83005F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-3064
	ctx.r3.s64 = ctx.r31.s64 + -3064;
	// addi r4,r10,-28844
	ctx.r4.s64 = ctx.r10.s64 + -28844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83005F5C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29356
	ctx.r11.s64 = ctx.r11.s64 + -29356;
	// addi r3,r9,-12040
	ctx.r3.s64 = ctx.r9.s64 + -12040;
	// stw r11,-3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005F74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005F88"))) PPC_WEAK_FUNC(sub_83005F88);
PPC_FUNC_IMPL(__imp__sub_83005F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-3032
	ctx.r3.s64 = ctx.r31.s64 + -3032;
	// addi r4,r10,-28316
	ctx.r4.s64 = ctx.r10.s64 + -28316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83005FC4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28824
	ctx.r11.s64 = ctx.r11.s64 + -28824;
	// addi r3,r9,-12016
	ctx.r3.s64 = ctx.r9.s64 + -12016;
	// stw r11,-3032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83005FDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83005FF0"))) PPC_WEAK_FUNC(sub_83005FF0);
PPC_FUNC_IMPL(__imp__sub_83005FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-3000
	ctx.r3.s64 = ctx.r31.s64 + -3000;
	// addi r4,r10,-27768
	ctx.r4.s64 = ctx.r10.s64 + -27768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300602C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28296
	ctx.r11.s64 = ctx.r11.s64 + -28296;
	// addi r3,r9,-11992
	ctx.r3.s64 = ctx.r9.s64 + -11992;
	// stw r11,-3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -3000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006044;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006058"))) PPC_WEAK_FUNC(sub_83006058);
PPC_FUNC_IMPL(__imp__sub_83006058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2968
	ctx.r3.s64 = ctx.r31.s64 + -2968;
	// addi r4,r10,-27236
	ctx.r4.s64 = ctx.r10.s64 + -27236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83006094;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27744
	ctx.r11.s64 = ctx.r11.s64 + -27744;
	// addi r3,r9,-11968
	ctx.r3.s64 = ctx.r9.s64 + -11968;
	// stw r11,-2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830060AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830060C0"))) PPC_WEAK_FUNC(sub_830060C0);
PPC_FUNC_IMPL(__imp__sub_830060C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2936
	ctx.r3.s64 = ctx.r31.s64 + -2936;
	// addi r4,r10,-26692
	ctx.r4.s64 = ctx.r10.s64 + -26692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830060FC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// addi r3,r9,-11944
	ctx.r3.s64 = ctx.r9.s64 + -11944;
	// stw r11,-2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006114;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006128"))) PPC_WEAK_FUNC(sub_83006128);
PPC_FUNC_IMPL(__imp__sub_83006128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-2904
	ctx.r3.s64 = ctx.r31.s64 + -2904;
	// addi r4,r10,-26140
	ctx.r4.s64 = ctx.r10.s64 + -26140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006164;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26672
	ctx.r11.s64 = ctx.r11.s64 + -26672;
	// addi r3,r9,-11920
	ctx.r3.s64 = ctx.r9.s64 + -11920;
	// stw r11,-2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300617C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006190"))) PPC_WEAK_FUNC(sub_83006190);
PPC_FUNC_IMPL(__imp__sub_83006190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-2872
	ctx.r3.s64 = ctx.r31.s64 + -2872;
	// addi r4,r10,-25608
	ctx.r4.s64 = ctx.r10.s64 + -25608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830061CC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26120
	ctx.r11.s64 = ctx.r11.s64 + -26120;
	// addi r3,r9,-11896
	ctx.r3.s64 = ctx.r9.s64 + -11896;
	// stw r11,-2872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830061E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830061F8"))) PPC_WEAK_FUNC(sub_830061F8);
PPC_FUNC_IMPL(__imp__sub_830061F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-2840
	ctx.r3.s64 = ctx.r31.s64 + -2840;
	// addi r4,r10,-25060
	ctx.r4.s64 = ctx.r10.s64 + -25060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83006234;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25572
	ctx.r11.s64 = ctx.r11.s64 + -25572;
	// addi r3,r9,-11872
	ctx.r3.s64 = ctx.r9.s64 + -11872;
	// stw r11,-2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300624C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006260"))) PPC_WEAK_FUNC(sub_83006260);
PPC_FUNC_IMPL(__imp__sub_83006260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2808
	ctx.r3.s64 = ctx.r31.s64 + -2808;
	// addi r4,r10,-24524
	ctx.r4.s64 = ctx.r10.s64 + -24524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300629C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25036
	ctx.r11.s64 = ctx.r11.s64 + -25036;
	// addi r3,r9,-11848
	ctx.r3.s64 = ctx.r9.s64 + -11848;
	// stw r11,-2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830062B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830062C8"))) PPC_WEAK_FUNC(sub_830062C8);
PPC_FUNC_IMPL(__imp__sub_830062C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2776
	ctx.r3.s64 = ctx.r31.s64 + -2776;
	// addi r4,r10,-23956
	ctx.r4.s64 = ctx.r10.s64 + -23956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x83006304;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24496
	ctx.r11.s64 = ctx.r11.s64 + -24496;
	// addi r3,r9,-11824
	ctx.r3.s64 = ctx.r9.s64 + -11824;
	// stw r11,-2776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300631C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006330"))) PPC_WEAK_FUNC(sub_83006330);
PPC_FUNC_IMPL(__imp__sub_83006330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2744
	ctx.r3.s64 = ctx.r31.s64 + -2744;
	// addi r4,r10,-23420
	ctx.r4.s64 = ctx.r10.s64 + -23420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300636C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
	// addi r3,r9,-11800
	ctx.r3.s64 = ctx.r9.s64 + -11800;
	// stw r11,-2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006384;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006398"))) PPC_WEAK_FUNC(sub_83006398);
PPC_FUNC_IMPL(__imp__sub_83006398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2712
	ctx.r3.s64 = ctx.r31.s64 + -2712;
	// addi r4,r10,-22892
	ctx.r4.s64 = ctx.r10.s64 + -22892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830063D4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// addi r3,r9,-11776
	ctx.r3.s64 = ctx.r9.s64 + -11776;
	// stw r11,-2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830063EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006400"))) PPC_WEAK_FUNC(sub_83006400);
PPC_FUNC_IMPL(__imp__sub_83006400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2680
	ctx.r3.s64 = ctx.r31.s64 + -2680;
	// addi r4,r10,-22356
	ctx.r4.s64 = ctx.r10.s64 + -22356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300643C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22868
	ctx.r11.s64 = ctx.r11.s64 + -22868;
	// addi r3,r9,-11752
	ctx.r3.s64 = ctx.r9.s64 + -11752;
	// stw r11,-2680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006454;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006468"))) PPC_WEAK_FUNC(sub_83006468);
PPC_FUNC_IMPL(__imp__sub_83006468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-2648
	ctx.r3.s64 = ctx.r31.s64 + -2648;
	// addi r4,r10,-21792
	ctx.r4.s64 = ctx.r10.s64 + -21792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6080
	ctx.r6.s64 = 6080;
	// bl 0x82b38290
	ctx.lr = 0x830064A4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22328
	ctx.r11.s64 = ctx.r11.s64 + -22328;
	// addi r3,r9,-11728
	ctx.r3.s64 = ctx.r9.s64 + -11728;
	// stw r11,-2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830064BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830064D0"))) PPC_WEAK_FUNC(sub_830064D0);
PPC_FUNC_IMPL(__imp__sub_830064D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2616
	ctx.r3.s64 = ctx.r31.s64 + -2616;
	// addi r4,r10,-21248
	ctx.r4.s64 = ctx.r10.s64 + -21248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300650C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21772
	ctx.r11.s64 = ctx.r11.s64 + -21772;
	// addi r3,r9,-11704
	ctx.r3.s64 = ctx.r9.s64 + -11704;
	// stw r11,-2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006524;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006538"))) PPC_WEAK_FUNC(sub_83006538);
PPC_FUNC_IMPL(__imp__sub_83006538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2584
	ctx.r3.s64 = ctx.r31.s64 + -2584;
	// addi r4,r10,-20724
	ctx.r4.s64 = ctx.r10.s64 + -20724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83006574;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21232
	ctx.r11.s64 = ctx.r11.s64 + -21232;
	// addi r3,r9,-11680
	ctx.r3.s64 = ctx.r9.s64 + -11680;
	// stw r11,-2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300658C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830065A0"))) PPC_WEAK_FUNC(sub_830065A0);
PPC_FUNC_IMPL(__imp__sub_830065A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-2552
	ctx.r3.s64 = ctx.r31.s64 + -2552;
	// addi r4,r10,-20132
	ctx.r4.s64 = ctx.r10.s64 + -20132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// bl 0x82b38290
	ctx.lr = 0x830065DC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20700
	ctx.r11.s64 = ctx.r11.s64 + -20700;
	// addi r3,r9,-11656
	ctx.r3.s64 = ctx.r9.s64 + -11656;
	// stw r11,-2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830065F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006608"))) PPC_WEAK_FUNC(sub_83006608);
PPC_FUNC_IMPL(__imp__sub_83006608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-2520
	ctx.r3.s64 = ctx.r31.s64 + -2520;
	// addi r4,r10,-19596
	ctx.r4.s64 = ctx.r10.s64 + -19596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006644;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20104
	ctx.r11.s64 = ctx.r11.s64 + -20104;
	// addi r3,r9,-11632
	ctx.r3.s64 = ctx.r9.s64 + -11632;
	// stw r11,-2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300665C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006670"))) PPC_WEAK_FUNC(sub_83006670);
PPC_FUNC_IMPL(__imp__sub_83006670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2488
	ctx.r3.s64 = ctx.r31.s64 + -2488;
	// addi r4,r10,-18988
	ctx.r4.s64 = ctx.r10.s64 + -18988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830066AC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19568
	ctx.r11.s64 = ctx.r11.s64 + -19568;
	// addi r3,r9,-11608
	ctx.r3.s64 = ctx.r9.s64 + -11608;
	// stw r11,-2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830066C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830066D8"))) PPC_WEAK_FUNC(sub_830066D8);
PPC_FUNC_IMPL(__imp__sub_830066D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2456
	ctx.r3.s64 = ctx.r31.s64 + -2456;
	// addi r4,r10,-18452
	ctx.r4.s64 = ctx.r10.s64 + -18452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006714;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18964
	ctx.r11.s64 = ctx.r11.s64 + -18964;
	// addi r3,r9,-11584
	ctx.r3.s64 = ctx.r9.s64 + -11584;
	// stw r11,-2456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300672C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006740"))) PPC_WEAK_FUNC(sub_83006740);
PPC_FUNC_IMPL(__imp__sub_83006740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2424
	ctx.r3.s64 = ctx.r31.s64 + -2424;
	// addi r4,r10,-17916
	ctx.r4.s64 = ctx.r10.s64 + -17916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300677C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18424
	ctx.r11.s64 = ctx.r11.s64 + -18424;
	// addi r3,r9,-11560
	ctx.r3.s64 = ctx.r9.s64 + -11560;
	// stw r11,-2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830067A8"))) PPC_WEAK_FUNC(sub_830067A8);
PPC_FUNC_IMPL(__imp__sub_830067A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2392
	ctx.r3.s64 = ctx.r31.s64 + -2392;
	// addi r4,r10,-17348
	ctx.r4.s64 = ctx.r10.s64 + -17348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830067E4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17896
	ctx.r11.s64 = ctx.r11.s64 + -17896;
	// addi r3,r9,-11536
	ctx.r3.s64 = ctx.r9.s64 + -11536;
	// stw r11,-2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830067FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006810"))) PPC_WEAK_FUNC(sub_83006810);
PPC_FUNC_IMPL(__imp__sub_83006810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2360
	ctx.r3.s64 = ctx.r31.s64 + -2360;
	// addi r4,r10,-16812
	ctx.r4.s64 = ctx.r10.s64 + -16812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300684C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17324
	ctx.r11.s64 = ctx.r11.s64 + -17324;
	// addi r3,r9,-11512
	ctx.r3.s64 = ctx.r9.s64 + -11512;
	// stw r11,-2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006864;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006878"))) PPC_WEAK_FUNC(sub_83006878);
PPC_FUNC_IMPL(__imp__sub_83006878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2328
	ctx.r3.s64 = ctx.r31.s64 + -2328;
	// addi r4,r10,-16284
	ctx.r4.s64 = ctx.r10.s64 + -16284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830068B4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16792
	ctx.r11.s64 = ctx.r11.s64 + -16792;
	// addi r3,r9,-11488
	ctx.r3.s64 = ctx.r9.s64 + -11488;
	// stw r11,-2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830068CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830068E0"))) PPC_WEAK_FUNC(sub_830068E0);
PPC_FUNC_IMPL(__imp__sub_830068E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2296
	ctx.r3.s64 = ctx.r31.s64 + -2296;
	// addi r4,r10,-15748
	ctx.r4.s64 = ctx.r10.s64 + -15748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300691C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16260
	ctx.r11.s64 = ctx.r11.s64 + -16260;
	// addi r3,r9,-11464
	ctx.r3.s64 = ctx.r9.s64 + -11464;
	// stw r11,-2296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006934;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006948"))) PPC_WEAK_FUNC(sub_83006948);
PPC_FUNC_IMPL(__imp__sub_83006948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2264
	ctx.r3.s64 = ctx.r31.s64 + -2264;
	// addi r4,r10,-15204
	ctx.r4.s64 = ctx.r10.s64 + -15204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006984;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15712
	ctx.r11.s64 = ctx.r11.s64 + -15712;
	// addi r3,r9,-11440
	ctx.r3.s64 = ctx.r9.s64 + -11440;
	// stw r11,-2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300699C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830069B0"))) PPC_WEAK_FUNC(sub_830069B0);
PPC_FUNC_IMPL(__imp__sub_830069B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2232
	ctx.r3.s64 = ctx.r31.s64 + -2232;
	// addi r4,r10,-14612
	ctx.r4.s64 = ctx.r10.s64 + -14612;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830069EC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15164
	ctx.r11.s64 = ctx.r11.s64 + -15164;
	// addi r3,r9,-11416
	ctx.r3.s64 = ctx.r9.s64 + -11416;
	// stw r11,-2232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006A04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006A18"))) PPC_WEAK_FUNC(sub_83006A18);
PPC_FUNC_IMPL(__imp__sub_83006A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2200
	ctx.r3.s64 = ctx.r31.s64 + -2200;
	// addi r4,r10,-14076
	ctx.r4.s64 = ctx.r10.s64 + -14076;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006A54;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14588
	ctx.r11.s64 = ctx.r11.s64 + -14588;
	// addi r3,r9,-11392
	ctx.r3.s64 = ctx.r9.s64 + -11392;
	// stw r11,-2200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006A6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006A80"))) PPC_WEAK_FUNC(sub_83006A80);
PPC_FUNC_IMPL(__imp__sub_83006A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2168
	ctx.r3.s64 = ctx.r31.s64 + -2168;
	// addi r4,r10,-13540
	ctx.r4.s64 = ctx.r10.s64 + -13540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006ABC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14048
	ctx.r11.s64 = ctx.r11.s64 + -14048;
	// addi r3,r9,-11368
	ctx.r3.s64 = ctx.r9.s64 + -11368;
	// stw r11,-2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006AD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006AE8"))) PPC_WEAK_FUNC(sub_83006AE8);
PPC_FUNC_IMPL(__imp__sub_83006AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2136
	ctx.r3.s64 = ctx.r31.s64 + -2136;
	// addi r4,r10,-13012
	ctx.r4.s64 = ctx.r10.s64 + -13012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006B24;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13520
	ctx.r11.s64 = ctx.r11.s64 + -13520;
	// addi r3,r9,-11344
	ctx.r3.s64 = ctx.r9.s64 + -11344;
	// stw r11,-2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006B3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006B50"))) PPC_WEAK_FUNC(sub_83006B50);
PPC_FUNC_IMPL(__imp__sub_83006B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2104
	ctx.r3.s64 = ctx.r31.s64 + -2104;
	// addi r4,r10,-12476
	ctx.r4.s64 = ctx.r10.s64 + -12476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006B8C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12984
	ctx.r11.s64 = ctx.r11.s64 + -12984;
	// addi r3,r9,-11320
	ctx.r3.s64 = ctx.r9.s64 + -11320;
	// stw r11,-2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006BA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006BB8"))) PPC_WEAK_FUNC(sub_83006BB8);
PPC_FUNC_IMPL(__imp__sub_83006BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2072
	ctx.r3.s64 = ctx.r31.s64 + -2072;
	// addi r4,r10,-11940
	ctx.r4.s64 = ctx.r10.s64 + -11940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006BF4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12452
	ctx.r11.s64 = ctx.r11.s64 + -12452;
	// addi r3,r9,-11296
	ctx.r3.s64 = ctx.r9.s64 + -11296;
	// stw r11,-2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006C0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006C20"))) PPC_WEAK_FUNC(sub_83006C20);
PPC_FUNC_IMPL(__imp__sub_83006C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2040
	ctx.r3.s64 = ctx.r31.s64 + -2040;
	// addi r4,r10,-11396
	ctx.r4.s64 = ctx.r10.s64 + -11396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006C5C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11908
	ctx.r11.s64 = ctx.r11.s64 + -11908;
	// addi r3,r9,-11272
	ctx.r3.s64 = ctx.r9.s64 + -11272;
	// stw r11,-2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006C74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006C88"))) PPC_WEAK_FUNC(sub_83006C88);
PPC_FUNC_IMPL(__imp__sub_83006C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-2008
	ctx.r3.s64 = ctx.r31.s64 + -2008;
	// addi r4,r10,-10852
	ctx.r4.s64 = ctx.r10.s64 + -10852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006CC4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11364
	ctx.r11.s64 = ctx.r11.s64 + -11364;
	// addi r3,r9,-11248
	ctx.r3.s64 = ctx.r9.s64 + -11248;
	// stw r11,-2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -2008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006CDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006CF0"))) PPC_WEAK_FUNC(sub_83006CF0);
PPC_FUNC_IMPL(__imp__sub_83006CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1976
	ctx.r3.s64 = ctx.r31.s64 + -1976;
	// addi r4,r10,-10240
	ctx.r4.s64 = ctx.r10.s64 + -10240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83006D2C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10820
	ctx.r11.s64 = ctx.r11.s64 + -10820;
	// addi r3,r9,-11224
	ctx.r3.s64 = ctx.r9.s64 + -11224;
	// stw r11,-1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006D44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006D58"))) PPC_WEAK_FUNC(sub_83006D58);
PPC_FUNC_IMPL(__imp__sub_83006D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1944
	ctx.r3.s64 = ctx.r31.s64 + -1944;
	// addi r4,r10,-9700
	ctx.r4.s64 = ctx.r10.s64 + -9700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006D94;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10216
	ctx.r11.s64 = ctx.r11.s64 + -10216;
	// addi r3,r9,-11200
	ctx.r3.s64 = ctx.r9.s64 + -11200;
	// stw r11,-1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006DAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006DC0"))) PPC_WEAK_FUNC(sub_83006DC0);
PPC_FUNC_IMPL(__imp__sub_83006DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1912
	ctx.r3.s64 = ctx.r31.s64 + -1912;
	// addi r4,r10,-9156
	ctx.r4.s64 = ctx.r10.s64 + -9156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83006DFC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9676
	ctx.r11.s64 = ctx.r11.s64 + -9676;
	// addi r3,r9,-11176
	ctx.r3.s64 = ctx.r9.s64 + -11176;
	// stw r11,-1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006E14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006E28"))) PPC_WEAK_FUNC(sub_83006E28);
PPC_FUNC_IMPL(__imp__sub_83006E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1880
	ctx.r3.s64 = ctx.r31.s64 + -1880;
	// addi r4,r10,-8580
	ctx.r4.s64 = ctx.r10.s64 + -8580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6608
	ctx.r6.s64 = 6608;
	// bl 0x82b38290
	ctx.lr = 0x83006E64;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9128
	ctx.r11.s64 = ctx.r11.s64 + -9128;
	// addi r3,r9,-11152
	ctx.r3.s64 = ctx.r9.s64 + -11152;
	// stw r11,-1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006E7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006E90"))) PPC_WEAK_FUNC(sub_83006E90);
PPC_FUNC_IMPL(__imp__sub_83006E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1848
	ctx.r3.s64 = ctx.r31.s64 + -1848;
	// addi r4,r10,-8036
	ctx.r4.s64 = ctx.r10.s64 + -8036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6416
	ctx.r6.s64 = 6416;
	// bl 0x82b38290
	ctx.lr = 0x83006ECC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8548
	ctx.r11.s64 = ctx.r11.s64 + -8548;
	// addi r3,r9,-11128
	ctx.r3.s64 = ctx.r9.s64 + -11128;
	// stw r11,-1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006EE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006EF8"))) PPC_WEAK_FUNC(sub_83006EF8);
PPC_FUNC_IMPL(__imp__sub_83006EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1816
	ctx.r3.s64 = ctx.r31.s64 + -1816;
	// addi r4,r10,-7500
	ctx.r4.s64 = ctx.r10.s64 + -7500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83006F34;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8012
	ctx.r11.s64 = ctx.r11.s64 + -8012;
	// addi r3,r9,-11104
	ctx.r3.s64 = ctx.r9.s64 + -11104;
	// stw r11,-1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006F4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006F60"))) PPC_WEAK_FUNC(sub_83006F60);
PPC_FUNC_IMPL(__imp__sub_83006F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1784
	ctx.r3.s64 = ctx.r31.s64 + -1784;
	// addi r4,r10,-6944
	ctx.r4.s64 = ctx.r10.s64 + -6944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83006F9C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7480
	ctx.r11.s64 = ctx.r11.s64 + -7480;
	// addi r3,r9,-11080
	ctx.r3.s64 = ctx.r9.s64 + -11080;
	// stw r11,-1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83006FB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83006FC8"))) PPC_WEAK_FUNC(sub_83006FC8);
PPC_FUNC_IMPL(__imp__sub_83006FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1752
	ctx.r3.s64 = ctx.r31.s64 + -1752;
	// addi r4,r10,-6384
	ctx.r4.s64 = ctx.r10.s64 + -6384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x83007004;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6924
	ctx.r11.s64 = ctx.r11.s64 + -6924;
	// addi r3,r9,-11056
	ctx.r3.s64 = ctx.r9.s64 + -11056;
	// stw r11,-1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300701C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007030"))) PPC_WEAK_FUNC(sub_83007030);
PPC_FUNC_IMPL(__imp__sub_83007030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1720
	ctx.r3.s64 = ctx.r31.s64 + -1720;
	// addi r4,r10,-5844
	ctx.r4.s64 = ctx.r10.s64 + -5844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300706C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6356
	ctx.r11.s64 = ctx.r11.s64 + -6356;
	// addi r3,r9,-11032
	ctx.r3.s64 = ctx.r9.s64 + -11032;
	// stw r11,-1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007084;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007098"))) PPC_WEAK_FUNC(sub_83007098);
PPC_FUNC_IMPL(__imp__sub_83007098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1688
	ctx.r3.s64 = ctx.r31.s64 + -1688;
	// addi r4,r10,-5228
	ctx.r4.s64 = ctx.r10.s64 + -5228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830070D4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5808
	ctx.r11.s64 = ctx.r11.s64 + -5808;
	// addi r3,r9,-11008
	ctx.r3.s64 = ctx.r9.s64 + -11008;
	// stw r11,-1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830070EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007100"))) PPC_WEAK_FUNC(sub_83007100);
PPC_FUNC_IMPL(__imp__sub_83007100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1656
	ctx.r3.s64 = ctx.r31.s64 + -1656;
	// addi r4,r10,-4692
	ctx.r4.s64 = ctx.r10.s64 + -4692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300713C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5204
	ctx.r11.s64 = ctx.r11.s64 + -5204;
	// addi r3,r9,-10984
	ctx.r3.s64 = ctx.r9.s64 + -10984;
	// stw r11,-1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007154;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007168"))) PPC_WEAK_FUNC(sub_83007168);
PPC_FUNC_IMPL(__imp__sub_83007168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1624
	ctx.r3.s64 = ctx.r31.s64 + -1624;
	// addi r4,r10,-4108
	ctx.r4.s64 = ctx.r10.s64 + -4108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830071A4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4668
	ctx.r11.s64 = ctx.r11.s64 + -4668;
	// addi r3,r9,-10960
	ctx.r3.s64 = ctx.r9.s64 + -10960;
	// stw r11,-1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830071BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830071D0"))) PPC_WEAK_FUNC(sub_830071D0);
PPC_FUNC_IMPL(__imp__sub_830071D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1592
	ctx.r3.s64 = ctx.r31.s64 + -1592;
	// addi r4,r10,-3556
	ctx.r4.s64 = ctx.r10.s64 + -3556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6096
	ctx.r6.s64 = 6096;
	// bl 0x82b38290
	ctx.lr = 0x8300720C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
	// addi r3,r9,-10936
	ctx.r3.s64 = ctx.r9.s64 + -10936;
	// stw r11,-1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007224;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007238"))) PPC_WEAK_FUNC(sub_83007238);
PPC_FUNC_IMPL(__imp__sub_83007238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1560
	ctx.r3.s64 = ctx.r31.s64 + -1560;
	// addi r4,r10,-3020
	ctx.r4.s64 = ctx.r10.s64 + -3020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6096
	ctx.r6.s64 = 6096;
	// bl 0x82b38290
	ctx.lr = 0x83007274;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3528
	ctx.r11.s64 = ctx.r11.s64 + -3528;
	// addi r3,r9,-10912
	ctx.r3.s64 = ctx.r9.s64 + -10912;
	// stw r11,-1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300728C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830072A0"))) PPC_WEAK_FUNC(sub_830072A0);
PPC_FUNC_IMPL(__imp__sub_830072A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1528
	ctx.r3.s64 = ctx.r31.s64 + -1528;
	// addi r4,r10,-2432
	ctx.r4.s64 = ctx.r10.s64 + -2432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6384
	ctx.r6.s64 = 6384;
	// bl 0x82b38290
	ctx.lr = 0x830072DC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2992
	ctx.r11.s64 = ctx.r11.s64 + -2992;
	// addi r3,r9,-10888
	ctx.r3.s64 = ctx.r9.s64 + -10888;
	// stw r11,-1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830072F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007308"))) PPC_WEAK_FUNC(sub_83007308);
PPC_FUNC_IMPL(__imp__sub_83007308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1496
	ctx.r3.s64 = ctx.r31.s64 + -1496;
	// addi r4,r10,-1652
	ctx.r4.s64 = ctx.r10.s64 + -1652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,7264
	ctx.r6.s64 = 7264;
	// bl 0x82b38290
	ctx.lr = 0x83007344;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2316
	ctx.r11.s64 = ctx.r11.s64 + -2316;
	// addi r3,r9,-10864
	ctx.r3.s64 = ctx.r9.s64 + -10864;
	// stw r11,-1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300735C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007370"))) PPC_WEAK_FUNC(sub_83007370);
PPC_FUNC_IMPL(__imp__sub_83007370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1464
	ctx.r3.s64 = ctx.r31.s64 + -1464;
	// addi r4,r10,-1072
	ctx.r4.s64 = ctx.r10.s64 + -1072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6256
	ctx.r6.s64 = 6256;
	// bl 0x82b38290
	ctx.lr = 0x830073AC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1628
	ctx.r11.s64 = ctx.r11.s64 + -1628;
	// addi r3,r9,-10840
	ctx.r3.s64 = ctx.r9.s64 + -10840;
	// stw r11,-1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830073C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830073D8"))) PPC_WEAK_FUNC(sub_830073D8);
PPC_FUNC_IMPL(__imp__sub_830073D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1432
	ctx.r3.s64 = ctx.r31.s64 + -1432;
	// addi r4,r10,-532
	ctx.r4.s64 = ctx.r10.s64 + -532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007414;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1044
	ctx.r11.s64 = ctx.r11.s64 + -1044;
	// addi r3,r9,-10816
	ctx.r3.s64 = ctx.r9.s64 + -10816;
	// stw r11,-1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300742C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007440"))) PPC_WEAK_FUNC(sub_83007440);
PPC_FUNC_IMPL(__imp__sub_83007440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-1400
	ctx.r3.s64 = ctx.r31.s64 + -1400;
	// addi r4,r10,92
	ctx.r4.s64 = ctx.r10.s64 + 92;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300747C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-500
	ctx.r11.s64 = ctx.r11.s64 + -500;
	// addi r3,r9,-10792
	ctx.r3.s64 = ctx.r9.s64 + -10792;
	// stw r11,-1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007494;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830074A8"))) PPC_WEAK_FUNC(sub_830074A8);
PPC_FUNC_IMPL(__imp__sub_830074A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-1368
	ctx.r3.s64 = ctx.r31.s64 + -1368;
	// addi r4,r10,632
	ctx.r4.s64 = ctx.r10.s64 + 632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830074E4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// addi r3,r9,-10768
	ctx.r3.s64 = ctx.r9.s64 + -10768;
	// stw r11,-1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830074FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007510"))) PPC_WEAK_FUNC(sub_83007510);
PPC_FUNC_IMPL(__imp__sub_83007510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1336
	ctx.r3.s64 = ctx.r31.s64 + -1336;
	// addi r4,r10,1164
	ctx.r4.s64 = ctx.r10.s64 + 1164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300754C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,656
	ctx.r11.s64 = ctx.r11.s64 + 656;
	// addi r3,r9,-10744
	ctx.r3.s64 = ctx.r9.s64 + -10744;
	// stw r11,-1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007564;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007578"))) PPC_WEAK_FUNC(sub_83007578);
PPC_FUNC_IMPL(__imp__sub_83007578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1304
	ctx.r3.s64 = ctx.r31.s64 + -1304;
	// addi r4,r10,1700
	ctx.r4.s64 = ctx.r10.s64 + 1700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830075B4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1192
	ctx.r11.s64 = ctx.r11.s64 + 1192;
	// addi r3,r9,-10720
	ctx.r3.s64 = ctx.r9.s64 + -10720;
	// stw r11,-1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830075CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830075E0"))) PPC_WEAK_FUNC(sub_830075E0);
PPC_FUNC_IMPL(__imp__sub_830075E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1272
	ctx.r3.s64 = ctx.r31.s64 + -1272;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x8300761C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1724
	ctx.r11.s64 = ctx.r11.s64 + 1724;
	// addi r3,r9,-10696
	ctx.r3.s64 = ctx.r9.s64 + -10696;
	// stw r11,-1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007634;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007648"))) PPC_WEAK_FUNC(sub_83007648);
PPC_FUNC_IMPL(__imp__sub_83007648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1240
	ctx.r3.s64 = ctx.r31.s64 + -1240;
	// addi r4,r10,2832
	ctx.r4.s64 = ctx.r10.s64 + 2832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007684;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2320
	ctx.r11.s64 = ctx.r11.s64 + 2320;
	// addi r3,r9,-10672
	ctx.r3.s64 = ctx.r9.s64 + -10672;
	// stw r11,-1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300769C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830076B0"))) PPC_WEAK_FUNC(sub_830076B0);
PPC_FUNC_IMPL(__imp__sub_830076B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1208
	ctx.r3.s64 = ctx.r31.s64 + -1208;
	// addi r4,r10,3364
	ctx.r4.s64 = ctx.r10.s64 + 3364;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x830076EC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2852
	ctx.r11.s64 = ctx.r11.s64 + 2852;
	// addi r3,r9,-10648
	ctx.r3.s64 = ctx.r9.s64 + -10648;
	// stw r11,-1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007704;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007718"))) PPC_WEAK_FUNC(sub_83007718);
PPC_FUNC_IMPL(__imp__sub_83007718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1176
	ctx.r3.s64 = ctx.r31.s64 + -1176;
	// addi r4,r10,3944
	ctx.r4.s64 = ctx.r10.s64 + 3944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83007754;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3384
	ctx.r11.s64 = ctx.r11.s64 + 3384;
	// addi r3,r9,-10624
	ctx.r3.s64 = ctx.r9.s64 + -10624;
	// stw r11,-1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300776C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007780"))) PPC_WEAK_FUNC(sub_83007780);
PPC_FUNC_IMPL(__imp__sub_83007780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-1144
	ctx.r3.s64 = ctx.r31.s64 + -1144;
	// addi r4,r10,4480
	ctx.r4.s64 = ctx.r10.s64 + 4480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830077BC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3968
	ctx.r11.s64 = ctx.r11.s64 + 3968;
	// addi r3,r9,-10600
	ctx.r3.s64 = ctx.r9.s64 + -10600;
	// stw r11,-1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830077D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830077E8"))) PPC_WEAK_FUNC(sub_830077E8);
PPC_FUNC_IMPL(__imp__sub_830077E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1112
	ctx.r3.s64 = ctx.r31.s64 + -1112;
	// addi r4,r10,5012
	ctx.r4.s64 = ctx.r10.s64 + 5012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007824;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4500
	ctx.r11.s64 = ctx.r11.s64 + 4500;
	// addi r3,r9,-10576
	ctx.r3.s64 = ctx.r9.s64 + -10576;
	// stw r11,-1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300783C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007850"))) PPC_WEAK_FUNC(sub_83007850);
PPC_FUNC_IMPL(__imp__sub_83007850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1080
	ctx.r3.s64 = ctx.r31.s64 + -1080;
	// addi r4,r10,5540
	ctx.r4.s64 = ctx.r10.s64 + 5540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300788C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5032
	ctx.r11.s64 = ctx.r11.s64 + 5032;
	// addi r3,r9,-10552
	ctx.r3.s64 = ctx.r9.s64 + -10552;
	// stw r11,-1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830078A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830078B8"))) PPC_WEAK_FUNC(sub_830078B8);
PPC_FUNC_IMPL(__imp__sub_830078B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1048
	ctx.r3.s64 = ctx.r31.s64 + -1048;
	// addi r4,r10,6076
	ctx.r4.s64 = ctx.r10.s64 + 6076;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830078F4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5568
	ctx.r11.s64 = ctx.r11.s64 + 5568;
	// addi r3,r9,-10528
	ctx.r3.s64 = ctx.r9.s64 + -10528;
	// stw r11,-1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300790C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007920"))) PPC_WEAK_FUNC(sub_83007920);
PPC_FUNC_IMPL(__imp__sub_83007920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-1016
	ctx.r3.s64 = ctx.r31.s64 + -1016;
	// addi r4,r10,6620
	ctx.r4.s64 = ctx.r10.s64 + 6620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300795C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6108
	ctx.r11.s64 = ctx.r11.s64 + 6108;
	// addi r3,r9,-10504
	ctx.r3.s64 = ctx.r9.s64 + -10504;
	// stw r11,-1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007974;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007988"))) PPC_WEAK_FUNC(sub_83007988);
PPC_FUNC_IMPL(__imp__sub_83007988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-984
	ctx.r3.s64 = ctx.r31.s64 + -984;
	// addi r4,r10,7156
	ctx.r4.s64 = ctx.r10.s64 + 7156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830079C4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6648
	ctx.r11.s64 = ctx.r11.s64 + 6648;
	// addi r3,r9,-10480
	ctx.r3.s64 = ctx.r9.s64 + -10480;
	// stw r11,-984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830079DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830079F0"))) PPC_WEAK_FUNC(sub_830079F0);
PPC_FUNC_IMPL(__imp__sub_830079F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-952
	ctx.r3.s64 = ctx.r31.s64 + -952;
	// addi r4,r10,7692
	ctx.r4.s64 = ctx.r10.s64 + 7692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007A2C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7180
	ctx.r11.s64 = ctx.r11.s64 + 7180;
	// addi r3,r9,-10456
	ctx.r3.s64 = ctx.r9.s64 + -10456;
	// stw r11,-952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007A44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007A58"))) PPC_WEAK_FUNC(sub_83007A58);
PPC_FUNC_IMPL(__imp__sub_83007A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-920
	ctx.r3.s64 = ctx.r31.s64 + -920;
	// addi r4,r10,8236
	ctx.r4.s64 = ctx.r10.s64 + 8236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007A94;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7724
	ctx.r11.s64 = ctx.r11.s64 + 7724;
	// addi r3,r9,-10432
	ctx.r3.s64 = ctx.r9.s64 + -10432;
	// stw r11,-920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007AAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007AC0"))) PPC_WEAK_FUNC(sub_83007AC0);
PPC_FUNC_IMPL(__imp__sub_83007AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-888
	ctx.r3.s64 = ctx.r31.s64 + -888;
	// addi r4,r10,8800
	ctx.r4.s64 = ctx.r10.s64 + 8800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007AFC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8260
	ctx.r11.s64 = ctx.r11.s64 + 8260;
	// addi r3,r9,-10408
	ctx.r3.s64 = ctx.r9.s64 + -10408;
	// stw r11,-888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007B14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007B28"))) PPC_WEAK_FUNC(sub_83007B28);
PPC_FUNC_IMPL(__imp__sub_83007B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-856
	ctx.r3.s64 = ctx.r31.s64 + -856;
	// addi r4,r10,9332
	ctx.r4.s64 = ctx.r10.s64 + 9332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007B64;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8824
	ctx.r11.s64 = ctx.r11.s64 + 8824;
	// addi r3,r9,-10384
	ctx.r3.s64 = ctx.r9.s64 + -10384;
	// stw r11,-856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007B7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007B90"))) PPC_WEAK_FUNC(sub_83007B90);
PPC_FUNC_IMPL(__imp__sub_83007B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-824
	ctx.r3.s64 = ctx.r31.s64 + -824;
	// addi r4,r10,9868
	ctx.r4.s64 = ctx.r10.s64 + 9868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007BCC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9356
	ctx.r11.s64 = ctx.r11.s64 + 9356;
	// addi r3,r9,-10360
	ctx.r3.s64 = ctx.r9.s64 + -10360;
	// stw r11,-824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007BE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007BF8"))) PPC_WEAK_FUNC(sub_83007BF8);
PPC_FUNC_IMPL(__imp__sub_83007BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-792
	ctx.r3.s64 = ctx.r31.s64 + -792;
	// addi r4,r10,10420
	ctx.r4.s64 = ctx.r10.s64 + 10420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6064
	ctx.r6.s64 = 6064;
	// bl 0x82b38290
	ctx.lr = 0x83007C34;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9888
	ctx.r11.s64 = ctx.r11.s64 + 9888;
	// addi r3,r9,-10336
	ctx.r3.s64 = ctx.r9.s64 + -10336;
	// stw r11,-792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007C4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007C60"))) PPC_WEAK_FUNC(sub_83007C60);
PPC_FUNC_IMPL(__imp__sub_83007C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,-760
	ctx.r3.s64 = ctx.r31.s64 + -760;
	// addi r4,r10,10956
	ctx.r4.s64 = ctx.r10.s64 + 10956;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83007C9C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10444
	ctx.r11.s64 = ctx.r11.s64 + 10444;
	// addi r3,r9,-10312
	ctx.r3.s64 = ctx.r9.s64 + -10312;
	// stw r11,-760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007CB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007CC8"))) PPC_WEAK_FUNC(sub_83007CC8);
PPC_FUNC_IMPL(__imp__sub_83007CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-728
	ctx.r3.s64 = ctx.r31.s64 + -728;
	// addi r4,r10,11496
	ctx.r4.s64 = ctx.r10.s64 + 11496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007D04;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// addi r3,r9,-10288
	ctx.r3.s64 = ctx.r9.s64 + -10288;
	// stw r11,-728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007D1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007D30"))) PPC_WEAK_FUNC(sub_83007D30);
PPC_FUNC_IMPL(__imp__sub_83007D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-696
	ctx.r3.s64 = ctx.r31.s64 + -696;
	// addi r4,r10,12028
	ctx.r4.s64 = ctx.r10.s64 + 12028;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007D6C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11520
	ctx.r11.s64 = ctx.r11.s64 + 11520;
	// addi r3,r9,-10264
	ctx.r3.s64 = ctx.r9.s64 + -10264;
	// stw r11,-696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007D84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007D98"))) PPC_WEAK_FUNC(sub_83007D98);
PPC_FUNC_IMPL(__imp__sub_83007D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-664
	ctx.r3.s64 = ctx.r31.s64 + -664;
	// addi r4,r10,12572
	ctx.r4.s64 = ctx.r10.s64 + 12572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007DD4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12060
	ctx.r11.s64 = ctx.r11.s64 + 12060;
	// addi r3,r9,-10240
	ctx.r3.s64 = ctx.r9.s64 + -10240;
	// stw r11,-664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007DEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007E00"))) PPC_WEAK_FUNC(sub_83007E00);
PPC_FUNC_IMPL(__imp__sub_83007E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9464
	ctx.r5.s64 = ctx.r11.s64 + -9464;
	// addi r3,r31,-632
	ctx.r3.s64 = ctx.r31.s64 + -632;
	// addi r4,r10,13140
	ctx.r4.s64 = ctx.r10.s64 + 13140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83007E3C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12604
	ctx.r11.s64 = ctx.r11.s64 + 12604;
	// addi r3,r9,-10216
	ctx.r3.s64 = ctx.r9.s64 + -10216;
	// stw r11,-632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007E54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007E68"))) PPC_WEAK_FUNC(sub_83007E68);
PPC_FUNC_IMPL(__imp__sub_83007E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-600
	ctx.r3.s64 = ctx.r31.s64 + -600;
	// addi r4,r10,13728
	ctx.r4.s64 = ctx.r10.s64 + 13728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6400
	ctx.r6.s64 = 6400;
	// bl 0x82b38290
	ctx.lr = 0x83007EA4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13164
	ctx.r11.s64 = ctx.r11.s64 + 13164;
	// addi r3,r9,-10192
	ctx.r3.s64 = ctx.r9.s64 + -10192;
	// stw r11,-600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007EBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007ED0"))) PPC_WEAK_FUNC(sub_83007ED0);
PPC_FUNC_IMPL(__imp__sub_83007ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-568
	ctx.r3.s64 = ctx.r31.s64 + -568;
	// addi r4,r10,14268
	ctx.r4.s64 = ctx.r10.s64 + 14268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007F0C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13756
	ctx.r11.s64 = ctx.r11.s64 + 13756;
	// addi r3,r9,-10168
	ctx.r3.s64 = ctx.r9.s64 + -10168;
	// stw r11,-568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007F24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007F38"))) PPC_WEAK_FUNC(sub_83007F38);
PPC_FUNC_IMPL(__imp__sub_83007F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-536
	ctx.r3.s64 = ctx.r31.s64 + -536;
	// addi r4,r10,14796
	ctx.r4.s64 = ctx.r10.s64 + 14796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83007F74;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14288
	ctx.r11.s64 = ctx.r11.s64 + 14288;
	// addi r3,r9,-10144
	ctx.r3.s64 = ctx.r9.s64 + -10144;
	// stw r11,-536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007F8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83007FA0"))) PPC_WEAK_FUNC(sub_83007FA0);
PPC_FUNC_IMPL(__imp__sub_83007FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-504
	ctx.r3.s64 = ctx.r31.s64 + -504;
	// addi r4,r10,15332
	ctx.r4.s64 = ctx.r10.s64 + 15332;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83007FDC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14824
	ctx.r11.s64 = ctx.r11.s64 + 14824;
	// addi r3,r9,-10120
	ctx.r3.s64 = ctx.r9.s64 + -10120;
	// stw r11,-504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83007FF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008008"))) PPC_WEAK_FUNC(sub_83008008);
PPC_FUNC_IMPL(__imp__sub_83008008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-472
	ctx.r3.s64 = ctx.r31.s64 + -472;
	// addi r4,r10,15940
	ctx.r4.s64 = ctx.r10.s64 + 15940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83008044;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15356
	ctx.r11.s64 = ctx.r11.s64 + 15356;
	// addi r3,r9,-10096
	ctx.r3.s64 = ctx.r9.s64 + -10096;
	// stw r11,-472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300805C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008070"))) PPC_WEAK_FUNC(sub_83008070);
PPC_FUNC_IMPL(__imp__sub_83008070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-440
	ctx.r3.s64 = ctx.r31.s64 + -440;
	// addi r4,r10,16500
	ctx.r4.s64 = ctx.r10.s64 + 16500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x830080AC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
	// addi r3,r9,-10072
	ctx.r3.s64 = ctx.r9.s64 + -10072;
	// stw r11,-440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830080C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830080D8"))) PPC_WEAK_FUNC(sub_830080D8);
PPC_FUNC_IMPL(__imp__sub_830080D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-408
	ctx.r3.s64 = ctx.r31.s64 + -408;
	// addi r4,r10,17056
	ctx.r4.s64 = ctx.r10.s64 + 17056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83008114;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16524
	ctx.r11.s64 = ctx.r11.s64 + 16524;
	// addi r3,r9,-10048
	ctx.r3.s64 = ctx.r9.s64 + -10048;
	// stw r11,-408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300812C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008140"))) PPC_WEAK_FUNC(sub_83008140);
PPC_FUNC_IMPL(__imp__sub_83008140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-376
	ctx.r3.s64 = ctx.r31.s64 + -376;
	// addi r4,r10,17624
	ctx.r4.s64 = ctx.r10.s64 + 17624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x8300817C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17084
	ctx.r11.s64 = ctx.r11.s64 + 17084;
	// addi r3,r9,-10024
	ctx.r3.s64 = ctx.r9.s64 + -10024;
	// stw r11,-376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008194;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830081A8"))) PPC_WEAK_FUNC(sub_830081A8);
PPC_FUNC_IMPL(__imp__sub_830081A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-344
	ctx.r3.s64 = ctx.r31.s64 + -344;
	// addi r4,r10,18156
	ctx.r4.s64 = ctx.r10.s64 + 18156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830081E4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17648
	ctx.r11.s64 = ctx.r11.s64 + 17648;
	// addi r3,r9,-10000
	ctx.r3.s64 = ctx.r9.s64 + -10000;
	// stw r11,-344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830081FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008210"))) PPC_WEAK_FUNC(sub_83008210);
PPC_FUNC_IMPL(__imp__sub_83008210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-312
	ctx.r3.s64 = ctx.r31.s64 + -312;
	// addi r4,r10,18704
	ctx.r4.s64 = ctx.r10.s64 + 18704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6080
	ctx.r6.s64 = 6080;
	// bl 0x82b38290
	ctx.lr = 0x8300824C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18176
	ctx.r11.s64 = ctx.r11.s64 + 18176;
	// addi r3,r9,-9976
	ctx.r3.s64 = ctx.r9.s64 + -9976;
	// stw r11,-312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008264;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008278"))) PPC_WEAK_FUNC(sub_83008278);
PPC_FUNC_IMPL(__imp__sub_83008278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9432
	ctx.r5.s64 = ctx.r11.s64 + -9432;
	// addi r3,r31,-280
	ctx.r3.s64 = ctx.r31.s64 + -280;
	// addi r4,r10,19300
	ctx.r4.s64 = ctx.r10.s64 + 19300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6384
	ctx.r6.s64 = 6384;
	// bl 0x82b38290
	ctx.lr = 0x830082B4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18732
	ctx.r11.s64 = ctx.r11.s64 + 18732;
	// addi r3,r9,-9952
	ctx.r3.s64 = ctx.r9.s64 + -9952;
	// stw r11,-280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830082CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830082E0"))) PPC_WEAK_FUNC(sub_830082E0);
PPC_FUNC_IMPL(__imp__sub_830082E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-248
	ctx.r3.s64 = ctx.r31.s64 + -248;
	// addi r4,r10,19888
	ctx.r4.s64 = ctx.r10.s64 + 19888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x8300831C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// addi r3,r9,-9928
	ctx.r3.s64 = ctx.r9.s64 + -9928;
	// stw r11,-248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008334;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008348"))) PPC_WEAK_FUNC(sub_83008348);
PPC_FUNC_IMPL(__imp__sub_83008348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-216
	ctx.r3.s64 = ctx.r31.s64 + -216;
	// addi r4,r10,20420
	ctx.r4.s64 = ctx.r10.s64 + 20420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x83008384;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19912
	ctx.r11.s64 = ctx.r11.s64 + 19912;
	// addi r3,r9,-9904
	ctx.r3.s64 = ctx.r9.s64 + -9904;
	// stw r11,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300839C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830083B0"))) PPC_WEAK_FUNC(sub_830083B0);
PPC_FUNC_IMPL(__imp__sub_830083B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9400
	ctx.r5.s64 = ctx.r11.s64 + -9400;
	// addi r3,r31,-184
	ctx.r3.s64 = ctx.r31.s64 + -184;
	// addi r4,r10,20976
	ctx.r4.s64 = ctx.r10.s64 + 20976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x830083EC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20444
	ctx.r11.s64 = ctx.r11.s64 + 20444;
	// addi r3,r9,-9880
	ctx.r3.s64 = ctx.r9.s64 + -9880;
	// stw r11,-184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008404;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008418"))) PPC_WEAK_FUNC(sub_83008418);
PPC_FUNC_IMPL(__imp__sub_83008418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-152
	ctx.r3.s64 = ctx.r31.s64 + -152;
	// addi r4,r10,21552
	ctx.r4.s64 = ctx.r10.s64 + 21552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83008454;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21000
	ctx.r11.s64 = ctx.r11.s64 + 21000;
	// addi r3,r9,-9856
	ctx.r3.s64 = ctx.r9.s64 + -9856;
	// stw r11,-152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300846C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008480"))) PPC_WEAK_FUNC(sub_83008480);
PPC_FUNC_IMPL(__imp__sub_83008480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-120
	ctx.r3.s64 = ctx.r31.s64 + -120;
	// addi r4,r10,22084
	ctx.r4.s64 = ctx.r10.s64 + 22084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830084BC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21572
	ctx.r11.s64 = ctx.r11.s64 + 21572;
	// addi r3,r9,-9832
	ctx.r3.s64 = ctx.r9.s64 + -9832;
	// stw r11,-120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830084D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830084E8"))) PPC_WEAK_FUNC(sub_830084E8);
PPC_FUNC_IMPL(__imp__sub_830084E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// addi r4,r10,22620
	ctx.r4.s64 = ctx.r10.s64 + 22620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6032
	ctx.r6.s64 = 6032;
	// bl 0x82b38290
	ctx.lr = 0x83008524;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22108
	ctx.r11.s64 = ctx.r11.s64 + 22108;
	// addi r3,r9,-9808
	ctx.r3.s64 = ctx.r9.s64 + -9808;
	// stw r11,-88(r31)
	PPC_STORE_U32(ctx.r31.u32 + -88, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300853C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008550"))) PPC_WEAK_FUNC(sub_83008550);
PPC_FUNC_IMPL(__imp__sub_83008550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-56
	ctx.r3.s64 = ctx.r31.s64 + -56;
	// addi r4,r10,23212
	ctx.r4.s64 = ctx.r10.s64 + 23212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6240
	ctx.r6.s64 = 6240;
	// bl 0x82b38290
	ctx.lr = 0x8300858C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22648
	ctx.r11.s64 = ctx.r11.s64 + 22648;
	// addi r3,r9,-9784
	ctx.r3.s64 = ctx.r9.s64 + -9784;
	// stw r11,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830085A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830085B8"))) PPC_WEAK_FUNC(sub_830085B8);
PPC_FUNC_IMPL(__imp__sub_830085B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// addi r4,r10,23760
	ctx.r4.s64 = ctx.r10.s64 + 23760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6144
	ctx.r6.s64 = 6144;
	// bl 0x82b38290
	ctx.lr = 0x830085F4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23236
	ctx.r11.s64 = ctx.r11.s64 + 23236;
	// addi r3,r9,-9760
	ctx.r3.s64 = ctx.r9.s64 + -9760;
	// stw r11,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300860C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008620"))) PPC_WEAK_FUNC(sub_83008620);
PPC_FUNC_IMPL(__imp__sub_83008620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r10,24380
	ctx.r4.s64 = ctx.r10.s64 + 24380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300865C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23868
	ctx.r11.s64 = ctx.r11.s64 + 23868;
	// addi r3,r9,-9736
	ctx.r3.s64 = ctx.r9.s64 + -9736;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008674;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008688"))) PPC_WEAK_FUNC(sub_83008688);
PPC_FUNC_IMPL(__imp__sub_83008688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r10,24924
	ctx.r4.s64 = ctx.r10.s64 + 24924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830086C4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24412
	ctx.r11.s64 = ctx.r11.s64 + 24412;
	// addi r3,r9,-9712
	ctx.r3.s64 = ctx.r9.s64 + -9712;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830086DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830086F0"))) PPC_WEAK_FUNC(sub_830086F0);
PPC_FUNC_IMPL(__imp__sub_830086F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r4,r10,25484
	ctx.r4.s64 = ctx.r10.s64 + 25484;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x8300872C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24948
	ctx.r11.s64 = ctx.r11.s64 + 24948;
	// addi r3,r9,-9688
	ctx.r3.s64 = ctx.r9.s64 + -9688;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008744;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008758"))) PPC_WEAK_FUNC(sub_83008758);
PPC_FUNC_IMPL(__imp__sub_83008758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r10,26044
	ctx.r4.s64 = ctx.r10.s64 + 26044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6048
	ctx.r6.s64 = 6048;
	// bl 0x82b38290
	ctx.lr = 0x83008794;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25512
	ctx.r11.s64 = ctx.r11.s64 + 25512;
	// addi r3,r9,-9664
	ctx.r3.s64 = ctx.r9.s64 + -9664;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830087AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830087C0"))) PPC_WEAK_FUNC(sub_830087C0);
PPC_FUNC_IMPL(__imp__sub_830087C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9496
	ctx.r5.s64 = ctx.r11.s64 + -9496;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r10,26572
	ctx.r4.s64 = ctx.r10.s64 + 26572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6432
	ctx.r6.s64 = 6432;
	// bl 0x82b38290
	ctx.lr = 0x830087FC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26064
	ctx.r11.s64 = ctx.r11.s64 + 26064;
	// addi r3,r9,-9640
	ctx.r3.s64 = ctx.r9.s64 + -9640;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008814;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008828"))) PPC_WEAK_FUNC(sub_83008828);
PPC_FUNC_IMPL(__imp__sub_83008828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r10,27100
	ctx.r4.s64 = ctx.r10.s64 + 27100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83008864;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26592
	ctx.r11.s64 = ctx.r11.s64 + 26592;
	// addi r3,r9,-9616
	ctx.r3.s64 = ctx.r9.s64 + -9616;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300887C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008890"))) PPC_WEAK_FUNC(sub_83008890);
PPC_FUNC_IMPL(__imp__sub_83008890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r4,r10,27636
	ctx.r4.s64 = ctx.r10.s64 + 27636;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x830088CC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// addi r3,r9,-9592
	ctx.r3.s64 = ctx.r9.s64 + -9592;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830088E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830088F8"))) PPC_WEAK_FUNC(sub_830088F8);
PPC_FUNC_IMPL(__imp__sub_830088F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9368
	ctx.r5.s64 = ctx.r11.s64 + -9368;
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r4,r10,28172
	ctx.r4.s64 = ctx.r10.s64 + 28172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6016
	ctx.r6.s64 = 6016;
	// bl 0x82b38290
	ctx.lr = 0x83008934;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27660
	ctx.r11.s64 = ctx.r11.s64 + 27660;
	// addi r3,r9,-9568
	ctx.r3.s64 = ctx.r9.s64 + -9568;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300894C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008960"))) PPC_WEAK_FUNC(sub_83008960);
PPC_FUNC_IMPL(__imp__sub_83008960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-17436
	ctx.r5.s64 = ctx.r11.s64 + -17436;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// addi r4,r10,29304
	ctx.r4.s64 = ctx.r10.s64 + 29304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300899C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28236
	ctx.r11.s64 = ctx.r11.s64 + 28236;
	// addi r3,r9,-9544
	ctx.r3.s64 = ctx.r9.s64 + -9544;
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830089B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830089C8"))) PPC_WEAK_FUNC(sub_830089C8);
PPC_FUNC_IMPL(__imp__sub_830089C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// addi r4,r10,29496
	ctx.r4.s64 = ctx.r10.s64 + 29496;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008A04;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29320
	ctx.r11.s64 = ctx.r11.s64 + 29320;
	// addi r3,r9,-9520
	ctx.r3.s64 = ctx.r9.s64 + -9520;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008A1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008A30"))) PPC_WEAK_FUNC(sub_83008A30);
PPC_FUNC_IMPL(__imp__sub_83008A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,904
	ctx.r3.s64 = ctx.r31.s64 + 904;
	// addi r4,r10,29516
	ctx.r4.s64 = ctx.r10.s64 + 29516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008A6C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29328
	ctx.r11.s64 = ctx.r11.s64 + 29328;
	// addi r3,r9,-9496
	ctx.r3.s64 = ctx.r9.s64 + -9496;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008A84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008A98"))) PPC_WEAK_FUNC(sub_83008A98);
PPC_FUNC_IMPL(__imp__sub_83008A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// addi r4,r10,29536
	ctx.r4.s64 = ctx.r10.s64 + 29536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008AD4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r3,r9,-9472
	ctx.r3.s64 = ctx.r9.s64 + -9472;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008AEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008B00"))) PPC_WEAK_FUNC(sub_83008B00);
PPC_FUNC_IMPL(__imp__sub_83008B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// addi r4,r10,29556
	ctx.r4.s64 = ctx.r10.s64 + 29556;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008B3C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29344
	ctx.r11.s64 = ctx.r11.s64 + 29344;
	// addi r3,r9,-9448
	ctx.r3.s64 = ctx.r9.s64 + -9448;
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008B54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008B68"))) PPC_WEAK_FUNC(sub_83008B68);
PPC_FUNC_IMPL(__imp__sub_83008B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,840
	ctx.r3.s64 = ctx.r31.s64 + 840;
	// addi r4,r10,29576
	ctx.r4.s64 = ctx.r10.s64 + 29576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008BA4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29352
	ctx.r11.s64 = ctx.r11.s64 + 29352;
	// addi r3,r9,-9424
	ctx.r3.s64 = ctx.r9.s64 + -9424;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008BBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008BD0"))) PPC_WEAK_FUNC(sub_83008BD0);
PPC_FUNC_IMPL(__imp__sub_83008BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// addi r4,r10,29596
	ctx.r4.s64 = ctx.r10.s64 + 29596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008C0C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29360
	ctx.r11.s64 = ctx.r11.s64 + 29360;
	// addi r3,r9,-9400
	ctx.r3.s64 = ctx.r9.s64 + -9400;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008C24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008C38"))) PPC_WEAK_FUNC(sub_83008C38);
PPC_FUNC_IMPL(__imp__sub_83008C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008C74;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29368
	ctx.r11.s64 = ctx.r11.s64 + 29368;
	// addi r3,r9,-9376
	ctx.r3.s64 = ctx.r9.s64 + -9376;
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008C8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008CA0"))) PPC_WEAK_FUNC(sub_83008CA0);
PPC_FUNC_IMPL(__imp__sub_83008CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,872
	ctx.r3.s64 = ctx.r31.s64 + 872;
	// addi r4,r10,29636
	ctx.r4.s64 = ctx.r10.s64 + 29636;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008CDC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29376
	ctx.r11.s64 = ctx.r11.s64 + 29376;
	// addi r3,r9,-9352
	ctx.r3.s64 = ctx.r9.s64 + -9352;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008CF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008D08"))) PPC_WEAK_FUNC(sub_83008D08);
PPC_FUNC_IMPL(__imp__sub_83008D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// addi r4,r10,29656
	ctx.r4.s64 = ctx.r10.s64 + 29656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008D44;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29384
	ctx.r11.s64 = ctx.r11.s64 + 29384;
	// addi r3,r9,-9328
	ctx.r3.s64 = ctx.r9.s64 + -9328;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008D5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008D70"))) PPC_WEAK_FUNC(sub_83008D70);
PPC_FUNC_IMPL(__imp__sub_83008D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// addi r4,r10,29676
	ctx.r4.s64 = ctx.r10.s64 + 29676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008DAC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29392
	ctx.r11.s64 = ctx.r11.s64 + 29392;
	// addi r3,r9,-9304
	ctx.r3.s64 = ctx.r9.s64 + -9304;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008DC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008DD8"))) PPC_WEAK_FUNC(sub_83008DD8);
PPC_FUNC_IMPL(__imp__sub_83008DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// addi r4,r10,29696
	ctx.r4.s64 = ctx.r10.s64 + 29696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008E14;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29400
	ctx.r11.s64 = ctx.r11.s64 + 29400;
	// addi r3,r9,-9280
	ctx.r3.s64 = ctx.r9.s64 + -9280;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008E2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008E40"))) PPC_WEAK_FUNC(sub_83008E40);
PPC_FUNC_IMPL(__imp__sub_83008E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,808
	ctx.r3.s64 = ctx.r31.s64 + 808;
	// addi r4,r10,29716
	ctx.r4.s64 = ctx.r10.s64 + 29716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008E7C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29408
	ctx.r11.s64 = ctx.r11.s64 + 29408;
	// addi r3,r9,-9256
	ctx.r3.s64 = ctx.r9.s64 + -9256;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008E94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008EA8"))) PPC_WEAK_FUNC(sub_83008EA8);
PPC_FUNC_IMPL(__imp__sub_83008EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// addi r4,r10,29736
	ctx.r4.s64 = ctx.r10.s64 + 29736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008EE4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29416
	ctx.r11.s64 = ctx.r11.s64 + 29416;
	// addi r3,r9,-9232
	ctx.r3.s64 = ctx.r9.s64 + -9232;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008EFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008F10"))) PPC_WEAK_FUNC(sub_83008F10);
PPC_FUNC_IMPL(__imp__sub_83008F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// addi r4,r10,29756
	ctx.r4.s64 = ctx.r10.s64 + 29756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008F4C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29424
	ctx.r11.s64 = ctx.r11.s64 + 29424;
	// addi r3,r9,-9208
	ctx.r3.s64 = ctx.r9.s64 + -9208;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008F64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008F78"))) PPC_WEAK_FUNC(sub_83008F78);
PPC_FUNC_IMPL(__imp__sub_83008F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// addi r4,r10,29776
	ctx.r4.s64 = ctx.r10.s64 + 29776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83008FB4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29432
	ctx.r11.s64 = ctx.r11.s64 + 29432;
	// addi r3,r9,-9184
	ctx.r3.s64 = ctx.r9.s64 + -9184;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83008FCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83008FE0"))) PPC_WEAK_FUNC(sub_83008FE0);
PPC_FUNC_IMPL(__imp__sub_83008FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// addi r4,r10,29796
	ctx.r4.s64 = ctx.r10.s64 + 29796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300901C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29440
	ctx.r11.s64 = ctx.r11.s64 + 29440;
	// addi r3,r9,-9160
	ctx.r3.s64 = ctx.r9.s64 + -9160;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009034;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009048"))) PPC_WEAK_FUNC(sub_83009048);
PPC_FUNC_IMPL(__imp__sub_83009048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// addi r4,r10,29816
	ctx.r4.s64 = ctx.r10.s64 + 29816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83009084;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29448
	ctx.r11.s64 = ctx.r11.s64 + 29448;
	// addi r3,r9,-9136
	ctx.r3.s64 = ctx.r9.s64 + -9136;
	// stw r11,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300909C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830090B0"))) PPC_WEAK_FUNC(sub_830090B0);
PPC_FUNC_IMPL(__imp__sub_830090B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// addi r4,r10,29836
	ctx.r4.s64 = ctx.r10.s64 + 29836;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x830090EC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// addi r3,r9,-9112
	ctx.r3.s64 = ctx.r9.s64 + -9112;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009104;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009118"))) PPC_WEAK_FUNC(sub_83009118);
PPC_FUNC_IMPL(__imp__sub_83009118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,936
	ctx.r3.s64 = ctx.r31.s64 + 936;
	// addi r4,r10,29856
	ctx.r4.s64 = ctx.r10.s64 + 29856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83009154;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29464
	ctx.r11.s64 = ctx.r11.s64 + 29464;
	// addi r3,r9,-9088
	ctx.r3.s64 = ctx.r9.s64 + -9088;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300916C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009180"))) PPC_WEAK_FUNC(sub_83009180);
PPC_FUNC_IMPL(__imp__sub_83009180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,680
	ctx.r3.s64 = ctx.r31.s64 + 680;
	// addi r4,r10,29876
	ctx.r4.s64 = ctx.r10.s64 + 29876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x830091BC;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29472
	ctx.r11.s64 = ctx.r11.s64 + 29472;
	// addi r3,r9,-9064
	ctx.r3.s64 = ctx.r9.s64 + -9064;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830091D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830091E8"))) PPC_WEAK_FUNC(sub_830091E8);
PPC_FUNC_IMPL(__imp__sub_830091E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// addi r4,r10,29896
	ctx.r4.s64 = ctx.r10.s64 + 29896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83009224;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29480
	ctx.r11.s64 = ctx.r11.s64 + 29480;
	// addi r3,r9,-9040
	ctx.r3.s64 = ctx.r9.s64 + -9040;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300923C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009250"))) PPC_WEAK_FUNC(sub_83009250);
PPC_FUNC_IMPL(__imp__sub_83009250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,264
	ctx.r5.s64 = ctx.r11.s64 + 264;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// addi r4,r10,29916
	ctx.r4.s64 = ctx.r10.s64 + 29916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300928C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29488
	ctx.r11.s64 = ctx.r11.s64 + 29488;
	// addi r3,r9,-9016
	ctx.r3.s64 = ctx.r9.s64 + -9016;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830092A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830092B8"))) PPC_WEAK_FUNC(sub_830092B8);
PPC_FUNC_IMPL(__imp__sub_830092B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,552
	ctx.r5.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,1000
	ctx.r3.s64 = ctx.r31.s64 + 1000;
	// addi r4,r10,30716
	ctx.r4.s64 = ctx.r10.s64 + 30716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x830092F4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30304
	ctx.r11.s64 = ctx.r11.s64 + 30304;
	// addi r3,r9,-8992
	ctx.r3.s64 = ctx.r9.s64 + -8992;
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300930C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009320"))) PPC_WEAK_FUNC(sub_83009320);
PPC_FUNC_IMPL(__imp__sub_83009320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,552
	ctx.r5.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,1032
	ctx.r3.s64 = ctx.r31.s64 + 1032;
	// addi r4,r10,31112
	ctx.r4.s64 = ctx.r10.s64 + 31112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300935C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30732
	ctx.r11.s64 = ctx.r11.s64 + 30732;
	// addi r3,r9,-8968
	ctx.r3.s64 = ctx.r9.s64 + -8968;
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009374;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009388"))) PPC_WEAK_FUNC(sub_83009388);
PPC_FUNC_IMPL(__imp__sub_83009388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,552
	ctx.r5.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,1064
	ctx.r3.s64 = ctx.r31.s64 + 1064;
	// addi r4,r10,31572
	ctx.r4.s64 = ctx.r10.s64 + 31572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x830093C4;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31132
	ctx.r11.s64 = ctx.r11.s64 + 31132;
	// addi r3,r9,-8944
	ctx.r3.s64 = ctx.r9.s64 + -8944;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830093DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830093F0"))) PPC_WEAK_FUNC(sub_830093F0);
PPC_FUNC_IMPL(__imp__sub_830093F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,552
	ctx.r5.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,1096
	ctx.r3.s64 = ctx.r31.s64 + 1096;
	// addi r4,r10,32024
	ctx.r4.s64 = ctx.r10.s64 + 32024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300942C;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31624
	ctx.r11.s64 = ctx.r11.s64 + 31624;
	// addi r3,r9,-8920
	ctx.r3.s64 = ctx.r9.s64 + -8920;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009444;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009458"))) PPC_WEAK_FUNC(sub_83009458);
PPC_FUNC_IMPL(__imp__sub_83009458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,552
	ctx.r5.s64 = ctx.r11.s64 + 552;
	// addi r3,r31,1128
	ctx.r3.s64 = ctx.r31.s64 + 1128;
	// addi r4,r10,32624
	ctx.r4.s64 = ctx.r10.s64 + 32624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5760
	ctx.r6.s64 = 5760;
	// bl 0x82b38290
	ctx.lr = 0x83009494;
	sub_82B38290(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,32048
	ctx.r11.s64 = ctx.r11.s64 + 32048;
	// addi r3,r9,-8896
	ctx.r3.s64 = ctx.r9.s64 + -8896;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830094AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830094C0"))) PPC_WEAK_FUNC(sub_830094C0);
PPC_FUNC_IMPL(__imp__sub_830094C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,744
	ctx.r5.s64 = ctx.r11.s64 + 744;
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// addi r4,r10,-31840
	ctx.r4.s64 = ctx.r10.s64 + -31840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5664
	ctx.r6.s64 = 5664;
	// bl 0x82b38290
	ctx.lr = 0x830094FC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32296
	ctx.r11.s64 = ctx.r11.s64 + -32296;
	// addi r3,r9,-8872
	ctx.r3.s64 = ctx.r9.s64 + -8872;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009514;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009528"))) PPC_WEAK_FUNC(sub_83009528);
PPC_FUNC_IMPL(__imp__sub_83009528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// addi r4,r10,-31744
	ctx.r4.s64 = ctx.r10.s64 + -31744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83009564;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32328
	ctx.r11.s64 = ctx.r11.s64 + -32328;
	// addi r3,r9,-8848
	ctx.r3.s64 = ctx.r9.s64 + -8848;
	// stw r11,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300957C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009590"))) PPC_WEAK_FUNC(sub_83009590);
PPC_FUNC_IMPL(__imp__sub_83009590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,744
	ctx.r5.s64 = ctx.r11.s64 + 744;
	// addi r3,r31,1224
	ctx.r3.s64 = ctx.r31.s64 + 1224;
	// addi r4,r10,-31324
	ctx.r4.s64 = ctx.r10.s64 + -31324;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x830095CC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31716
	ctx.r11.s64 = ctx.r11.s64 + -31716;
	// addi r3,r9,-8824
	ctx.r3.s64 = ctx.r9.s64 + -8824;
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830095E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830095F8"))) PPC_WEAK_FUNC(sub_830095F8);
PPC_FUNC_IMPL(__imp__sub_830095F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,744
	ctx.r5.s64 = ctx.r11.s64 + 744;
	// addi r3,r31,1256
	ctx.r3.s64 = ctx.r31.s64 + 1256;
	// addi r4,r10,-30856
	ctx.r4.s64 = ctx.r10.s64 + -30856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x83009634;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31300
	ctx.r11.s64 = ctx.r11.s64 + -31300;
	// addi r3,r9,-8800
	ctx.r3.s64 = ctx.r9.s64 + -8800;
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300964C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009660"))) PPC_WEAK_FUNC(sub_83009660);
PPC_FUNC_IMPL(__imp__sub_83009660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,744
	ctx.r5.s64 = ctx.r11.s64 + 744;
	// addi r3,r31,1288
	ctx.r3.s64 = ctx.r31.s64 + 1288;
	// addi r4,r10,-30440
	ctx.r4.s64 = ctx.r10.s64 + -30440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300969C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30816
	ctx.r11.s64 = ctx.r11.s64 + -30816;
	// addi r3,r9,-8776
	ctx.r3.s64 = ctx.r9.s64 + -8776;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830096B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830096C8"))) PPC_WEAK_FUNC(sub_830096C8);
PPC_FUNC_IMPL(__imp__sub_830096C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,744
	ctx.r5.s64 = ctx.r11.s64 + 744;
	// addi r3,r31,1320
	ctx.r3.s64 = ctx.r31.s64 + 1320;
	// addi r4,r10,-30040
	ctx.r4.s64 = ctx.r10.s64 + -30040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83009704;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30420
	ctx.r11.s64 = ctx.r11.s64 + -30420;
	// addi r3,r9,-8752
	ctx.r3.s64 = ctx.r9.s64 + -8752;
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300971C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009730"))) PPC_WEAK_FUNC(sub_83009730);
PPC_FUNC_IMPL(__imp__sub_83009730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,1384
	ctx.r5.s64 = ctx.r11.s64 + 1384;
	// addi r3,r31,1352
	ctx.r3.s64 = ctx.r31.s64 + 1352;
	// addi r4,r10,-29616
	ctx.r4.s64 = ctx.r10.s64 + -29616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5712
	ctx.r6.s64 = 5712;
	// bl 0x82b38290
	ctx.lr = 0x8300976C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30016
	ctx.r11.s64 = ctx.r11.s64 + -30016;
	// addi r3,r9,-8728
	ctx.r3.s64 = ctx.r9.s64 + -8728;
	// stw r11,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009784;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009798"))) PPC_WEAK_FUNC(sub_83009798);
PPC_FUNC_IMPL(__imp__sub_83009798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,1448
	ctx.r5.s64 = ctx.r11.s64 + 1448;
	// addi r3,r31,1384
	ctx.r3.s64 = ctx.r31.s64 + 1384;
	// addi r4,r10,-29176
	ctx.r4.s64 = ctx.r10.s64 + -29176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5664
	ctx.r6.s64 = 5664;
	// bl 0x82b38290
	ctx.lr = 0x830097D4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29552
	ctx.r11.s64 = ctx.r11.s64 + -29552;
	// addi r3,r9,-8704
	ctx.r3.s64 = ctx.r9.s64 + -8704;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830097EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009800"))) PPC_WEAK_FUNC(sub_83009800);
PPC_FUNC_IMPL(__imp__sub_83009800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// addi r4,r10,-29156
	ctx.r4.s64 = ctx.r10.s64 + -29156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300983C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r3,r9,-8680
	ctx.r3.s64 = ctx.r9.s64 + -8680;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009868"))) PPC_WEAK_FUNC(sub_83009868);
PPC_FUNC_IMPL(__imp__sub_83009868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,840
	ctx.r5.s64 = ctx.r11.s64 + 840;
	// addi r3,r31,1448
	ctx.r3.s64 = ctx.r31.s64 + 1448;
	// addi r4,r10,-28384
	ctx.r4.s64 = ctx.r10.s64 + -28384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x830098A4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28760
	ctx.r11.s64 = ctx.r11.s64 + -28760;
	// addi r3,r9,-8656
	ctx.r3.s64 = ctx.r9.s64 + -8656;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830098BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830098D0"))) PPC_WEAK_FUNC(sub_830098D0);
PPC_FUNC_IMPL(__imp__sub_830098D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1480
	ctx.r3.s64 = ctx.r31.s64 + 1480;
	// addi r4,r10,-27488
	ctx.r4.s64 = ctx.r10.s64 + -27488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5408
	ctx.r6.s64 = 5408;
	// bl 0x82b38290
	ctx.lr = 0x8300990C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27968
	ctx.r11.s64 = ctx.r11.s64 + -27968;
	// addi r3,r9,-8632
	ctx.r3.s64 = ctx.r9.s64 + -8632;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009924;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009938"))) PPC_WEAK_FUNC(sub_83009938);
PPC_FUNC_IMPL(__imp__sub_83009938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1512
	ctx.r3.s64 = ctx.r31.s64 + 1512;
	// addi r4,r10,-27024
	ctx.r4.s64 = ctx.r10.s64 + -27024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x83009974;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27404
	ctx.r11.s64 = ctx.r11.s64 + -27404;
	// addi r3,r9,-8608
	ctx.r3.s64 = ctx.r9.s64 + -8608;
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300998C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830099A0"))) PPC_WEAK_FUNC(sub_830099A0);
PPC_FUNC_IMPL(__imp__sub_830099A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1544
	ctx.r3.s64 = ctx.r31.s64 + 1544;
	// addi r4,r10,-26584
	ctx.r4.s64 = ctx.r10.s64 + -26584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x830099DC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27004
	ctx.r11.s64 = ctx.r11.s64 + -27004;
	// addi r3,r9,-8584
	ctx.r3.s64 = ctx.r9.s64 + -8584;
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830099F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009A08"))) PPC_WEAK_FUNC(sub_83009A08);
PPC_FUNC_IMPL(__imp__sub_83009A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// addi r4,r10,-26056
	ctx.r4.s64 = ctx.r10.s64 + -26056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5648
	ctx.r6.s64 = 5648;
	// bl 0x82b38290
	ctx.lr = 0x83009A44;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26508
	ctx.r11.s64 = ctx.r11.s64 + -26508;
	// addi r3,r9,-8560
	ctx.r3.s64 = ctx.r9.s64 + -8560;
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009A5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009A70"))) PPC_WEAK_FUNC(sub_83009A70);
PPC_FUNC_IMPL(__imp__sub_83009A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1608
	ctx.r3.s64 = ctx.r31.s64 + 1608;
	// addi r4,r10,-25596
	ctx.r4.s64 = ctx.r10.s64 + -25596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5920
	ctx.r6.s64 = 5920;
	// bl 0x82b38290
	ctx.lr = 0x83009AAC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26028
	ctx.r11.s64 = ctx.r11.s64 + -26028;
	// addi r3,r9,-8536
	ctx.r3.s64 = ctx.r9.s64 + -8536;
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009AC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009AD8"))) PPC_WEAK_FUNC(sub_83009AD8);
PPC_FUNC_IMPL(__imp__sub_83009AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1640
	ctx.r3.s64 = ctx.r31.s64 + 1640;
	// addi r4,r10,-25176
	ctx.r4.s64 = ctx.r10.s64 + -25176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5392
	ctx.r6.s64 = 5392;
	// bl 0x82b38290
	ctx.lr = 0x83009B14;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25576
	ctx.r11.s64 = ctx.r11.s64 + -25576;
	// addi r3,r9,-8512
	ctx.r3.s64 = ctx.r9.s64 + -8512;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009B2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009B40"))) PPC_WEAK_FUNC(sub_83009B40);
PPC_FUNC_IMPL(__imp__sub_83009B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// addi r4,r10,-24728
	ctx.r4.s64 = ctx.r10.s64 + -24728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x83009B7C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25140
	ctx.r11.s64 = ctx.r11.s64 + -25140;
	// addi r3,r9,-8488
	ctx.r3.s64 = ctx.r9.s64 + -8488;
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009B94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009BA8"))) PPC_WEAK_FUNC(sub_83009BA8);
PPC_FUNC_IMPL(__imp__sub_83009BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,712
	ctx.r5.s64 = ctx.r11.s64 + 712;
	// addi r3,r31,1704
	ctx.r3.s64 = ctx.r31.s64 + 1704;
	// addi r4,r10,-24280
	ctx.r4.s64 = ctx.r10.s64 + -24280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x83009BE4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
	// addi r3,r9,-8464
	ctx.r3.s64 = ctx.r9.s64 + -8464;
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009BFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009C10"))) PPC_WEAK_FUNC(sub_83009C10);
PPC_FUNC_IMPL(__imp__sub_83009C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,488
	ctx.r5.s64 = ctx.r11.s64 + 488;
	// addi r3,r31,1736
	ctx.r3.s64 = ctx.r31.s64 + 1736;
	// addi r4,r10,-23476
	ctx.r4.s64 = ctx.r10.s64 + -23476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5632
	ctx.r6.s64 = 5632;
	// bl 0x82b38290
	ctx.lr = 0x83009C4C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23880
	ctx.r11.s64 = ctx.r11.s64 + -23880;
	// addi r3,r9,-8440
	ctx.r3.s64 = ctx.r9.s64 + -8440;
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009C64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009C78"))) PPC_WEAK_FUNC(sub_83009C78);
PPC_FUNC_IMPL(__imp__sub_83009C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,488
	ctx.r5.s64 = ctx.r11.s64 + 488;
	// addi r3,r31,1768
	ctx.r3.s64 = ctx.r31.s64 + 1768;
	// addi r4,r10,-23024
	ctx.r4.s64 = ctx.r10.s64 + -23024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5616
	ctx.r6.s64 = 5616;
	// bl 0x82b38290
	ctx.lr = 0x83009CB4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23400
	ctx.r11.s64 = ctx.r11.s64 + -23400;
	// addi r3,r9,-8416
	ctx.r3.s64 = ctx.r9.s64 + -8416;
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009CCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009CE0"))) PPC_WEAK_FUNC(sub_83009CE0);
PPC_FUNC_IMPL(__imp__sub_83009CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,488
	ctx.r5.s64 = ctx.r11.s64 + 488;
	// addi r3,r31,1800
	ctx.r3.s64 = ctx.r31.s64 + 1800;
	// addi r4,r10,-22624
	ctx.r4.s64 = ctx.r10.s64 + -22624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5392
	ctx.r6.s64 = 5392;
	// bl 0x82b38290
	ctx.lr = 0x83009D1C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23000
	ctx.r11.s64 = ctx.r11.s64 + -23000;
	// addi r3,r9,-8392
	ctx.r3.s64 = ctx.r9.s64 + -8392;
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009D34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009D48"))) PPC_WEAK_FUNC(sub_83009D48);
PPC_FUNC_IMPL(__imp__sub_83009D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,488
	ctx.r5.s64 = ctx.r11.s64 + 488;
	// addi r3,r31,1832
	ctx.r3.s64 = ctx.r31.s64 + 1832;
	// addi r4,r10,-22188
	ctx.r4.s64 = ctx.r10.s64 + -22188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x83009D84;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22604
	ctx.r11.s64 = ctx.r11.s64 + -22604;
	// addi r3,r9,-8368
	ctx.r3.s64 = ctx.r9.s64 + -8368;
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009D9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009DB0"))) PPC_WEAK_FUNC(sub_83009DB0);
PPC_FUNC_IMPL(__imp__sub_83009DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,872
	ctx.r5.s64 = ctx.r11.s64 + 872;
	// addi r3,r31,1864
	ctx.r3.s64 = ctx.r31.s64 + 1864;
	// addi r4,r10,-21416
	ctx.r4.s64 = ctx.r10.s64 + -21416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x83009DEC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21792
	ctx.r11.s64 = ctx.r11.s64 + -21792;
	// addi r3,r9,-8344
	ctx.r3.s64 = ctx.r9.s64 + -8344;
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009E04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009E18"))) PPC_WEAK_FUNC(sub_83009E18);
PPC_FUNC_IMPL(__imp__sub_83009E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,776
	ctx.r5.s64 = ctx.r11.s64 + 776;
	// addi r3,r31,1896
	ctx.r3.s64 = ctx.r31.s64 + 1896;
	// addi r4,r10,-20604
	ctx.r4.s64 = ctx.r10.s64 + -20604;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x83009E54;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21024
	ctx.r11.s64 = ctx.r11.s64 + -21024;
	// addi r3,r9,-8320
	ctx.r3.s64 = ctx.r9.s64 + -8320;
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009E6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009E80"))) PPC_WEAK_FUNC(sub_83009E80);
PPC_FUNC_IMPL(__imp__sub_83009E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,776
	ctx.r5.s64 = ctx.r11.s64 + 776;
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// addi r4,r10,-20176
	ctx.r4.s64 = ctx.r10.s64 + -20176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5536
	ctx.r6.s64 = 5536;
	// bl 0x82b38290
	ctx.lr = 0x83009EBC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20588
	ctx.r11.s64 = ctx.r11.s64 + -20588;
	// addi r3,r9,-8296
	ctx.r3.s64 = ctx.r9.s64 + -8296;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009ED4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009EE8"))) PPC_WEAK_FUNC(sub_83009EE8);
PPC_FUNC_IMPL(__imp__sub_83009EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,1960
	ctx.r3.s64 = ctx.r31.s64 + 1960;
	// addi r4,r10,-19396
	ctx.r4.s64 = ctx.r10.s64 + -19396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5552
	ctx.r6.s64 = 5552;
	// bl 0x82b38290
	ctx.lr = 0x83009F24;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19784
	ctx.r11.s64 = ctx.r11.s64 + -19784;
	// addi r3,r9,-8272
	ctx.r3.s64 = ctx.r9.s64 + -8272;
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009F3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009F50"))) PPC_WEAK_FUNC(sub_83009F50);
PPC_FUNC_IMPL(__imp__sub_83009F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,1992
	ctx.r3.s64 = ctx.r31.s64 + 1992;
	// addi r4,r10,-18972
	ctx.r4.s64 = ctx.r10.s64 + -18972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x83009F8C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19364
	ctx.r11.s64 = ctx.r11.s64 + -19364;
	// addi r3,r9,-8248
	ctx.r3.s64 = ctx.r9.s64 + -8248;
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83009FA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83009FB8"))) PPC_WEAK_FUNC(sub_83009FB8);
PPC_FUNC_IMPL(__imp__sub_83009FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,2024
	ctx.r3.s64 = ctx.r31.s64 + 2024;
	// addi r4,r10,-18576
	ctx.r4.s64 = ctx.r10.s64 + -18576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x83009FF4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18952
	ctx.r11.s64 = ctx.r11.s64 + -18952;
	// addi r3,r9,-8224
	ctx.r3.s64 = ctx.r9.s64 + -8224;
	// stw r11,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A00C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A020"))) PPC_WEAK_FUNC(sub_8300A020);
PPC_FUNC_IMPL(__imp__sub_8300A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,2056
	ctx.r3.s64 = ctx.r31.s64 + 2056;
	// addi r4,r10,-18136
	ctx.r4.s64 = ctx.r10.s64 + -18136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A05C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18556
	ctx.r11.s64 = ctx.r11.s64 + -18556;
	// addi r3,r9,-8200
	ctx.r3.s64 = ctx.r9.s64 + -8200;
	// stw r11,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A074;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A088"))) PPC_WEAK_FUNC(sub_8300A088);
PPC_FUNC_IMPL(__imp__sub_8300A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,2088
	ctx.r3.s64 = ctx.r31.s64 + 2088;
	// addi r4,r10,-17692
	ctx.r4.s64 = ctx.r10.s64 + -17692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5584
	ctx.r6.s64 = 5584;
	// bl 0x82b38290
	ctx.lr = 0x8300A0C4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18116
	ctx.r11.s64 = ctx.r11.s64 + -18116;
	// addi r3,r9,-8176
	ctx.r3.s64 = ctx.r9.s64 + -8176;
	// stw r11,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A0DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A0F0"))) PPC_WEAK_FUNC(sub_8300A0F0);
PPC_FUNC_IMPL(__imp__sub_8300A0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,2120
	ctx.r3.s64 = ctx.r31.s64 + 2120;
	// addi r4,r10,-17264
	ctx.r4.s64 = ctx.r10.s64 + -17264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5392
	ctx.r6.s64 = 5392;
	// bl 0x82b38290
	ctx.lr = 0x8300A12C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17672
	ctx.r11.s64 = ctx.r11.s64 + -17672;
	// addi r3,r9,-8152
	ctx.r3.s64 = ctx.r9.s64 + -8152;
	// stw r11,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A144;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A158"))) PPC_WEAK_FUNC(sub_8300A158);
PPC_FUNC_IMPL(__imp__sub_8300A158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,2152
	ctx.r3.s64 = ctx.r31.s64 + 2152;
	// addi r4,r10,-16840
	ctx.r4.s64 = ctx.r10.s64 + -16840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A194;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-17220
	ctx.r11.s64 = ctx.r11.s64 + -17220;
	// addi r3,r9,-8128
	ctx.r3.s64 = ctx.r9.s64 + -8128;
	// stw r11,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A1AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A1C0"))) PPC_WEAK_FUNC(sub_8300A1C0);
PPC_FUNC_IMPL(__imp__sub_8300A1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,2184
	ctx.r3.s64 = ctx.r31.s64 + 2184;
	// addi r4,r10,-16440
	ctx.r4.s64 = ctx.r10.s64 + -16440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x8300A1FC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16820
	ctx.r11.s64 = ctx.r11.s64 + -16820;
	// addi r3,r9,-8104
	ctx.r3.s64 = ctx.r9.s64 + -8104;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A214;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A228"))) PPC_WEAK_FUNC(sub_8300A228);
PPC_FUNC_IMPL(__imp__sub_8300A228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,2248
	ctx.r3.s64 = ctx.r31.s64 + 2248;
	// addi r4,r10,-16184
	ctx.r4.s64 = ctx.r10.s64 + -16184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5600
	ctx.r6.s64 = 5600;
	// bl 0x82b38290
	ctx.lr = 0x8300A264;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16328
	ctx.r11.s64 = ctx.r11.s64 + -16328;
	// addi r3,r9,-8080
	ctx.r3.s64 = ctx.r9.s64 + -8080;
	// stw r11,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A27C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A290"))) PPC_WEAK_FUNC(sub_8300A290);
PPC_FUNC_IMPL(__imp__sub_8300A290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,2280
	ctx.r3.s64 = ctx.r31.s64 + 2280;
	// addi r4,r10,-15520
	ctx.r4.s64 = ctx.r10.s64 + -15520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300A2CC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16400
	ctx.r11.s64 = ctx.r11.s64 + -16400;
	// addi r3,r9,-8056
	ctx.r3.s64 = ctx.r9.s64 + -8056;
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A2E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A2F8"))) PPC_WEAK_FUNC(sub_8300A2F8);
PPC_FUNC_IMPL(__imp__sub_8300A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,2216
	ctx.r3.s64 = ctx.r31.s64 + 2216;
	// addi r4,r10,-15492
	ctx.r4.s64 = ctx.r10.s64 + -15492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8300A334;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16368
	ctx.r11.s64 = ctx.r11.s64 + -16368;
	// addi r3,r9,-8032
	ctx.r3.s64 = ctx.r9.s64 + -8032;
	// stw r11,2216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A34C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A360"))) PPC_WEAK_FUNC(sub_8300A360);
PPC_FUNC_IMPL(__imp__sub_8300A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6384
	ctx.r5.s64 = ctx.r11.s64 + -6384;
	// addi r3,r31,2312
	ctx.r3.s64 = ctx.r31.s64 + 2312;
	// addi r4,r10,-15464
	ctx.r4.s64 = ctx.r10.s64 + -15464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x8300A39C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16336
	ctx.r11.s64 = ctx.r11.s64 + -16336;
	// addi r3,r9,-8008
	ctx.r3.s64 = ctx.r9.s64 + -8008;
	// stw r11,2312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A3B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A3C8"))) PPC_WEAK_FUNC(sub_8300A3C8);
PPC_FUNC_IMPL(__imp__sub_8300A3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,2344
	ctx.r3.s64 = ctx.r31.s64 + 2344;
	// addi r4,r10,-15048
	ctx.r4.s64 = ctx.r10.s64 + -15048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x8300A404;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15428
	ctx.r11.s64 = ctx.r11.s64 + -15428;
	// addi r3,r9,-7984
	ctx.r3.s64 = ctx.r9.s64 + -7984;
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A41C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A430"))) PPC_WEAK_FUNC(sub_8300A430);
PPC_FUNC_IMPL(__imp__sub_8300A430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2056
	ctx.r5.s64 = ctx.r11.s64 + 2056;
	// addi r3,r31,2376
	ctx.r3.s64 = ctx.r31.s64 + 2376;
	// addi r4,r10,-14640
	ctx.r4.s64 = ctx.r10.s64 + -14640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A46C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15020
	ctx.r11.s64 = ctx.r11.s64 + -15020;
	// addi r3,r9,-7960
	ctx.r3.s64 = ctx.r9.s64 + -7960;
	// stw r11,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A484;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A498"))) PPC_WEAK_FUNC(sub_8300A498);
PPC_FUNC_IMPL(__imp__sub_8300A498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,968
	ctx.r5.s64 = ctx.r11.s64 + 968;
	// addi r3,r31,2408
	ctx.r3.s64 = ctx.r31.s64 + 2408;
	// addi r4,r10,-14208
	ctx.r4.s64 = ctx.r10.s64 + -14208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A4D4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14600
	ctx.r11.s64 = ctx.r11.s64 + -14600;
	// addi r3,r9,-7936
	ctx.r3.s64 = ctx.r9.s64 + -7936;
	// stw r11,2408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A4EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A500"))) PPC_WEAK_FUNC(sub_8300A500);
PPC_FUNC_IMPL(__imp__sub_8300A500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,808
	ctx.r5.s64 = ctx.r11.s64 + 808;
	// addi r3,r31,2440
	ctx.r3.s64 = ctx.r31.s64 + 2440;
	// addi r4,r10,-13340
	ctx.r4.s64 = ctx.r10.s64 + -13340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x8300A53C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13824
	ctx.r11.s64 = ctx.r11.s64 + -13824;
	// addi r3,r9,-7912
	ctx.r3.s64 = ctx.r9.s64 + -7912;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A554;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A568"))) PPC_WEAK_FUNC(sub_8300A568);
PPC_FUNC_IMPL(__imp__sub_8300A568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,808
	ctx.r5.s64 = ctx.r11.s64 + 808;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// addi r4,r10,-12936
	ctx.r4.s64 = ctx.r10.s64 + -12936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300A5A4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13316
	ctx.r11.s64 = ctx.r11.s64 + -13316;
	// addi r3,r9,-7888
	ctx.r3.s64 = ctx.r9.s64 + -7888;
	// stw r11,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A5BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A5D0"))) PPC_WEAK_FUNC(sub_8300A5D0);
PPC_FUNC_IMPL(__imp__sub_8300A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,808
	ctx.r5.s64 = ctx.r11.s64 + 808;
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// addi r4,r10,-12460
	ctx.r4.s64 = ctx.r10.s64 + -12460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A60C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12916
	ctx.r11.s64 = ctx.r11.s64 + -12916;
	// addi r3,r9,-7864
	ctx.r3.s64 = ctx.r9.s64 + -7864;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A624;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A638"))) PPC_WEAK_FUNC(sub_8300A638);
PPC_FUNC_IMPL(__imp__sub_8300A638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,808
	ctx.r5.s64 = ctx.r11.s64 + 808;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// addi r4,r10,-12064
	ctx.r4.s64 = ctx.r10.s64 + -12064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300A674;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-12440
	ctx.r11.s64 = ctx.r11.s64 + -12440;
	// addi r3,r9,-7840
	ctx.r3.s64 = ctx.r9.s64 + -7840;
	// stw r11,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A68C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A6A0"))) PPC_WEAK_FUNC(sub_8300A6A0);
PPC_FUNC_IMPL(__imp__sub_8300A6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r31,2568
	ctx.r3.s64 = ctx.r31.s64 + 2568;
	// addi r4,r10,-11080
	ctx.r4.s64 = ctx.r10.s64 + -11080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5824
	ctx.r6.s64 = 5824;
	// bl 0x82b38290
	ctx.lr = 0x8300A6DC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11672
	ctx.r11.s64 = ctx.r11.s64 + -11672;
	// addi r3,r9,-7816
	ctx.r3.s64 = ctx.r9.s64 + -7816;
	// stw r11,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A6F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A708"))) PPC_WEAK_FUNC(sub_8300A708);
PPC_FUNC_IMPL(__imp__sub_8300A708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r31,2600
	ctx.r3.s64 = ctx.r31.s64 + 2600;
	// addi r4,r10,-10584
	ctx.r4.s64 = ctx.r10.s64 + -10584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5376
	ctx.r6.s64 = 5376;
	// bl 0x82b38290
	ctx.lr = 0x8300A744;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11040
	ctx.r11.s64 = ctx.r11.s64 + -11040;
	// addi r3,r9,-7792
	ctx.r3.s64 = ctx.r9.s64 + -7792;
	// stw r11,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A75C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A770"))) PPC_WEAK_FUNC(sub_8300A770);
PPC_FUNC_IMPL(__imp__sub_8300A770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r31,2632
	ctx.r3.s64 = ctx.r31.s64 + 2632;
	// addi r4,r10,-10184
	ctx.r4.s64 = ctx.r10.s64 + -10184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5632
	ctx.r6.s64 = 5632;
	// bl 0x82b38290
	ctx.lr = 0x8300A7AC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10564
	ctx.r11.s64 = ctx.r11.s64 + -10564;
	// addi r3,r9,-7768
	ctx.r3.s64 = ctx.r9.s64 + -7768;
	// stw r11,2632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A7C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A7D8"))) PPC_WEAK_FUNC(sub_8300A7D8);
PPC_FUNC_IMPL(__imp__sub_8300A7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// addi r3,r31,2664
	ctx.r3.s64 = ctx.r31.s64 + 2664;
	// addi r4,r10,-9776
	ctx.r4.s64 = ctx.r10.s64 + -9776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5632
	ctx.r6.s64 = 5632;
	// bl 0x82b38290
	ctx.lr = 0x8300A814;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-10160
	ctx.r11.s64 = ctx.r11.s64 + -10160;
	// addi r3,r9,-7744
	ctx.r3.s64 = ctx.r9.s64 + -7744;
	// stw r11,2664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A82C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A840"))) PPC_WEAK_FUNC(sub_8300A840);
PPC_FUNC_IMPL(__imp__sub_8300A840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,520
	ctx.r5.s64 = ctx.r11.s64 + 520;
	// addi r3,r31,2696
	ctx.r3.s64 = ctx.r31.s64 + 2696;
	// addi r4,r10,-8992
	ctx.r4.s64 = ctx.r10.s64 + -8992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300A87C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9368
	ctx.r11.s64 = ctx.r11.s64 + -9368;
	// addi r3,r9,-7720
	ctx.r3.s64 = ctx.r9.s64 + -7720;
	// stw r11,2696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A894;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A8A8"))) PPC_WEAK_FUNC(sub_8300A8A8);
PPC_FUNC_IMPL(__imp__sub_8300A8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,424
	ctx.r5.s64 = ctx.r11.s64 + 424;
	// addi r3,r31,2760
	ctx.r3.s64 = ctx.r31.s64 + 2760;
	// addi r4,r10,-8184
	ctx.r4.s64 = ctx.r10.s64 + -8184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5648
	ctx.r6.s64 = 5648;
	// bl 0x82b38290
	ctx.lr = 0x8300A8E4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8560
	ctx.r11.s64 = ctx.r11.s64 + -8560;
	// addi r3,r9,-7696
	ctx.r3.s64 = ctx.r9.s64 + -7696;
	// stw r11,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A8FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A910"))) PPC_WEAK_FUNC(sub_8300A910);
PPC_FUNC_IMPL(__imp__sub_8300A910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,2728
	ctx.r3.s64 = ctx.r31.s64 + 2728;
	// addi r4,r10,-8164
	ctx.r4.s64 = ctx.r10.s64 + -8164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300A94C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8592
	ctx.r11.s64 = ctx.r11.s64 + -8592;
	// addi r3,r9,-7672
	ctx.r3.s64 = ctx.r9.s64 + -7672;
	// stw r11,2728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A964;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A978"))) PPC_WEAK_FUNC(sub_8300A978);
PPC_FUNC_IMPL(__imp__sub_8300A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,424
	ctx.r5.s64 = ctx.r11.s64 + 424;
	// addi r3,r31,2824
	ctx.r3.s64 = ctx.r31.s64 + 2824;
	// addi r4,r10,-7696
	ctx.r4.s64 = ctx.r10.s64 + -7696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5920
	ctx.r6.s64 = 5920;
	// bl 0x82b38290
	ctx.lr = 0x8300A9B4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8092
	ctx.r11.s64 = ctx.r11.s64 + -8092;
	// addi r3,r9,-7648
	ctx.r3.s64 = ctx.r9.s64 + -7648;
	// stw r11,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300A9CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300A9E0"))) PPC_WEAK_FUNC(sub_8300A9E0);
PPC_FUNC_IMPL(__imp__sub_8300A9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,2792
	ctx.r3.s64 = ctx.r31.s64 + 2792;
	// addi r4,r10,-7676
	ctx.r4.s64 = ctx.r10.s64 + -7676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300AA1C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8124
	ctx.r11.s64 = ctx.r11.s64 + -8124;
	// addi r3,r9,-7624
	ctx.r3.s64 = ctx.r9.s64 + -7624;
	// stw r11,2792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AA34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AA48"))) PPC_WEAK_FUNC(sub_8300AA48);
PPC_FUNC_IMPL(__imp__sub_8300AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,2920
	ctx.r5.s64 = ctx.r11.s64 + 2920;
	// addi r3,r31,2856
	ctx.r3.s64 = ctx.r31.s64 + 2856;
	// addi r4,r10,-7224
	ctx.r4.s64 = ctx.r10.s64 + -7224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5696
	ctx.r6.s64 = 5696;
	// bl 0x82b38290
	ctx.lr = 0x8300AA84;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7604
	ctx.r11.s64 = ctx.r11.s64 + -7604;
	// addi r3,r9,-7600
	ctx.r3.s64 = ctx.r9.s64 + -7600;
	// stw r11,2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AA9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AAB0"))) PPC_WEAK_FUNC(sub_8300AAB0);
PPC_FUNC_IMPL(__imp__sub_8300AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// addi r4,r10,-7204
	ctx.r4.s64 = ctx.r10.s64 + -7204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300AAEC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-7636
	ctx.r11.s64 = ctx.r11.s64 + -7636;
	// addi r3,r9,-7576
	ctx.r3.s64 = ctx.r9.s64 + -7576;
	// stw r11,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AB04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AB18"))) PPC_WEAK_FUNC(sub_8300AB18);
PPC_FUNC_IMPL(__imp__sub_8300AB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,392
	ctx.r5.s64 = ctx.r11.s64 + 392;
	// addi r3,r31,2920
	ctx.r3.s64 = ctx.r31.s64 + 2920;
	// addi r4,r10,-6432
	ctx.r4.s64 = ctx.r10.s64 + -6432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300AB54;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6808
	ctx.r11.s64 = ctx.r11.s64 + -6808;
	// addi r3,r9,-7552
	ctx.r3.s64 = ctx.r9.s64 + -7552;
	// stw r11,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AB6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AB80"))) PPC_WEAK_FUNC(sub_8300AB80);
PPC_FUNC_IMPL(__imp__sub_8300AB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,392
	ctx.r5.s64 = ctx.r11.s64 + 392;
	// addi r3,r31,2952
	ctx.r3.s64 = ctx.r31.s64 + 2952;
	// addi r4,r10,-5992
	ctx.r4.s64 = ctx.r10.s64 + -5992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300ABBC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6408
	ctx.r11.s64 = ctx.r11.s64 + -6408;
	// addi r3,r9,-7528
	ctx.r3.s64 = ctx.r9.s64 + -7528;
	// stw r11,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300ABD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ABE8"))) PPC_WEAK_FUNC(sub_8300ABE8);
PPC_FUNC_IMPL(__imp__sub_8300ABE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// addi r3,r31,2984
	ctx.r3.s64 = ctx.r31.s64 + 2984;
	// addi r4,r10,-5224
	ctx.r4.s64 = ctx.r10.s64 + -5224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5344
	ctx.r6.s64 = 5344;
	// bl 0x82b38290
	ctx.lr = 0x8300AC24;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5600
	ctx.r11.s64 = ctx.r11.s64 + -5600;
	// addi r3,r9,-7504
	ctx.r3.s64 = ctx.r9.s64 + -7504;
	// stw r11,2984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AC3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AC50"))) PPC_WEAK_FUNC(sub_8300AC50);
PPC_FUNC_IMPL(__imp__sub_8300AC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// addi r3,r31,3016
	ctx.r3.s64 = ctx.r31.s64 + 3016;
	// addi r4,r10,-4824
	ctx.r4.s64 = ctx.r10.s64 + -4824;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300AC8C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5204
	ctx.r11.s64 = ctx.r11.s64 + -5204;
	// addi r3,r9,-7480
	ctx.r3.s64 = ctx.r9.s64 + -7480;
	// stw r11,3016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300ACA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ACB8"))) PPC_WEAK_FUNC(sub_8300ACB8);
PPC_FUNC_IMPL(__imp__sub_8300ACB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// addi r3,r31,3048
	ctx.r3.s64 = ctx.r31.s64 + 3048;
	// addi r4,r10,-4420
	ctx.r4.s64 = ctx.r10.s64 + -4420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300ACF4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4808
	ctx.r11.s64 = ctx.r11.s64 + -4808;
	// addi r3,r9,-7456
	ctx.r3.s64 = ctx.r9.s64 + -7456;
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AD0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AD20"))) PPC_WEAK_FUNC(sub_8300AD20);
PPC_FUNC_IMPL(__imp__sub_8300AD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,584
	ctx.r5.s64 = ctx.r11.s64 + 584;
	// addi r3,r31,3080
	ctx.r3.s64 = ctx.r31.s64 + 3080;
	// addi r4,r10,-4000
	ctx.r4.s64 = ctx.r10.s64 + -4000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300AD5C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4392
	ctx.r11.s64 = ctx.r11.s64 + -4392;
	// addi r3,r9,-7432
	ctx.r3.s64 = ctx.r9.s64 + -7432;
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AD74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AD88"))) PPC_WEAK_FUNC(sub_8300AD88);
PPC_FUNC_IMPL(__imp__sub_8300AD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,360
	ctx.r5.s64 = ctx.r11.s64 + 360;
	// addi r3,r31,3144
	ctx.r3.s64 = ctx.r31.s64 + 3144;
	// addi r4,r10,-3192
	ctx.r4.s64 = ctx.r10.s64 + -3192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5648
	ctx.r6.s64 = 5648;
	// bl 0x82b38290
	ctx.lr = 0x8300ADC4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3568
	ctx.r11.s64 = ctx.r11.s64 + -3568;
	// addi r3,r9,-7408
	ctx.r3.s64 = ctx.r9.s64 + -7408;
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300ADDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ADF0"))) PPC_WEAK_FUNC(sub_8300ADF0);
PPC_FUNC_IMPL(__imp__sub_8300ADF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3112
	ctx.r3.s64 = ctx.r31.s64 + 3112;
	// addi r4,r10,-3176
	ctx.r4.s64 = ctx.r10.s64 + -3176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300AE2C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3600
	ctx.r11.s64 = ctx.r11.s64 + -3600;
	// addi r3,r9,-7384
	ctx.r3.s64 = ctx.r9.s64 + -7384;
	// stw r11,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AE44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AE58"))) PPC_WEAK_FUNC(sub_8300AE58);
PPC_FUNC_IMPL(__imp__sub_8300AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,936
	ctx.r5.s64 = ctx.r11.s64 + 936;
	// addi r3,r31,3176
	ctx.r3.s64 = ctx.r31.s64 + 3176;
	// addi r4,r10,-2388
	ctx.r4.s64 = ctx.r10.s64 + -2388;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300AE94;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2784
	ctx.r11.s64 = ctx.r11.s64 + -2784;
	// addi r3,r9,-7360
	ctx.r3.s64 = ctx.r9.s64 + -7360;
	// stw r11,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AEAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AEC0"))) PPC_WEAK_FUNC(sub_8300AEC0);
PPC_FUNC_IMPL(__imp__sub_8300AEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,936
	ctx.r5.s64 = ctx.r11.s64 + 936;
	// addi r3,r31,3208
	ctx.r3.s64 = ctx.r31.s64 + 3208;
	// addi r4,r10,-1908
	ctx.r4.s64 = ctx.r10.s64 + -1908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6192
	ctx.r6.s64 = 6192;
	// bl 0x82b38290
	ctx.lr = 0x8300AEFC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2336
	ctx.r11.s64 = ctx.r11.s64 + -2336;
	// addi r3,r9,-7336
	ctx.r3.s64 = ctx.r9.s64 + -7336;
	// stw r11,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AF14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AF28"))) PPC_WEAK_FUNC(sub_8300AF28);
PPC_FUNC_IMPL(__imp__sub_8300AF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,680
	ctx.r5.s64 = ctx.r11.s64 + 680;
	// addi r3,r31,3240
	ctx.r3.s64 = ctx.r31.s64 + 3240;
	// addi r4,r10,-1120
	ctx.r4.s64 = ctx.r10.s64 + -1120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// bl 0x82b38290
	ctx.lr = 0x8300AF64;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// addi r3,r9,-7312
	ctx.r3.s64 = ctx.r9.s64 + -7312;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AF7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AF90"))) PPC_WEAK_FUNC(sub_8300AF90);
PPC_FUNC_IMPL(__imp__sub_8300AF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,680
	ctx.r5.s64 = ctx.r11.s64 + 680;
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// addi r4,r10,-696
	ctx.r4.s64 = ctx.r10.s64 + -696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300AFCC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1072
	ctx.r11.s64 = ctx.r11.s64 + -1072;
	// addi r3,r9,-7288
	ctx.r3.s64 = ctx.r9.s64 + -7288;
	// stw r11,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300AFE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300AFF8"))) PPC_WEAK_FUNC(sub_8300AFF8);
PPC_FUNC_IMPL(__imp__sub_8300AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,456
	ctx.r5.s64 = ctx.r11.s64 + 456;
	// addi r3,r31,3304
	ctx.r3.s64 = ctx.r31.s64 + 3304;
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300B034;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-312
	ctx.r11.s64 = ctx.r11.s64 + -312;
	// addi r3,r9,-7264
	ctx.r3.s64 = ctx.r9.s64 + -7264;
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B04C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B060"))) PPC_WEAK_FUNC(sub_8300B060);
PPC_FUNC_IMPL(__imp__sub_8300B060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,648
	ctx.r5.s64 = ctx.r11.s64 + 648;
	// addi r3,r31,3336
	ctx.r3.s64 = ctx.r31.s64 + 3336;
	// addi r4,r10,840
	ctx.r4.s64 = ctx.r10.s64 + 840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300B09C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,456
	ctx.r11.s64 = ctx.r11.s64 + 456;
	// addi r3,r9,-7240
	ctx.r3.s64 = ctx.r9.s64 + -7240;
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B0B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B0C8"))) PPC_WEAK_FUNC(sub_8300B0C8);
PPC_FUNC_IMPL(__imp__sub_8300B0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,648
	ctx.r5.s64 = ctx.r11.s64 + 648;
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// addi r4,r10,1280
	ctx.r4.s64 = ctx.r10.s64 + 1280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300B104;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,860
	ctx.r11.s64 = ctx.r11.s64 + 860;
	// addi r3,r9,-7216
	ctx.r3.s64 = ctx.r9.s64 + -7216;
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B11C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B130"))) PPC_WEAK_FUNC(sub_8300B130);
PPC_FUNC_IMPL(__imp__sub_8300B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,328
	ctx.r5.s64 = ctx.r11.s64 + 328;
	// addi r3,r31,3400
	ctx.r3.s64 = ctx.r31.s64 + 3400;
	// addi r4,r10,2076
	ctx.r4.s64 = ctx.r10.s64 + 2076;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5360
	ctx.r6.s64 = 5360;
	// bl 0x82b38290
	ctx.lr = 0x8300B16C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1672
	ctx.r11.s64 = ctx.r11.s64 + 1672;
	// addi r3,r9,-7192
	ctx.r3.s64 = ctx.r9.s64 + -7192;
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B184;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B198"))) PPC_WEAK_FUNC(sub_8300B198);
PPC_FUNC_IMPL(__imp__sub_8300B198) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r3,r11,3436
	ctx.r3.s64 = ctx.r11.s64 + 3436;
	// bl 0x83048c64
	ctx.lr = 0x8300B1B0;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r3,r10,-7168
	ctx.r3.s64 = ctx.r10.s64 + -7168;
	// bl 0x82f06a08
	ctx.lr = 0x8300B1BC;
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

__attribute__((alias("__imp__sub_8300B1D0"))) PPC_WEAK_FUNC(sub_8300B1D0);
PPC_FUNC_IMPL(__imp__sub_8300B1D0) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// bl 0x83048c64
	ctx.lr = 0x8300B1E8;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r3,r10,-7160
	ctx.r3.s64 = ctx.r10.s64 + -7160;
	// bl 0x82f06a08
	ctx.lr = 0x8300B1F4;
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

__attribute__((alias("__imp__sub_8300B208"))) PPC_WEAK_FUNC(sub_8300B208);
PPC_FUNC_IMPL(__imp__sub_8300B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,3464
	ctx.r3.s64 = ctx.r31.s64 + 3464;
	// addi r4,r10,2352
	ctx.r4.s64 = ctx.r10.s64 + 2352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8280
	ctx.r6.s64 = 8280;
	// bl 0x82b38290
	ctx.lr = 0x8300B244;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2100
	ctx.r11.s64 = ctx.r11.s64 + 2100;
	// addi r3,r9,-7152
	ctx.r3.s64 = ctx.r9.s64 + -7152;
	// stw r11,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B25C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B270"))) PPC_WEAK_FUNC(sub_8300B270);
PPC_FUNC_IMPL(__imp__sub_8300B270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,3524
	ctx.r3.s64 = ctx.r31.s64 + 3524;
	// addi r4,r10,2392
	ctx.r4.s64 = ctx.r10.s64 + 2392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8300B2AC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2360
	ctx.r11.s64 = ctx.r11.s64 + 2360;
	// addi r3,r9,-7128
	ctx.r3.s64 = ctx.r9.s64 + -7128;
	// stw r11,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B2C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B2D8"))) PPC_WEAK_FUNC(sub_8300B2D8);
PPC_FUNC_IMPL(__imp__sub_8300B2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,3556
	ctx.r3.s64 = ctx.r31.s64 + 3556;
	// addi r4,r10,2432
	ctx.r4.s64 = ctx.r10.s64 + 2432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8300B314;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2404
	ctx.r11.s64 = ctx.r11.s64 + 2404;
	// addi r3,r9,-7104
	ctx.r3.s64 = ctx.r9.s64 + -7104;
	// stw r11,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B32C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B340"))) PPC_WEAK_FUNC(sub_8300B340);
PPC_FUNC_IMPL(__imp__sub_8300B340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,3588
	ctx.r3.s64 = ctx.r31.s64 + 3588;
	// addi r4,r10,2792
	ctx.r4.s64 = ctx.r10.s64 + 2792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8300B37C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2444
	ctx.r11.s64 = ctx.r11.s64 + 2444;
	// addi r3,r9,-7080
	ctx.r3.s64 = ctx.r9.s64 + -7080;
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B394;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B3A8"))) PPC_WEAK_FUNC(sub_8300B3A8);
PPC_FUNC_IMPL(__imp__sub_8300B3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,3652
	ctx.r3.s64 = ctx.r31.s64 + 3652;
	// addi r4,r10,2804
	ctx.r4.s64 = ctx.r10.s64 + 2804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8300B3E4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2472
	ctx.r11.s64 = ctx.r11.s64 + 2472;
	// addi r3,r9,-7056
	ctx.r3.s64 = ctx.r9.s64 + -7056;
	// stw r11,3652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3652, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B3FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B410"))) PPC_WEAK_FUNC(sub_8300B410);
PPC_FUNC_IMPL(__imp__sub_8300B410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,3620
	ctx.r3.s64 = ctx.r31.s64 + 3620;
	// addi r4,r10,2784
	ctx.r4.s64 = ctx.r10.s64 + 2784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82b38290
	ctx.lr = 0x8300B44C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2500
	ctx.r11.s64 = ctx.r11.s64 + 2500;
	// addi r3,r9,-7032
	ctx.r3.s64 = ctx.r9.s64 + -7032;
	// stw r11,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B464;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B478"))) PPC_WEAK_FUNC(sub_8300B478);
PPC_FUNC_IMPL(__imp__sub_8300B478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3844
	ctx.r3.s64 = ctx.r31.s64 + 3844;
	// addi r4,r10,3320
	ctx.r4.s64 = ctx.r10.s64 + 3320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82b38290
	ctx.lr = 0x8300B4B4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2820
	ctx.r11.s64 = ctx.r11.s64 + 2820;
	// addi r3,r9,-7008
	ctx.r3.s64 = ctx.r9.s64 + -7008;
	// stw r11,3844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B4CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B4E0"))) PPC_WEAK_FUNC(sub_8300B4E0);
PPC_FUNC_IMPL(__imp__sub_8300B4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3780
	ctx.r3.s64 = ctx.r31.s64 + 3780;
	// addi r4,r10,3340
	ctx.r4.s64 = ctx.r10.s64 + 3340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300B51C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2828
	ctx.r11.s64 = ctx.r11.s64 + 2828;
	// addi r3,r9,-6984
	ctx.r3.s64 = ctx.r9.s64 + -6984;
	// stw r11,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B534;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B548"))) PPC_WEAK_FUNC(sub_8300B548);
PPC_FUNC_IMPL(__imp__sub_8300B548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3940
	ctx.r3.s64 = ctx.r31.s64 + 3940;
	// addi r4,r10,3360
	ctx.r4.s64 = ctx.r10.s64 + 3360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300B584;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2836
	ctx.r11.s64 = ctx.r11.s64 + 2836;
	// addi r3,r9,-6960
	ctx.r3.s64 = ctx.r9.s64 + -6960;
	// stw r11,3940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B59C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B5B0"))) PPC_WEAK_FUNC(sub_8300B5B0);
PPC_FUNC_IMPL(__imp__sub_8300B5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3748
	ctx.r3.s64 = ctx.r31.s64 + 3748;
	// addi r4,r10,3384
	ctx.r4.s64 = ctx.r10.s64 + 3384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300B5EC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2844
	ctx.r11.s64 = ctx.r11.s64 + 2844;
	// addi r3,r9,-6936
	ctx.r3.s64 = ctx.r9.s64 + -6936;
	// stw r11,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B604;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B618"))) PPC_WEAK_FUNC(sub_8300B618);
PPC_FUNC_IMPL(__imp__sub_8300B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3716
	ctx.r3.s64 = ctx.r31.s64 + 3716;
	// addi r4,r10,3408
	ctx.r4.s64 = ctx.r10.s64 + 3408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300B654;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2852
	ctx.r11.s64 = ctx.r11.s64 + 2852;
	// addi r3,r9,-6912
	ctx.r3.s64 = ctx.r9.s64 + -6912;
	// stw r11,3716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3716, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B66C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B680"))) PPC_WEAK_FUNC(sub_8300B680);
PPC_FUNC_IMPL(__imp__sub_8300B680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3684
	ctx.r3.s64 = ctx.r31.s64 + 3684;
	// addi r4,r10,3432
	ctx.r4.s64 = ctx.r10.s64 + 3432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8300B6BC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2860
	ctx.r11.s64 = ctx.r11.s64 + 2860;
	// addi r3,r9,-6888
	ctx.r3.s64 = ctx.r9.s64 + -6888;
	// stw r11,3684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3684, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B6D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B6E8"))) PPC_WEAK_FUNC(sub_8300B6E8);
PPC_FUNC_IMPL(__imp__sub_8300B6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3908
	ctx.r3.s64 = ctx.r31.s64 + 3908;
	// addi r4,r10,3460
	ctx.r4.s64 = ctx.r10.s64 + 3460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8300B724;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2868
	ctx.r11.s64 = ctx.r11.s64 + 2868;
	// addi r3,r9,-6864
	ctx.r3.s64 = ctx.r9.s64 + -6864;
	// stw r11,3908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B73C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B750"))) PPC_WEAK_FUNC(sub_8300B750);
PPC_FUNC_IMPL(__imp__sub_8300B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3812
	ctx.r3.s64 = ctx.r31.s64 + 3812;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300B78C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2876
	ctx.r11.s64 = ctx.r11.s64 + 2876;
	// addi r3,r9,-6840
	ctx.r3.s64 = ctx.r9.s64 + -6840;
	// stw r11,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B7A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B7B8"))) PPC_WEAK_FUNC(sub_8300B7B8);
PPC_FUNC_IMPL(__imp__sub_8300B7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3972
	ctx.r3.s64 = ctx.r31.s64 + 3972;
	// addi r4,r10,3516
	ctx.r4.s64 = ctx.r10.s64 + 3516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x8300B7F4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2884
	ctx.r11.s64 = ctx.r11.s64 + 2884;
	// addi r3,r9,-6816
	ctx.r3.s64 = ctx.r9.s64 + -6816;
	// stw r11,3972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3972, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B80C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B820"))) PPC_WEAK_FUNC(sub_8300B820);
PPC_FUNC_IMPL(__imp__sub_8300B820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,4004
	ctx.r3.s64 = ctx.r31.s64 + 4004;
	// addi r4,r10,3544
	ctx.r4.s64 = ctx.r10.s64 + 3544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300B85C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2892
	ctx.r11.s64 = ctx.r11.s64 + 2892;
	// addi r3,r9,-6792
	ctx.r3.s64 = ctx.r9.s64 + -6792;
	// stw r11,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B874;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B888"))) PPC_WEAK_FUNC(sub_8300B888);
PPC_FUNC_IMPL(__imp__sub_8300B888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,3876
	ctx.r3.s64 = ctx.r31.s64 + 3876;
	// addi r4,r10,3572
	ctx.r4.s64 = ctx.r10.s64 + 3572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8300B8C4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2900
	ctx.r11.s64 = ctx.r11.s64 + 2900;
	// addi r3,r9,-6768
	ctx.r3.s64 = ctx.r9.s64 + -6768;
	// stw r11,3876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B8DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B8F0"))) PPC_WEAK_FUNC(sub_8300B8F0);
PPC_FUNC_IMPL(__imp__sub_8300B8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4068
	ctx.r3.s64 = ctx.r31.s64 + 4068;
	// addi r4,r10,3692
	ctx.r4.s64 = ctx.r10.s64 + 3692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8300B92C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3600
	ctx.r11.s64 = ctx.r11.s64 + 3600;
	// addi r3,r9,-6744
	ctx.r3.s64 = ctx.r9.s64 + -6744;
	// stw r11,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B944;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B958"))) PPC_WEAK_FUNC(sub_8300B958);
PPC_FUNC_IMPL(__imp__sub_8300B958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4036
	ctx.r3.s64 = ctx.r31.s64 + 4036;
	// addi r4,r10,3700
	ctx.r4.s64 = ctx.r10.s64 + 3700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8300B994;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3608
	ctx.r11.s64 = ctx.r11.s64 + 3608;
	// addi r3,r9,-6720
	ctx.r3.s64 = ctx.r9.s64 + -6720;
	// stw r11,4036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4036, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300B9AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300B9C0"))) PPC_WEAK_FUNC(sub_8300B9C0);
PPC_FUNC_IMPL(__imp__sub_8300B9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-17436
	ctx.r5.s64 = ctx.r11.s64 + -17436;
	// addi r3,r31,4100
	ctx.r3.s64 = ctx.r31.s64 + 4100;
	// addi r4,r10,4980
	ctx.r4.s64 = ctx.r10.s64 + 4980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300B9FC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4100
	ctx.r11.s64 = ctx.r11.s64 + 4100;
	// addi r3,r9,-6696
	ctx.r3.s64 = ctx.r9.s64 + -6696;
	// stw r11,4100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BA14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BA28"))) PPC_WEAK_FUNC(sub_8300BA28);
PPC_FUNC_IMPL(__imp__sub_8300BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4132
	ctx.r3.s64 = ctx.r31.s64 + 4132;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300BA64;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5064
	ctx.r11.s64 = ctx.r11.s64 + 5064;
	// addi r3,r9,-6672
	ctx.r3.s64 = ctx.r9.s64 + -6672;
	// stw r11,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BA7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BA90"))) PPC_WEAK_FUNC(sub_8300BA90);
PPC_FUNC_IMPL(__imp__sub_8300BA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4164
	ctx.r3.s64 = ctx.r31.s64 + 4164;
	// addi r4,r10,6252
	ctx.r4.s64 = ctx.r10.s64 + 6252;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4352
	ctx.r6.s64 = 4352;
	// bl 0x82b38290
	ctx.lr = 0x8300BACC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5652
	ctx.r11.s64 = ctx.r11.s64 + 5652;
	// addi r3,r9,-6648
	ctx.r3.s64 = ctx.r9.s64 + -6648;
	// stw r11,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BAE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BAF8"))) PPC_WEAK_FUNC(sub_8300BAF8);
PPC_FUNC_IMPL(__imp__sub_8300BAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4780
	ctx.r5.s64 = ctx.r11.s64 + -4780;
	// addi r3,r31,4196
	ctx.r3.s64 = ctx.r31.s64 + 4196;
	// addi r4,r10,6316
	ctx.r4.s64 = ctx.r10.s64 + 6316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8300BB34;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5620
	ctx.r11.s64 = ctx.r11.s64 + 5620;
	// addi r3,r9,-6624
	ctx.r3.s64 = ctx.r9.s64 + -6624;
	// stw r11,4196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4196, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BB4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BB60"))) PPC_WEAK_FUNC(sub_8300BB60);
PPC_FUNC_IMPL(__imp__sub_8300BB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4228
	ctx.r3.s64 = ctx.r31.s64 + 4228;
	// addi r4,r10,6880
	ctx.r4.s64 = ctx.r10.s64 + 6880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4336
	ctx.r6.s64 = 4336;
	// bl 0x82b38290
	ctx.lr = 0x8300BB9C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6340
	ctx.r11.s64 = ctx.r11.s64 + 6340;
	// addi r3,r9,-6600
	ctx.r3.s64 = ctx.r9.s64 + -6600;
	// stw r11,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BBB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BBC8"))) PPC_WEAK_FUNC(sub_8300BBC8);
PPC_FUNC_IMPL(__imp__sub_8300BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4292
	ctx.r3.s64 = ctx.r31.s64 + 4292;
	// addi r4,r10,7524
	ctx.r4.s64 = ctx.r10.s64 + 7524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4624
	ctx.r6.s64 = 4624;
	// bl 0x82b38290
	ctx.lr = 0x8300BC04;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6976
	ctx.r11.s64 = ctx.r11.s64 + 6976;
	// addi r3,r9,-6576
	ctx.r3.s64 = ctx.r9.s64 + -6576;
	// stw r11,4292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4292, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BC1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BC30"))) PPC_WEAK_FUNC(sub_8300BC30);
PPC_FUNC_IMPL(__imp__sub_8300BC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4260
	ctx.r3.s64 = ctx.r31.s64 + 4260;
	// addi r4,r10,7580
	ctx.r4.s64 = ctx.r10.s64 + 7580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300BC6C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6948
	ctx.r11.s64 = ctx.r11.s64 + 6948;
	// addi r3,r9,-6552
	ctx.r3.s64 = ctx.r9.s64 + -6552;
	// stw r11,4260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4260, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BC84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BC98"))) PPC_WEAK_FUNC(sub_8300BC98);
PPC_FUNC_IMPL(__imp__sub_8300BC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4324
	ctx.r3.s64 = ctx.r31.s64 + 4324;
	// addi r4,r10,8164
	ctx.r4.s64 = ctx.r10.s64 + 8164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4720
	ctx.r6.s64 = 4720;
	// bl 0x82b38290
	ctx.lr = 0x8300BCD4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7612
	ctx.r11.s64 = ctx.r11.s64 + 7612;
	// addi r3,r9,-6528
	ctx.r3.s64 = ctx.r9.s64 + -6528;
	// stw r11,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BCEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BD00"))) PPC_WEAK_FUNC(sub_8300BD00);
PPC_FUNC_IMPL(__imp__sub_8300BD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4356
	ctx.r3.s64 = ctx.r31.s64 + 4356;
	// addi r4,r10,8280
	ctx.r4.s64 = ctx.r10.s64 + 8280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300BD3C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7604
	ctx.r11.s64 = ctx.r11.s64 + 7604;
	// addi r3,r9,-6504
	ctx.r3.s64 = ctx.r9.s64 + -6504;
	// stw r11,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BD54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BD68"))) PPC_WEAK_FUNC(sub_8300BD68);
PPC_FUNC_IMPL(__imp__sub_8300BD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4388
	ctx.r3.s64 = ctx.r31.s64 + 4388;
	// addi r4,r10,8812
	ctx.r4.s64 = ctx.r10.s64 + 8812;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300BDA4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8304
	ctx.r11.s64 = ctx.r11.s64 + 8304;
	// addi r3,r9,-6480
	ctx.r3.s64 = ctx.r9.s64 + -6480;
	// stw r11,4388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4388, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BDBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BDD0"))) PPC_WEAK_FUNC(sub_8300BDD0);
PPC_FUNC_IMPL(__imp__sub_8300BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4420
	ctx.r3.s64 = ctx.r31.s64 + 4420;
	// addi r4,r10,9396
	ctx.r4.s64 = ctx.r10.s64 + 9396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4336
	ctx.r6.s64 = 4336;
	// bl 0x82b38290
	ctx.lr = 0x8300BE0C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8860
	ctx.r11.s64 = ctx.r11.s64 + 8860;
	// addi r3,r9,-6456
	ctx.r3.s64 = ctx.r9.s64 + -6456;
	// stw r11,4420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4420, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BE24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BE38"))) PPC_WEAK_FUNC(sub_8300BE38);
PPC_FUNC_IMPL(__imp__sub_8300BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4452
	ctx.r3.s64 = ctx.r31.s64 + 4452;
	// addi r4,r10,10056
	ctx.r4.s64 = ctx.r10.s64 + 10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4336
	ctx.r6.s64 = 4336;
	// bl 0x82b38290
	ctx.lr = 0x8300BE74;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9516
	ctx.r11.s64 = ctx.r11.s64 + 9516;
	// addi r3,r9,-6432
	ctx.r3.s64 = ctx.r9.s64 + -6432;
	// stw r11,4452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4452, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BE8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BEA0"))) PPC_WEAK_FUNC(sub_8300BEA0);
PPC_FUNC_IMPL(__imp__sub_8300BEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4484
	ctx.r3.s64 = ctx.r31.s64 + 4484;
	// addi r4,r10,10108
	ctx.r4.s64 = ctx.r10.s64 + 10108;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300BEDC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9488
	ctx.r11.s64 = ctx.r11.s64 + 9488;
	// addi r3,r9,-6408
	ctx.r3.s64 = ctx.r9.s64 + -6408;
	// stw r11,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BEF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BF08"))) PPC_WEAK_FUNC(sub_8300BF08);
PPC_FUNC_IMPL(__imp__sub_8300BF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4516
	ctx.r3.s64 = ctx.r31.s64 + 4516;
	// addi r4,r10,10844
	ctx.r4.s64 = ctx.r10.s64 + 10844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4560
	ctx.r6.s64 = 4560;
	// bl 0x82b38290
	ctx.lr = 0x8300BF44;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10132
	ctx.r11.s64 = ctx.r11.s64 + 10132;
	// addi r3,r9,-6384
	ctx.r3.s64 = ctx.r9.s64 + -6384;
	// stw r11,4516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BF5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BF70"))) PPC_WEAK_FUNC(sub_8300BF70);
PPC_FUNC_IMPL(__imp__sub_8300BF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4580
	ctx.r3.s64 = ctx.r31.s64 + 4580;
	// addi r4,r10,12068
	ctx.r4.s64 = ctx.r10.s64 + 12068;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4544
	ctx.r6.s64 = 4544;
	// bl 0x82b38290
	ctx.lr = 0x8300BFAC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11096
	ctx.r11.s64 = ctx.r11.s64 + 11096;
	// addi r3,r9,-6360
	ctx.r3.s64 = ctx.r9.s64 + -6360;
	// stw r11,4580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4580, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300BFC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300BFD8"))) PPC_WEAK_FUNC(sub_8300BFD8);
PPC_FUNC_IMPL(__imp__sub_8300BFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,3524
	ctx.r5.s64 = ctx.r11.s64 + 3524;
	// addi r3,r31,4548
	ctx.r3.s64 = ctx.r31.s64 + 4548;
	// addi r4,r10,12228
	ctx.r4.s64 = ctx.r10.s64 + 12228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300C014;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11064
	ctx.r11.s64 = ctx.r11.s64 + 11064;
	// addi r3,r9,-6336
	ctx.r3.s64 = ctx.r9.s64 + -6336;
	// stw r11,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C02C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C040"))) PPC_WEAK_FUNC(sub_8300C040);
PPC_FUNC_IMPL(__imp__sub_8300C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4612
	ctx.r3.s64 = ctx.r31.s64 + 4612;
	// addi r4,r10,12900
	ctx.r4.s64 = ctx.r10.s64 + 12900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4352
	ctx.r6.s64 = 4352;
	// bl 0x82b38290
	ctx.lr = 0x8300C07C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12252
	ctx.r11.s64 = ctx.r11.s64 + 12252;
	// addi r3,r9,-6312
	ctx.r3.s64 = ctx.r9.s64 + -6312;
	// stw r11,4612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4612, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C0A8"))) PPC_WEAK_FUNC(sub_8300C0A8);
PPC_FUNC_IMPL(__imp__sub_8300C0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4644
	ctx.r3.s64 = ctx.r31.s64 + 4644;
	// addi r4,r10,13420
	ctx.r4.s64 = ctx.r10.s64 + 13420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300C0E4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12912
	ctx.r11.s64 = ctx.r11.s64 + 12912;
	// addi r3,r9,-6288
	ctx.r3.s64 = ctx.r9.s64 + -6288;
	// stw r11,4644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4644, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C0FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C110"))) PPC_WEAK_FUNC(sub_8300C110);
PPC_FUNC_IMPL(__imp__sub_8300C110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4676
	ctx.r3.s64 = ctx.r31.s64 + 4676;
	// addi r4,r10,13940
	ctx.r4.s64 = ctx.r10.s64 + 13940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4336
	ctx.r6.s64 = 4336;
	// bl 0x82b38290
	ctx.lr = 0x8300C14C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13432
	ctx.r11.s64 = ctx.r11.s64 + 13432;
	// addi r3,r9,-6264
	ctx.r3.s64 = ctx.r9.s64 + -6264;
	// stw r11,4676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4676, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C164;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C178"))) PPC_WEAK_FUNC(sub_8300C178);
PPC_FUNC_IMPL(__imp__sub_8300C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4740
	ctx.r3.s64 = ctx.r31.s64 + 4740;
	// addi r4,r10,14492
	ctx.r4.s64 = ctx.r10.s64 + 14492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4624
	ctx.r6.s64 = 4624;
	// bl 0x82b38290
	ctx.lr = 0x8300C1B4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13980
	ctx.r11.s64 = ctx.r11.s64 + 13980;
	// addi r3,r9,-6240
	ctx.r3.s64 = ctx.r9.s64 + -6240;
	// stw r11,4740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4740, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C1CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C1E0"))) PPC_WEAK_FUNC(sub_8300C1E0);
PPC_FUNC_IMPL(__imp__sub_8300C1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4708
	ctx.r3.s64 = ctx.r31.s64 + 4708;
	// addi r4,r10,14516
	ctx.r4.s64 = ctx.r10.s64 + 14516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300C21C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13952
	ctx.r11.s64 = ctx.r11.s64 + 13952;
	// addi r3,r9,-6216
	ctx.r3.s64 = ctx.r9.s64 + -6216;
	// stw r11,4708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4708, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C234;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C248"))) PPC_WEAK_FUNC(sub_8300C248);
PPC_FUNC_IMPL(__imp__sub_8300C248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4804
	ctx.r3.s64 = ctx.r31.s64 + 4804;
	// addi r4,r10,15076
	ctx.r4.s64 = ctx.r10.s64 + 15076;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4624
	ctx.r6.s64 = 4624;
	// bl 0x82b38290
	ctx.lr = 0x8300C284;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14568
	ctx.r11.s64 = ctx.r11.s64 + 14568;
	// addi r3,r9,-6192
	ctx.r3.s64 = ctx.r9.s64 + -6192;
	// stw r11,4804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C29C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C2B0"))) PPC_WEAK_FUNC(sub_8300C2B0);
PPC_FUNC_IMPL(__imp__sub_8300C2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4772
	ctx.r3.s64 = ctx.r31.s64 + 4772;
	// addi r4,r10,15116
	ctx.r4.s64 = ctx.r10.s64 + 15116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300C2EC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14540
	ctx.r11.s64 = ctx.r11.s64 + 14540;
	// addi r3,r9,-6168
	ctx.r3.s64 = ctx.r9.s64 + -6168;
	// stw r11,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C304;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C318"))) PPC_WEAK_FUNC(sub_8300C318);
PPC_FUNC_IMPL(__imp__sub_8300C318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4836
	ctx.r3.s64 = ctx.r31.s64 + 4836;
	// addi r4,r10,15652
	ctx.r4.s64 = ctx.r10.s64 + 15652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4336
	ctx.r6.s64 = 4336;
	// bl 0x82b38290
	ctx.lr = 0x8300C354;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15140
	ctx.r11.s64 = ctx.r11.s64 + 15140;
	// addi r3,r9,-6144
	ctx.r3.s64 = ctx.r9.s64 + -6144;
	// stw r11,4836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C36C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C380"))) PPC_WEAK_FUNC(sub_8300C380);
PPC_FUNC_IMPL(__imp__sub_8300C380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4868
	ctx.r3.s64 = ctx.r31.s64 + 4868;
	// addi r4,r10,16208
	ctx.r4.s64 = ctx.r10.s64 + 16208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4400
	ctx.r6.s64 = 4400;
	// bl 0x82b38290
	ctx.lr = 0x8300C3BC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15668
	ctx.r11.s64 = ctx.r11.s64 + 15668;
	// addi r3,r9,-6120
	ctx.r3.s64 = ctx.r9.s64 + -6120;
	// stw r11,4868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C3D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C3E8"))) PPC_WEAK_FUNC(sub_8300C3E8);
PPC_FUNC_IMPL(__imp__sub_8300C3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4932
	ctx.r3.s64 = ctx.r31.s64 + 4932;
	// addi r4,r10,16764
	ctx.r4.s64 = ctx.r10.s64 + 16764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300C424;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16256
	ctx.r11.s64 = ctx.r11.s64 + 16256;
	// addi r3,r9,-6096
	ctx.r3.s64 = ctx.r9.s64 + -6096;
	// stw r11,4932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C43C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C450"))) PPC_WEAK_FUNC(sub_8300C450);
PPC_FUNC_IMPL(__imp__sub_8300C450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,4900
	ctx.r3.s64 = ctx.r31.s64 + 4900;
	// addi r4,r10,16784
	ctx.r4.s64 = ctx.r10.s64 + 16784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x8300C48C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16228
	ctx.r11.s64 = ctx.r11.s64 + 16228;
	// addi r3,r9,-6072
	ctx.r3.s64 = ctx.r9.s64 + -6072;
	// stw r11,4900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C4A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C4B8"))) PPC_WEAK_FUNC(sub_8300C4B8);
PPC_FUNC_IMPL(__imp__sub_8300C4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4964
	ctx.r3.s64 = ctx.r31.s64 + 4964;
	// addi r4,r10,17316
	ctx.r4.s64 = ctx.r10.s64 + 17316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300C4F4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16808
	ctx.r11.s64 = ctx.r11.s64 + 16808;
	// addi r3,r9,-6048
	ctx.r3.s64 = ctx.r9.s64 + -6048;
	// stw r11,4964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C50C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C520"))) PPC_WEAK_FUNC(sub_8300C520);
PPC_FUNC_IMPL(__imp__sub_8300C520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,4100
	ctx.r5.s64 = ctx.r11.s64 + 4100;
	// addi r3,r31,4996
	ctx.r3.s64 = ctx.r31.s64 + 4996;
	// addi r4,r10,17912
	ctx.r4.s64 = ctx.r10.s64 + 17912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4320
	ctx.r6.s64 = 4320;
	// bl 0x82b38290
	ctx.lr = 0x8300C55C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17340
	ctx.r11.s64 = ctx.r11.s64 + 17340;
	// addi r3,r9,-6024
	ctx.r3.s64 = ctx.r9.s64 + -6024;
	// stw r11,4996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C574;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C588"))) PPC_WEAK_FUNC(sub_8300C588);
PPC_FUNC_IMPL(__imp__sub_8300C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,5028
	ctx.r3.s64 = ctx.r31.s64 + 5028;
	// addi r4,r10,18008
	ctx.r4.s64 = ctx.r10.s64 + 18008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8300C5C4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17924
	ctx.r11.s64 = ctx.r11.s64 + 17924;
	// addi r3,r9,-6000
	ctx.r3.s64 = ctx.r9.s64 + -6000;
	// stw r11,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C5DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C5F0"))) PPC_WEAK_FUNC(sub_8300C5F0);
PPC_FUNC_IMPL(__imp__sub_8300C5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,5060
	ctx.r3.s64 = ctx.r31.s64 + 5060;
	// addi r4,r10,18184
	ctx.r4.s64 = ctx.r10.s64 + 18184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3392
	ctx.r6.s64 = 3392;
	// bl 0x82b38290
	ctx.lr = 0x8300C62C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18024
	ctx.r11.s64 = ctx.r11.s64 + 18024;
	// addi r3,r9,-5976
	ctx.r3.s64 = ctx.r9.s64 + -5976;
	// stw r11,5060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C644;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C658"))) PPC_WEAK_FUNC(sub_8300C658);
PPC_FUNC_IMPL(__imp__sub_8300C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5092
	ctx.r3.s64 = ctx.r31.s64 + 5092;
	// addi r4,r10,18272
	ctx.r4.s64 = ctx.r10.s64 + 18272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8300C694;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18204
	ctx.r11.s64 = ctx.r11.s64 + 18204;
	// addi r3,r9,-5952
	ctx.r3.s64 = ctx.r9.s64 + -5952;
	// stw r11,5092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C6AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C6C0"))) PPC_WEAK_FUNC(sub_8300C6C0);
PPC_FUNC_IMPL(__imp__sub_8300C6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5124
	ctx.r3.s64 = ctx.r31.s64 + 5124;
	// addi r4,r10,18408
	ctx.r4.s64 = ctx.r10.s64 + 18408;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x8300C6FC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18280
	ctx.r11.s64 = ctx.r11.s64 + 18280;
	// addi r3,r9,-5928
	ctx.r3.s64 = ctx.r9.s64 + -5928;
	// stw r11,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C714;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C728"))) PPC_WEAK_FUNC(sub_8300C728);
PPC_FUNC_IMPL(__imp__sub_8300C728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5220
	ctx.r3.s64 = ctx.r31.s64 + 5220;
	// addi r4,r10,18740
	ctx.r4.s64 = ctx.r10.s64 + 18740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,168
	ctx.r6.s64 = 168;
	// bl 0x82b38290
	ctx.lr = 0x8300C764;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18480
	ctx.r11.s64 = ctx.r11.s64 + 18480;
	// addi r3,r9,-5904
	ctx.r3.s64 = ctx.r9.s64 + -5904;
	// stw r11,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C77C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C790"))) PPC_WEAK_FUNC(sub_8300C790);
PPC_FUNC_IMPL(__imp__sub_8300C790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5156
	ctx.r3.s64 = ctx.r31.s64 + 5156;
	// addi r4,r10,18752
	ctx.r4.s64 = ctx.r10.s64 + 18752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82b38290
	ctx.lr = 0x8300C7CC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18424
	ctx.r11.s64 = ctx.r11.s64 + 18424;
	// addi r3,r9,-5880
	ctx.r3.s64 = ctx.r9.s64 + -5880;
	// stw r11,5156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C7E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C7F8"))) PPC_WEAK_FUNC(sub_8300C7F8);
PPC_FUNC_IMPL(__imp__sub_8300C7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5188
	ctx.r3.s64 = ctx.r31.s64 + 5188;
	// addi r4,r10,18768
	ctx.r4.s64 = ctx.r10.s64 + 18768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x82b38290
	ctx.lr = 0x8300C834;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18416
	ctx.r11.s64 = ctx.r11.s64 + 18416;
	// addi r3,r9,-5856
	ctx.r3.s64 = ctx.r9.s64 + -5856;
	// stw r11,5188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C84C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C860"))) PPC_WEAK_FUNC(sub_8300C860);
PPC_FUNC_IMPL(__imp__sub_8300C860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5252
	ctx.r3.s64 = ctx.r31.s64 + 5252;
	// addi r4,r10,18944
	ctx.r4.s64 = ctx.r10.s64 + 18944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// bl 0x82b38290
	ctx.lr = 0x8300C89C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18808
	ctx.r11.s64 = ctx.r11.s64 + 18808;
	// addi r3,r9,-5832
	ctx.r3.s64 = ctx.r9.s64 + -5832;
	// stw r11,5252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C8B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C8C8"))) PPC_WEAK_FUNC(sub_8300C8C8);
PPC_FUNC_IMPL(__imp__sub_8300C8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5284
	ctx.r3.s64 = ctx.r31.s64 + 5284;
	// addi r4,r10,19020
	ctx.r4.s64 = ctx.r10.s64 + 19020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// bl 0x82b38290
	ctx.lr = 0x8300C904;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18952
	ctx.r11.s64 = ctx.r11.s64 + 18952;
	// addi r3,r9,-5808
	ctx.r3.s64 = ctx.r9.s64 + -5808;
	// stw r11,5284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C91C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C930"))) PPC_WEAK_FUNC(sub_8300C930);
PPC_FUNC_IMPL(__imp__sub_8300C930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5316
	ctx.r3.s64 = ctx.r31.s64 + 5316;
	// addi r4,r10,19140
	ctx.r4.s64 = ctx.r10.s64 + 19140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x8300C96C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19032
	ctx.r11.s64 = ctx.r11.s64 + 19032;
	// addi r3,r9,-5784
	ctx.r3.s64 = ctx.r9.s64 + -5784;
	// stw r11,5316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C984;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300C998"))) PPC_WEAK_FUNC(sub_8300C998);
PPC_FUNC_IMPL(__imp__sub_8300C998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5348
	ctx.r3.s64 = ctx.r31.s64 + 5348;
	// addi r4,r10,19228
	ctx.r4.s64 = ctx.r10.s64 + 19228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8300C9D4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19148
	ctx.r11.s64 = ctx.r11.s64 + 19148;
	// addi r3,r9,-5760
	ctx.r3.s64 = ctx.r9.s64 + -5760;
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300C9EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CA00"))) PPC_WEAK_FUNC(sub_8300CA00);
PPC_FUNC_IMPL(__imp__sub_8300CA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5380
	ctx.r3.s64 = ctx.r31.s64 + 5380;
	// addi r4,r10,19352
	ctx.r4.s64 = ctx.r10.s64 + 19352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,612
	ctx.r6.s64 = 612;
	// bl 0x82b38290
	ctx.lr = 0x8300CA3C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19240
	ctx.r11.s64 = ctx.r11.s64 + 19240;
	// addi r3,r9,-5736
	ctx.r3.s64 = ctx.r9.s64 + -5736;
	// stw r11,5380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CA54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CA68"))) PPC_WEAK_FUNC(sub_8300CA68);
PPC_FUNC_IMPL(__imp__sub_8300CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5412
	ctx.r3.s64 = ctx.r31.s64 + 5412;
	// addi r4,r10,19416
	ctx.r4.s64 = ctx.r10.s64 + 19416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,124
	ctx.r6.s64 = 124;
	// bl 0x82b38290
	ctx.lr = 0x8300CAA4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19360
	ctx.r11.s64 = ctx.r11.s64 + 19360;
	// addi r3,r9,-5712
	ctx.r3.s64 = ctx.r9.s64 + -5712;
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CABC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CAD0"))) PPC_WEAK_FUNC(sub_8300CAD0);
PPC_FUNC_IMPL(__imp__sub_8300CAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5444
	ctx.r3.s64 = ctx.r31.s64 + 5444;
	// addi r4,r10,19536
	ctx.r4.s64 = ctx.r10.s64 + 19536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8300CB0C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19436
	ctx.r11.s64 = ctx.r11.s64 + 19436;
	// addi r3,r9,-5688
	ctx.r3.s64 = ctx.r9.s64 + -5688;
	// stw r11,5444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CB24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CB38"))) PPC_WEAK_FUNC(sub_8300CB38);
PPC_FUNC_IMPL(__imp__sub_8300CB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5476
	ctx.r3.s64 = ctx.r31.s64 + 5476;
	// addi r4,r10,19616
	ctx.r4.s64 = ctx.r10.s64 + 19616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x8300CB74;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19548
	ctx.r11.s64 = ctx.r11.s64 + 19548;
	// addi r3,r9,-5664
	ctx.r3.s64 = ctx.r9.s64 + -5664;
	// stw r11,5476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CB8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CBA0"))) PPC_WEAK_FUNC(sub_8300CBA0);
PPC_FUNC_IMPL(__imp__sub_8300CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5508
	ctx.r3.s64 = ctx.r31.s64 + 5508;
	// addi r4,r10,19680
	ctx.r4.s64 = ctx.r10.s64 + 19680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x8300CBDC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19624
	ctx.r11.s64 = ctx.r11.s64 + 19624;
	// addi r3,r9,-5640
	ctx.r3.s64 = ctx.r9.s64 + -5640;
	// stw r11,5508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CBF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CC08"))) PPC_WEAK_FUNC(sub_8300CC08);
PPC_FUNC_IMPL(__imp__sub_8300CC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5540
	ctx.r3.s64 = ctx.r31.s64 + 5540;
	// addi r4,r10,19920
	ctx.r4.s64 = ctx.r10.s64 + 19920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,560
	ctx.r6.s64 = 560;
	// bl 0x82b38290
	ctx.lr = 0x8300CC44;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19716
	ctx.r11.s64 = ctx.r11.s64 + 19716;
	// addi r3,r9,-5616
	ctx.r3.s64 = ctx.r9.s64 + -5616;
	// stw r11,5540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CC5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CC70"))) PPC_WEAK_FUNC(sub_8300CC70);
PPC_FUNC_IMPL(__imp__sub_8300CC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5572
	ctx.r3.s64 = ctx.r31.s64 + 5572;
	// addi r4,r10,20008
	ctx.r4.s64 = ctx.r10.s64 + 20008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8300CCAC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19936
	ctx.r11.s64 = ctx.r11.s64 + 19936;
	// addi r3,r9,-5592
	ctx.r3.s64 = ctx.r9.s64 + -5592;
	// stw r11,5572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CCC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CCD8"))) PPC_WEAK_FUNC(sub_8300CCD8);
PPC_FUNC_IMPL(__imp__sub_8300CCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-4520
	ctx.r5.s64 = ctx.r11.s64 + -4520;
	// addi r3,r31,5604
	ctx.r3.s64 = ctx.r31.s64 + 5604;
	// addi r4,r10,20072
	ctx.r4.s64 = ctx.r10.s64 + 20072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// bl 0x82b38290
	ctx.lr = 0x8300CD14;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20016
	ctx.r11.s64 = ctx.r11.s64 + 20016;
	// addi r3,r9,-5568
	ctx.r3.s64 = ctx.r9.s64 + -5568;
	// stw r11,5604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CD2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CD40"))) PPC_WEAK_FUNC(sub_8300CD40);
PPC_FUNC_IMPL(__imp__sub_8300CD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5636
	ctx.r3.s64 = ctx.r31.s64 + 5636;
	// addi r4,r10,20140
	ctx.r4.s64 = ctx.r10.s64 + 20140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x8300CD7C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20084
	ctx.r11.s64 = ctx.r11.s64 + 20084;
	// addi r3,r9,-5544
	ctx.r3.s64 = ctx.r9.s64 + -5544;
	// stw r11,5636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CD94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CDA8"))) PPC_WEAK_FUNC(sub_8300CDA8);
PPC_FUNC_IMPL(__imp__sub_8300CDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5668
	ctx.r3.s64 = ctx.r31.s64 + 5668;
	// addi r4,r10,20232
	ctx.r4.s64 = ctx.r10.s64 + 20232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8300CDE4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20156
	ctx.r11.s64 = ctx.r11.s64 + 20156;
	// addi r3,r9,-5520
	ctx.r3.s64 = ctx.r9.s64 + -5520;
	// stw r11,5668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CDFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CE10"))) PPC_WEAK_FUNC(sub_8300CE10);
PPC_FUNC_IMPL(__imp__sub_8300CE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5700
	ctx.r3.s64 = ctx.r31.s64 + 5700;
	// addi r4,r10,20540
	ctx.r4.s64 = ctx.r10.s64 + 20540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// bl 0x82b38290
	ctx.lr = 0x8300CE4C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20248
	ctx.r11.s64 = ctx.r11.s64 + 20248;
	// addi r3,r9,-5496
	ctx.r3.s64 = ctx.r9.s64 + -5496;
	// stw r11,5700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CE64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CE78"))) PPC_WEAK_FUNC(sub_8300CE78);
PPC_FUNC_IMPL(__imp__sub_8300CE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5732
	ctx.r3.s64 = ctx.r31.s64 + 5732;
	// addi r4,r10,20620
	ctx.r4.s64 = ctx.r10.s64 + 20620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8300CEB4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20552
	ctx.r11.s64 = ctx.r11.s64 + 20552;
	// addi r3,r9,-5472
	ctx.r3.s64 = ctx.r9.s64 + -5472;
	// stw r11,5732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5732, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CECC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CEE0"))) PPC_WEAK_FUNC(sub_8300CEE0);
PPC_FUNC_IMPL(__imp__sub_8300CEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5764
	ctx.r3.s64 = ctx.r31.s64 + 5764;
	// addi r4,r10,20688
	ctx.r4.s64 = ctx.r10.s64 + 20688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8300CF1C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20632
	ctx.r11.s64 = ctx.r11.s64 + 20632;
	// addi r3,r9,-5448
	ctx.r3.s64 = ctx.r9.s64 + -5448;
	// stw r11,5764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5764, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CF34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CF48"))) PPC_WEAK_FUNC(sub_8300CF48);
PPC_FUNC_IMPL(__imp__sub_8300CF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5796
	ctx.r3.s64 = ctx.r31.s64 + 5796;
	// addi r4,r10,20768
	ctx.r4.s64 = ctx.r10.s64 + 20768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// bl 0x82b38290
	ctx.lr = 0x8300CF84;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20700
	ctx.r11.s64 = ctx.r11.s64 + 20700;
	// addi r3,r9,-5424
	ctx.r3.s64 = ctx.r9.s64 + -5424;
	// stw r11,5796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5796, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300CF9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300CFB0"))) PPC_WEAK_FUNC(sub_8300CFB0);
PPC_FUNC_IMPL(__imp__sub_8300CFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5828
	ctx.r3.s64 = ctx.r31.s64 + 5828;
	// addi r4,r10,20864
	ctx.r4.s64 = ctx.r10.s64 + 20864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x8300CFEC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20792
	ctx.r11.s64 = ctx.r11.s64 + 20792;
	// addi r3,r9,-5400
	ctx.r3.s64 = ctx.r9.s64 + -5400;
	// stw r11,5828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D004;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D018"))) PPC_WEAK_FUNC(sub_8300D018);
PPC_FUNC_IMPL(__imp__sub_8300D018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5860
	ctx.r3.s64 = ctx.r31.s64 + 5860;
	// addi r4,r10,18584
	ctx.r4.s64 = ctx.r10.s64 + 18584;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D054;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20876
	ctx.r11.s64 = ctx.r11.s64 + 20876;
	// addi r3,r9,-5376
	ctx.r3.s64 = ctx.r9.s64 + -5376;
	// stw r11,5860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D06C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D080"))) PPC_WEAK_FUNC(sub_8300D080);
PPC_FUNC_IMPL(__imp__sub_8300D080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5892
	ctx.r3.s64 = ctx.r31.s64 + 5892;
	// addi r4,r10,21060
	ctx.r4.s64 = ctx.r10.s64 + 21060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D0BC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20968
	ctx.r11.s64 = ctx.r11.s64 + 20968;
	// addi r3,r9,-5352
	ctx.r3.s64 = ctx.r9.s64 + -5352;
	// stw r11,5892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D0D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D0E8"))) PPC_WEAK_FUNC(sub_8300D0E8);
PPC_FUNC_IMPL(__imp__sub_8300D0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5924
	ctx.r3.s64 = ctx.r31.s64 + 5924;
	// addi r4,r10,21164
	ctx.r4.s64 = ctx.r10.s64 + 21164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D124;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21072
	ctx.r11.s64 = ctx.r11.s64 + 21072;
	// addi r3,r9,-5328
	ctx.r3.s64 = ctx.r9.s64 + -5328;
	// stw r11,5924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5924, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D13C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D150"))) PPC_WEAK_FUNC(sub_8300D150);
PPC_FUNC_IMPL(__imp__sub_8300D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5956
	ctx.r3.s64 = ctx.r31.s64 + 5956;
	// addi r4,r10,21268
	ctx.r4.s64 = ctx.r10.s64 + 21268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D18C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21176
	ctx.r11.s64 = ctx.r11.s64 + 21176;
	// addi r3,r9,-5304
	ctx.r3.s64 = ctx.r9.s64 + -5304;
	// stw r11,5956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5956, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D1A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D1B8"))) PPC_WEAK_FUNC(sub_8300D1B8);
PPC_FUNC_IMPL(__imp__sub_8300D1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,5988
	ctx.r3.s64 = ctx.r31.s64 + 5988;
	// addi r4,r10,21372
	ctx.r4.s64 = ctx.r10.s64 + 21372;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D1F4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21280
	ctx.r11.s64 = ctx.r11.s64 + 21280;
	// addi r3,r9,-5280
	ctx.r3.s64 = ctx.r9.s64 + -5280;
	// stw r11,5988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5988, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D20C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D220"))) PPC_WEAK_FUNC(sub_8300D220);
PPC_FUNC_IMPL(__imp__sub_8300D220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6020
	ctx.r3.s64 = ctx.r31.s64 + 6020;
	// addi r4,r10,21476
	ctx.r4.s64 = ctx.r10.s64 + 21476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D25C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21384
	ctx.r11.s64 = ctx.r11.s64 + 21384;
	// addi r3,r9,-5256
	ctx.r3.s64 = ctx.r9.s64 + -5256;
	// stw r11,6020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6020, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D274;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D288"))) PPC_WEAK_FUNC(sub_8300D288);
PPC_FUNC_IMPL(__imp__sub_8300D288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6052
	ctx.r3.s64 = ctx.r31.s64 + 6052;
	// addi r4,r10,21580
	ctx.r4.s64 = ctx.r10.s64 + 21580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D2C4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21488
	ctx.r11.s64 = ctx.r11.s64 + 21488;
	// addi r3,r9,-5232
	ctx.r3.s64 = ctx.r9.s64 + -5232;
	// stw r11,6052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6052, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D2DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D2F0"))) PPC_WEAK_FUNC(sub_8300D2F0);
PPC_FUNC_IMPL(__imp__sub_8300D2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6084
	ctx.r3.s64 = ctx.r31.s64 + 6084;
	// addi r4,r10,21684
	ctx.r4.s64 = ctx.r10.s64 + 21684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D32C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21592
	ctx.r11.s64 = ctx.r11.s64 + 21592;
	// addi r3,r9,-5208
	ctx.r3.s64 = ctx.r9.s64 + -5208;
	// stw r11,6084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6084, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D344;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D358"))) PPC_WEAK_FUNC(sub_8300D358);
PPC_FUNC_IMPL(__imp__sub_8300D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6116
	ctx.r3.s64 = ctx.r31.s64 + 6116;
	// addi r4,r10,21788
	ctx.r4.s64 = ctx.r10.s64 + 21788;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D394;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21696
	ctx.r11.s64 = ctx.r11.s64 + 21696;
	// addi r3,r9,-5184
	ctx.r3.s64 = ctx.r9.s64 + -5184;
	// stw r11,6116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6116, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D3AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D3C0"))) PPC_WEAK_FUNC(sub_8300D3C0);
PPC_FUNC_IMPL(__imp__sub_8300D3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6148
	ctx.r3.s64 = ctx.r31.s64 + 6148;
	// addi r4,r10,21892
	ctx.r4.s64 = ctx.r10.s64 + 21892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D3FC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21800
	ctx.r11.s64 = ctx.r11.s64 + 21800;
	// addi r3,r9,-5160
	ctx.r3.s64 = ctx.r9.s64 + -5160;
	// stw r11,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D414;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D428"))) PPC_WEAK_FUNC(sub_8300D428);
PPC_FUNC_IMPL(__imp__sub_8300D428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6180
	ctx.r3.s64 = ctx.r31.s64 + 6180;
	// addi r4,r10,21996
	ctx.r4.s64 = ctx.r10.s64 + 21996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D464;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21904
	ctx.r11.s64 = ctx.r11.s64 + 21904;
	// addi r3,r9,-5136
	ctx.r3.s64 = ctx.r9.s64 + -5136;
	// stw r11,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D47C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D490"))) PPC_WEAK_FUNC(sub_8300D490);
PPC_FUNC_IMPL(__imp__sub_8300D490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6212
	ctx.r3.s64 = ctx.r31.s64 + 6212;
	// addi r4,r10,22100
	ctx.r4.s64 = ctx.r10.s64 + 22100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D4CC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// addi r3,r9,-5112
	ctx.r3.s64 = ctx.r9.s64 + -5112;
	// stw r11,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D4E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D4F8"))) PPC_WEAK_FUNC(sub_8300D4F8);
PPC_FUNC_IMPL(__imp__sub_8300D4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6244
	ctx.r3.s64 = ctx.r31.s64 + 6244;
	// addi r4,r10,22204
	ctx.r4.s64 = ctx.r10.s64 + 22204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D534;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22112
	ctx.r11.s64 = ctx.r11.s64 + 22112;
	// addi r3,r9,-5088
	ctx.r3.s64 = ctx.r9.s64 + -5088;
	// stw r11,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D54C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D560"))) PPC_WEAK_FUNC(sub_8300D560);
PPC_FUNC_IMPL(__imp__sub_8300D560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6276
	ctx.r3.s64 = ctx.r31.s64 + 6276;
	// addi r4,r10,22308
	ctx.r4.s64 = ctx.r10.s64 + 22308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D59C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22216
	ctx.r11.s64 = ctx.r11.s64 + 22216;
	// addi r3,r9,-5064
	ctx.r3.s64 = ctx.r9.s64 + -5064;
	// stw r11,6276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6276, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D5B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D5C8"))) PPC_WEAK_FUNC(sub_8300D5C8);
PPC_FUNC_IMPL(__imp__sub_8300D5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6308
	ctx.r3.s64 = ctx.r31.s64 + 6308;
	// addi r4,r10,22412
	ctx.r4.s64 = ctx.r10.s64 + 22412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D604;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22320
	ctx.r11.s64 = ctx.r11.s64 + 22320;
	// addi r3,r9,-5040
	ctx.r3.s64 = ctx.r9.s64 + -5040;
	// stw r11,6308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6308, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D61C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D630"))) PPC_WEAK_FUNC(sub_8300D630);
PPC_FUNC_IMPL(__imp__sub_8300D630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6340
	ctx.r3.s64 = ctx.r31.s64 + 6340;
	// addi r4,r10,22516
	ctx.r4.s64 = ctx.r10.s64 + 22516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D66C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22424
	ctx.r11.s64 = ctx.r11.s64 + 22424;
	// addi r3,r9,-5016
	ctx.r3.s64 = ctx.r9.s64 + -5016;
	// stw r11,6340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6340, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D684;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D698"))) PPC_WEAK_FUNC(sub_8300D698);
PPC_FUNC_IMPL(__imp__sub_8300D698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6372
	ctx.r3.s64 = ctx.r31.s64 + 6372;
	// addi r4,r10,22620
	ctx.r4.s64 = ctx.r10.s64 + 22620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D6D4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22528
	ctx.r11.s64 = ctx.r11.s64 + 22528;
	// addi r3,r9,-4992
	ctx.r3.s64 = ctx.r9.s64 + -4992;
	// stw r11,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D6EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D700"))) PPC_WEAK_FUNC(sub_8300D700);
PPC_FUNC_IMPL(__imp__sub_8300D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6404
	ctx.r3.s64 = ctx.r31.s64 + 6404;
	// addi r4,r10,22724
	ctx.r4.s64 = ctx.r10.s64 + 22724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D73C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22632
	ctx.r11.s64 = ctx.r11.s64 + 22632;
	// addi r3,r9,-4968
	ctx.r3.s64 = ctx.r9.s64 + -4968;
	// stw r11,6404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6404, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D754;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D768"))) PPC_WEAK_FUNC(sub_8300D768);
PPC_FUNC_IMPL(__imp__sub_8300D768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,5604
	ctx.r5.s64 = ctx.r11.s64 + 5604;
	// addi r3,r31,6436
	ctx.r3.s64 = ctx.r31.s64 + 6436;
	// addi r4,r10,22828
	ctx.r4.s64 = ctx.r10.s64 + 22828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x8300D7A4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22736
	ctx.r11.s64 = ctx.r11.s64 + 22736;
	// addi r3,r9,-4944
	ctx.r3.s64 = ctx.r9.s64 + -4944;
	// stw r11,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D7BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D7D0"))) PPC_WEAK_FUNC(sub_8300D7D0);
PPC_FUNC_IMPL(__imp__sub_8300D7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6468
	ctx.r3.s64 = ctx.r31.s64 + 6468;
	// addi r4,r10,22876
	ctx.r4.s64 = ctx.r10.s64 + 22876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8300D80C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22840
	ctx.r11.s64 = ctx.r11.s64 + 22840;
	// addi r3,r9,-4920
	ctx.r3.s64 = ctx.r9.s64 + -4920;
	// stw r11,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D824;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D838"))) PPC_WEAK_FUNC(sub_8300D838);
PPC_FUNC_IMPL(__imp__sub_8300D838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6500
	ctx.r3.s64 = ctx.r31.s64 + 6500;
	// addi r4,r10,24136
	ctx.r4.s64 = ctx.r10.s64 + 24136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,324
	ctx.r6.s64 = 324;
	// bl 0x82b38290
	ctx.lr = 0x8300D874;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,22888
	ctx.r11.s64 = ctx.r11.s64 + 22888;
	// addi r3,r9,-4896
	ctx.r3.s64 = ctx.r9.s64 + -4896;
	// stw r11,6500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6500, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D88C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D8A0"))) PPC_WEAK_FUNC(sub_8300D8A0);
PPC_FUNC_IMPL(__imp__sub_8300D8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6532
	ctx.r3.s64 = ctx.r31.s64 + 6532;
	// addi r4,r10,24792
	ctx.r4.s64 = ctx.r10.s64 + 24792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1044
	ctx.r6.s64 = 1044;
	// bl 0x82b38290
	ctx.lr = 0x8300D8DC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24148
	ctx.r11.s64 = ctx.r11.s64 + 24148;
	// addi r3,r9,-4872
	ctx.r3.s64 = ctx.r9.s64 + -4872;
	// stw r11,6532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6532, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D8F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D908"))) PPC_WEAK_FUNC(sub_8300D908);
PPC_FUNC_IMPL(__imp__sub_8300D908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6564
	ctx.r3.s64 = ctx.r31.s64 + 6564;
	// addi r4,r10,25772
	ctx.r4.s64 = ctx.r10.s64 + 25772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,284
	ctx.r6.s64 = 284;
	// bl 0x82b38290
	ctx.lr = 0x8300D944;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24804
	ctx.r11.s64 = ctx.r11.s64 + 24804;
	// addi r3,r9,-4848
	ctx.r3.s64 = ctx.r9.s64 + -4848;
	// stw r11,6564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6564, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D95C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D970"))) PPC_WEAK_FUNC(sub_8300D970);
PPC_FUNC_IMPL(__imp__sub_8300D970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,6564
	ctx.r5.s64 = ctx.r11.s64 + 6564;
	// addi r3,r31,6596
	ctx.r3.s64 = ctx.r31.s64 + 6596;
	// addi r4,r10,26348
	ctx.r4.s64 = ctx.r10.s64 + 26348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,656
	ctx.r6.s64 = 656;
	// bl 0x82b38290
	ctx.lr = 0x8300D9AC;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25784
	ctx.r11.s64 = ctx.r11.s64 + 25784;
	// addi r3,r9,-4824
	ctx.r3.s64 = ctx.r9.s64 + -4824;
	// stw r11,6596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6596, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300D9C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300D9D8"))) PPC_WEAK_FUNC(sub_8300D9D8);
PPC_FUNC_IMPL(__imp__sub_8300D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6628
	ctx.r3.s64 = ctx.r31.s64 + 6628;
	// addi r4,r10,26420
	ctx.r4.s64 = ctx.r10.s64 + 26420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3736
	ctx.r6.s64 = 3736;
	// bl 0x82b38290
	ctx.lr = 0x8300DA14;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26368
	ctx.r11.s64 = ctx.r11.s64 + 26368;
	// addi r3,r9,-4800
	ctx.r3.s64 = ctx.r9.s64 + -4800;
	// stw r11,6628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6628, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300DA2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300DA40"))) PPC_WEAK_FUNC(sub_8300DA40);
PPC_FUNC_IMPL(__imp__sub_8300DA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r3,r31,6660
	ctx.r3.s64 = ctx.r31.s64 + 6660;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r4,r10,31748
	ctx.r4.s64 = ctx.r10.s64 + 31748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,24172
	ctx.r6.u64 = ctx.r6.u64 | 24172;
	// bl 0x82b38290
	ctx.lr = 0x8300DA80;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29036
	ctx.r11.s64 = ctx.r11.s64 + 29036;
	// addi r3,r9,-4776
	ctx.r3.s64 = ctx.r9.s64 + -4776;
	// stw r11,6660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300DA98;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300DAB0"))) PPC_WEAK_FUNC(sub_8300DAB0);
PPC_FUNC_IMPL(__imp__sub_8300DAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82f06220
	ctx.lr = 0x8300DAB8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r6,r6,-3864
	ctx.r6.s64 = ctx.r6.s64 + -3864;
	// addi r5,r11,-8280
	ctx.r5.s64 = ctx.r11.s64 + -8280;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// lis r4,-31993
	ctx.r4.s64 = -2096693248;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r14,r3,-3928
	ctx.r14.s64 = ctx.r3.s64 + -3928;
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// addi r27,r10,-7128
	ctx.r27.s64 = ctx.r10.s64 + -7128;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r20,r9,-6520
	ctx.r20.s64 = ctx.r9.s64 + -6520;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r16,r8,-6296
	ctx.r16.s64 = ctx.r8.s64 + -6296;
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// addi r15,r4,-27232
	ctx.r15.s64 = ctx.r4.s64 + -27232;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r3,r3,-3800
	ctx.r3.s64 = ctx.r3.s64 + -3800;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r31,12(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r29,20(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r28,24(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r11,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r11.u32);
	// stw r10,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r10.u32);
	// stw r9,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r9.u32);
	// stw r8,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r8.u32);
	// lwz r26,4(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r25,8(r20)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r24,12(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r27,28(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r23,16(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// lwz r22,20(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// lwz r21,24(r20)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// lwz r19,4(r16)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r18,8(r16)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r17,12(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r9,24(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r8,28(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r20,28(r20)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// stw r7,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r7.u32);
	// stw r6,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r6.u32);
	// stw r5,28(r15)
	PPC_STORE_U32(ctx.r15.u32 + 28, ctx.r5.u32);
	// stw r4,36(r15)
	PPC_STORE_U32(ctx.r15.u32 + 36, ctx.r4.u32);
	// stw r3,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r3.u32);
	// stw r31,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r31.u32);
	// stw r30,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r30.u32);
	// stw r29,52(r15)
	PPC_STORE_U32(ctx.r15.u32 + 52, ctx.r29.u32);
	// stw r28,56(r15)
	PPC_STORE_U32(ctx.r15.u32 + 56, ctx.r28.u32);
	// stw r27,60(r15)
	PPC_STORE_U32(ctx.r15.u32 + 60, ctx.r27.u32);
	// stw r26,68(r15)
	PPC_STORE_U32(ctx.r15.u32 + 68, ctx.r26.u32);
	// stw r25,72(r15)
	PPC_STORE_U32(ctx.r15.u32 + 72, ctx.r25.u32);
	// stw r24,76(r15)
	PPC_STORE_U32(ctx.r15.u32 + 76, ctx.r24.u32);
	// lwz r7,4(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r6,8(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r5,12(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r4,16(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r3,20(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r31,24(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r30,28(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// lwz r29,4(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r28,8(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r27,12(r16)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r26,16(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r25,20(r16)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r24,24(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// stw r23,80(r15)
	PPC_STORE_U32(ctx.r15.u32 + 80, ctx.r23.u32);
	// stw r22,84(r15)
	PPC_STORE_U32(ctx.r15.u32 + 84, ctx.r22.u32);
	// stw r21,88(r15)
	PPC_STORE_U32(ctx.r15.u32 + 88, ctx.r21.u32);
	// stw r20,92(r15)
	PPC_STORE_U32(ctx.r15.u32 + 92, ctx.r20.u32);
	// stw r17,108(r15)
	PPC_STORE_U32(ctx.r15.u32 + 108, ctx.r17.u32);
	// lis r17,-31984
	ctx.r17.s64 = -2096103424;
	// lwz r23,28(r16)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lis r20,-31984
	ctx.r20.s64 = -2096103424;
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r14,r20,-3704
	ctx.r14.s64 = ctx.r20.s64 + -3704;
	// stw r19,100(r15)
	PPC_STORE_U32(ctx.r15.u32 + 100, ctx.r19.u32);
	// lis r19,-31984
	ctx.r19.s64 = -2096103424;
	// stw r18,104(r15)
	PPC_STORE_U32(ctx.r15.u32 + 104, ctx.r18.u32);
	// lis r18,-31984
	ctx.r18.s64 = -2096103424;
	// addi r19,r19,-3448
	ctx.r19.s64 = ctx.r19.s64 + -3448;
	// stw r11,112(r15)
	PPC_STORE_U32(ctx.r15.u32 + 112, ctx.r11.u32);
	// addi r18,r18,-2936
	ctx.r18.s64 = ctx.r18.s64 + -2936;
	// stw r10,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r10.u32);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// stw r9,120(r15)
	PPC_STORE_U32(ctx.r15.u32 + 120, ctx.r9.u32);
	// stw r8,124(r15)
	PPC_STORE_U32(ctx.r15.u32 + 124, ctx.r8.u32);
	// stw r7,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r7.u32);
	// stw r6,136(r15)
	PPC_STORE_U32(ctx.r15.u32 + 136, ctx.r6.u32);
	// stw r5,140(r15)
	PPC_STORE_U32(ctx.r15.u32 + 140, ctx.r5.u32);
	// lwz r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r9,12(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r7,20(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r6,24(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r5,28(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// stw r4,144(r15)
	PPC_STORE_U32(ctx.r15.u32 + 144, ctx.r4.u32);
	// stw r3,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r3.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r31.u32);
	// addi r11,r11,-2744
	ctx.r11.s64 = ctx.r11.s64 + -2744;
	// stw r30,156(r15)
	PPC_STORE_U32(ctx.r15.u32 + 156, ctx.r30.u32);
	// stw r29,164(r15)
	PPC_STORE_U32(ctx.r15.u32 + 164, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r28.u32);
	// stw r27,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r27.u32);
	// lwz r22,4(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r21,8(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r20,12(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r4,4(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r3,8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r31,12(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r30,16(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r29,20(r14)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r28,24(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r27,28(r14)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// lwz r14,88(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r26.u32);
	// stw r25,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r25.u32);
	// stw r24,184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 184, ctx.r24.u32);
	// stw r23,188(r15)
	PPC_STORE_U32(ctx.r15.u32 + 188, ctx.r23.u32);
	// stw r22,196(r15)
	PPC_STORE_U32(ctx.r15.u32 + 196, ctx.r22.u32);
	// stw r21,200(r15)
	PPC_STORE_U32(ctx.r15.u32 + 200, ctx.r21.u32);
	// stw r20,204(r15)
	PPC_STORE_U32(ctx.r15.u32 + 204, ctx.r20.u32);
	// lwz r19,16(r16)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r18,20(r16)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r17,24(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r26,4(r14)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r25,8(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r24,12(r14)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// lwz r23,16(r14)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r22,20(r14)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r21,24(r14)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r20,28(r14)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// lwz r14,84(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r16,28(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r19,208(r15)
	PPC_STORE_U32(ctx.r15.u32 + 208, ctx.r19.u32);
	// stw r18,212(r15)
	PPC_STORE_U32(ctx.r15.u32 + 212, ctx.r18.u32);
	// stw r17,216(r15)
	PPC_STORE_U32(ctx.r15.u32 + 216, ctx.r17.u32);
	// lwz r19,4(r14)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r18,8(r14)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r17,12(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// stw r16,220(r15)
	PPC_STORE_U32(ctx.r15.u32 + 220, ctx.r16.u32);
	// stw r11,228(r15)
	PPC_STORE_U32(ctx.r15.u32 + 228, ctx.r11.u32);
	// stw r10,232(r15)
	PPC_STORE_U32(ctx.r15.u32 + 232, ctx.r10.u32);
	// stw r9,236(r15)
	PPC_STORE_U32(ctx.r15.u32 + 236, ctx.r9.u32);
	// stw r8,240(r15)
	PPC_STORE_U32(ctx.r15.u32 + 240, ctx.r8.u32);
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r3,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r3.u32);
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// stw r5,252(r15)
	PPC_STORE_U32(ctx.r15.u32 + 252, ctx.r5.u32);
	// addi r16,r11,-2488
	ctx.r16.s64 = ctx.r11.s64 + -2488;
	// stw r29,276(r15)
	PPC_STORE_U32(ctx.r15.u32 + 276, ctx.r29.u32);
	// addi r11,r9,-2008
	ctx.r11.s64 = ctx.r9.s64 + -2008;
	// stw r28,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r28.u32);
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// stw r27,284(r15)
	PPC_STORE_U32(ctx.r15.u32 + 284, ctx.r27.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r9,r3,-1912
	ctx.r9.s64 = ctx.r3.s64 + -1912;
	// stw r26,292(r15)
	PPC_STORE_U32(ctx.r15.u32 + 292, ctx.r26.u32);
	// addi r5,r10,-2232
	ctx.r5.s64 = ctx.r10.s64 + -2232;
	// stw r25,296(r15)
	PPC_STORE_U32(ctx.r15.u32 + 296, ctx.r25.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// stw r24,300(r15)
	PPC_STORE_U32(ctx.r15.u32 + 300, ctx.r24.u32);
	// addi r10,r10,-568
	ctx.r10.s64 = ctx.r10.s64 + -568;
	// stw r23,304(r15)
	PPC_STORE_U32(ctx.r15.u32 + 304, ctx.r23.u32);
	// lwz r29,4(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r28,8(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r27,12(r16)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r26,16(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r25,20(r16)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r24,24(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r23,28(r16)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r7,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r7.u32);
	// stw r6,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r6.u32);
	// lwz r16,88(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,20(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r6,24(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stw r22,308(r15)
	PPC_STORE_U32(ctx.r15.u32 + 308, ctx.r22.u32);
	// stw r21,312(r15)
	PPC_STORE_U32(ctx.r15.u32 + 312, ctx.r21.u32);
	// stw r20,316(r15)
	PPC_STORE_U32(ctx.r15.u32 + 316, ctx.r20.u32);
	// stw r11,388(r15)
	PPC_STORE_U32(ctx.r15.u32 + 388, ctx.r11.u32);
	// stw r10,392(r15)
	PPC_STORE_U32(ctx.r15.u32 + 392, ctx.r10.u32);
	// stw r9,396(r15)
	PPC_STORE_U32(ctx.r15.u32 + 396, ctx.r9.u32);
	// stw r8,400(r15)
	PPC_STORE_U32(ctx.r15.u32 + 400, ctx.r8.u32);
	// stw r11,420(r15)
	PPC_STORE_U32(ctx.r15.u32 + 420, ctx.r11.u32);
	// stw r10,424(r15)
	PPC_STORE_U32(ctx.r15.u32 + 424, ctx.r10.u32);
	// stw r9,428(r15)
	PPC_STORE_U32(ctx.r15.u32 + 428, ctx.r9.u32);
	// stw r8,432(r15)
	PPC_STORE_U32(ctx.r15.u32 + 432, ctx.r8.u32);
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r22,4(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r21,8(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r20,12(r16)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r9,24(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r8,28(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r4,260(r15)
	PPC_STORE_U32(ctx.r15.u32 + 260, ctx.r4.u32);
	// stw r31,268(r15)
	PPC_STORE_U32(ctx.r15.u32 + 268, ctx.r31.u32);
	// stw r30,272(r15)
	PPC_STORE_U32(ctx.r15.u32 + 272, ctx.r30.u32);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,16(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// lwz r31,24(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r30,28(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// stw r7,404(r15)
	PPC_STORE_U32(ctx.r15.u32 + 404, ctx.r7.u32);
	// stw r6,408(r15)
	PPC_STORE_U32(ctx.r15.u32 + 408, ctx.r6.u32);
	// stw r5,412(r15)
	PPC_STORE_U32(ctx.r15.u32 + 412, ctx.r5.u32);
	// stw r7,436(r15)
	PPC_STORE_U32(ctx.r15.u32 + 436, ctx.r7.u32);
	// stw r6,440(r15)
	PPC_STORE_U32(ctx.r15.u32 + 440, ctx.r6.u32);
	// stw r5,444(r15)
	PPC_STORE_U32(ctx.r15.u32 + 444, ctx.r5.u32);
	// lwz r3,20(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// lwz r7,4(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r6,8(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r5,12(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// stw r4,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r4.u32);
	// stw r31,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r31.u32);
	// stw r30,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r30.u32);
	// stw r29,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r29.u32);
	// stw r28,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r28.u32);
	// stw r27,364(r15)
	PPC_STORE_U32(ctx.r15.u32 + 364, ctx.r27.u32);
	// stw r26,368(r15)
	PPC_STORE_U32(ctx.r15.u32 + 368, ctx.r26.u32);
	// lwz r4,16(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r31,20(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r30,24(r16)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r29,28(r16)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,372(r15)
	PPC_STORE_U32(ctx.r15.u32 + 372, ctx.r25.u32);
	// stw r24,376(r15)
	PPC_STORE_U32(ctx.r15.u32 + 376, ctx.r24.u32);
	// stw r23,380(r15)
	PPC_STORE_U32(ctx.r15.u32 + 380, ctx.r23.u32);
	// stw r22,452(r15)
	PPC_STORE_U32(ctx.r15.u32 + 452, ctx.r22.u32);
	// lwz r28,4(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r27,8(r16)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r26,12(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	// lwz r25,16(r16)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r24,20(r16)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r23,24(r16)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r16.u32 + 24);
	// lwz r22,28(r16)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// stw r3,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r3.u32);
	// lis r3,-31996
	ctx.r3.s64 = -2096889856;
	// stw r19,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r19.u32);
	// stw r18,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r18.u32);
	// addi r3,r3,-4752
	ctx.r3.s64 = ctx.r3.s64 + -4752;
	// stw r17,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r17.u32);
	// stw r21,456(r15)
	PPC_STORE_U32(ctx.r15.u32 + 456, ctx.r21.u32);
	// stw r20,460(r15)
	PPC_STORE_U32(ctx.r15.u32 + 460, ctx.r20.u32);
	// stw r11,464(r15)
	PPC_STORE_U32(ctx.r15.u32 + 464, ctx.r11.u32);
	// stw r10,468(r15)
	PPC_STORE_U32(ctx.r15.u32 + 468, ctx.r10.u32);
	// stw r9,472(r15)
	PPC_STORE_U32(ctx.r15.u32 + 472, ctx.r9.u32);
	// stw r8,476(r15)
	PPC_STORE_U32(ctx.r15.u32 + 476, ctx.r8.u32);
	// stw r7,484(r15)
	PPC_STORE_U32(ctx.r15.u32 + 484, ctx.r7.u32);
	// stw r6,488(r15)
	PPC_STORE_U32(ctx.r15.u32 + 488, ctx.r6.u32);
	// stw r5,492(r15)
	PPC_STORE_U32(ctx.r15.u32 + 492, ctx.r5.u32);
	// stw r4,496(r15)
	PPC_STORE_U32(ctx.r15.u32 + 496, ctx.r4.u32);
	// stw r31,500(r15)
	PPC_STORE_U32(ctx.r15.u32 + 500, ctx.r31.u32);
	// stw r30,504(r15)
	PPC_STORE_U32(ctx.r15.u32 + 504, ctx.r30.u32);
	// stw r29,508(r15)
	PPC_STORE_U32(ctx.r15.u32 + 508, ctx.r29.u32);
	// stw r28,516(r15)
	PPC_STORE_U32(ctx.r15.u32 + 516, ctx.r28.u32);
	// stw r27,520(r15)
	PPC_STORE_U32(ctx.r15.u32 + 520, ctx.r27.u32);
	// stw r26,524(r15)
	PPC_STORE_U32(ctx.r15.u32 + 524, ctx.r26.u32);
	// stw r25,528(r15)
	PPC_STORE_U32(ctx.r15.u32 + 528, ctx.r25.u32);
	// stw r24,532(r15)
	PPC_STORE_U32(ctx.r15.u32 + 532, ctx.r24.u32);
	// stw r23,536(r15)
	PPC_STORE_U32(ctx.r15.u32 + 536, ctx.r23.u32);
	// stw r22,540(r15)
	PPC_STORE_U32(ctx.r15.u32 + 540, ctx.r22.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300DF34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82f06270
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8300DF40"))) PPC_WEAK_FUNC(sub_8300DF40);
PPC_FUNC_IMPL(__imp__sub_8300DF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,6760
	ctx.r3.s64 = ctx.r31.s64 + 6760;
	// addi r4,r10,32660
	ctx.r4.s64 = ctx.r10.s64 + 32660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2268
	ctx.r6.s64 = 2268;
	// bl 0x82b38290
	ctx.lr = 0x8300DF7C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31760
	ctx.r11.s64 = ctx.r11.s64 + 31760;
	// addi r3,r9,-4712
	ctx.r3.s64 = ctx.r9.s64 + -4712;
	// stw r11,6760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300DF94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300DFA8"))) PPC_WEAK_FUNC(sub_8300DFA8);
PPC_FUNC_IMPL(__imp__sub_8300DFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6696
	ctx.r3.s64 = ctx.r31.s64 + 6696;
	// addi r4,r10,32676
	ctx.r4.s64 = ctx.r10.s64 + 32676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x8300DFE4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31768
	ctx.r11.s64 = ctx.r11.s64 + 31768;
	// addi r3,r9,-4688
	ctx.r3.s64 = ctx.r9.s64 + -4688;
	// stw r11,6696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300DFFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E010"))) PPC_WEAK_FUNC(sub_8300E010);
PPC_FUNC_IMPL(__imp__sub_8300E010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,6696
	ctx.r5.s64 = ctx.r11.s64 + 6696;
	// addi r3,r31,6824
	ctx.r3.s64 = ctx.r31.s64 + 6824;
	// addi r4,r10,32700
	ctx.r4.s64 = ctx.r10.s64 + 32700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,84
	ctx.r6.s64 = 84;
	// bl 0x82b38290
	ctx.lr = 0x8300E04C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31776
	ctx.r11.s64 = ctx.r11.s64 + 31776;
	// addi r3,r9,-4664
	ctx.r3.s64 = ctx.r9.s64 + -4664;
	// stw r11,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E064;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E078"))) PPC_WEAK_FUNC(sub_8300E078);
PPC_FUNC_IMPL(__imp__sub_8300E078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,6696
	ctx.r5.s64 = ctx.r11.s64 + 6696;
	// addi r3,r31,6728
	ctx.r3.s64 = ctx.r31.s64 + 6728;
	// addi r4,r10,32728
	ctx.r4.s64 = ctx.r10.s64 + 32728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x8300E0B4;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31784
	ctx.r11.s64 = ctx.r11.s64 + 31784;
	// addi r3,r9,-4640
	ctx.r3.s64 = ctx.r9.s64 + -4640;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E0CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E0E0"))) PPC_WEAK_FUNC(sub_8300E0E0);
PPC_FUNC_IMPL(__imp__sub_8300E0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,6792
	ctx.r3.s64 = ctx.r31.s64 + 6792;
	// addi r4,r10,32752
	ctx.r4.s64 = ctx.r10.s64 + 32752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,172
	ctx.r6.s64 = 172;
	// bl 0x82b38290
	ctx.lr = 0x8300E11C;
	sub_82B38290(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31792
	ctx.r11.s64 = ctx.r11.s64 + 31792;
	// addi r3,r9,-4616
	ctx.r3.s64 = ctx.r9.s64 + -4616;
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E134;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E148"))) PPC_WEAK_FUNC(sub_8300E148);
PPC_FUNC_IMPL(__imp__sub_8300E148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r3,r31,6860
	ctx.r3.s64 = ctx.r31.s64 + 6860;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r4,r10,-30720
	ctx.r4.s64 = ctx.r10.s64 + -30720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,41920
	ctx.r6.u64 = ctx.r6.u64 | 41920;
	// bl 0x82b38290
	ctx.lr = 0x8300E188;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31588
	ctx.r11.s64 = ctx.r11.s64 + -31588;
	// addi r3,r9,-4592
	ctx.r3.s64 = ctx.r9.s64 + -4592;
	// stw r11,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E1A0;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E1B8"))) PPC_WEAK_FUNC(sub_8300E1B8);
PPC_FUNC_IMPL(__imp__sub_8300E1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r3,r31,6892
	ctx.r3.s64 = ctx.r31.s64 + 6892;
	// addi r5,r11,-8904
	ctx.r5.s64 = ctx.r11.s64 + -8904;
	// addi r4,r10,-27792
	ctx.r4.s64 = ctx.r10.s64 + -27792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,49704
	ctx.r6.u64 = ctx.r6.u64 | 49704;
	// bl 0x82b38290
	ctx.lr = 0x8300E1F8;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28216
	ctx.r11.s64 = ctx.r11.s64 + -28216;
	// addi r3,r9,-4568
	ctx.r3.s64 = ctx.r9.s64 + -4568;
	// stw r11,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E210;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E228"))) PPC_WEAK_FUNC(sub_8300E228);
PPC_FUNC_IMPL(__imp__sub_8300E228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8792
	ctx.r5.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,6928
	ctx.r3.s64 = ctx.r31.s64 + 6928;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,172
	ctx.r6.s64 = 172;
	// bl 0x82b38290
	ctx.lr = 0x8300E264;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27780
	ctx.r11.s64 = ctx.r11.s64 + -27780;
	// addi r3,r9,-4544
	ctx.r3.s64 = ctx.r9.s64 + -4544;
	// stw r11,6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E27C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E290"))) PPC_WEAK_FUNC(sub_8300E290);
PPC_FUNC_IMPL(__imp__sub_8300E290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,164
	ctx.r5.s64 = ctx.r11.s64 + 164;
	// addi r3,r31,6992
	ctx.r3.s64 = ctx.r31.s64 + 6992;
	// addi r4,r10,-27132
	ctx.r4.s64 = ctx.r10.s64 + -27132;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8300E2CC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27324
	ctx.r11.s64 = ctx.r11.s64 + -27324;
	// addi r3,r9,-4520
	ctx.r3.s64 = ctx.r9.s64 + -4520;
	// stw r11,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E2E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E2F8"))) PPC_WEAK_FUNC(sub_8300E2F8);
PPC_FUNC_IMPL(__imp__sub_8300E2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,6992
	ctx.r5.s64 = ctx.r11.s64 + 6992;
	// addi r3,r31,6960
	ctx.r3.s64 = ctx.r31.s64 + 6960;
	// addi r4,r10,-27112
	ctx.r4.s64 = ctx.r10.s64 + -27112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8300E334;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27316
	ctx.r11.s64 = ctx.r11.s64 + -27316;
	// addi r3,r9,-4496
	ctx.r3.s64 = ctx.r9.s64 + -4496;
	// stw r11,6960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E34C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E360"))) PPC_WEAK_FUNC(sub_8300E360);
PPC_FUNC_IMPL(__imp__sub_8300E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7772
	ctx.r5.s64 = ctx.r11.s64 + -7772;
	// addi r3,r31,7056
	ctx.r3.s64 = ctx.r31.s64 + 7056;
	// addi r4,r10,-26892
	ctx.r4.s64 = ctx.r10.s64 + -26892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8300E39C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27084
	ctx.r11.s64 = ctx.r11.s64 + -27084;
	// addi r3,r9,-4472
	ctx.r3.s64 = ctx.r9.s64 + -4472;
	// stw r11,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E3B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E3C8"))) PPC_WEAK_FUNC(sub_8300E3C8);
PPC_FUNC_IMPL(__imp__sub_8300E3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7056
	ctx.r5.s64 = ctx.r11.s64 + 7056;
	// addi r3,r31,7024
	ctx.r3.s64 = ctx.r31.s64 + 7024;
	// addi r4,r10,-26864
	ctx.r4.s64 = ctx.r10.s64 + -26864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8300E404;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27076
	ctx.r11.s64 = ctx.r11.s64 + -27076;
	// addi r3,r9,-4448
	ctx.r3.s64 = ctx.r9.s64 + -4448;
	// stw r11,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E41C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E430"))) PPC_WEAK_FUNC(sub_8300E430);
PPC_FUNC_IMPL(__imp__sub_8300E430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7772
	ctx.r5.s64 = ctx.r11.s64 + -7772;
	// addi r3,r31,7088
	ctx.r3.s64 = ctx.r31.s64 + 7088;
	// addi r4,r10,-26740
	ctx.r4.s64 = ctx.r10.s64 + -26740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8300E46C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26836
	ctx.r11.s64 = ctx.r11.s64 + -26836;
	// addi r3,r9,-4424
	ctx.r3.s64 = ctx.r9.s64 + -4424;
	// stw r11,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E484;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}


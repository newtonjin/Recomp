#include "umvc3_recomp_init.h"

__attribute__((alias("__imp__sub_8300E498"))) PPC_WEAK_FUNC(sub_8300E498);
PPC_FUNC_IMPL(__imp__sub_8300E498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7120
	ctx.r3.s64 = ctx.r31.s64 + 7120;
	// addi r4,r10,-26580
	ctx.r4.s64 = ctx.r10.s64 + -26580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,332
	ctx.r6.s64 = 332;
	// bl 0x82b38290
	ctx.lr = 0x8300E4D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26720
	ctx.r11.s64 = ctx.r11.s64 + -26720;
	// addi r3,r9,-4400
	ctx.r3.s64 = ctx.r9.s64 + -4400;
	// stw r11,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E4EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E500"))) PPC_WEAK_FUNC(sub_8300E500);
PPC_FUNC_IMPL(__imp__sub_8300E500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,7184
	ctx.r3.s64 = ctx.r31.s64 + 7184;
	// addi r4,r10,-26356
	ctx.r4.s64 = ctx.r10.s64 + -26356;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82b38290
	ctx.lr = 0x8300E53C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26560
	ctx.r11.s64 = ctx.r11.s64 + -26560;
	// addi r3,r9,-4376
	ctx.r3.s64 = ctx.r9.s64 + -4376;
	// stw r11,7184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E554;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E568"))) PPC_WEAK_FUNC(sub_8300E568);
PPC_FUNC_IMPL(__imp__sub_8300E568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-26344
	ctx.r4.s64 = ctx.r11.s64 + -26344;
	// addi r3,r31,7168
	ctx.r3.s64 = ctx.r31.s64 + 7168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300E594;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4352
	ctx.r3.s64 = ctx.r10.s64 + -4352;
	// stw r11,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E5AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E5C0"))) PPC_WEAK_FUNC(sub_8300E5C0);
PPC_FUNC_IMPL(__imp__sub_8300E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-26316
	ctx.r4.s64 = ctx.r11.s64 + -26316;
	// addi r3,r31,7248
	ctx.r3.s64 = ctx.r31.s64 + 7248;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x82f9db28
	ctx.lr = 0x8300E5EC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4328
	ctx.r3.s64 = ctx.r10.s64 + -4328;
	// stw r11,7248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E604;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E618"))) PPC_WEAK_FUNC(sub_8300E618);
PPC_FUNC_IMPL(__imp__sub_8300E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-26284
	ctx.r4.s64 = ctx.r11.s64 + -26284;
	// addi r3,r31,7152
	ctx.r3.s64 = ctx.r31.s64 + 7152;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300E644;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4304
	ctx.r3.s64 = ctx.r10.s64 + -4304;
	// stw r11,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E65C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E670"))) PPC_WEAK_FUNC(sub_8300E670);
PPC_FUNC_IMPL(__imp__sub_8300E670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24824
	ctx.r5.s64 = ctx.r11.s64 + -24824;
	// addi r3,r31,7216
	ctx.r3.s64 = ctx.r31.s64 + 7216;
	// addi r4,r10,-26256
	ctx.r4.s64 = ctx.r10.s64 + -26256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8300E6AC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// addi r3,r9,-4280
	ctx.r3.s64 = ctx.r9.s64 + -4280;
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E6C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E6D8"))) PPC_WEAK_FUNC(sub_8300E6D8);
PPC_FUNC_IMPL(__imp__sub_8300E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// addi r3,r31,7264
	ctx.r3.s64 = ctx.r31.s64 + 7264;
	// addi r4,r10,-26184
	ctx.r4.s64 = ctx.r10.s64 + -26184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,292
	ctx.r6.s64 = 292;
	// bl 0x82b38290
	ctx.lr = 0x8300E714;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26240
	ctx.r11.s64 = ctx.r11.s64 + -26240;
	// addi r3,r9,-4256
	ctx.r3.s64 = ctx.r9.s64 + -4256;
	// stw r11,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E72C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E740"))) PPC_WEAK_FUNC(sub_8300E740);
PPC_FUNC_IMPL(__imp__sub_8300E740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7184
	ctx.r5.s64 = ctx.r11.s64 + 7184;
	// addi r3,r31,7296
	ctx.r3.s64 = ctx.r31.s64 + 7296;
	// addi r4,r10,-26112
	ctx.r4.s64 = ctx.r10.s64 + -26112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,292
	ctx.r6.s64 = 292;
	// bl 0x82b38290
	ctx.lr = 0x8300E77C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26168
	ctx.r11.s64 = ctx.r11.s64 + -26168;
	// addi r3,r9,-4232
	ctx.r3.s64 = ctx.r9.s64 + -4232;
	// stw r11,7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E7A8"))) PPC_WEAK_FUNC(sub_8300E7A8);
PPC_FUNC_IMPL(__imp__sub_8300E7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,7472
	ctx.r3.s64 = ctx.r31.s64 + 7472;
	// addi r4,r10,-26056
	ctx.r4.s64 = ctx.r10.s64 + -26056;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8300E7E4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26100
	ctx.r11.s64 = ctx.r11.s64 + -26100;
	// addi r3,r9,-4208
	ctx.r3.s64 = ctx.r9.s64 + -4208;
	// stw r11,7472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E7FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E810"))) PPC_WEAK_FUNC(sub_8300E810);
PPC_FUNC_IMPL(__imp__sub_8300E810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-26044
	ctx.r4.s64 = ctx.r11.s64 + -26044;
	// addi r3,r31,7504
	ctx.r3.s64 = ctx.r31.s64 + 7504;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82f9db28
	ctx.lr = 0x8300E83C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4184
	ctx.r3.s64 = ctx.r10.s64 + -4184;
	// stw r11,7504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E868"))) PPC_WEAK_FUNC(sub_8300E868);
PPC_FUNC_IMPL(__imp__sub_8300E868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-26016
	ctx.r4.s64 = ctx.r11.s64 + -26016;
	// addi r3,r31,7520
	ctx.r3.s64 = ctx.r31.s64 + 7520;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82f9db28
	ctx.lr = 0x8300E894;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4160
	ctx.r3.s64 = ctx.r10.s64 + -4160;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E8AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E8C0"))) PPC_WEAK_FUNC(sub_8300E8C0);
PPC_FUNC_IMPL(__imp__sub_8300E8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// addi r3,r31,7344
	ctx.r3.s64 = ctx.r31.s64 + 7344;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82f9db28
	ctx.lr = 0x8300E8EC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4136
	ctx.r3.s64 = ctx.r10.s64 + -4136;
	// stw r11,7344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E904;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E918"))) PPC_WEAK_FUNC(sub_8300E918);
PPC_FUNC_IMPL(__imp__sub_8300E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25964
	ctx.r4.s64 = ctx.r11.s64 + -25964;
	// addi r3,r31,7360
	ctx.r3.s64 = ctx.r31.s64 + 7360;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82f9db28
	ctx.lr = 0x8300E944;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4112
	ctx.r3.s64 = ctx.r10.s64 + -4112;
	// stw r11,7360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E95C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E970"))) PPC_WEAK_FUNC(sub_8300E970);
PPC_FUNC_IMPL(__imp__sub_8300E970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25936
	ctx.r4.s64 = ctx.r11.s64 + -25936;
	// addi r3,r31,7424
	ctx.r3.s64 = ctx.r31.s64 + 7424;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300E99C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4088
	ctx.r3.s64 = ctx.r10.s64 + -4088;
	// stw r11,7424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300E9B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300E9C8"))) PPC_WEAK_FUNC(sub_8300E9C8);
PPC_FUNC_IMPL(__imp__sub_8300E9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25916
	ctx.r4.s64 = ctx.r11.s64 + -25916;
	// addi r3,r31,7456
	ctx.r3.s64 = ctx.r31.s64 + 7456;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82f9db28
	ctx.lr = 0x8300E9F4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4064
	ctx.r3.s64 = ctx.r10.s64 + -4064;
	// stw r11,7456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EA0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EA20"))) PPC_WEAK_FUNC(sub_8300EA20);
PPC_FUNC_IMPL(__imp__sub_8300EA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25888
	ctx.r4.s64 = ctx.r11.s64 + -25888;
	// addi r3,r31,7408
	ctx.r3.s64 = ctx.r31.s64 + 7408;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300EA4C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4040
	ctx.r3.s64 = ctx.r10.s64 + -4040;
	// stw r11,7408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EA64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EA78"))) PPC_WEAK_FUNC(sub_8300EA78);
PPC_FUNC_IMPL(__imp__sub_8300EA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25864
	ctx.r4.s64 = ctx.r11.s64 + -25864;
	// addi r3,r31,7376
	ctx.r3.s64 = ctx.r31.s64 + 7376;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300EAA4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-4016
	ctx.r3.s64 = ctx.r10.s64 + -4016;
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EABC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EAD0"))) PPC_WEAK_FUNC(sub_8300EAD0);
PPC_FUNC_IMPL(__imp__sub_8300EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25832
	ctx.r4.s64 = ctx.r11.s64 + -25832;
	// addi r3,r31,7328
	ctx.r3.s64 = ctx.r31.s64 + 7328;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300EAFC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3992
	ctx.r3.s64 = ctx.r10.s64 + -3992;
	// stw r11,7328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EB14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EB28"))) PPC_WEAK_FUNC(sub_8300EB28);
PPC_FUNC_IMPL(__imp__sub_8300EB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25808
	ctx.r4.s64 = ctx.r11.s64 + -25808;
	// addi r3,r31,7440
	ctx.r3.s64 = ctx.r31.s64 + 7440;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300EB54;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3968
	ctx.r3.s64 = ctx.r10.s64 + -3968;
	// stw r11,7440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EB6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EB80"))) PPC_WEAK_FUNC(sub_8300EB80);
PPC_FUNC_IMPL(__imp__sub_8300EB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-25784
	ctx.r4.s64 = ctx.r11.s64 + -25784;
	// addi r3,r31,7392
	ctx.r3.s64 = ctx.r31.s64 + 7392;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82f9db28
	ctx.lr = 0x8300EBAC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3944
	ctx.r3.s64 = ctx.r10.s64 + -3944;
	// stw r11,7392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EBC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EBD8"))) PPC_WEAK_FUNC(sub_8300EBD8);
PPC_FUNC_IMPL(__imp__sub_8300EBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7568
	ctx.r3.s64 = ctx.r31.s64 + 7568;
	// addi r4,r10,-25716
	ctx.r4.s64 = ctx.r10.s64 + -25716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x82b38290
	ctx.lr = 0x8300EC14;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25748
	ctx.r11.s64 = ctx.r11.s64 + -25748;
	// addi r3,r9,-3920
	ctx.r3.s64 = ctx.r9.s64 + -3920;
	// stw r11,7568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EC2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EC40"))) PPC_WEAK_FUNC(sub_8300EC40);
PPC_FUNC_IMPL(__imp__sub_8300EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24536
	ctx.r5.s64 = ctx.r11.s64 + -24536;
	// addi r3,r31,7536
	ctx.r3.s64 = ctx.r31.s64 + 7536;
	// addi r4,r10,-25700
	ctx.r4.s64 = ctx.r10.s64 + -25700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300EC7C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25756
	ctx.r11.s64 = ctx.r11.s64 + -25756;
	// addi r3,r9,-3896
	ctx.r3.s64 = ctx.r9.s64 + -3896;
	// stw r11,7536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EC94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ECA8"))) PPC_WEAK_FUNC(sub_8300ECA8);
PPC_FUNC_IMPL(__imp__sub_8300ECA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,7792
	ctx.r3.s64 = ctx.r31.s64 + 7792;
	// addi r4,r10,-25152
	ctx.r4.s64 = ctx.r10.s64 + -25152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8300ECE4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25676
	ctx.r11.s64 = ctx.r11.s64 + -25676;
	// addi r3,r9,-3872
	ctx.r3.s64 = ctx.r9.s64 + -3872;
	// stw r11,7792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300ECFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ED10"))) PPC_WEAK_FUNC(sub_8300ED10);
PPC_FUNC_IMPL(__imp__sub_8300ED10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7792
	ctx.r5.s64 = ctx.r11.s64 + 7792;
	// addi r3,r31,7600
	ctx.r3.s64 = ctx.r31.s64 + 7600;
	// addi r4,r10,-25140
	ctx.r4.s64 = ctx.r10.s64 + -25140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1824
	ctx.r6.s64 = 1824;
	// bl 0x82b38290
	ctx.lr = 0x8300ED4C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25668
	ctx.r11.s64 = ctx.r11.s64 + -25668;
	// addi r3,r9,-3848
	ctx.r3.s64 = ctx.r9.s64 + -3848;
	// stw r11,7600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300ED64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300ED78"))) PPC_WEAK_FUNC(sub_8300ED78);
PPC_FUNC_IMPL(__imp__sub_8300ED78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7792
	ctx.r5.s64 = ctx.r11.s64 + 7792;
	// addi r3,r31,7696
	ctx.r3.s64 = ctx.r31.s64 + 7696;
	// addi r4,r10,-25120
	ctx.r4.s64 = ctx.r10.s64 + -25120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1824
	ctx.r6.s64 = 1824;
	// bl 0x82b38290
	ctx.lr = 0x8300EDB4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25660
	ctx.r11.s64 = ctx.r11.s64 + -25660;
	// addi r3,r9,-3824
	ctx.r3.s64 = ctx.r9.s64 + -3824;
	// stw r11,7696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EDCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EDE0"))) PPC_WEAK_FUNC(sub_8300EDE0);
PPC_FUNC_IMPL(__imp__sub_8300EDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7792
	ctx.r5.s64 = ctx.r11.s64 + 7792;
	// addi r3,r31,7632
	ctx.r3.s64 = ctx.r31.s64 + 7632;
	// addi r4,r10,-25100
	ctx.r4.s64 = ctx.r10.s64 + -25100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,456
	ctx.r6.s64 = 456;
	// bl 0x82b38290
	ctx.lr = 0x8300EE1C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25652
	ctx.r11.s64 = ctx.r11.s64 + -25652;
	// addi r3,r9,-3800
	ctx.r3.s64 = ctx.r9.s64 + -3800;
	// stw r11,7632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EE34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EE48"))) PPC_WEAK_FUNC(sub_8300EE48);
PPC_FUNC_IMPL(__imp__sub_8300EE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r31,7664
	ctx.r3.s64 = ctx.r31.s64 + 7664;
	// addi r4,r10,-25084
	ctx.r4.s64 = ctx.r10.s64 + -25084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,464
	ctx.r6.s64 = 464;
	// bl 0x82b38290
	ctx.lr = 0x8300EE84;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25644
	ctx.r11.s64 = ctx.r11.s64 + -25644;
	// addi r3,r9,-3776
	ctx.r3.s64 = ctx.r9.s64 + -3776;
	// stw r11,7664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EE9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EEB0"))) PPC_WEAK_FUNC(sub_8300EEB0);
PPC_FUNC_IMPL(__imp__sub_8300EEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r31,7760
	ctx.r3.s64 = ctx.r31.s64 + 7760;
	// addi r4,r10,-25064
	ctx.r4.s64 = ctx.r10.s64 + -25064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,464
	ctx.r6.s64 = 464;
	// bl 0x82b38290
	ctx.lr = 0x8300EEEC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25636
	ctx.r11.s64 = ctx.r11.s64 + -25636;
	// addi r3,r9,-3752
	ctx.r3.s64 = ctx.r9.s64 + -3752;
	// stw r11,7760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EF04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EF18"))) PPC_WEAK_FUNC(sub_8300EF18);
PPC_FUNC_IMPL(__imp__sub_8300EF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,7792
	ctx.r5.s64 = ctx.r11.s64 + 7792;
	// addi r3,r31,7728
	ctx.r3.s64 = ctx.r31.s64 + 7728;
	// addi r4,r10,-25044
	ctx.r4.s64 = ctx.r10.s64 + -25044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8300EF54;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25628
	ctx.r11.s64 = ctx.r11.s64 + -25628;
	// addi r3,r9,-3728
	ctx.r3.s64 = ctx.r9.s64 + -3728;
	// stw r11,7728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EF6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EF80"))) PPC_WEAK_FUNC(sub_8300EF80);
PPC_FUNC_IMPL(__imp__sub_8300EF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,7936
	ctx.r3.s64 = ctx.r31.s64 + 7936;
	// addi r4,r10,-24828
	ctx.r4.s64 = ctx.r10.s64 + -24828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x8300EFBC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25008
	ctx.r11.s64 = ctx.r11.s64 + -25008;
	// addi r3,r9,-3704
	ctx.r3.s64 = ctx.r9.s64 + -3704;
	// stw r11,7936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300EFD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300EFE8"))) PPC_WEAK_FUNC(sub_8300EFE8);
PPC_FUNC_IMPL(__imp__sub_8300EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24824
	ctx.r5.s64 = ctx.r11.s64 + -24824;
	// addi r3,r31,7968
	ctx.r3.s64 = ctx.r31.s64 + 7968;
	// addi r4,r10,-24816
	ctx.r4.s64 = ctx.r10.s64 + -24816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x82b38290
	ctx.lr = 0x8300F024;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25016
	ctx.r11.s64 = ctx.r11.s64 + -25016;
	// addi r3,r9,-3680
	ctx.r3.s64 = ctx.r9.s64 + -3680;
	// stw r11,7968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F03C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F050"))) PPC_WEAK_FUNC(sub_8300F050);
PPC_FUNC_IMPL(__imp__sub_8300F050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24788
	ctx.r4.s64 = ctx.r11.s64 + -24788;
	// addi r3,r31,8032
	ctx.r3.s64 = ctx.r31.s64 + 8032;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,136
	ctx.r5.s64 = 136;
	// bl 0x82f9db28
	ctx.lr = 0x8300F07C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3656
	ctx.r3.s64 = ctx.r10.s64 + -3656;
	// stw r11,8032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F0A8"))) PPC_WEAK_FUNC(sub_8300F0A8);
PPC_FUNC_IMPL(__imp__sub_8300F0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24756
	ctx.r4.s64 = ctx.r11.s64 + -24756;
	// addi r3,r31,8016
	ctx.r3.s64 = ctx.r31.s64 + 8016;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82f9db28
	ctx.lr = 0x8300F0D4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3632
	ctx.r3.s64 = ctx.r10.s64 + -3632;
	// stw r11,8016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F0EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F100"))) PPC_WEAK_FUNC(sub_8300F100);
PPC_FUNC_IMPL(__imp__sub_8300F100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24728
	ctx.r4.s64 = ctx.r11.s64 + -24728;
	// addi r3,r31,7824
	ctx.r3.s64 = ctx.r31.s64 + 7824;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300F12C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3608
	ctx.r3.s64 = ctx.r10.s64 + -3608;
	// stw r11,7824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F144;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F158"))) PPC_WEAK_FUNC(sub_8300F158);
PPC_FUNC_IMPL(__imp__sub_8300F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24696
	ctx.r4.s64 = ctx.r11.s64 + -24696;
	// addi r3,r31,7872
	ctx.r3.s64 = ctx.r31.s64 + 7872;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x82f9db28
	ctx.lr = 0x8300F184;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3584
	ctx.r3.s64 = ctx.r10.s64 + -3584;
	// stw r11,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F19C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F1B0"))) PPC_WEAK_FUNC(sub_8300F1B0);
PPC_FUNC_IMPL(__imp__sub_8300F1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24660
	ctx.r4.s64 = ctx.r11.s64 + -24660;
	// addi r3,r31,8144
	ctx.r3.s64 = ctx.r31.s64 + 8144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300F1DC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3560
	ctx.r3.s64 = ctx.r10.s64 + -3560;
	// stw r11,8144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F1F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F208"))) PPC_WEAK_FUNC(sub_8300F208);
PPC_FUNC_IMPL(__imp__sub_8300F208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24620
	ctx.r4.s64 = ctx.r11.s64 + -24620;
	// addi r3,r31,7856
	ctx.r3.s64 = ctx.r31.s64 + 7856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300F234;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3536
	ctx.r3.s64 = ctx.r10.s64 + -3536;
	// stw r11,7856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F24C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F260"))) PPC_WEAK_FUNC(sub_8300F260);
PPC_FUNC_IMPL(__imp__sub_8300F260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// addi r3,r31,8048
	ctx.r3.s64 = ctx.r31.s64 + 8048;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82f9db28
	ctx.lr = 0x8300F28C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3512
	ctx.r3.s64 = ctx.r10.s64 + -3512;
	// stw r11,8048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F2A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F2B8"))) PPC_WEAK_FUNC(sub_8300F2B8);
PPC_FUNC_IMPL(__imp__sub_8300F2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24556
	ctx.r4.s64 = ctx.r11.s64 + -24556;
	// addi r3,r31,8096
	ctx.r3.s64 = ctx.r31.s64 + 8096;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F2E4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3488
	ctx.r3.s64 = ctx.r10.s64 + -3488;
	// stw r11,8096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F2FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F310"))) PPC_WEAK_FUNC(sub_8300F310);
PPC_FUNC_IMPL(__imp__sub_8300F310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24528
	ctx.r4.s64 = ctx.r11.s64 + -24528;
	// addi r3,r31,7840
	ctx.r3.s64 = ctx.r31.s64 + 7840;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300F33C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3464
	ctx.r3.s64 = ctx.r10.s64 + -3464;
	// stw r11,7840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F354;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F368"))) PPC_WEAK_FUNC(sub_8300F368);
PPC_FUNC_IMPL(__imp__sub_8300F368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24504
	ctx.r4.s64 = ctx.r11.s64 + -24504;
	// addi r3,r31,7920
	ctx.r3.s64 = ctx.r31.s64 + 7920;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82f9db28
	ctx.lr = 0x8300F394;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3440
	ctx.r3.s64 = ctx.r10.s64 + -3440;
	// stw r11,7920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F3AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F3C0"))) PPC_WEAK_FUNC(sub_8300F3C0);
PPC_FUNC_IMPL(__imp__sub_8300F3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24476
	ctx.r4.s64 = ctx.r11.s64 + -24476;
	// addi r3,r31,8064
	ctx.r3.s64 = ctx.r31.s64 + 8064;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F3EC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3416
	ctx.r3.s64 = ctx.r10.s64 + -3416;
	// stw r11,8064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F404;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F418"))) PPC_WEAK_FUNC(sub_8300F418);
PPC_FUNC_IMPL(__imp__sub_8300F418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24448
	ctx.r4.s64 = ctx.r11.s64 + -24448;
	// addi r3,r31,8176
	ctx.r3.s64 = ctx.r31.s64 + 8176;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,66
	ctx.r5.s64 = 66;
	// bl 0x82f9db28
	ctx.lr = 0x8300F444;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3392
	ctx.r3.s64 = ctx.r10.s64 + -3392;
	// stw r11,8176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F45C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F470"))) PPC_WEAK_FUNC(sub_8300F470);
PPC_FUNC_IMPL(__imp__sub_8300F470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24416
	ctx.r4.s64 = ctx.r11.s64 + -24416;
	// addi r3,r31,8160
	ctx.r3.s64 = ctx.r31.s64 + 8160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82f9db28
	ctx.lr = 0x8300F49C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3368
	ctx.r3.s64 = ctx.r10.s64 + -3368;
	// stw r11,8160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F4B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F4C8"))) PPC_WEAK_FUNC(sub_8300F4C8);
PPC_FUNC_IMPL(__imp__sub_8300F4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r31,7888
	ctx.r3.s64 = ctx.r31.s64 + 7888;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82f9db28
	ctx.lr = 0x8300F4F4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3344
	ctx.r3.s64 = ctx.r10.s64 + -3344;
	// stw r11,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F50C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F520"))) PPC_WEAK_FUNC(sub_8300F520);
PPC_FUNC_IMPL(__imp__sub_8300F520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24368
	ctx.r4.s64 = ctx.r11.s64 + -24368;
	// addi r3,r31,8112
	ctx.r3.s64 = ctx.r31.s64 + 8112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82f9db28
	ctx.lr = 0x8300F54C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3320
	ctx.r3.s64 = ctx.r10.s64 + -3320;
	// stw r11,8112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F564;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F578"))) PPC_WEAK_FUNC(sub_8300F578);
PPC_FUNC_IMPL(__imp__sub_8300F578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24336
	ctx.r4.s64 = ctx.r11.s64 + -24336;
	// addi r3,r31,8128
	ctx.r3.s64 = ctx.r31.s64 + 8128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82f9db28
	ctx.lr = 0x8300F5A4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3296
	ctx.r3.s64 = ctx.r10.s64 + -3296;
	// stw r11,8128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F5BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F5D0"))) PPC_WEAK_FUNC(sub_8300F5D0);
PPC_FUNC_IMPL(__imp__sub_8300F5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24304
	ctx.r4.s64 = ctx.r11.s64 + -24304;
	// addi r3,r31,8192
	ctx.r3.s64 = ctx.r31.s64 + 8192;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82f9db28
	ctx.lr = 0x8300F5FC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3272
	ctx.r3.s64 = ctx.r10.s64 + -3272;
	// stw r11,8192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F614;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F628"))) PPC_WEAK_FUNC(sub_8300F628);
PPC_FUNC_IMPL(__imp__sub_8300F628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24276
	ctx.r4.s64 = ctx.r11.s64 + -24276;
	// addi r3,r31,7904
	ctx.r3.s64 = ctx.r31.s64 + 7904;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F654;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3248
	ctx.r3.s64 = ctx.r10.s64 + -3248;
	// stw r11,7904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F66C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F680"))) PPC_WEAK_FUNC(sub_8300F680);
PPC_FUNC_IMPL(__imp__sub_8300F680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24244
	ctx.r4.s64 = ctx.r11.s64 + -24244;
	// addi r3,r31,8000
	ctx.r3.s64 = ctx.r31.s64 + 8000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82f9db28
	ctx.lr = 0x8300F6AC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3224
	ctx.r3.s64 = ctx.r10.s64 + -3224;
	// stw r11,8000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F6C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F6D8"))) PPC_WEAK_FUNC(sub_8300F6D8);
PPC_FUNC_IMPL(__imp__sub_8300F6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-24208
	ctx.r4.s64 = ctx.r11.s64 + -24208;
	// addi r3,r31,8080
	ctx.r3.s64 = ctx.r31.s64 + 8080;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F704;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3200
	ctx.r3.s64 = ctx.r10.s64 + -3200;
	// stw r11,8080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F71C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F730"))) PPC_WEAK_FUNC(sub_8300F730);
PPC_FUNC_IMPL(__imp__sub_8300F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8240
	ctx.r3.s64 = ctx.r31.s64 + 8240;
	// addi r4,r10,-24084
	ctx.r4.s64 = ctx.r10.s64 + -24084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x8300F76C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24116
	ctx.r11.s64 = ctx.r11.s64 + -24116;
	// addi r3,r9,-3176
	ctx.r3.s64 = ctx.r9.s64 + -3176;
	// stw r11,8240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F784;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F798"))) PPC_WEAK_FUNC(sub_8300F798);
PPC_FUNC_IMPL(__imp__sub_8300F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24472
	ctx.r5.s64 = ctx.r11.s64 + -24472;
	// addi r3,r31,8208
	ctx.r3.s64 = ctx.r31.s64 + 8208;
	// addi r4,r10,-24064
	ctx.r4.s64 = ctx.r10.s64 + -24064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8300F7D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24176
	ctx.r11.s64 = ctx.r11.s64 + -24176;
	// addi r3,r9,-3152
	ctx.r3.s64 = ctx.r9.s64 + -3152;
	// stw r11,8208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F7EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F800"))) PPC_WEAK_FUNC(sub_8300F800);
PPC_FUNC_IMPL(__imp__sub_8300F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,8304
	ctx.r3.s64 = ctx.r31.s64 + 8304;
	// addi r4,r10,-23940
	ctx.r4.s64 = ctx.r10.s64 + -23940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1888
	ctx.r6.s64 = 1888;
	// bl 0x82b38290
	ctx.lr = 0x8300F83C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// addi r3,r9,-3128
	ctx.r3.s64 = ctx.r9.s64 + -3128;
	// stw r11,8304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F868"))) PPC_WEAK_FUNC(sub_8300F868);
PPC_FUNC_IMPL(__imp__sub_8300F868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24472
	ctx.r5.s64 = ctx.r11.s64 + -24472;
	// addi r3,r31,8272
	ctx.r3.s64 = ctx.r31.s64 + 8272;
	// addi r4,r10,-23924
	ctx.r4.s64 = ctx.r10.s64 + -23924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x8300F8A4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24036
	ctx.r11.s64 = ctx.r11.s64 + -24036;
	// addi r3,r9,-3104
	ctx.r3.s64 = ctx.r9.s64 + -3104;
	// stw r11,8272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F8BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F8D0"))) PPC_WEAK_FUNC(sub_8300F8D0);
PPC_FUNC_IMPL(__imp__sub_8300F8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,8384
	ctx.r3.s64 = ctx.r31.s64 + 8384;
	// addi r4,r10,-23852
	ctx.r4.s64 = ctx.r10.s64 + -23852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,196
	ctx.r6.s64 = 196;
	// bl 0x82b38290
	ctx.lr = 0x8300F90C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23900
	ctx.r11.s64 = ctx.r11.s64 + -23900;
	// addi r3,r9,-3080
	ctx.r3.s64 = ctx.r9.s64 + -3080;
	// stw r11,8384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F924;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F938"))) PPC_WEAK_FUNC(sub_8300F938);
PPC_FUNC_IMPL(__imp__sub_8300F938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-23840
	ctx.r4.s64 = ctx.r11.s64 + -23840;
	// addi r3,r31,8352
	ctx.r3.s64 = ctx.r31.s64 + 8352;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F964;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3056
	ctx.r3.s64 = ctx.r10.s64 + -3056;
	// stw r11,8352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F97C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F990"))) PPC_WEAK_FUNC(sub_8300F990);
PPC_FUNC_IMPL(__imp__sub_8300F990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-23820
	ctx.r4.s64 = ctx.r11.s64 + -23820;
	// addi r3,r31,8336
	ctx.r3.s64 = ctx.r31.s64 + 8336;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300F9BC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3032
	ctx.r3.s64 = ctx.r10.s64 + -3032;
	// stw r11,8336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300F9D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300F9E8"))) PPC_WEAK_FUNC(sub_8300F9E8);
PPC_FUNC_IMPL(__imp__sub_8300F9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// addi r3,r31,8368
	ctx.r3.s64 = ctx.r31.s64 + 8368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300FA14;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-3008
	ctx.r3.s64 = ctx.r10.s64 + -3008;
	// stw r11,8368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FA2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FA40"))) PPC_WEAK_FUNC(sub_8300FA40);
PPC_FUNC_IMPL(__imp__sub_8300FA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,8432
	ctx.r3.s64 = ctx.r31.s64 + 8432;
	// addi r4,r10,-23724
	ctx.r4.s64 = ctx.r10.s64 + -23724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8300FA7C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23768
	ctx.r11.s64 = ctx.r11.s64 + -23768;
	// addi r3,r9,-2984
	ctx.r3.s64 = ctx.r9.s64 + -2984;
	// stw r11,8432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FA94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FAA8"))) PPC_WEAK_FUNC(sub_8300FAA8);
PPC_FUNC_IMPL(__imp__sub_8300FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-23704
	ctx.r4.s64 = ctx.r11.s64 + -23704;
	// addi r3,r31,8464
	ctx.r3.s64 = ctx.r31.s64 + 8464;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300FAD4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2960
	ctx.r3.s64 = ctx.r10.s64 + -2960;
	// stw r11,8464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FAEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FB00"))) PPC_WEAK_FUNC(sub_8300FB00);
PPC_FUNC_IMPL(__imp__sub_8300FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-23664
	ctx.r4.s64 = ctx.r11.s64 + -23664;
	// addi r3,r31,8416
	ctx.r3.s64 = ctx.r31.s64 + 8416;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300FB2C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2936
	ctx.r3.s64 = ctx.r10.s64 + -2936;
	// stw r11,8416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FB44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FB58"))) PPC_WEAK_FUNC(sub_8300FB58);
PPC_FUNC_IMPL(__imp__sub_8300FB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8516
	ctx.r3.s64 = ctx.r31.s64 + 8516;
	// addi r4,r10,-23368
	ctx.r4.s64 = ctx.r10.s64 + -23368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x8300FB94;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23544
	ctx.r11.s64 = ctx.r11.s64 + -23544;
	// addi r3,r9,-2912
	ctx.r3.s64 = ctx.r9.s64 + -2912;
	// stw r11,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FBAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FBC0"))) PPC_WEAK_FUNC(sub_8300FBC0);
PPC_FUNC_IMPL(__imp__sub_8300FBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24824
	ctx.r5.s64 = ctx.r11.s64 + -24824;
	// addi r3,r31,8484
	ctx.r3.s64 = ctx.r31.s64 + 8484;
	// addi r4,r10,-23352
	ctx.r4.s64 = ctx.r10.s64 + -23352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x8300FBFC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23552
	ctx.r11.s64 = ctx.r11.s64 + -23552;
	// addi r3,r9,-2888
	ctx.r3.s64 = ctx.r9.s64 + -2888;
	// stw r11,8484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8484, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FC14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FC28"))) PPC_WEAK_FUNC(sub_8300FC28);
PPC_FUNC_IMPL(__imp__sub_8300FC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8552
	ctx.r3.s64 = ctx.r31.s64 + 8552;
	// addi r4,r10,-23280
	ctx.r4.s64 = ctx.r10.s64 + -23280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8300FC64;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23324
	ctx.r11.s64 = ctx.r11.s64 + -23324;
	// addi r3,r9,-2864
	ctx.r3.s64 = ctx.r9.s64 + -2864;
	// stw r11,8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FC7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FC90"))) PPC_WEAK_FUNC(sub_8300FC90);
PPC_FUNC_IMPL(__imp__sub_8300FC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8588
	ctx.r3.s64 = ctx.r31.s64 + 8588;
	// addi r4,r10,-22352
	ctx.r4.s64 = ctx.r10.s64 + -22352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1648
	ctx.r6.s64 = 1648;
	// bl 0x82b38290
	ctx.lr = 0x8300FCCC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23268
	ctx.r11.s64 = ctx.r11.s64 + -23268;
	// addi r3,r9,-2840
	ctx.r3.s64 = ctx.r9.s64 + -2840;
	// stw r11,8588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8588, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FCE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FCF8"))) PPC_WEAK_FUNC(sub_8300FCF8);
PPC_FUNC_IMPL(__imp__sub_8300FCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8624
	ctx.r3.s64 = ctx.r31.s64 + 8624;
	// addi r4,r10,-16316
	ctx.r4.s64 = ctx.r10.s64 + -16316;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17960
	ctx.r6.s64 = 17960;
	// bl 0x82b38290
	ctx.lr = 0x8300FD34;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22036
	ctx.r11.s64 = ctx.r11.s64 + -22036;
	// addi r3,r9,-2816
	ctx.r3.s64 = ctx.r9.s64 + -2816;
	// stw r11,8624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FD4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FD60"))) PPC_WEAK_FUNC(sub_8300FD60);
PPC_FUNC_IMPL(__imp__sub_8300FD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24760
	ctx.r5.s64 = ctx.r11.s64 + -24760;
	// addi r3,r31,8660
	ctx.r3.s64 = ctx.r31.s64 + 8660;
	// addi r4,r10,-11024
	ctx.r4.s64 = ctx.r10.s64 + -11024;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,512
	ctx.r6.s64 = 512;
	// bl 0x82b38290
	ctx.lr = 0x8300FD9C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11164
	ctx.r11.s64 = ctx.r11.s64 + -11164;
	// addi r3,r9,-2792
	ctx.r3.s64 = ctx.r9.s64 + -2792;
	// stw r11,8660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8660, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FDB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FDC8"))) PPC_WEAK_FUNC(sub_8300FDC8);
PPC_FUNC_IMPL(__imp__sub_8300FDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,8692
	ctx.r3.s64 = ctx.r31.s64 + 8692;
	// addi r4,r10,-11012
	ctx.r4.s64 = ctx.r10.s64 + -11012;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8300FE04;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-11172
	ctx.r11.s64 = ctx.r11.s64 + -11172;
	// addi r3,r9,-2768
	ctx.r3.s64 = ctx.r9.s64 + -2768;
	// stw r11,8692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8692, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FE1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FE30"))) PPC_WEAK_FUNC(sub_8300FE30);
PPC_FUNC_IMPL(__imp__sub_8300FE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8728
	ctx.r3.s64 = ctx.r31.s64 + 8728;
	// addi r4,r10,-9136
	ctx.r4.s64 = ctx.r10.s64 + -9136;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,10800
	ctx.r6.s64 = 10800;
	// bl 0x82b38290
	ctx.lr = 0x8300FE6C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9400
	ctx.r11.s64 = ctx.r11.s64 + -9400;
	// addi r3,r9,-2744
	ctx.r3.s64 = ctx.r9.s64 + -2744;
	// stw r11,8728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FE84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FE98"))) PPC_WEAK_FUNC(sub_8300FE98);
PPC_FUNC_IMPL(__imp__sub_8300FE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-24664
	ctx.r5.s64 = ctx.r11.s64 + -24664;
	// addi r3,r31,8956
	ctx.r3.s64 = ctx.r31.s64 + 8956;
	// addi r4,r10,-9032
	ctx.r4.s64 = ctx.r10.s64 + -9032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,76
	ctx.r6.s64 = 76;
	// bl 0x82b38290
	ctx.lr = 0x8300FED4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9112
	ctx.r11.s64 = ctx.r11.s64 + -9112;
	// addi r3,r9,-2720
	ctx.r3.s64 = ctx.r9.s64 + -2720;
	// stw r11,8956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8956, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FEEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FF00"))) PPC_WEAK_FUNC(sub_8300FF00);
PPC_FUNC_IMPL(__imp__sub_8300FF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8996
	ctx.r4.s64 = ctx.r11.s64 + -8996;
	// addi r3,r31,8796
	ctx.r3.s64 = ctx.r31.s64 + 8796;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300FF2C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2696
	ctx.r3.s64 = ctx.r10.s64 + -2696;
	// stw r11,8796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8796, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FF44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FF58"))) PPC_WEAK_FUNC(sub_8300FF58);
PPC_FUNC_IMPL(__imp__sub_8300FF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8948
	ctx.r4.s64 = ctx.r11.s64 + -8948;
	// addi r3,r31,8876
	ctx.r3.s64 = ctx.r31.s64 + 8876;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8300FF84;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2672
	ctx.r3.s64 = ctx.r10.s64 + -2672;
	// stw r11,8876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8876, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FF9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8300FFB0"))) PPC_WEAK_FUNC(sub_8300FFB0);
PPC_FUNC_IMPL(__imp__sub_8300FFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8896
	ctx.r4.s64 = ctx.r11.s64 + -8896;
	// addi r3,r31,8892
	ctx.r3.s64 = ctx.r31.s64 + 8892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x8300FFDC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2648
	ctx.r3.s64 = ctx.r10.s64 + -2648;
	// stw r11,8892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8892, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8300FFF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010008"))) PPC_WEAK_FUNC(sub_83010008);
PPC_FUNC_IMPL(__imp__sub_83010008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8844
	ctx.r4.s64 = ctx.r11.s64 + -8844;
	// addi r3,r31,8924
	ctx.r3.s64 = ctx.r31.s64 + 8924;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82f9db28
	ctx.lr = 0x83010034;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2624
	ctx.r3.s64 = ctx.r10.s64 + -2624;
	// stw r11,8924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8924, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301004C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010060"))) PPC_WEAK_FUNC(sub_83010060);
PPC_FUNC_IMPL(__imp__sub_83010060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8792
	ctx.r4.s64 = ctx.r11.s64 + -8792;
	// addi r3,r31,8812
	ctx.r3.s64 = ctx.r31.s64 + 8812;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82f9db28
	ctx.lr = 0x8301008C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2600
	ctx.r3.s64 = ctx.r10.s64 + -2600;
	// stw r11,8812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8812, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830100A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830100B8"))) PPC_WEAK_FUNC(sub_830100B8);
PPC_FUNC_IMPL(__imp__sub_830100B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8740
	ctx.r4.s64 = ctx.r11.s64 + -8740;
	// addi r3,r31,8780
	ctx.r3.s64 = ctx.r31.s64 + 8780;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82f9db28
	ctx.lr = 0x830100E4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2576
	ctx.r3.s64 = ctx.r10.s64 + -2576;
	// stw r11,8780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8780, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830100FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010110"))) PPC_WEAK_FUNC(sub_83010110);
PPC_FUNC_IMPL(__imp__sub_83010110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8688
	ctx.r4.s64 = ctx.r11.s64 + -8688;
	// addi r3,r31,8988
	ctx.r3.s64 = ctx.r31.s64 + 8988;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x82f9db28
	ctx.lr = 0x8301013C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2552
	ctx.r3.s64 = ctx.r10.s64 + -2552;
	// stw r11,8988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8988, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010154;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010168"))) PPC_WEAK_FUNC(sub_83010168);
PPC_FUNC_IMPL(__imp__sub_83010168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8636
	ctx.r4.s64 = ctx.r11.s64 + -8636;
	// addi r3,r31,8860
	ctx.r3.s64 = ctx.r31.s64 + 8860;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82f9db28
	ctx.lr = 0x83010194;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2528
	ctx.r3.s64 = ctx.r10.s64 + -2528;
	// stw r11,8860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8860, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830101AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830101C0"))) PPC_WEAK_FUNC(sub_830101C0);
PPC_FUNC_IMPL(__imp__sub_830101C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8584
	ctx.r4.s64 = ctx.r11.s64 + -8584;
	// addi r3,r31,9004
	ctx.r3.s64 = ctx.r31.s64 + 9004;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82f9db28
	ctx.lr = 0x830101EC;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2504
	ctx.r3.s64 = ctx.r10.s64 + -2504;
	// stw r11,9004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9004, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010204;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010218"))) PPC_WEAK_FUNC(sub_83010218);
PPC_FUNC_IMPL(__imp__sub_83010218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8532
	ctx.r4.s64 = ctx.r11.s64 + -8532;
	// addi r3,r31,8844
	ctx.r3.s64 = ctx.r31.s64 + 8844;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82f9db28
	ctx.lr = 0x83010244;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2480
	ctx.r3.s64 = ctx.r10.s64 + -2480;
	// stw r11,8844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8844, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301025C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010270"))) PPC_WEAK_FUNC(sub_83010270);
PPC_FUNC_IMPL(__imp__sub_83010270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8480
	ctx.r4.s64 = ctx.r11.s64 + -8480;
	// addi r3,r31,8908
	ctx.r3.s64 = ctx.r31.s64 + 8908;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x8301029C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2456
	ctx.r3.s64 = ctx.r10.s64 + -2456;
	// stw r11,8908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8908, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830102B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830102C8"))) PPC_WEAK_FUNC(sub_830102C8);
PPC_FUNC_IMPL(__imp__sub_830102C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8424
	ctx.r4.s64 = ctx.r11.s64 + -8424;
	// addi r3,r31,8828
	ctx.r3.s64 = ctx.r31.s64 + 8828;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82f9db28
	ctx.lr = 0x830102F4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2432
	ctx.r3.s64 = ctx.r10.s64 + -2432;
	// stw r11,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301030C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010320"))) PPC_WEAK_FUNC(sub_83010320);
PPC_FUNC_IMPL(__imp__sub_83010320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8376
	ctx.r4.s64 = ctx.r11.s64 + -8376;
	// addi r3,r31,8764
	ctx.r3.s64 = ctx.r31.s64 + 8764;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82f9db28
	ctx.lr = 0x8301034C;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2408
	ctx.r3.s64 = ctx.r10.s64 + -2408;
	// stw r11,8764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8764, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010364;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010378"))) PPC_WEAK_FUNC(sub_83010378);
PPC_FUNC_IMPL(__imp__sub_83010378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r4,r11,-8324
	ctx.r4.s64 = ctx.r11.s64 + -8324;
	// addi r3,r31,8940
	ctx.r3.s64 = ctx.r31.s64 + 8940;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82f9db28
	ctx.lr = 0x830103A4;
	sub_82F9DB28(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-31996
	ctx.r10.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r10,-2384
	ctx.r3.s64 = ctx.r10.s64 + -2384;
	// stw r11,8940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8940, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830103BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830103D0"))) PPC_WEAK_FUNC(sub_830103D0);
PPC_FUNC_IMPL(__imp__sub_830103D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11380
	ctx.r5.s64 = ctx.r11.s64 + 11380;
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// addi r4,r10,-8276
	ctx.r4.s64 = ctx.r10.s64 + -8276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2168
	ctx.r6.s64 = 2168;
	// bl 0x82b38290
	ctx.lr = 0x8301040C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-9120
	ctx.r11.s64 = ctx.r11.s64 + -9120;
	// addi r3,r9,-2360
	ctx.r3.s64 = ctx.r9.s64 + -2360;
	// stw r11,9020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9020, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010424;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010438"))) PPC_WEAK_FUNC(sub_83010438);
PPC_FUNC_IMPL(__imp__sub_83010438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,9088
	ctx.r3.s64 = ctx.r31.s64 + 9088;
	// addi r4,r10,-6508
	ctx.r4.s64 = ctx.r10.s64 + -6508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4052
	ctx.r6.s64 = 4052;
	// bl 0x82b38290
	ctx.lr = 0x83010474;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8148
	ctx.r11.s64 = ctx.r11.s64 + -8148;
	// addi r3,r9,-2336
	ctx.r3.s64 = ctx.r9.s64 + -2336;
	// stw r11,9088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301048C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830104A0"))) PPC_WEAK_FUNC(sub_830104A0);
PPC_FUNC_IMPL(__imp__sub_830104A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,9056
	ctx.r3.s64 = ctx.r31.s64 + 9056;
	// addi r4,r10,-6492
	ctx.r4.s64 = ctx.r10.s64 + -6492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x830104DC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8256
	ctx.r11.s64 = ctx.r11.s64 + -8256;
	// addi r3,r9,-2312
	ctx.r3.s64 = ctx.r9.s64 + -2312;
	// stw r11,9056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830104F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010508"))) PPC_WEAK_FUNC(sub_83010508);
PPC_FUNC_IMPL(__imp__sub_83010508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,9056
	ctx.r5.s64 = ctx.r11.s64 + 9056;
	// addi r3,r31,9152
	ctx.r3.s64 = ctx.r31.s64 + 9152;
	// addi r4,r10,-6472
	ctx.r4.s64 = ctx.r10.s64 + -6472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83010544;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8220
	ctx.r11.s64 = ctx.r11.s64 + -8220;
	// addi r3,r9,-2288
	ctx.r3.s64 = ctx.r9.s64 + -2288;
	// stw r11,9152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301055C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010570"))) PPC_WEAK_FUNC(sub_83010570);
PPC_FUNC_IMPL(__imp__sub_83010570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,9056
	ctx.r5.s64 = ctx.r11.s64 + 9056;
	// addi r3,r31,9120
	ctx.r3.s64 = ctx.r31.s64 + 9120;
	// addi r4,r10,-6448
	ctx.r4.s64 = ctx.r10.s64 + -6448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x830105AC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8184
	ctx.r11.s64 = ctx.r11.s64 + -8184;
	// addi r3,r9,-2264
	ctx.r3.s64 = ctx.r9.s64 + -2264;
	// stw r11,9120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830105C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830105D8"))) PPC_WEAK_FUNC(sub_830105D8);
PPC_FUNC_IMPL(__imp__sub_830105D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,9188
	ctx.r3.s64 = ctx.r31.s64 + 9188;
	// addi r4,r10,-6376
	ctx.r4.s64 = ctx.r10.s64 + -6376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x83010614;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6424
	ctx.r11.s64 = ctx.r11.s64 + -6424;
	// addi r3,r9,-2240
	ctx.r3.s64 = ctx.r9.s64 + -2240;
	// stw r11,9188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301062C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010640"))) PPC_WEAK_FUNC(sub_83010640);
PPC_FUNC_IMPL(__imp__sub_83010640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,14584
	ctx.r10.s64 = ctx.r11.s64 + 14584;
	// lwz r11,972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 972);
	// xoris r9,r11,255
	ctx.r9.u64 = ctx.r11.u64 ^ 16711680;
	// xori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 ^ 65535;
	// rlwinm r8,r9,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// xori r6,r8,784
	ctx.r6.u64 = ctx.r8.u64 ^ 784;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// xor r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// rlwinm r3,r4,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xori r9,r3,428
	ctx.r9.u64 = ctx.r3.u64 ^ 428;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// xor r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r11,r3,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// rlwinm r9,r3,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// xori r8,r11,48
	ctx.r8.u64 = ctx.r11.u64 ^ 48;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r5,r6,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// rlwinm r4,r6,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// xori r3,r5,784
	ctx.r3.u64 = ctx.r5.u64 ^ 784;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r8,r9,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// xori r6,r8,760
	ctx.r6.u64 = ctx.r8.u64 ^ 760;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// xor r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// rlwinm r3,r4,2,22,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// xor r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// rlwinm r6,r8,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// xori r5,r7,48
	ctx.r5.u64 = ctx.r7.u64 ^ 48;
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// xor r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r11,r3,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// rlwinm r9,r3,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// xori r8,r11,784
	ctx.r8.u64 = ctx.r11.u64 ^ 784;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r5,r6,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// rlwinm r4,r6,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// xori r3,r5,576
	ctx.r3.u64 = ctx.r5.u64 ^ 576;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r8,r9,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FC;
	// rlwinm r7,r9,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r4,r5,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// rlwinm r3,r5,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// xori r11,r4,48
	ctx.r11.u64 = ctx.r4.u64 ^ 48;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r7,r8,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// rlwinm r6,r8,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// xori r5,r7,784
	ctx.r5.u64 = ctx.r7.u64 ^ 784;
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// xor r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r11,r3,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// rlwinm r9,r3,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// xori r8,r11,224
	ctx.r8.u64 = ctx.r11.u64 ^ 224;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// xor r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r5,r6,2,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// rlwinm r4,r6,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r3,r5,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// xor r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r9,r11,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 ^ 48;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// xor r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// rlwinm r4,r5,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// rlwinm r11,r5,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// xori r3,r4,784
	ctx.r3.u64 = ctx.r4.u64 ^ 784;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// rlwinm r5,r7,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// xori r4,r6,548
	ctx.r4.u64 = ctx.r6.u64 ^ 548;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// xor r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// xor r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r11,9220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830107C8"))) PPC_WEAK_FUNC(sub_830107C8);
PPC_FUNC_IMPL(__imp__sub_830107C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9224
	ctx.r3.s64 = ctx.r31.s64 + 9224;
	// addi r4,r10,-6272
	ctx.r4.s64 = ctx.r10.s64 + -6272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83010804;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6344
	ctx.r11.s64 = ctx.r11.s64 + -6344;
	// addi r3,r9,-2216
	ctx.r3.s64 = ctx.r9.s64 + -2216;
	// stw r11,9224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301081C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010830"))) PPC_WEAK_FUNC(sub_83010830);
PPC_FUNC_IMPL(__imp__sub_83010830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9256
	ctx.r3.s64 = ctx.r31.s64 + 9256;
	// addi r4,r10,-6172
	ctx.r4.s64 = ctx.r10.s64 + -6172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,648
	ctx.r6.s64 = 648;
	// bl 0x82b38290
	ctx.lr = 0x8301086C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6264
	ctx.r11.s64 = ctx.r11.s64 + -6264;
	// addi r3,r9,-2192
	ctx.r3.s64 = ctx.r9.s64 + -2192;
	// stw r11,9256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010884;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010898"))) PPC_WEAK_FUNC(sub_83010898);
PPC_FUNC_IMPL(__imp__sub_83010898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9288
	ctx.r3.s64 = ctx.r31.s64 + 9288;
	// addi r4,r10,-6032
	ctx.r4.s64 = ctx.r10.s64 + -6032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x830108D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6156
	ctx.r11.s64 = ctx.r11.s64 + -6156;
	// addi r3,r9,-2168
	ctx.r3.s64 = ctx.r9.s64 + -2168;
	// stw r11,9288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830108EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010900"))) PPC_WEAK_FUNC(sub_83010900);
PPC_FUNC_IMPL(__imp__sub_83010900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9320
	ctx.r3.s64 = ctx.r31.s64 + 9320;
	// addi r4,r10,-5920
	ctx.r4.s64 = ctx.r10.s64 + -5920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8301093C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-6020
	ctx.r11.s64 = ctx.r11.s64 + -6020;
	// addi r3,r9,-2144
	ctx.r3.s64 = ctx.r9.s64 + -2144;
	// stw r11,9320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010954;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010968"))) PPC_WEAK_FUNC(sub_83010968);
PPC_FUNC_IMPL(__imp__sub_83010968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9384
	ctx.r3.s64 = ctx.r31.s64 + 9384;
	// addi r4,r10,-5704
	ctx.r4.s64 = ctx.r10.s64 + -5704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x830109A4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5872
	ctx.r11.s64 = ctx.r11.s64 + -5872;
	// addi r3,r9,-2120
	ctx.r3.s64 = ctx.r9.s64 + -2120;
	// stw r11,9384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830109BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830109D0"))) PPC_WEAK_FUNC(sub_830109D0);
PPC_FUNC_IMPL(__imp__sub_830109D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,9352
	ctx.r3.s64 = ctx.r31.s64 + 9352;
	// addi r4,r10,-5696
	ctx.r4.s64 = ctx.r10.s64 + -5696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83010A0C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5900
	ctx.r11.s64 = ctx.r11.s64 + -5900;
	// addi r3,r9,-2096
	ctx.r3.s64 = ctx.r9.s64 + -2096;
	// stw r11,9352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010A24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010A38"))) PPC_WEAK_FUNC(sub_83010A38);
PPC_FUNC_IMPL(__imp__sub_83010A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9416
	ctx.r3.s64 = ctx.r31.s64 + 9416;
	// addi r4,r10,-5608
	ctx.r4.s64 = ctx.r10.s64 + -5608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83010A74;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5676
	ctx.r11.s64 = ctx.r11.s64 + -5676;
	// addi r3,r9,-2072
	ctx.r3.s64 = ctx.r9.s64 + -2072;
	// stw r11,9416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010A8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010AA0"))) PPC_WEAK_FUNC(sub_83010AA0);
PPC_FUNC_IMPL(__imp__sub_83010AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9480
	ctx.r3.s64 = ctx.r31.s64 + 9480;
	// addi r4,r10,-5088
	ctx.r4.s64 = ctx.r10.s64 + -5088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83010ADC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5216
	ctx.r11.s64 = ctx.r11.s64 + -5216;
	// addi r3,r9,-2048
	ctx.r3.s64 = ctx.r9.s64 + -2048;
	// stw r11,9480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010AF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010B08"))) PPC_WEAK_FUNC(sub_83010B08);
PPC_FUNC_IMPL(__imp__sub_83010B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,9448
	ctx.r3.s64 = ctx.r31.s64 + 9448;
	// addi r4,r10,-5072
	ctx.r4.s64 = ctx.r10.s64 + -5072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x82b38290
	ctx.lr = 0x83010B44;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5208
	ctx.r11.s64 = ctx.r11.s64 + -5208;
	// addi r3,r9,-2024
	ctx.r3.s64 = ctx.r9.s64 + -2024;
	// stw r11,9448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010B5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010B70"))) PPC_WEAK_FUNC(sub_83010B70);
PPC_FUNC_IMPL(__imp__sub_83010B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9512
	ctx.r3.s64 = ctx.r31.s64 + 9512;
	// addi r4,r10,-4928
	ctx.r4.s64 = ctx.r10.s64 + -4928;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83010BAC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5004
	ctx.r11.s64 = ctx.r11.s64 + -5004;
	// addi r3,r9,-2000
	ctx.r3.s64 = ctx.r9.s64 + -2000;
	// stw r11,9512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010BC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010BD8"))) PPC_WEAK_FUNC(sub_83010BD8);
PPC_FUNC_IMPL(__imp__sub_83010BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,9544
	ctx.r3.s64 = ctx.r31.s64 + 9544;
	// addi r4,r10,-4920
	ctx.r4.s64 = ctx.r10.s64 + -4920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82b38290
	ctx.lr = 0x83010C14;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-5032
	ctx.r11.s64 = ctx.r11.s64 + -5032;
	// addi r3,r9,-1976
	ctx.r3.s64 = ctx.r9.s64 + -1976;
	// stw r11,9544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010C2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010C40"))) PPC_WEAK_FUNC(sub_83010C40);
PPC_FUNC_IMPL(__imp__sub_83010C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9576
	ctx.r3.s64 = ctx.r31.s64 + 9576;
	// addi r4,r10,-4820
	ctx.r4.s64 = ctx.r10.s64 + -4820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x83010C7C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4900
	ctx.r11.s64 = ctx.r11.s64 + -4900;
	// addi r3,r9,-1952
	ctx.r3.s64 = ctx.r9.s64 + -1952;
	// stw r11,9576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010C94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010CA8"))) PPC_WEAK_FUNC(sub_83010CA8);
PPC_FUNC_IMPL(__imp__sub_83010CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9608
	ctx.r3.s64 = ctx.r31.s64 + 9608;
	// addi r4,r10,-4736
	ctx.r4.s64 = ctx.r10.s64 + -4736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83010CE4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4808
	ctx.r11.s64 = ctx.r11.s64 + -4808;
	// addi r3,r9,-1928
	ctx.r3.s64 = ctx.r9.s64 + -1928;
	// stw r11,9608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010CFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D10"))) PPC_WEAK_FUNC(sub_83010D10);
PPC_FUNC_IMPL(__imp__sub_83010D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9640
	ctx.r3.s64 = ctx.r31.s64 + 9640;
	// addi r4,r10,-4632
	ctx.r4.s64 = ctx.r10.s64 + -4632;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,496
	ctx.r6.s64 = 496;
	// bl 0x82b38290
	ctx.lr = 0x83010D4C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4724
	ctx.r11.s64 = ctx.r11.s64 + -4724;
	// addi r3,r9,-1904
	ctx.r3.s64 = ctx.r9.s64 + -1904;
	// stw r11,9640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010D64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010D78"))) PPC_WEAK_FUNC(sub_83010D78);
PPC_FUNC_IMPL(__imp__sub_83010D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9672
	ctx.r3.s64 = ctx.r31.s64 + 9672;
	// addi r4,r10,-4548
	ctx.r4.s64 = ctx.r10.s64 + -4548;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83010DB4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4620
	ctx.r11.s64 = ctx.r11.s64 + -4620;
	// addi r3,r9,-1880
	ctx.r3.s64 = ctx.r9.s64 + -1880;
	// stw r11,9672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010DCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010DE0"))) PPC_WEAK_FUNC(sub_83010DE0);
PPC_FUNC_IMPL(__imp__sub_83010DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9704
	ctx.r3.s64 = ctx.r31.s64 + 9704;
	// addi r4,r10,-4452
	ctx.r4.s64 = ctx.r10.s64 + -4452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83010E1C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4524
	ctx.r11.s64 = ctx.r11.s64 + -4524;
	// addi r3,r9,-1856
	ctx.r3.s64 = ctx.r9.s64 + -1856;
	// stw r11,9704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010E34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010E48"))) PPC_WEAK_FUNC(sub_83010E48);
PPC_FUNC_IMPL(__imp__sub_83010E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9736
	ctx.r3.s64 = ctx.r31.s64 + 9736;
	// addi r4,r10,-4320
	ctx.r4.s64 = ctx.r10.s64 + -4320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83010E84;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4432
	ctx.r11.s64 = ctx.r11.s64 + -4432;
	// addi r3,r9,-1832
	ctx.r3.s64 = ctx.r9.s64 + -1832;
	// stw r11,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010E9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010EB0"))) PPC_WEAK_FUNC(sub_83010EB0);
PPC_FUNC_IMPL(__imp__sub_83010EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9768
	ctx.r3.s64 = ctx.r31.s64 + 9768;
	// addi r4,r10,-4160
	ctx.r4.s64 = ctx.r10.s64 + -4160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,160
	ctx.r6.s64 = 160;
	// bl 0x82b38290
	ctx.lr = 0x83010EEC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4304
	ctx.r11.s64 = ctx.r11.s64 + -4304;
	// addi r3,r9,-1808
	ctx.r3.s64 = ctx.r9.s64 + -1808;
	// stw r11,9768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010F04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010F18"))) PPC_WEAK_FUNC(sub_83010F18);
PPC_FUNC_IMPL(__imp__sub_83010F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9800
	ctx.r3.s64 = ctx.r31.s64 + 9800;
	// addi r4,r10,-3896
	ctx.r4.s64 = ctx.r10.s64 + -3896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83010F54;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4144
	ctx.r11.s64 = ctx.r11.s64 + -4144;
	// addi r3,r9,-1784
	ctx.r3.s64 = ctx.r9.s64 + -1784;
	// stw r11,9800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010F6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010F80"))) PPC_WEAK_FUNC(sub_83010F80);
PPC_FUNC_IMPL(__imp__sub_83010F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,9864
	ctx.r3.s64 = ctx.r31.s64 + 9864;
	// addi r4,r10,-3880
	ctx.r4.s64 = ctx.r10.s64 + -3880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82b38290
	ctx.lr = 0x83010FBC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4136
	ctx.r11.s64 = ctx.r11.s64 + -4136;
	// addi r3,r9,-1760
	ctx.r3.s64 = ctx.r9.s64 + -1760;
	// stw r11,9864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83010FD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83010FE8"))) PPC_WEAK_FUNC(sub_83010FE8);
PPC_FUNC_IMPL(__imp__sub_83010FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,9800
	ctx.r5.s64 = ctx.r11.s64 + 9800;
	// addi r3,r31,9832
	ctx.r3.s64 = ctx.r31.s64 + 9832;
	// addi r4,r10,-3848
	ctx.r4.s64 = ctx.r10.s64 + -3848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3176
	ctx.r6.s64 = 3176;
	// bl 0x82b38290
	ctx.lr = 0x83011024;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// addi r3,r9,-1736
	ctx.r3.s64 = ctx.r9.s64 + -1736;
	// stw r11,9832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301103C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011050"))) PPC_WEAK_FUNC(sub_83011050);
PPC_FUNC_IMPL(__imp__sub_83011050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9896
	ctx.r3.s64 = ctx.r31.s64 + 9896;
	// addi r4,r10,-3712
	ctx.r4.s64 = ctx.r10.s64 + -3712;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3168
	ctx.r6.s64 = 3168;
	// bl 0x82b38290
	ctx.lr = 0x8301108C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3828
	ctx.r11.s64 = ctx.r11.s64 + -3828;
	// addi r3,r9,-1712
	ctx.r3.s64 = ctx.r9.s64 + -1712;
	// stw r11,9896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830110A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830110B8"))) PPC_WEAK_FUNC(sub_830110B8);
PPC_FUNC_IMPL(__imp__sub_830110B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9928
	ctx.r3.s64 = ctx.r31.s64 + 9928;
	// addi r4,r10,-3616
	ctx.r4.s64 = ctx.r10.s64 + -3616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x830110F4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3700
	ctx.r11.s64 = ctx.r11.s64 + -3700;
	// addi r3,r9,-1688
	ctx.r3.s64 = ctx.r9.s64 + -1688;
	// stw r11,9928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301110C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011120"))) PPC_WEAK_FUNC(sub_83011120);
PPC_FUNC_IMPL(__imp__sub_83011120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9960
	ctx.r3.s64 = ctx.r31.s64 + 9960;
	// addi r4,r10,-3532
	ctx.r4.s64 = ctx.r10.s64 + -3532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8301115C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3604
	ctx.r11.s64 = ctx.r11.s64 + -3604;
	// addi r3,r9,-1664
	ctx.r3.s64 = ctx.r9.s64 + -1664;
	// stw r11,9960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011174;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011188"))) PPC_WEAK_FUNC(sub_83011188);
PPC_FUNC_IMPL(__imp__sub_83011188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,9992
	ctx.r3.s64 = ctx.r31.s64 + 9992;
	// addi r4,r10,-3448
	ctx.r4.s64 = ctx.r10.s64 + -3448;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x830111C4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3520
	ctx.r11.s64 = ctx.r11.s64 + -3520;
	// addi r3,r9,-1640
	ctx.r3.s64 = ctx.r9.s64 + -1640;
	// stw r11,9992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830111DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830111F0"))) PPC_WEAK_FUNC(sub_830111F0);
PPC_FUNC_IMPL(__imp__sub_830111F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10024
	ctx.r3.s64 = ctx.r31.s64 + 10024;
	// addi r4,r10,-3272
	ctx.r4.s64 = ctx.r10.s64 + -3272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x8301122C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3428
	ctx.r11.s64 = ctx.r11.s64 + -3428;
	// addi r3,r9,-1616
	ctx.r3.s64 = ctx.r9.s64 + -1616;
	// stw r11,10024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011244;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011258"))) PPC_WEAK_FUNC(sub_83011258);
PPC_FUNC_IMPL(__imp__sub_83011258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r3,r31,10056
	ctx.r3.s64 = ctx.r31.s64 + 10056;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r4,r10,-3180
	ctx.r4.s64 = ctx.r10.s64 + -3180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,13352
	ctx.r6.u64 = ctx.r6.u64 | 13352;
	// bl 0x82b38290
	ctx.lr = 0x83011298;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3260
	ctx.r11.s64 = ctx.r11.s64 + -3260;
	// addi r3,r9,-1592
	ctx.r3.s64 = ctx.r9.s64 + -1592;
	// stw r11,10056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830112B0;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830112C8"))) PPC_WEAK_FUNC(sub_830112C8);
PPC_FUNC_IMPL(__imp__sub_830112C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10088
	ctx.r3.s64 = ctx.r31.s64 + 10088;
	// addi r4,r10,-3100
	ctx.r4.s64 = ctx.r10.s64 + -3100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83011304;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3172
	ctx.r11.s64 = ctx.r11.s64 + -3172;
	// addi r3,r9,-1568
	ctx.r3.s64 = ctx.r9.s64 + -1568;
	// stw r11,10088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301131C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011330"))) PPC_WEAK_FUNC(sub_83011330);
PPC_FUNC_IMPL(__imp__sub_83011330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10216
	ctx.r3.s64 = ctx.r31.s64 + 10216;
	// addi r4,r10,-2900
	ctx.r4.s64 = ctx.r10.s64 + -2900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8301136C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3080
	ctx.r11.s64 = ctx.r11.s64 + -3080;
	// addi r3,r9,-1544
	ctx.r3.s64 = ctx.r9.s64 + -1544;
	// stw r11,10216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011384;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011398"))) PPC_WEAK_FUNC(sub_83011398);
PPC_FUNC_IMPL(__imp__sub_83011398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10184
	ctx.r3.s64 = ctx.r31.s64 + 10184;
	// addi r4,r10,-2888
	ctx.r4.s64 = ctx.r10.s64 + -2888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x830113D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3072
	ctx.r11.s64 = ctx.r11.s64 + -3072;
	// addi r3,r9,-1520
	ctx.r3.s64 = ctx.r9.s64 + -1520;
	// stw r11,10184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830113EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011400"))) PPC_WEAK_FUNC(sub_83011400);
PPC_FUNC_IMPL(__imp__sub_83011400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// addi r3,r31,10120
	ctx.r3.s64 = ctx.r31.s64 + 10120;
	// addi r4,r10,-2868
	ctx.r4.s64 = ctx.r10.s64 + -2868;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8301143C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3064
	ctx.r11.s64 = ctx.r11.s64 + -3064;
	// addi r3,r9,-1496
	ctx.r3.s64 = ctx.r9.s64 + -1496;
	// stw r11,10120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011454;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011468"))) PPC_WEAK_FUNC(sub_83011468);
PPC_FUNC_IMPL(__imp__sub_83011468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// addi r3,r31,10152
	ctx.r3.s64 = ctx.r31.s64 + 10152;
	// addi r4,r10,-2844
	ctx.r4.s64 = ctx.r10.s64 + -2844;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x830114A4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-3036
	ctx.r11.s64 = ctx.r11.s64 + -3036;
	// addi r3,r9,-1472
	ctx.r3.s64 = ctx.r9.s64 + -1472;
	// stw r11,10152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830114BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830114D0"))) PPC_WEAK_FUNC(sub_830114D0);
PPC_FUNC_IMPL(__imp__sub_830114D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10248
	ctx.r3.s64 = ctx.r31.s64 + 10248;
	// addi r4,r10,-2524
	ctx.r4.s64 = ctx.r10.s64 + -2524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8301150C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2820
	ctx.r11.s64 = ctx.r11.s64 + -2820;
	// addi r3,r9,-1448
	ctx.r3.s64 = ctx.r9.s64 + -1448;
	// stw r11,10248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011524;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011538"))) PPC_WEAK_FUNC(sub_83011538);
PPC_FUNC_IMPL(__imp__sub_83011538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10280
	ctx.r3.s64 = ctx.r31.s64 + 10280;
	// addi r4,r10,-1752
	ctx.r4.s64 = ctx.r10.s64 + -1752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x83011574;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2508
	ctx.r11.s64 = ctx.r11.s64 + -2508;
	// addi r3,r9,-1424
	ctx.r3.s64 = ctx.r9.s64 + -1424;
	// stw r11,10280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301158C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830115A0"))) PPC_WEAK_FUNC(sub_830115A0);
PPC_FUNC_IMPL(__imp__sub_830115A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10312
	ctx.r3.s64 = ctx.r31.s64 + 10312;
	// addi r4,r10,-1740
	ctx.r4.s64 = ctx.r10.s64 + -1740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830115DC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2500
	ctx.r11.s64 = ctx.r11.s64 + -2500;
	// addi r3,r9,-1400
	ctx.r3.s64 = ctx.r9.s64 + -1400;
	// stw r11,10312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830115F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011608"))) PPC_WEAK_FUNC(sub_83011608);
PPC_FUNC_IMPL(__imp__sub_83011608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10408
	ctx.r3.s64 = ctx.r31.s64 + 10408;
	// addi r4,r10,-1616
	ctx.r4.s64 = ctx.r10.s64 + -1616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83011644;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1712
	ctx.r11.s64 = ctx.r11.s64 + -1712;
	// addi r3,r9,-1376
	ctx.r3.s64 = ctx.r9.s64 + -1376;
	// stw r11,10408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301165C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011670"))) PPC_WEAK_FUNC(sub_83011670);
PPC_FUNC_IMPL(__imp__sub_83011670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10376
	ctx.r3.s64 = ctx.r31.s64 + 10376;
	// addi r4,r10,-1600
	ctx.r4.s64 = ctx.r10.s64 + -1600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x830116AC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1704
	ctx.r11.s64 = ctx.r11.s64 + -1704;
	// addi r3,r9,-1352
	ctx.r3.s64 = ctx.r9.s64 + -1352;
	// stw r11,10376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830116C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830116D8"))) PPC_WEAK_FUNC(sub_830116D8);
PPC_FUNC_IMPL(__imp__sub_830116D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,10376
	ctx.r5.s64 = ctx.r11.s64 + 10376;
	// addi r3,r31,10344
	ctx.r3.s64 = ctx.r31.s64 + 10344;
	// addi r4,r10,-1572
	ctx.r4.s64 = ctx.r10.s64 + -1572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83011714;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// addi r3,r9,-1328
	ctx.r3.s64 = ctx.r9.s64 + -1328;
	// stw r11,10344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301172C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011740"))) PPC_WEAK_FUNC(sub_83011740);
PPC_FUNC_IMPL(__imp__sub_83011740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,10376
	ctx.r5.s64 = ctx.r11.s64 + 10376;
	// addi r3,r31,10440
	ctx.r3.s64 = ctx.r31.s64 + 10440;
	// addi r4,r10,-1544
	ctx.r4.s64 = ctx.r10.s64 + -1544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8301177C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1688
	ctx.r11.s64 = ctx.r11.s64 + -1688;
	// addi r3,r9,-1304
	ctx.r3.s64 = ctx.r9.s64 + -1304;
	// stw r11,10440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011794;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830117A8"))) PPC_WEAK_FUNC(sub_830117A8);
PPC_FUNC_IMPL(__imp__sub_830117A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10472
	ctx.r3.s64 = ctx.r31.s64 + 10472;
	// addi r4,r10,-1444
	ctx.r4.s64 = ctx.r10.s64 + -1444;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x830117E4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1516
	ctx.r11.s64 = ctx.r11.s64 + -1516;
	// addi r3,r9,-1280
	ctx.r3.s64 = ctx.r9.s64 + -1280;
	// stw r11,10472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830117FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011810"))) PPC_WEAK_FUNC(sub_83011810);
PPC_FUNC_IMPL(__imp__sub_83011810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10568
	ctx.r3.s64 = ctx.r31.s64 + 10568;
	// addi r4,r10,-1244
	ctx.r4.s64 = ctx.r10.s64 + -1244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// bl 0x82b38290
	ctx.lr = 0x8301184C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1344
	ctx.r11.s64 = ctx.r11.s64 + -1344;
	// addi r3,r9,-1256
	ctx.r3.s64 = ctx.r9.s64 + -1256;
	// stw r11,10568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011864;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011878"))) PPC_WEAK_FUNC(sub_83011878);
PPC_FUNC_IMPL(__imp__sub_83011878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10600
	ctx.r3.s64 = ctx.r31.s64 + 10600;
	// addi r4,r10,-1236
	ctx.r4.s64 = ctx.r10.s64 + -1236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,624
	ctx.r6.s64 = 624;
	// bl 0x82b38290
	ctx.lr = 0x830118B4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1428
	ctx.r11.s64 = ctx.r11.s64 + -1428;
	// addi r3,r9,-1232
	ctx.r3.s64 = ctx.r9.s64 + -1232;
	// stw r11,10600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830118CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830118E0"))) PPC_WEAK_FUNC(sub_830118E0);
PPC_FUNC_IMPL(__imp__sub_830118E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// addi r4,r10,-1216
	ctx.r4.s64 = ctx.r10.s64 + -1216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8301191C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1400
	ctx.r11.s64 = ctx.r11.s64 + -1400;
	// addi r3,r9,-1208
	ctx.r3.s64 = ctx.r9.s64 + -1208;
	// stw r11,10536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011934;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011948"))) PPC_WEAK_FUNC(sub_83011948);
PPC_FUNC_IMPL(__imp__sub_83011948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,10504
	ctx.r3.s64 = ctx.r31.s64 + 10504;
	// addi r4,r10,-1200
	ctx.r4.s64 = ctx.r10.s64 + -1200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83011984;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1372
	ctx.r11.s64 = ctx.r11.s64 + -1372;
	// addi r3,r9,-1184
	ctx.r3.s64 = ctx.r9.s64 + -1184;
	// stw r11,10504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301199C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830119B0"))) PPC_WEAK_FUNC(sub_830119B0);
PPC_FUNC_IMPL(__imp__sub_830119B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10632
	ctx.r3.s64 = ctx.r31.s64 + 10632;
	// addi r4,r10,-1112
	ctx.r4.s64 = ctx.r10.s64 + -1112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x830119EC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1184
	ctx.r11.s64 = ctx.r11.s64 + -1184;
	// addi r3,r9,-1160
	ctx.r3.s64 = ctx.r9.s64 + -1160;
	// stw r11,10632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011A04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011A18"))) PPC_WEAK_FUNC(sub_83011A18);
PPC_FUNC_IMPL(__imp__sub_83011A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,10668
	ctx.r3.s64 = ctx.r31.s64 + 10668;
	// addi r4,r10,-29944
	ctx.r4.s64 = ctx.r10.s64 + -29944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17200
	ctx.r6.s64 = 17200;
	// bl 0x82b38290
	ctx.lr = 0x83011A54;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1100
	ctx.r11.s64 = ctx.r11.s64 + -1100;
	// addi r3,r9,-1136
	ctx.r3.s64 = ctx.r9.s64 + -1136;
	// stw r11,10668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011A6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011A80"))) PPC_WEAK_FUNC(sub_83011A80);
PPC_FUNC_IMPL(__imp__sub_83011A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,10700
	ctx.r3.s64 = ctx.r31.s64 + 10700;
	// addi r4,r10,80
	ctx.r4.s64 = ctx.r10.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
	// bl 0x82b38290
	ctx.lr = 0x83011ABC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r3,r9,-1112
	ctx.r3.s64 = ctx.r9.s64 + -1112;
	// stw r11,10700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10700, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011AD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011AE8"))) PPC_WEAK_FUNC(sub_83011AE8);
PPC_FUNC_IMPL(__imp__sub_83011AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// addi r3,r31,10736
	ctx.r3.s64 = ctx.r31.s64 + 10736;
	// addi r4,r10,1392
	ctx.r4.s64 = ctx.r10.s64 + 1392;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83011B24;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1308
	ctx.r11.s64 = ctx.r11.s64 + 1308;
	// addi r3,r9,-1088
	ctx.r3.s64 = ctx.r9.s64 + -1088;
	// stw r11,10736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011B3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011B50"))) PPC_WEAK_FUNC(sub_83011B50);
PPC_FUNC_IMPL(__imp__sub_83011B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,10768
	ctx.r3.s64 = ctx.r31.s64 + 10768;
	// addi r4,r10,1616
	ctx.r4.s64 = ctx.r10.s64 + 1616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83011B8C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1412
	ctx.r11.s64 = ctx.r11.s64 + 1412;
	// addi r3,r9,-1064
	ctx.r3.s64 = ctx.r9.s64 + -1064;
	// stw r11,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011BA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011BB8"))) PPC_WEAK_FUNC(sub_83011BB8);
PPC_FUNC_IMPL(__imp__sub_83011BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,10768
	ctx.r5.s64 = ctx.r11.s64 + 10768;
	// addi r3,r31,11164
	ctx.r3.s64 = ctx.r31.s64 + 11164;
	// addi r4,r10,2212
	ctx.r4.s64 = ctx.r10.s64 + 2212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1592
	ctx.r6.s64 = 1592;
	// bl 0x82b38290
	ctx.lr = 0x83011BF4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1688
	ctx.r11.s64 = ctx.r11.s64 + 1688;
	// addi r3,r9,-1040
	ctx.r3.s64 = ctx.r9.s64 + -1040;
	// stw r11,11164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11164, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011C0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011C20"))) PPC_WEAK_FUNC(sub_83011C20);
PPC_FUNC_IMPL(__imp__sub_83011C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// addi r4,r10,2224
	ctx.r4.s64 = ctx.r10.s64 + 2224;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83011C5C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1696
	ctx.r11.s64 = ctx.r11.s64 + 1696;
	// addi r3,r9,-1016
	ctx.r3.s64 = ctx.r9.s64 + -1016;
	// stw r11,11132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11132, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011C74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011C88"))) PPC_WEAK_FUNC(sub_83011C88);
PPC_FUNC_IMPL(__imp__sub_83011C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11100
	ctx.r3.s64 = ctx.r31.s64 + 11100;
	// addi r4,r10,2244
	ctx.r4.s64 = ctx.r10.s64 + 2244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// bl 0x82b38290
	ctx.lr = 0x83011CC4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,1704
	ctx.r11.s64 = ctx.r11.s64 + 1704;
	// addi r3,r9,-992
	ctx.r3.s64 = ctx.r9.s64 + -992;
	// stw r11,11100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11100, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011CDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011CF0"))) PPC_WEAK_FUNC(sub_83011CF0);
PPC_FUNC_IMPL(__imp__sub_83011CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,11212
	ctx.r3.s64 = ctx.r31.s64 + 11212;
	// addi r4,r10,2308
	ctx.r4.s64 = ctx.r10.s64 + 2308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x83011D2C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2264
	ctx.r11.s64 = ctx.r11.s64 + 2264;
	// addi r3,r9,-968
	ctx.r3.s64 = ctx.r9.s64 + -968;
	// stw r11,11212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11212, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011D44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011D58"))) PPC_WEAK_FUNC(sub_83011D58);
PPC_FUNC_IMPL(__imp__sub_83011D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,11248
	ctx.r3.s64 = ctx.r31.s64 + 11248;
	// addi r4,r10,2412
	ctx.r4.s64 = ctx.r10.s64 + 2412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x83011D94;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2348
	ctx.r11.s64 = ctx.r11.s64 + 2348;
	// addi r3,r9,-944
	ctx.r3.s64 = ctx.r9.s64 + -944;
	// stw r11,11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011DAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011DC0"))) PPC_WEAK_FUNC(sub_83011DC0);
PPC_FUNC_IMPL(__imp__sub_83011DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8412
	ctx.r5.s64 = ctx.r11.s64 + -8412;
	// addi r3,r31,11280
	ctx.r3.s64 = ctx.r31.s64 + 11280;
	// addi r4,r10,2428
	ctx.r4.s64 = ctx.r10.s64 + 2428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,14416
	ctx.r6.s64 = 14416;
	// bl 0x82b38290
	ctx.lr = 0x83011DFC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2420
	ctx.r11.s64 = ctx.r11.s64 + 2420;
	// addi r3,r9,-920
	ctx.r3.s64 = ctx.r9.s64 + -920;
	// stw r11,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011E14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011E28"))) PPC_WEAK_FUNC(sub_83011E28);
PPC_FUNC_IMPL(__imp__sub_83011E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8448
	ctx.r5.s64 = ctx.r11.s64 + -8448;
	// addi r3,r31,11312
	ctx.r3.s64 = ctx.r31.s64 + 11312;
	// addi r4,r10,2568
	ctx.r4.s64 = ctx.r10.s64 + 2568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,784
	ctx.r6.s64 = 784;
	// bl 0x82b38290
	ctx.lr = 0x83011E64;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2440
	ctx.r11.s64 = ctx.r11.s64 + 2440;
	// addi r3,r9,-896
	ctx.r3.s64 = ctx.r9.s64 + -896;
	// stw r11,11312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011E7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011E90"))) PPC_WEAK_FUNC(sub_83011E90);
PPC_FUNC_IMPL(__imp__sub_83011E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,11348
	ctx.r3.s64 = ctx.r31.s64 + 11348;
	// addi r4,r10,2660
	ctx.r4.s64 = ctx.r10.s64 + 2660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x82b38290
	ctx.lr = 0x83011ECC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2580
	ctx.r11.s64 = ctx.r11.s64 + 2580;
	// addi r3,r9,-872
	ctx.r3.s64 = ctx.r9.s64 + -872;
	// stw r11,11348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011EE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011EF8"))) PPC_WEAK_FUNC(sub_83011EF8);
PPC_FUNC_IMPL(__imp__sub_83011EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8756
	ctx.r5.s64 = ctx.r11.s64 + -8756;
	// addi r3,r31,11380
	ctx.r3.s64 = ctx.r31.s64 + 11380;
	// addi r4,r10,2716
	ctx.r4.s64 = ctx.r10.s64 + 2716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1688
	ctx.r6.s64 = 1688;
	// bl 0x82b38290
	ctx.lr = 0x83011F34;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2672
	ctx.r11.s64 = ctx.r11.s64 + 2672;
	// addi r3,r9,-848
	ctx.r3.s64 = ctx.r9.s64 + -848;
	// stw r11,11380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011F4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011F60"))) PPC_WEAK_FUNC(sub_83011F60);
PPC_FUNC_IMPL(__imp__sub_83011F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r6,68
	ctx.r6.s64 = 4456448;
	// addi r3,r31,11412
	ctx.r3.s64 = ctx.r31.s64 + 11412;
	// addi r5,r11,-8484
	ctx.r5.s64 = ctx.r11.s64 + -8484;
	// addi r4,r10,2776
	ctx.r4.s64 = ctx.r10.s64 + 2776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,12592
	ctx.r6.u64 = ctx.r6.u64 | 12592;
	// bl 0x82b38290
	ctx.lr = 0x83011FA0;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,2728
	ctx.r11.s64 = ctx.r11.s64 + 2728;
	// addi r3,r9,-824
	ctx.r3.s64 = ctx.r9.s64 + -824;
	// stw r11,11412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83011FB8;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83011FD0"))) PPC_WEAK_FUNC(sub_83011FD0);
PPC_FUNC_IMPL(__imp__sub_83011FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r3,r31,11540
	ctx.r3.s64 = ctx.r31.s64 + 11540;
	// addi r5,r11,-8128
	ctx.r5.s64 = ctx.r11.s64 + -8128;
	// addi r4,r10,4228
	ctx.r4.s64 = ctx.r10.s64 + 4228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,20840
	ctx.r6.u64 = ctx.r6.u64 | 20840;
	// bl 0x82b38290
	ctx.lr = 0x83012010;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3908
	ctx.r11.s64 = ctx.r11.s64 + 3908;
	// addi r3,r9,-800
	ctx.r3.s64 = ctx.r9.s64 + -800;
	// stw r11,11540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012028;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012040"))) PPC_WEAK_FUNC(sub_83012040);
PPC_FUNC_IMPL(__imp__sub_83012040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11476
	ctx.r3.s64 = ctx.r31.s64 + 11476;
	// addi r4,r10,4244
	ctx.r4.s64 = ctx.r10.s64 + 4244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x8301207C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3916
	ctx.r11.s64 = ctx.r11.s64 + 3916;
	// addi r3,r9,-776
	ctx.r3.s64 = ctx.r9.s64 + -776;
	// stw r11,11476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830120A8"))) PPC_WEAK_FUNC(sub_830120A8);
PPC_FUNC_IMPL(__imp__sub_830120A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11444
	ctx.r3.s64 = ctx.r31.s64 + 11444;
	// addi r4,r10,4276
	ctx.r4.s64 = ctx.r10.s64 + 4276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x830120E4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3924
	ctx.r11.s64 = ctx.r11.s64 + 3924;
	// addi r3,r9,-752
	ctx.r3.s64 = ctx.r9.s64 + -752;
	// stw r11,11444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830120FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012110"))) PPC_WEAK_FUNC(sub_83012110);
PPC_FUNC_IMPL(__imp__sub_83012110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11508
	ctx.r3.s64 = ctx.r31.s64 + 11508;
	// addi r4,r10,4304
	ctx.r4.s64 = ctx.r10.s64 + 4304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x82b38290
	ctx.lr = 0x8301214C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,3932
	ctx.r11.s64 = ctx.r11.s64 + 3932;
	// addi r3,r9,-728
	ctx.r3.s64 = ctx.r9.s64 + -728;
	// stw r11,11508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012164;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012178"))) PPC_WEAK_FUNC(sub_83012178);
PPC_FUNC_IMPL(__imp__sub_83012178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,688
	ctx.r5.s64 = ctx.r11.s64 + 688;
	// addi r3,r31,11572
	ctx.r3.s64 = ctx.r31.s64 + 11572;
	// addi r4,r10,4420
	ctx.r4.s64 = ctx.r10.s64 + 4420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2928
	ctx.r6.s64 = 2928;
	// bl 0x82b38290
	ctx.lr = 0x830121B4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4332
	ctx.r11.s64 = ctx.r11.s64 + 4332;
	// addi r3,r9,-704
	ctx.r3.s64 = ctx.r9.s64 + -704;
	// stw r11,11572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830121CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830121E0"))) PPC_WEAK_FUNC(sub_830121E0);
PPC_FUNC_IMPL(__imp__sub_830121E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,11608
	ctx.r3.s64 = ctx.r31.s64 + 11608;
	// addi r4,r10,4488
	ctx.r4.s64 = ctx.r10.s64 + 4488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x8301221C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// addi r3,r9,-680
	ctx.r3.s64 = ctx.r9.s64 + -680;
	// stw r11,11608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012234;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012248"))) PPC_WEAK_FUNC(sub_83012248);
PPC_FUNC_IMPL(__imp__sub_83012248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r6,11
	ctx.r6.s64 = 720896;
	// addi r3,r31,11640
	ctx.r3.s64 = ctx.r31.s64 + 11640;
	// addi r5,r11,-8092
	ctx.r5.s64 = ctx.r11.s64 + -8092;
	// addi r4,r10,4512
	ctx.r4.s64 = ctx.r10.s64 + 4512;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,12824
	ctx.r6.u64 = ctx.r6.u64 | 12824;
	// bl 0x82b38290
	ctx.lr = 0x83012288;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4504
	ctx.r11.s64 = ctx.r11.s64 + 4504;
	// addi r3,r9,-656
	ctx.r3.s64 = ctx.r9.s64 + -656;
	// stw r11,11640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830122A0;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830122B8"))) PPC_WEAK_FUNC(sub_830122B8);
PPC_FUNC_IMPL(__imp__sub_830122B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,756
	ctx.r5.s64 = ctx.r11.s64 + 756;
	// addi r3,r31,11672
	ctx.r3.s64 = ctx.r31.s64 + 11672;
	// addi r4,r10,4656
	ctx.r4.s64 = ctx.r10.s64 + 4656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,36
	ctx.r6.s64 = 36;
	// bl 0x82b38290
	ctx.lr = 0x830122F4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4588
	ctx.r11.s64 = ctx.r11.s64 + 4588;
	// addi r3,r9,-632
	ctx.r3.s64 = ctx.r9.s64 + -632;
	// stw r11,11672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301230C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012320"))) PPC_WEAK_FUNC(sub_83012320);
PPC_FUNC_IMPL(__imp__sub_83012320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-8620
	ctx.r5.s64 = ctx.r11.s64 + -8620;
	// addi r3,r31,11704
	ctx.r3.s64 = ctx.r31.s64 + 11704;
	// addi r4,r10,4728
	ctx.r4.s64 = ctx.r10.s64 + 4728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2144
	ctx.r6.s64 = 2144;
	// bl 0x82b38290
	ctx.lr = 0x8301235C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4668
	ctx.r11.s64 = ctx.r11.s64 + 4668;
	// addi r3,r9,-608
	ctx.r3.s64 = ctx.r9.s64 + -608;
	// stw r11,11704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012374;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012388"))) PPC_WEAK_FUNC(sub_83012388);
PPC_FUNC_IMPL(__imp__sub_83012388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11736
	ctx.r3.s64 = ctx.r31.s64 + 11736;
	// addi r4,r10,-29972
	ctx.r4.s64 = ctx.r10.s64 + -29972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,396
	ctx.r6.s64 = 396;
	// bl 0x82b38290
	ctx.lr = 0x830123C4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4744
	ctx.r11.s64 = ctx.r11.s64 + 4744;
	// addi r3,r9,-584
	ctx.r3.s64 = ctx.r9.s64 + -584;
	// stw r11,11736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830123DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830123F0"))) PPC_WEAK_FUNC(sub_830123F0);
PPC_FUNC_IMPL(__imp__sub_830123F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,11768
	ctx.r3.s64 = ctx.r31.s64 + 11768;
	// addi r4,r10,-29992
	ctx.r4.s64 = ctx.r10.s64 + -29992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// bl 0x82b38290
	ctx.lr = 0x8301242C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,4840
	ctx.r11.s64 = ctx.r11.s64 + 4840;
	// addi r3,r9,-560
	ctx.r3.s64 = ctx.r9.s64 + -560;
	// stw r11,11768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012444;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012458"))) PPC_WEAK_FUNC(sub_83012458);
PPC_FUNC_IMPL(__imp__sub_83012458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,11804
	ctx.r3.s64 = ctx.r31.s64 + 11804;
	// addi r4,r10,8724
	ctx.r4.s64 = ctx.r10.s64 + 8724;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20624
	ctx.r6.s64 = 20624;
	// bl 0x82b38290
	ctx.lr = 0x83012494;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5072
	ctx.r11.s64 = ctx.r11.s64 + 5072;
	// addi r3,r9,-536
	ctx.r3.s64 = ctx.r9.s64 + -536;
	// stw r11,11804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11804, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830124AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830124C0"))) PPC_WEAK_FUNC(sub_830124C0);
PPC_FUNC_IMPL(__imp__sub_830124C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-17632
	ctx.r5.s64 = ctx.r11.s64 + -17632;
	// addi r3,r31,11836
	ctx.r3.s64 = ctx.r31.s64 + 11836;
	// addi r4,r10,8776
	ctx.r4.s64 = ctx.r10.s64 + 8776;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,108
	ctx.r6.s64 = 108;
	// bl 0x82b38290
	ctx.lr = 0x830124FC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8732
	ctx.r11.s64 = ctx.r11.s64 + 8732;
	// addi r3,r9,-512
	ctx.r3.s64 = ctx.r9.s64 + -512;
	// stw r11,11836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11836, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012514;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012528"))) PPC_WEAK_FUNC(sub_83012528);
PPC_FUNC_IMPL(__imp__sub_83012528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11900
	ctx.r5.s64 = ctx.r11.s64 + 11900;
	// addi r3,r31,11868
	ctx.r3.s64 = ctx.r31.s64 + 11868;
	// addi r4,r10,9032
	ctx.r4.s64 = ctx.r10.s64 + 9032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1184
	ctx.r6.s64 = 1184;
	// bl 0x82b38290
	ctx.lr = 0x83012564;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8796
	ctx.r11.s64 = ctx.r11.s64 + 8796;
	// addi r3,r9,-488
	ctx.r3.s64 = ctx.r9.s64 + -488;
	// stw r11,11868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11868, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301257C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012590"))) PPC_WEAK_FUNC(sub_83012590);
PPC_FUNC_IMPL(__imp__sub_83012590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,11900
	ctx.r3.s64 = ctx.r31.s64 + 11900;
	// addi r4,r10,9704
	ctx.r4.s64 = ctx.r10.s64 + 9704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,928
	ctx.r6.s64 = 928;
	// bl 0x82b38290
	ctx.lr = 0x830125CC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// addi r3,r9,-464
	ctx.r3.s64 = ctx.r9.s64 + -464;
	// stw r11,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830125E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830125F8"))) PPC_WEAK_FUNC(sub_830125F8);
PPC_FUNC_IMPL(__imp__sub_830125F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,12092
	ctx.r3.s64 = ctx.r31.s64 + 12092;
	// addi r4,r10,10508
	ctx.r4.s64 = ctx.r10.s64 + 10508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83012634;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// addi r3,r9,-440
	ctx.r3.s64 = ctx.r9.s64 + -440;
	// stw r11,12092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12092, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301264C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012660"))) PPC_WEAK_FUNC(sub_83012660);
PPC_FUNC_IMPL(__imp__sub_83012660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,12124
	ctx.r3.s64 = ctx.r31.s64 + 12124;
	// addi r4,r10,10524
	ctx.r4.s64 = ctx.r10.s64 + 10524;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8301269C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9732
	ctx.r11.s64 = ctx.r11.s64 + 9732;
	// addi r3,r9,-416
	ctx.r3.s64 = ctx.r9.s64 + -416;
	// stw r11,12124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12124, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830126B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830126C8"))) PPC_WEAK_FUNC(sub_830126C8);
PPC_FUNC_IMPL(__imp__sub_830126C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,11932
	ctx.r3.s64 = ctx.r31.s64 + 11932;
	// addi r4,r10,10544
	ctx.r4.s64 = ctx.r10.s64 + 10544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83012704;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9740
	ctx.r11.s64 = ctx.r11.s64 + 9740;
	// addi r3,r9,-392
	ctx.r3.s64 = ctx.r9.s64 + -392;
	// stw r11,11932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11932, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301271C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012730"))) PPC_WEAK_FUNC(sub_83012730);
PPC_FUNC_IMPL(__imp__sub_83012730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,12060
	ctx.r3.s64 = ctx.r31.s64 + 12060;
	// addi r4,r10,10568
	ctx.r4.s64 = ctx.r10.s64 + 10568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x8301276C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9748
	ctx.r11.s64 = ctx.r11.s64 + 9748;
	// addi r3,r9,-368
	ctx.r3.s64 = ctx.r9.s64 + -368;
	// stw r11,12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12060, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012784;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012798"))) PPC_WEAK_FUNC(sub_83012798);
PPC_FUNC_IMPL(__imp__sub_83012798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,11964
	ctx.r3.s64 = ctx.r31.s64 + 11964;
	// addi r4,r10,10592
	ctx.r4.s64 = ctx.r10.s64 + 10592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x830127D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9756
	ctx.r11.s64 = ctx.r11.s64 + 9756;
	// addi r3,r9,-344
	ctx.r3.s64 = ctx.r9.s64 + -344;
	// stw r11,11964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11964, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830127EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012800"))) PPC_WEAK_FUNC(sub_83012800);
PPC_FUNC_IMPL(__imp__sub_83012800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,11996
	ctx.r3.s64 = ctx.r31.s64 + 11996;
	// addi r4,r10,10620
	ctx.r4.s64 = ctx.r10.s64 + 10620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x8301283C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9764
	ctx.r11.s64 = ctx.r11.s64 + 9764;
	// addi r3,r9,-320
	ctx.r3.s64 = ctx.r9.s64 + -320;
	// stw r11,11996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11996, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012854;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012868"))) PPC_WEAK_FUNC(sub_83012868);
PPC_FUNC_IMPL(__imp__sub_83012868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,12156
	ctx.r3.s64 = ctx.r31.s64 + 12156;
	// addi r4,r10,10648
	ctx.r4.s64 = ctx.r10.s64 + 10648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x830128A4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9772
	ctx.r11.s64 = ctx.r11.s64 + 9772;
	// addi r3,r9,-296
	ctx.r3.s64 = ctx.r9.s64 + -296;
	// stw r11,12156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12156, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830128BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830128D0"))) PPC_WEAK_FUNC(sub_830128D0);
PPC_FUNC_IMPL(__imp__sub_830128D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12092
	ctx.r5.s64 = ctx.r11.s64 + 12092;
	// addi r3,r31,12028
	ctx.r3.s64 = ctx.r31.s64 + 12028;
	// addi r4,r10,10676
	ctx.r4.s64 = ctx.r10.s64 + 10676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8301290C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// addi r3,r9,-272
	ctx.r3.s64 = ctx.r9.s64 + -272;
	// stw r11,12028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12028, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012924;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012938"))) PPC_WEAK_FUNC(sub_83012938);
PPC_FUNC_IMPL(__imp__sub_83012938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11868
	ctx.r5.s64 = ctx.r11.s64 + 11868;
	// addi r3,r31,12188
	ctx.r3.s64 = ctx.r31.s64 + 12188;
	// addi r4,r10,10996
	ctx.r4.s64 = ctx.r10.s64 + 10996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1184
	ctx.r6.s64 = 1184;
	// bl 0x82b38290
	ctx.lr = 0x83012974;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,10700
	ctx.r11.s64 = ctx.r11.s64 + 10700;
	// addi r3,r9,-248
	ctx.r3.s64 = ctx.r9.s64 + -248;
	// stw r11,12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12188, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301298C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830129A0"))) PPC_WEAK_FUNC(sub_830129A0);
PPC_FUNC_IMPL(__imp__sub_830129A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12188
	ctx.r5.s64 = ctx.r11.s64 + 12188;
	// addi r3,r31,12220
	ctx.r3.s64 = ctx.r31.s64 + 12220;
	// addi r4,r10,12120
	ctx.r4.s64 = ctx.r10.s64 + 12120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1424
	ctx.r6.s64 = 1424;
	// bl 0x82b38290
	ctx.lr = 0x830129DC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11016
	ctx.r11.s64 = ctx.r11.s64 + 11016;
	// addi r3,r9,-224
	ctx.r3.s64 = ctx.r9.s64 + -224;
	// stw r11,12220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12220, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830129F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012A08"))) PPC_WEAK_FUNC(sub_83012A08);
PPC_FUNC_IMPL(__imp__sub_83012A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,11244
	ctx.r5.s64 = ctx.r11.s64 + 11244;
	// addi r3,r31,12252
	ctx.r3.s64 = ctx.r31.s64 + 12252;
	// addi r4,r10,12140
	ctx.r4.s64 = ctx.r10.s64 + 12140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82b38290
	ctx.lr = 0x83012A44;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r3,r9,-200
	ctx.r3.s64 = ctx.r9.s64 + -200;
	// stw r11,12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12252, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012A5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012A70"))) PPC_WEAK_FUNC(sub_83012A70);
PPC_FUNC_IMPL(__imp__sub_83012A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12188
	ctx.r5.s64 = ctx.r11.s64 + 12188;
	// addi r3,r31,12284
	ctx.r3.s64 = ctx.r31.s64 + 12284;
	// addi r4,r10,12468
	ctx.r4.s64 = ctx.r10.s64 + 12468;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1232
	ctx.r6.s64 = 1232;
	// bl 0x82b38290
	ctx.lr = 0x83012AAC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12172
	ctx.r11.s64 = ctx.r11.s64 + 12172;
	// addi r3,r9,-176
	ctx.r3.s64 = ctx.r9.s64 + -176;
	// stw r11,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012AC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012AD8"))) PPC_WEAK_FUNC(sub_83012AD8);
PPC_FUNC_IMPL(__imp__sub_83012AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12188
	ctx.r5.s64 = ctx.r11.s64 + 12188;
	// addi r3,r31,12316
	ctx.r3.s64 = ctx.r31.s64 + 12316;
	// addi r4,r10,12740
	ctx.r4.s64 = ctx.r10.s64 + 12740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1664
	ctx.r6.s64 = 1664;
	// bl 0x82b38290
	ctx.lr = 0x83012B14;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12492
	ctx.r11.s64 = ctx.r11.s64 + 12492;
	// addi r3,r9,-152
	ctx.r3.s64 = ctx.r9.s64 + -152;
	// stw r11,12316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12316, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012B2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012B40"))) PPC_WEAK_FUNC(sub_83012B40);
PPC_FUNC_IMPL(__imp__sub_83012B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12380
	ctx.r5.s64 = ctx.r11.s64 + 12380;
	// addi r3,r31,12348
	ctx.r3.s64 = ctx.r31.s64 + 12348;
	// addi r4,r10,12864
	ctx.r4.s64 = ctx.r10.s64 + 12864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83012B7C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12760
	ctx.r11.s64 = ctx.r11.s64 + 12760;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// stw r11,12348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12348, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012B94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012BA8"))) PPC_WEAK_FUNC(sub_83012BA8);
PPC_FUNC_IMPL(__imp__sub_83012BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,12380
	ctx.r3.s64 = ctx.r31.s64 + 12380;
	// addi r4,r10,12980
	ctx.r4.s64 = ctx.r10.s64 + 12980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83012BE4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12876
	ctx.r11.s64 = ctx.r11.s64 + 12876;
	// addi r3,r9,-104
	ctx.r3.s64 = ctx.r9.s64 + -104;
	// stw r11,12380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12380, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012BFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012C10"))) PPC_WEAK_FUNC(sub_83012C10);
PPC_FUNC_IMPL(__imp__sub_83012C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12412
	ctx.r3.s64 = ctx.r31.s64 + 12412;
	// addi r4,r10,14948
	ctx.r4.s64 = ctx.r10.s64 + 14948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1168
	ctx.r6.s64 = 1168;
	// bl 0x82b38290
	ctx.lr = 0x83012C4C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13688
	ctx.r11.s64 = ctx.r11.s64 + 13688;
	// addi r3,r9,-80
	ctx.r3.s64 = ctx.r9.s64 + -80;
	// stw r11,12412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12412, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012C64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012C78"))) PPC_WEAK_FUNC(sub_83012C78);
PPC_FUNC_IMPL(__imp__sub_83012C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,12476
	ctx.r3.s64 = ctx.r31.s64 + 12476;
	// addi r4,r10,16936
	ctx.r4.s64 = ctx.r10.s64 + 16936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3456
	ctx.r6.s64 = 3456;
	// bl 0x82b38290
	ctx.lr = 0x83012CB4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// addi r3,r9,-56
	ctx.r3.s64 = ctx.r9.s64 + -56;
	// stw r11,12476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12476, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012CCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012CE0"))) PPC_WEAK_FUNC(sub_83012CE0);
PPC_FUNC_IMPL(__imp__sub_83012CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12380
	ctx.r5.s64 = ctx.r11.s64 + 12380;
	// addi r3,r31,12508
	ctx.r3.s64 = ctx.r31.s64 + 12508;
	// addi r4,r10,16948
	ctx.r4.s64 = ctx.r10.s64 + 16948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83012D1C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16032
	ctx.r11.s64 = ctx.r11.s64 + 16032;
	// addi r3,r9,-32
	ctx.r3.s64 = ctx.r9.s64 + -32;
	// stw r11,12508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12508, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012D34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012D48"))) PPC_WEAK_FUNC(sub_83012D48);
PPC_FUNC_IMPL(__imp__sub_83012D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12476
	ctx.r5.s64 = ctx.r11.s64 + 12476;
	// addi r3,r31,12444
	ctx.r3.s64 = ctx.r31.s64 + 12444;
	// addi r4,r10,16964
	ctx.r4.s64 = ctx.r10.s64 + 16964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3504
	ctx.r6.s64 = 3504;
	// bl 0x82b38290
	ctx.lr = 0x83012D84;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16332
	ctx.r11.s64 = ctx.r11.s64 + 16332;
	// addi r3,r9,-8
	ctx.r3.s64 = ctx.r9.s64 + -8;
	// stw r11,12444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12444, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012D9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012DB0"))) PPC_WEAK_FUNC(sub_83012DB0);
PPC_FUNC_IMPL(__imp__sub_83012DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12476
	ctx.r5.s64 = ctx.r11.s64 + 12476;
	// addi r3,r31,12540
	ctx.r3.s64 = ctx.r31.s64 + 12540;
	// addi r4,r10,16980
	ctx.r4.s64 = ctx.r10.s64 + 16980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3472
	ctx.r6.s64 = 3472;
	// bl 0x82b38290
	ctx.lr = 0x83012DEC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16188
	ctx.r11.s64 = ctx.r11.s64 + 16188;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r11,12540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12540, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012E04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012E18"))) PPC_WEAK_FUNC(sub_83012E18);
PPC_FUNC_IMPL(__imp__sub_83012E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,12572
	ctx.r3.s64 = ctx.r31.s64 + 12572;
	// addi r4,r10,16996
	ctx.r4.s64 = ctx.r10.s64 + 16996;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82b38290
	ctx.lr = 0x83012E54;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16180
	ctx.r11.s64 = ctx.r11.s64 + 16180;
	// addi r3,r9,40
	ctx.r3.s64 = ctx.r9.s64 + 40;
	// stw r11,12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12572, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012E6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012E80"))) PPC_WEAK_FUNC(sub_83012E80);
PPC_FUNC_IMPL(__imp__sub_83012E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,12604
	ctx.r3.s64 = ctx.r31.s64 + 12604;
	// addi r4,r10,18164
	ctx.r4.s64 = ctx.r10.s64 + 18164;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1240
	ctx.r6.s64 = 1240;
	// bl 0x82b38290
	ctx.lr = 0x83012EBC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17712
	ctx.r11.s64 = ctx.r11.s64 + 17712;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// stw r11,12604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12604, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012ED4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012EE8"))) PPC_WEAK_FUNC(sub_83012EE8);
PPC_FUNC_IMPL(__imp__sub_83012EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,12636
	ctx.r3.s64 = ctx.r31.s64 + 12636;
	// addi r4,r10,19352
	ctx.r4.s64 = ctx.r10.s64 + 19352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,960
	ctx.r6.s64 = 960;
	// bl 0x82b38290
	ctx.lr = 0x83012F24;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,18864
	ctx.r11.s64 = ctx.r11.s64 + 18864;
	// addi r3,r9,88
	ctx.r3.s64 = ctx.r9.s64 + 88;
	// stw r11,12636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12636, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012F3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012F50"))) PPC_WEAK_FUNC(sub_83012F50);
PPC_FUNC_IMPL(__imp__sub_83012F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,12668
	ctx.r3.s64 = ctx.r31.s64 + 12668;
	// addi r4,r10,20492
	ctx.r4.s64 = ctx.r10.s64 + 20492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,304
	ctx.r6.s64 = 304;
	// bl 0x82b38290
	ctx.lr = 0x83012F8C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,19988
	ctx.r11.s64 = ctx.r11.s64 + 19988;
	// addi r3,r9,112
	ctx.r3.s64 = ctx.r9.s64 + 112;
	// stw r11,12668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12668, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83012FA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83012FB8"))) PPC_WEAK_FUNC(sub_83012FB8);
PPC_FUNC_IMPL(__imp__sub_83012FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12712
	ctx.r3.s64 = ctx.r31.s64 + 12712;
	// addi r4,r10,20736
	ctx.r4.s64 = ctx.r10.s64 + 20736;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x83012FF4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,20556
	ctx.r11.s64 = ctx.r11.s64 + 20556;
	// addi r3,r9,136
	ctx.r3.s64 = ctx.r9.s64 + 136;
	// stw r11,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301300C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013020"))) PPC_WEAK_FUNC(sub_83013020);
PPC_FUNC_IMPL(__imp__sub_83013020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,12744
	ctx.r3.s64 = ctx.r31.s64 + 12744;
	// addi r4,r10,21436
	ctx.r4.s64 = ctx.r10.s64 + 21436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3648
	ctx.r6.s64 = 3648;
	// bl 0x82b38290
	ctx.lr = 0x8301305C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21172
	ctx.r11.s64 = ctx.r11.s64 + 21172;
	// addi r3,r9,160
	ctx.r3.s64 = ctx.r9.s64 + 160;
	// stw r11,12744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013074;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013088"))) PPC_WEAK_FUNC(sub_83013088);
PPC_FUNC_IMPL(__imp__sub_83013088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,12776
	ctx.r3.s64 = ctx.r31.s64 + 12776;
	// addi r4,r10,21528
	ctx.r4.s64 = ctx.r10.s64 + 21528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x830130C4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21452
	ctx.r11.s64 = ctx.r11.s64 + 21452;
	// addi r3,r9,184
	ctx.r3.s64 = ctx.r9.s64 + 184;
	// stw r11,12776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830130DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830130F0"))) PPC_WEAK_FUNC(sub_830130F0);
PPC_FUNC_IMPL(__imp__sub_830130F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12808
	ctx.r3.s64 = ctx.r31.s64 + 12808;
	// addi r4,r10,21692
	ctx.r4.s64 = ctx.r10.s64 + 21692;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x8301312C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21548
	ctx.r11.s64 = ctx.r11.s64 + 21548;
	// addi r3,r9,208
	ctx.r3.s64 = ctx.r9.s64 + 208;
	// stw r11,12808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013144;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013158"))) PPC_WEAK_FUNC(sub_83013158);
PPC_FUNC_IMPL(__imp__sub_83013158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,12840
	ctx.r3.s64 = ctx.r31.s64 + 12840;
	// addi r4,r10,21964
	ctx.r4.s64 = ctx.r10.s64 + 21964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83013194;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21720
	ctx.r11.s64 = ctx.r11.s64 + 21720;
	// addi r3,r9,232
	ctx.r3.s64 = ctx.r9.s64 + 232;
	// stw r11,12840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830131AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830131C0"))) PPC_WEAK_FUNC(sub_830131C0);
PPC_FUNC_IMPL(__imp__sub_830131C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12872
	ctx.r3.s64 = ctx.r31.s64 + 12872;
	// addi r4,r10,22176
	ctx.r4.s64 = ctx.r10.s64 + 22176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x830131FC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,21980
	ctx.r11.s64 = ctx.r11.s64 + 21980;
	// addi r3,r9,256
	ctx.r3.s64 = ctx.r9.s64 + 256;
	// stw r11,12872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013214;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013228"))) PPC_WEAK_FUNC(sub_83013228);
PPC_FUNC_IMPL(__imp__sub_83013228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12904
	ctx.r3.s64 = ctx.r31.s64 + 12904;
	// addi r4,r10,24312
	ctx.r4.s64 = ctx.r10.s64 + 24312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x83013264;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,23764
	ctx.r11.s64 = ctx.r11.s64 + 23764;
	// addi r3,r9,280
	ctx.r3.s64 = ctx.r9.s64 + 280;
	// stw r11,12904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301327C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013290"))) PPC_WEAK_FUNC(sub_83013290);
PPC_FUNC_IMPL(__imp__sub_83013290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12936
	ctx.r3.s64 = ctx.r31.s64 + 12936;
	// addi r4,r10,24676
	ctx.r4.s64 = ctx.r10.s64 + 24676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,168
	ctx.r6.s64 = 168;
	// bl 0x82b38290
	ctx.lr = 0x830132CC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24332
	ctx.r11.s64 = ctx.r11.s64 + 24332;
	// addi r3,r9,304
	ctx.r3.s64 = ctx.r9.s64 + 304;
	// stw r11,12936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830132E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830132F8"))) PPC_WEAK_FUNC(sub_830132F8);
PPC_FUNC_IMPL(__imp__sub_830132F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,12968
	ctx.r3.s64 = ctx.r31.s64 + 12968;
	// addi r4,r10,24896
	ctx.r4.s64 = ctx.r10.s64 + 24896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x83013334;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24700
	ctx.r11.s64 = ctx.r11.s64 + 24700;
	// addi r3,r9,328
	ctx.r3.s64 = ctx.r9.s64 + 328;
	// stw r11,12968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301334C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013360"))) PPC_WEAK_FUNC(sub_83013360);
PPC_FUNC_IMPL(__imp__sub_83013360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,13000
	ctx.r3.s64 = ctx.r31.s64 + 13000;
	// addi r4,r10,25424
	ctx.r4.s64 = ctx.r10.s64 + 25424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3472
	ctx.r6.s64 = 3472;
	// bl 0x82b38290
	ctx.lr = 0x8301339C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24920
	ctx.r11.s64 = ctx.r11.s64 + 24920;
	// addi r3,r9,352
	ctx.r3.s64 = ctx.r9.s64 + 352;
	// stw r11,13000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830133B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830133C8"))) PPC_WEAK_FUNC(sub_830133C8);
PPC_FUNC_IMPL(__imp__sub_830133C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,13064
	ctx.r3.s64 = ctx.r31.s64 + 13064;
	// addi r4,r10,25436
	ctx.r4.s64 = ctx.r10.s64 + 25436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3456
	ctx.r6.s64 = 3456;
	// bl 0x82b38290
	ctx.lr = 0x83013404;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24928
	ctx.r11.s64 = ctx.r11.s64 + 24928;
	// addi r3,r9,376
	ctx.r3.s64 = ctx.r9.s64 + 376;
	// stw r11,13064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301341C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013430"))) PPC_WEAK_FUNC(sub_83013430);
PPC_FUNC_IMPL(__imp__sub_83013430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,13032
	ctx.r3.s64 = ctx.r31.s64 + 13032;
	// addi r4,r10,25456
	ctx.r4.s64 = ctx.r10.s64 + 25456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3472
	ctx.r6.s64 = 3472;
	// bl 0x82b38290
	ctx.lr = 0x8301346C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,24936
	ctx.r11.s64 = ctx.r11.s64 + 24936;
	// addi r3,r9,400
	ctx.r3.s64 = ctx.r9.s64 + 400;
	// stw r11,13032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013484;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013498"))) PPC_WEAK_FUNC(sub_83013498);
PPC_FUNC_IMPL(__imp__sub_83013498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,13096
	ctx.r3.s64 = ctx.r31.s64 + 13096;
	// addi r4,r10,25572
	ctx.r4.s64 = ctx.r10.s64 + 25572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x830134D4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25468
	ctx.r11.s64 = ctx.r11.s64 + 25468;
	// addi r3,r9,424
	ctx.r3.s64 = ctx.r9.s64 + 424;
	// stw r11,13096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830134EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013500"))) PPC_WEAK_FUNC(sub_83013500);
PPC_FUNC_IMPL(__imp__sub_83013500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,13128
	ctx.r3.s64 = ctx.r31.s64 + 13128;
	// addi r4,r10,25680
	ctx.r4.s64 = ctx.r10.s64 + 25680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x8301353C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,25584
	ctx.r11.s64 = ctx.r11.s64 + 25584;
	// addi r3,r9,448
	ctx.r3.s64 = ctx.r9.s64 + 448;
	// stw r11,13128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013554;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013568"))) PPC_WEAK_FUNC(sub_83013568);
PPC_FUNC_IMPL(__imp__sub_83013568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13160
	ctx.r3.s64 = ctx.r31.s64 + 13160;
	// addi r4,r10,27240
	ctx.r4.s64 = ctx.r10.s64 + 27240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x830135A4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,26944
	ctx.r11.s64 = ctx.r11.s64 + 26944;
	// addi r3,r9,472
	ctx.r3.s64 = ctx.r9.s64 + 472;
	// stw r11,13160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830135BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830135D0"))) PPC_WEAK_FUNC(sub_830135D0);
PPC_FUNC_IMPL(__imp__sub_830135D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13192
	ctx.r3.s64 = ctx.r31.s64 + 13192;
	// addi r4,r10,27644
	ctx.r4.s64 = ctx.r10.s64 + 27644;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3648
	ctx.r6.s64 = 3648;
	// bl 0x82b38290
	ctx.lr = 0x8301360C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,27272
	ctx.r11.s64 = ctx.r11.s64 + 27272;
	// addi r3,r9,496
	ctx.r3.s64 = ctx.r9.s64 + 496;
	// stw r11,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013624;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013638"))) PPC_WEAK_FUNC(sub_83013638);
PPC_FUNC_IMPL(__imp__sub_83013638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13224
	ctx.r3.s64 = ctx.r31.s64 + 13224;
	// addi r4,r10,28492
	ctx.r4.s64 = ctx.r10.s64 + 28492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5680
	ctx.r6.s64 = 5680;
	// bl 0x82b38290
	ctx.lr = 0x83013674;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28084
	ctx.r11.s64 = ctx.r11.s64 + 28084;
	// addi r3,r9,520
	ctx.r3.s64 = ctx.r9.s64 + 520;
	// stw r11,13224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301368C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830136A0"))) PPC_WEAK_FUNC(sub_830136A0);
PPC_FUNC_IMPL(__imp__sub_830136A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,13256
	ctx.r3.s64 = ctx.r31.s64 + 13256;
	// addi r4,r10,29176
	ctx.r4.s64 = ctx.r10.s64 + 29176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x830136DC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28828
	ctx.r11.s64 = ctx.r11.s64 + 28828;
	// addi r3,r9,544
	ctx.r3.s64 = ctx.r9.s64 + 544;
	// stw r11,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830136F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013708"))) PPC_WEAK_FUNC(sub_83013708);
PPC_FUNC_IMPL(__imp__sub_83013708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,15224
	ctx.r5.s64 = ctx.r11.s64 + 15224;
	// addi r3,r31,13288
	ctx.r3.s64 = ctx.r31.s64 + 13288;
	// addi r4,r10,29188
	ctx.r4.s64 = ctx.r10.s64 + 29188;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,512
	ctx.r6.s64 = 512;
	// bl 0x82b38290
	ctx.lr = 0x83013744;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,28836
	ctx.r11.s64 = ctx.r11.s64 + 28836;
	// addi r3,r9,568
	ctx.r3.s64 = ctx.r9.s64 + 568;
	// stw r11,13288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301375C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013770"))) PPC_WEAK_FUNC(sub_83013770);
PPC_FUNC_IMPL(__imp__sub_83013770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,13352
	ctx.r3.s64 = ctx.r31.s64 + 13352;
	// addi r4,r10,29412
	ctx.r4.s64 = ctx.r10.s64 + 29412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,88
	ctx.r6.s64 = 88;
	// bl 0x82b38290
	ctx.lr = 0x830137AC;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29204
	ctx.r11.s64 = ctx.r11.s64 + 29204;
	// addi r3,r9,592
	ctx.r3.s64 = ctx.r9.s64 + 592;
	// stw r11,13352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830137C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830137D8"))) PPC_WEAK_FUNC(sub_830137D8);
PPC_FUNC_IMPL(__imp__sub_830137D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13320
	ctx.r3.s64 = ctx.r31.s64 + 13320;
	// addi r4,r10,29432
	ctx.r4.s64 = ctx.r10.s64 + 29432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// bl 0x82b38290
	ctx.lr = 0x83013814;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29212
	ctx.r11.s64 = ctx.r11.s64 + 29212;
	// addi r3,r9,616
	ctx.r3.s64 = ctx.r9.s64 + 616;
	// stw r11,13320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301382C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013840"))) PPC_WEAK_FUNC(sub_83013840);
PPC_FUNC_IMPL(__imp__sub_83013840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,13384
	ctx.r3.s64 = ctx.r31.s64 + 13384;
	// addi r4,r10,29820
	ctx.r4.s64 = ctx.r10.s64 + 29820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x8301387C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// addi r3,r9,640
	ctx.r3.s64 = ctx.r9.s64 + 640;
	// stw r11,13384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013894;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830138A8"))) PPC_WEAK_FUNC(sub_830138A8);
PPC_FUNC_IMPL(__imp__sub_830138A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13416
	ctx.r3.s64 = ctx.r31.s64 + 13416;
	// addi r4,r10,30640
	ctx.r4.s64 = ctx.r10.s64 + 30640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1248
	ctx.r6.s64 = 1248;
	// bl 0x82b38290
	ctx.lr = 0x830138E4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,29912
	ctx.r11.s64 = ctx.r11.s64 + 29912;
	// addi r3,r9,664
	ctx.r3.s64 = ctx.r9.s64 + 664;
	// stw r11,13416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830138FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013910"))) PPC_WEAK_FUNC(sub_83013910);
PPC_FUNC_IMPL(__imp__sub_83013910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13448
	ctx.r3.s64 = ctx.r31.s64 + 13448;
	// addi r4,r10,31520
	ctx.r4.s64 = ctx.r10.s64 + 31520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1264
	ctx.r6.s64 = 1264;
	// bl 0x82b38290
	ctx.lr = 0x8301394C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,30688
	ctx.r11.s64 = ctx.r11.s64 + 30688;
	// addi r3,r9,688
	ctx.r3.s64 = ctx.r9.s64 + 688;
	// stw r11,13448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013964;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013978"))) PPC_WEAK_FUNC(sub_83013978);
PPC_FUNC_IMPL(__imp__sub_83013978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13480
	ctx.r3.s64 = ctx.r31.s64 + 13480;
	// addi r4,r10,31676
	ctx.r4.s64 = ctx.r10.s64 + 31676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1248
	ctx.r6.s64 = 1248;
	// bl 0x82b38290
	ctx.lr = 0x830139B4;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31548
	ctx.r11.s64 = ctx.r11.s64 + 31548;
	// addi r3,r9,712
	ctx.r3.s64 = ctx.r9.s64 + 712;
	// stw r11,13480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830139CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830139E0"))) PPC_WEAK_FUNC(sub_830139E0);
PPC_FUNC_IMPL(__imp__sub_830139E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13512
	ctx.r3.s64 = ctx.r31.s64 + 13512;
	// addi r4,r10,-32396
	ctx.r4.s64 = ctx.r10.s64 + -32396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1552
	ctx.r6.s64 = 1552;
	// bl 0x82b38290
	ctx.lr = 0x83013A1C;
	sub_82B38290(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,31700
	ctx.r11.s64 = ctx.r11.s64 + 31700;
	// addi r3,r9,736
	ctx.r3.s64 = ctx.r9.s64 + 736;
	// stw r11,13512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013A34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013A48"))) PPC_WEAK_FUNC(sub_83013A48);
PPC_FUNC_IMPL(__imp__sub_83013A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13544
	ctx.r3.s64 = ctx.r31.s64 + 13544;
	// addi r4,r10,-31924
	ctx.r4.s64 = ctx.r10.s64 + -31924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1504
	ctx.r6.s64 = 1504;
	// bl 0x82b38290
	ctx.lr = 0x83013A84;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-32292
	ctx.r11.s64 = ctx.r11.s64 + -32292;
	// addi r3,r9,760
	ctx.r3.s64 = ctx.r9.s64 + 760;
	// stw r11,13544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013A9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013AB0"))) PPC_WEAK_FUNC(sub_83013AB0);
PPC_FUNC_IMPL(__imp__sub_83013AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13576
	ctx.r3.s64 = ctx.r31.s64 + 13576;
	// addi r4,r10,-31412
	ctx.r4.s64 = ctx.r10.s64 + -31412;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1456
	ctx.r6.s64 = 1456;
	// bl 0x82b38290
	ctx.lr = 0x83013AEC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31808
	ctx.r11.s64 = ctx.r11.s64 + -31808;
	// addi r3,r9,784
	ctx.r3.s64 = ctx.r9.s64 + 784;
	// stw r11,13576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013B04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013B18"))) PPC_WEAK_FUNC(sub_83013B18);
PPC_FUNC_IMPL(__imp__sub_83013B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,13416
	ctx.r5.s64 = ctx.r11.s64 + 13416;
	// addi r3,r31,13608
	ctx.r3.s64 = ctx.r31.s64 + 13608;
	// addi r4,r10,-31184
	ctx.r4.s64 = ctx.r10.s64 + -31184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1280
	ctx.r6.s64 = 1280;
	// bl 0x82b38290
	ctx.lr = 0x83013B54;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31360
	ctx.r11.s64 = ctx.r11.s64 + -31360;
	// addi r3,r9,808
	ctx.r3.s64 = ctx.r9.s64 + 808;
	// stw r11,13608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013B6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013B80"))) PPC_WEAK_FUNC(sub_83013B80);
PPC_FUNC_IMPL(__imp__sub_83013B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13640
	ctx.r3.s64 = ctx.r31.s64 + 13640;
	// addi r4,r10,-30676
	ctx.r4.s64 = ctx.r10.s64 + -30676;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x83013BBC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-31144
	ctx.r11.s64 = ctx.r11.s64 + -31144;
	// addi r3,r9,832
	ctx.r3.s64 = ctx.r9.s64 + 832;
	// stw r11,13640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013BD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013BE8"))) PPC_WEAK_FUNC(sub_83013BE8);
PPC_FUNC_IMPL(__imp__sub_83013BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13672
	ctx.r3.s64 = ctx.r31.s64 + 13672;
	// addi r4,r10,-30348
	ctx.r4.s64 = ctx.r10.s64 + -30348;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,856
	ctx.r6.s64 = 856;
	// bl 0x82b38290
	ctx.lr = 0x83013C24;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30664
	ctx.r11.s64 = ctx.r11.s64 + -30664;
	// addi r3,r9,856
	ctx.r3.s64 = ctx.r9.s64 + 856;
	// stw r11,13672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013C3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013C50"))) PPC_WEAK_FUNC(sub_83013C50);
PPC_FUNC_IMPL(__imp__sub_83013C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13736
	ctx.r3.s64 = ctx.r31.s64 + 13736;
	// addi r4,r10,-30000
	ctx.r4.s64 = ctx.r10.s64 + -30000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,192
	ctx.r6.s64 = 192;
	// bl 0x82b38290
	ctx.lr = 0x83013C8C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30248
	ctx.r11.s64 = ctx.r11.s64 + -30248;
	// addi r3,r9,880
	ctx.r3.s64 = ctx.r9.s64 + 880;
	// stw r11,13736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013CA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013CB8"))) PPC_WEAK_FUNC(sub_83013CB8);
PPC_FUNC_IMPL(__imp__sub_83013CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,13704
	ctx.r3.s64 = ctx.r31.s64 + 13704;
	// addi r4,r10,-29984
	ctx.r4.s64 = ctx.r10.s64 + -29984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
	// bl 0x82b38290
	ctx.lr = 0x83013CF4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-30240
	ctx.r11.s64 = ctx.r11.s64 + -30240;
	// addi r3,r9,904
	ctx.r3.s64 = ctx.r9.s64 + 904;
	// stw r11,13704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013D0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013D20"))) PPC_WEAK_FUNC(sub_83013D20);
PPC_FUNC_IMPL(__imp__sub_83013D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13768
	ctx.r3.s64 = ctx.r31.s64 + 13768;
	// addi r4,r10,-29672
	ctx.r4.s64 = ctx.r10.s64 + -29672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,360
	ctx.r6.s64 = 360;
	// bl 0x82b38290
	ctx.lr = 0x83013D5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29960
	ctx.r11.s64 = ctx.r11.s64 + -29960;
	// addi r3,r9,928
	ctx.r3.s64 = ctx.r9.s64 + 928;
	// stw r11,13768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013D74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013D88"))) PPC_WEAK_FUNC(sub_83013D88);
PPC_FUNC_IMPL(__imp__sub_83013D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,12572
	ctx.r5.s64 = ctx.r11.s64 + 12572;
	// addi r3,r31,13800
	ctx.r3.s64 = ctx.r31.s64 + 13800;
	// addi r4,r10,-29404
	ctx.r4.s64 = ctx.r10.s64 + -29404;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,288
	ctx.r6.s64 = 288;
	// bl 0x82b38290
	ctx.lr = 0x83013DC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29584
	ctx.r11.s64 = ctx.r11.s64 + -29584;
	// addi r3,r9,952
	ctx.r3.s64 = ctx.r9.s64 + 952;
	// stw r11,13800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013DDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013DF0"))) PPC_WEAK_FUNC(sub_83013DF0);
PPC_FUNC_IMPL(__imp__sub_83013DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13832
	ctx.r3.s64 = ctx.r31.s64 + 13832;
	// addi r4,r10,-29228
	ctx.r4.s64 = ctx.r10.s64 + -29228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,176
	ctx.r6.s64 = 176;
	// bl 0x82b38290
	ctx.lr = 0x83013E2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29388
	ctx.r11.s64 = ctx.r11.s64 + -29388;
	// addi r3,r9,976
	ctx.r3.s64 = ctx.r9.s64 + 976;
	// stw r11,13832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013E44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013E58"))) PPC_WEAK_FUNC(sub_83013E58);
PPC_FUNC_IMPL(__imp__sub_83013E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,13864
	ctx.r3.s64 = ctx.r31.s64 + 13864;
	// addi r4,r10,-28976
	ctx.r4.s64 = ctx.r10.s64 + -28976;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x83013E94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-29048
	ctx.r11.s64 = ctx.r11.s64 + -29048;
	// addi r3,r9,1000
	ctx.r3.s64 = ctx.r9.s64 + 1000;
	// stw r11,13864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013EAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013EC0"))) PPC_WEAK_FUNC(sub_83013EC0);
PPC_FUNC_IMPL(__imp__sub_83013EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13896
	ctx.r3.s64 = ctx.r31.s64 + 13896;
	// addi r4,r10,-28800
	ctx.r4.s64 = ctx.r10.s64 + -28800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82b38290
	ctx.lr = 0x83013EFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28960
	ctx.r11.s64 = ctx.r11.s64 + -28960;
	// addi r3,r9,1024
	ctx.r3.s64 = ctx.r9.s64 + 1024;
	// stw r11,13896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013F14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013F28"))) PPC_WEAK_FUNC(sub_83013F28);
PPC_FUNC_IMPL(__imp__sub_83013F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,13928
	ctx.r3.s64 = ctx.r31.s64 + 13928;
	// addi r4,r10,-28100
	ctx.r4.s64 = ctx.r10.s64 + -28100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5624
	ctx.r6.s64 = 5624;
	// bl 0x82b38290
	ctx.lr = 0x83013F64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28520
	ctx.r11.s64 = ctx.r11.s64 + -28520;
	// addi r3,r9,1048
	ctx.r3.s64 = ctx.r9.s64 + 1048;
	// stw r11,13928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013F7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013F90"))) PPC_WEAK_FUNC(sub_83013F90);
PPC_FUNC_IMPL(__imp__sub_83013F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,13960
	ctx.r3.s64 = ctx.r31.s64 + 13960;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83013FCC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28084
	ctx.r11.s64 = ctx.r11.s64 + -28084;
	// addi r3,r9,1072
	ctx.r3.s64 = ctx.r9.s64 + 1072;
	// stw r11,13960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83013FE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83013FF8"))) PPC_WEAK_FUNC(sub_83013FF8);
PPC_FUNC_IMPL(__imp__sub_83013FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,13992
	ctx.r3.s64 = ctx.r31.s64 + 13992;
	// addi r4,r10,-27924
	ctx.r4.s64 = ctx.r10.s64 + -27924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83014034;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-28008
	ctx.r11.s64 = ctx.r11.s64 + -28008;
	// addi r3,r9,1096
	ctx.r3.s64 = ctx.r9.s64 + 1096;
	// stw r11,13992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301404C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014060"))) PPC_WEAK_FUNC(sub_83014060);
PPC_FUNC_IMPL(__imp__sub_83014060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,14024
	ctx.r3.s64 = ctx.r31.s64 + 14024;
	// addi r4,r10,-27840
	ctx.r4.s64 = ctx.r10.s64 + -27840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x8301409C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-27912
	ctx.r11.s64 = ctx.r11.s64 + -27912;
	// addi r3,r9,1120
	ctx.r3.s64 = ctx.r9.s64 + 1120;
	// stw r11,14024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830140B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830140C8"))) PPC_WEAK_FUNC(sub_830140C8);
PPC_FUNC_IMPL(__imp__sub_830140C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,14296
	ctx.r3.s64 = ctx.r31.s64 + 14296;
	// addi r4,r10,-25908
	ctx.r4.s64 = ctx.r10.s64 + -25908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1448
	ctx.r6.s64 = 1448;
	// bl 0x82b38290
	ctx.lr = 0x83014104;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26456
	ctx.r11.s64 = ctx.r11.s64 + -26456;
	// addi r3,r9,1144
	ctx.r3.s64 = ctx.r9.s64 + 1144;
	// stw r11,14296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301411C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014130"))) PPC_WEAK_FUNC(sub_83014130);
PPC_FUNC_IMPL(__imp__sub_83014130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,14264
	ctx.r3.s64 = ctx.r31.s64 + 14264;
	// addi r4,r10,-25892
	ctx.r4.s64 = ctx.r10.s64 + -25892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// bl 0x82b38290
	ctx.lr = 0x8301416C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-26448
	ctx.r11.s64 = ctx.r11.s64 + -26448;
	// addi r3,r9,1168
	ctx.r3.s64 = ctx.r9.s64 + 1168;
	// stw r11,14264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014184;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014198"))) PPC_WEAK_FUNC(sub_83014198);
PPC_FUNC_IMPL(__imp__sub_83014198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14328
	ctx.r3.s64 = ctx.r31.s64 + 14328;
	// addi r4,r10,-25500
	ctx.r4.s64 = ctx.r10.s64 + -25500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,152
	ctx.r6.s64 = 152;
	// bl 0x82b38290
	ctx.lr = 0x830141D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25860
	ctx.r11.s64 = ctx.r11.s64 + -25860;
	// addi r3,r9,1192
	ctx.r3.s64 = ctx.r9.s64 + 1192;
	// stw r11,14328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830141EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014200"))) PPC_WEAK_FUNC(sub_83014200);
PPC_FUNC_IMPL(__imp__sub_83014200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14360
	ctx.r3.s64 = ctx.r31.s64 + 14360;
	// addi r4,r10,-25016
	ctx.r4.s64 = ctx.r10.s64 + -25016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1136
	ctx.r6.s64 = 1136;
	// bl 0x82b38290
	ctx.lr = 0x8301423C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25492
	ctx.r11.s64 = ctx.r11.s64 + -25492;
	// addi r3,r9,1216
	ctx.r3.s64 = ctx.r9.s64 + 1216;
	// stw r11,14360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014254;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014268"))) PPC_WEAK_FUNC(sub_83014268);
PPC_FUNC_IMPL(__imp__sub_83014268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14392
	ctx.r3.s64 = ctx.r31.s64 + 14392;
	// addi r4,r10,-24672
	ctx.r4.s64 = ctx.r10.s64 + -24672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x830142A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-25000
	ctx.r11.s64 = ctx.r11.s64 + -25000;
	// addi r3,r9,1240
	ctx.r3.s64 = ctx.r9.s64 + 1240;
	// stw r11,14392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830142BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830142D0"))) PPC_WEAK_FUNC(sub_830142D0);
PPC_FUNC_IMPL(__imp__sub_830142D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14424
	ctx.r3.s64 = ctx.r31.s64 + 14424;
	// addi r4,r10,-24424
	ctx.r4.s64 = ctx.r10.s64 + -24424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x82b38290
	ctx.lr = 0x8301430C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24660
	ctx.r11.s64 = ctx.r11.s64 + -24660;
	// addi r3,r9,1264
	ctx.r3.s64 = ctx.r9.s64 + 1264;
	// stw r11,14424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014324;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014338"))) PPC_WEAK_FUNC(sub_83014338);
PPC_FUNC_IMPL(__imp__sub_83014338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14456
	ctx.r3.s64 = ctx.r31.s64 + 14456;
	// addi r4,r10,-23396
	ctx.r4.s64 = ctx.r10.s64 + -23396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x83014374;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-24408
	ctx.r11.s64 = ctx.r11.s64 + -24408;
	// addi r3,r9,1288
	ctx.r3.s64 = ctx.r9.s64 + 1288;
	// stw r11,14456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301438C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830143A0"))) PPC_WEAK_FUNC(sub_830143A0);
PPC_FUNC_IMPL(__imp__sub_830143A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14488
	ctx.r3.s64 = ctx.r31.s64 + 14488;
	// addi r4,r10,-23088
	ctx.r4.s64 = ctx.r10.s64 + -23088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x830143DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23384
	ctx.r11.s64 = ctx.r11.s64 + -23384;
	// addi r3,r9,1312
	ctx.r3.s64 = ctx.r9.s64 + 1312;
	// stw r11,14488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830143F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014408"))) PPC_WEAK_FUNC(sub_83014408);
PPC_FUNC_IMPL(__imp__sub_83014408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,14520
	ctx.r3.s64 = ctx.r31.s64 + 14520;
	// addi r4,r10,-22972
	ctx.r4.s64 = ctx.r10.s64 + -22972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,136
	ctx.r6.s64 = 136;
	// bl 0x82b38290
	ctx.lr = 0x83014444;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-23076
	ctx.r11.s64 = ctx.r11.s64 + -23076;
	// addi r3,r9,1336
	ctx.r3.s64 = ctx.r9.s64 + 1336;
	// stw r11,14520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301445C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014470"))) PPC_WEAK_FUNC(sub_83014470);
PPC_FUNC_IMPL(__imp__sub_83014470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7804
	ctx.r5.s64 = ctx.r11.s64 + -7804;
	// addi r3,r31,14552
	ctx.r3.s64 = ctx.r31.s64 + 14552;
	// addi r4,r10,-22888
	ctx.r4.s64 = ctx.r10.s64 + -22888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,56
	ctx.r6.s64 = 56;
	// bl 0x82b38290
	ctx.lr = 0x830144AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22960
	ctx.r11.s64 = ctx.r11.s64 + -22960;
	// addi r3,r9,1360
	ctx.r3.s64 = ctx.r9.s64 + 1360;
	// stw r11,14552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830144C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830144D8"))) PPC_WEAK_FUNC(sub_830144D8);
PPC_FUNC_IMPL(__imp__sub_830144D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,14584
	ctx.r3.s64 = ctx.r31.s64 + 14584;
	// addi r4,r10,-22656
	ctx.r4.s64 = ctx.r10.s64 + -22656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// bl 0x82b38290
	ctx.lr = 0x83014514;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22872
	ctx.r11.s64 = ctx.r11.s64 + -22872;
	// addi r3,r9,1384
	ctx.r3.s64 = ctx.r9.s64 + 1384;
	// stw r11,14584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301452C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014540"))) PPC_WEAK_FUNC(sub_83014540);
PPC_FUNC_IMPL(__imp__sub_83014540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14616
	ctx.r3.s64 = ctx.r31.s64 + 14616;
	// addi r4,r10,-22240
	ctx.r4.s64 = ctx.r10.s64 + -22240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x8301457C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22380
	ctx.r11.s64 = ctx.r11.s64 + -22380;
	// addi r3,r9,1408
	ctx.r3.s64 = ctx.r9.s64 + 1408;
	// stw r11,14616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014594;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830145A8"))) PPC_WEAK_FUNC(sub_830145A8);
PPC_FUNC_IMPL(__imp__sub_830145A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,14648
	ctx.r3.s64 = ctx.r31.s64 + 14648;
	// addi r4,r10,-22220
	ctx.r4.s64 = ctx.r10.s64 + -22220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x830145E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22228
	ctx.r11.s64 = ctx.r11.s64 + -22228;
	// addi r3,r9,1432
	ctx.r3.s64 = ctx.r9.s64 + 1432;
	// stw r11,14648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830145FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014610"))) PPC_WEAK_FUNC(sub_83014610);
PPC_FUNC_IMPL(__imp__sub_83014610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6416
	ctx.r5.s64 = ctx.r11.s64 + -6416;
	// addi r3,r31,14712
	ctx.r3.s64 = ctx.r31.s64 + 14712;
	// addi r4,r10,-21516
	ctx.r4.s64 = ctx.r10.s64 + -21516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,544
	ctx.r6.s64 = 544;
	// bl 0x82b38290
	ctx.lr = 0x8301464C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22136
	ctx.r11.s64 = ctx.r11.s64 + -22136;
	// addi r3,r9,1456
	ctx.r3.s64 = ctx.r9.s64 + 1456;
	// stw r11,14712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014664;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014678"))) PPC_WEAK_FUNC(sub_83014678);
PPC_FUNC_IMPL(__imp__sub_83014678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14712
	ctx.r5.s64 = ctx.r11.s64 + 14712;
	// addi r3,r31,14680
	ctx.r3.s64 = ctx.r31.s64 + 14680;
	// addi r4,r10,-21500
	ctx.r4.s64 = ctx.r10.s64 + -21500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,560
	ctx.r6.s64 = 560;
	// bl 0x82b38290
	ctx.lr = 0x830146B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
	// addi r3,r9,1480
	ctx.r3.s64 = ctx.r9.s64 + 1480;
	// stw r11,14680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830146CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830146E0"))) PPC_WEAK_FUNC(sub_830146E0);
PPC_FUNC_IMPL(__imp__sub_830146E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,14744
	ctx.r3.s64 = ctx.r31.s64 + 14744;
	// addi r4,r10,-21308
	ctx.r4.s64 = ctx.r10.s64 + -21308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x82b38290
	ctx.lr = 0x8301471C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21484
	ctx.r11.s64 = ctx.r11.s64 + -21484;
	// addi r3,r9,1504
	ctx.r3.s64 = ctx.r9.s64 + 1504;
	// stw r11,14744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014734;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014748"))) PPC_WEAK_FUNC(sub_83014748);
PPC_FUNC_IMPL(__imp__sub_83014748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// addi r3,r31,14776
	ctx.r3.s64 = ctx.r31.s64 + 14776;
	// addi r4,r10,-20808
	ctx.r4.s64 = ctx.r10.s64 + -20808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3536
	ctx.r6.s64 = 3536;
	// bl 0x82b38290
	ctx.lr = 0x83014784;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// addi r3,r9,1528
	ctx.r3.s64 = ctx.r9.s64 + 1528;
	// stw r11,14776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301479C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830147B0"))) PPC_WEAK_FUNC(sub_830147B0);
PPC_FUNC_IMPL(__imp__sub_830147B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,28216
	ctx.r5.s64 = ctx.r11.s64 + 28216;
	// addi r3,r31,14808
	ctx.r3.s64 = ctx.r31.s64 + 14808;
	// addi r4,r10,-20796
	ctx.r4.s64 = ctx.r10.s64 + -20796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x830147EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-21160
	ctx.r11.s64 = ctx.r11.s64 + -21160;
	// addi r3,r9,1552
	ctx.r3.s64 = ctx.r9.s64 + 1552;
	// stw r11,14808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014804;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014818"))) PPC_WEAK_FUNC(sub_83014818);
PPC_FUNC_IMPL(__imp__sub_83014818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-8028
	ctx.r5.s64 = ctx.r11.s64 + -8028;
	// addi r3,r31,14840
	ctx.r3.s64 = ctx.r31.s64 + 14840;
	// addi r4,r10,-20292
	ctx.r4.s64 = ctx.r10.s64 + -20292;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3408
	ctx.r6.s64 = 3408;
	// bl 0x82b38290
	ctx.lr = 0x83014854;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20780
	ctx.r11.s64 = ctx.r11.s64 + -20780;
	// addi r3,r9,1576
	ctx.r3.s64 = ctx.r9.s64 + 1576;
	// stw r11,14840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301486C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014880"))) PPC_WEAK_FUNC(sub_83014880);
PPC_FUNC_IMPL(__imp__sub_83014880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14840
	ctx.r5.s64 = ctx.r11.s64 + 14840;
	// addi r3,r31,14904
	ctx.r3.s64 = ctx.r31.s64 + 14904;
	// addi r4,r10,-20276
	ctx.r4.s64 = ctx.r10.s64 + -20276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3424
	ctx.r6.s64 = 3424;
	// bl 0x82b38290
	ctx.lr = 0x830148BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20764
	ctx.r11.s64 = ctx.r11.s64 + -20764;
	// addi r3,r9,1600
	ctx.r3.s64 = ctx.r9.s64 + 1600;
	// stw r11,14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830148D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830148E8"))) PPC_WEAK_FUNC(sub_830148E8);
PPC_FUNC_IMPL(__imp__sub_830148E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14840
	ctx.r5.s64 = ctx.r11.s64 + 14840;
	// addi r3,r31,14872
	ctx.r3.s64 = ctx.r31.s64 + 14872;
	// addi r4,r10,-20264
	ctx.r4.s64 = ctx.r10.s64 + -20264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3408
	ctx.r6.s64 = 3408;
	// bl 0x82b38290
	ctx.lr = 0x83014924;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20772
	ctx.r11.s64 = ctx.r11.s64 + -20772;
	// addi r3,r9,1624
	ctx.r3.s64 = ctx.r9.s64 + 1624;
	// stw r11,14872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301493C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014950"))) PPC_WEAK_FUNC(sub_83014950);
PPC_FUNC_IMPL(__imp__sub_83014950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-9228
	ctx.r5.s64 = ctx.r11.s64 + -9228;
	// addi r3,r31,14936
	ctx.r3.s64 = ctx.r31.s64 + 14936;
	// addi r4,r10,-20248
	ctx.r4.s64 = ctx.r10.s64 + -20248;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3456
	ctx.r6.s64 = 3456;
	// bl 0x82b38290
	ctx.lr = 0x8301498C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20756
	ctx.r11.s64 = ctx.r11.s64 + -20756;
	// addi r3,r9,1648
	ctx.r3.s64 = ctx.r9.s64 + 1648;
	// stw r11,14936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830149A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830149B8"))) PPC_WEAK_FUNC(sub_830149B8);
PPC_FUNC_IMPL(__imp__sub_830149B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,14968
	ctx.r3.s64 = ctx.r31.s64 + 14968;
	// addi r4,r10,-19616
	ctx.r4.s64 = ctx.r10.s64 + -19616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,248
	ctx.r6.s64 = 248;
	// bl 0x82b38290
	ctx.lr = 0x830149F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-20192
	ctx.r11.s64 = ctx.r11.s64 + -20192;
	// addi r3,r9,1672
	ctx.r3.s64 = ctx.r9.s64 + 1672;
	// stw r11,14968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014A0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014A20"))) PPC_WEAK_FUNC(sub_83014A20);
PPC_FUNC_IMPL(__imp__sub_83014A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-7352
	ctx.r5.s64 = ctx.r11.s64 + -7352;
	// addi r3,r31,15000
	ctx.r3.s64 = ctx.r31.s64 + 15000;
	// addi r4,r10,-19416
	ctx.r4.s64 = ctx.r10.s64 + -19416;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x83014A5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19508
	ctx.r11.s64 = ctx.r11.s64 + -19508;
	// addi r3,r9,1696
	ctx.r3.s64 = ctx.r9.s64 + 1696;
	// stw r11,15000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014A74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014A88"))) PPC_WEAK_FUNC(sub_83014A88);
PPC_FUNC_IMPL(__imp__sub_83014A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,15032
	ctx.r3.s64 = ctx.r31.s64 + 15032;
	// addi r4,r10,-19144
	ctx.r4.s64 = ctx.r10.s64 + -19144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,216
	ctx.r6.s64 = 216;
	// bl 0x82b38290
	ctx.lr = 0x83014AC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19392
	ctx.r11.s64 = ctx.r11.s64 + -19392;
	// addi r3,r9,1720
	ctx.r3.s64 = ctx.r9.s64 + 1720;
	// stw r11,15032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014ADC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014AF0"))) PPC_WEAK_FUNC(sub_83014AF0);
PPC_FUNC_IMPL(__imp__sub_83014AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,15064
	ctx.r3.s64 = ctx.r31.s64 + 15064;
	// addi r4,r10,-18992
	ctx.r4.s64 = ctx.r10.s64 + -18992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x82b38290
	ctx.lr = 0x83014B2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-19068
	ctx.r11.s64 = ctx.r11.s64 + -19068;
	// addi r3,r9,1744
	ctx.r3.s64 = ctx.r9.s64 + 1744;
	// stw r11,15064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014B44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014B58"))) PPC_WEAK_FUNC(sub_83014B58);
PPC_FUNC_IMPL(__imp__sub_83014B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// addi r3,r31,15096
	ctx.r3.s64 = ctx.r31.s64 + 15096;
	// addi r4,r10,-18820
	ctx.r4.s64 = ctx.r10.s64 + -18820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// bl 0x82b38290
	ctx.lr = 0x83014B94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r3,r9,1768
	ctx.r3.s64 = ctx.r9.s64 + 1768;
	// stw r11,15096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014BAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014BC0"))) PPC_WEAK_FUNC(sub_83014BC0);
PPC_FUNC_IMPL(__imp__sub_83014BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6192
	ctx.r5.s64 = ctx.r11.s64 + -6192;
	// addi r3,r31,15128
	ctx.r3.s64 = ctx.r31.s64 + 15128;
	// addi r4,r10,-18688
	ctx.r4.s64 = ctx.r10.s64 + -18688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,104
	ctx.r6.s64 = 104;
	// bl 0x82b38290
	ctx.lr = 0x83014BFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18804
	ctx.r11.s64 = ctx.r11.s64 + -18804;
	// addi r3,r9,1792
	ctx.r3.s64 = ctx.r9.s64 + 1792;
	// stw r11,15128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014C14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014C28"))) PPC_WEAK_FUNC(sub_83014C28);
PPC_FUNC_IMPL(__imp__sub_83014C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,15160
	ctx.r3.s64 = ctx.r31.s64 + 15160;
	// addi r4,r10,-18664
	ctx.r4.s64 = ctx.r10.s64 + -18664;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// bl 0x82b38290
	ctx.lr = 0x83014C64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18672
	ctx.r11.s64 = ctx.r11.s64 + -18672;
	// addi r3,r9,1816
	ctx.r3.s64 = ctx.r9.s64 + 1816;
	// stw r11,15160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014C7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014C90"))) PPC_WEAK_FUNC(sub_83014C90);
PPC_FUNC_IMPL(__imp__sub_83014C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,15192
	ctx.r3.s64 = ctx.r31.s64 + 15192;
	// addi r4,r10,-16336
	ctx.r4.s64 = ctx.r10.s64 + -16336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,568
	ctx.r6.s64 = 568;
	// bl 0x82b38290
	ctx.lr = 0x83014CCC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-18636
	ctx.r11.s64 = ctx.r11.s64 + -18636;
	// addi r3,r9,1840
	ctx.r3.s64 = ctx.r9.s64 + 1840;
	// stw r11,15192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014CE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014CF8"))) PPC_WEAK_FUNC(sub_83014CF8);
PPC_FUNC_IMPL(__imp__sub_83014CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,15320
	ctx.r5.s64 = ctx.r11.s64 + 15320;
	// addi r3,r31,15224
	ctx.r3.s64 = ctx.r31.s64 + 15224;
	// addi r4,r10,-15896
	ctx.r4.s64 = ctx.r10.s64 + -15896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,480
	ctx.r6.s64 = 480;
	// bl 0x82b38290
	ctx.lr = 0x83014D34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16316
	ctx.r11.s64 = ctx.r11.s64 + -16316;
	// addi r3,r9,1864
	ctx.r3.s64 = ctx.r9.s64 + 1864;
	// stw r11,15224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014D4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014D60"))) PPC_WEAK_FUNC(sub_83014D60);
PPC_FUNC_IMPL(__imp__sub_83014D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r31,-31984
	ctx.r31.s64 = -2096103424;
	// addi r5,r11,-6480
	ctx.r5.s64 = ctx.r11.s64 + -6480;
	// addi r3,r31,15256
	ctx.r3.s64 = ctx.r31.s64 + 15256;
	// addi r4,r10,-15884
	ctx.r4.s64 = ctx.r10.s64 + -15884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,232
	ctx.r6.s64 = 232;
	// bl 0x82b38290
	ctx.lr = 0x83014D9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-16308
	ctx.r11.s64 = ctx.r11.s64 + -16308;
	// addi r3,r9,1888
	ctx.r3.s64 = ctx.r9.s64 + 1888;
	// stw r11,15256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014DB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014DC8"))) PPC_WEAK_FUNC(sub_83014DC8);
PPC_FUNC_IMPL(__imp__sub_83014DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,15224
	ctx.r5.s64 = ctx.r11.s64 + 15224;
	// addi r3,r31,15288
	ctx.r3.s64 = ctx.r31.s64 + 15288;
	// addi r4,r10,-15716
	ctx.r4.s64 = ctx.r10.s64 + -15716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,576
	ctx.r6.s64 = 576;
	// bl 0x82b38290
	ctx.lr = 0x83014E04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15860
	ctx.r11.s64 = ctx.r11.s64 + -15860;
	// addi r3,r9,1912
	ctx.r3.s64 = ctx.r9.s64 + 1912;
	// stw r11,15288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014E1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014E30"))) PPC_WEAK_FUNC(sub_83014E30);
PPC_FUNC_IMPL(__imp__sub_83014E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,15320
	ctx.r3.s64 = ctx.r31.s64 + 15320;
	// addi r4,r10,-15672
	ctx.r4.s64 = ctx.r10.s64 + -15672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
	// bl 0x82b38290
	ctx.lr = 0x83014E6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// addi r3,r9,1936
	ctx.r3.s64 = ctx.r9.s64 + 1936;
	// stw r11,15320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014E84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014E98"))) PPC_WEAK_FUNC(sub_83014E98);
PPC_FUNC_IMPL(__imp__sub_83014E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,15224
	ctx.r5.s64 = ctx.r11.s64 + 15224;
	// addi r3,r31,15352
	ctx.r3.s64 = ctx.r31.s64 + 15352;
	// addi r4,r10,-15520
	ctx.r4.s64 = ctx.r10.s64 + -15520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,640
	ctx.r6.s64 = 640;
	// bl 0x82b38290
	ctx.lr = 0x83014ED4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15656
	ctx.r11.s64 = ctx.r11.s64 + -15656;
	// addi r3,r9,1960
	ctx.r3.s64 = ctx.r9.s64 + 1960;
	// stw r11,15352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014EEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014F00"))) PPC_WEAK_FUNC(sub_83014F00);
PPC_FUNC_IMPL(__imp__sub_83014F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,15384
	ctx.r3.s64 = ctx.r31.s64 + 15384;
	// addi r4,r10,-14536
	ctx.r4.s64 = ctx.r10.s64 + -14536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83014F3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-15504
	ctx.r11.s64 = ctx.r11.s64 + -15504;
	// addi r3,r9,1984
	ctx.r3.s64 = ctx.r9.s64 + 1984;
	// stw r11,15384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014F54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014F68"))) PPC_WEAK_FUNC(sub_83014F68);
PPC_FUNC_IMPL(__imp__sub_83014F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,15416
	ctx.r3.s64 = ctx.r31.s64 + 15416;
	// addi r4,r10,-14428
	ctx.r4.s64 = ctx.r10.s64 + -14428;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83014FA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14524
	ctx.r11.s64 = ctx.r11.s64 + -14524;
	// addi r3,r9,2008
	ctx.r3.s64 = ctx.r9.s64 + 2008;
	// stw r11,15416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83014FBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83014FD0"))) PPC_WEAK_FUNC(sub_83014FD0);
PPC_FUNC_IMPL(__imp__sub_83014FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,15448
	ctx.r3.s64 = ctx.r31.s64 + 15448;
	// addi r4,r10,-14308
	ctx.r4.s64 = ctx.r10.s64 + -14308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301500C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14404
	ctx.r11.s64 = ctx.r11.s64 + -14404;
	// addi r3,r9,2032
	ctx.r3.s64 = ctx.r9.s64 + 2032;
	// stw r11,15448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015024;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015038"))) PPC_WEAK_FUNC(sub_83015038);
PPC_FUNC_IMPL(__imp__sub_83015038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,15480
	ctx.r3.s64 = ctx.r31.s64 + 15480;
	// addi r4,r10,-14208
	ctx.r4.s64 = ctx.r10.s64 + -14208;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015074;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14292
	ctx.r11.s64 = ctx.r11.s64 + -14292;
	// addi r3,r9,2056
	ctx.r3.s64 = ctx.r9.s64 + 2056;
	// stw r11,15480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301508C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830150A0"))) PPC_WEAK_FUNC(sub_830150A0);
PPC_FUNC_IMPL(__imp__sub_830150A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,16888
	ctx.r3.s64 = ctx.r31.s64 + 16888;
	// addi r4,r10,-10008
	ctx.r4.s64 = ctx.r10.s64 + -10008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830150DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14192
	ctx.r11.s64 = ctx.r11.s64 + -14192;
	// addi r3,r9,2080
	ctx.r3.s64 = ctx.r9.s64 + 2080;
	// stw r11,16888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830150F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015108"))) PPC_WEAK_FUNC(sub_83015108);
PPC_FUNC_IMPL(__imp__sub_83015108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16696
	ctx.r3.s64 = ctx.r31.s64 + 16696;
	// addi r4,r10,-9988
	ctx.r4.s64 = ctx.r10.s64 + -9988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015144;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14108
	ctx.r11.s64 = ctx.r11.s64 + -14108;
	// addi r3,r9,2104
	ctx.r3.s64 = ctx.r9.s64 + 2104;
	// stw r11,16696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301515C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015170"))) PPC_WEAK_FUNC(sub_83015170);
PPC_FUNC_IMPL(__imp__sub_83015170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16440
	ctx.r3.s64 = ctx.r31.s64 + 16440;
	// addi r4,r10,-9964
	ctx.r4.s64 = ctx.r10.s64 + -9964;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830151AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14100
	ctx.r11.s64 = ctx.r11.s64 + -14100;
	// addi r3,r9,2128
	ctx.r3.s64 = ctx.r9.s64 + 2128;
	// stw r11,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830151C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830151D8"))) PPC_WEAK_FUNC(sub_830151D8);
PPC_FUNC_IMPL(__imp__sub_830151D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16984
	ctx.r3.s64 = ctx.r31.s64 + 16984;
	// addi r4,r10,-9936
	ctx.r4.s64 = ctx.r10.s64 + -9936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015214;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14092
	ctx.r11.s64 = ctx.r11.s64 + -14092;
	// addi r3,r9,2152
	ctx.r3.s64 = ctx.r9.s64 + 2152;
	// stw r11,16984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16984, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301522C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015240"))) PPC_WEAK_FUNC(sub_83015240);
PPC_FUNC_IMPL(__imp__sub_83015240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,17144
	ctx.r3.s64 = ctx.r31.s64 + 17144;
	// addi r4,r10,-9908
	ctx.r4.s64 = ctx.r10.s64 + -9908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301527C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14084
	ctx.r11.s64 = ctx.r11.s64 + -14084;
	// addi r3,r9,2176
	ctx.r3.s64 = ctx.r9.s64 + 2176;
	// stw r11,17144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17144, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015294;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830152A8"))) PPC_WEAK_FUNC(sub_830152A8);
PPC_FUNC_IMPL(__imp__sub_830152A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16728
	ctx.r3.s64 = ctx.r31.s64 + 16728;
	// addi r4,r10,-9880
	ctx.r4.s64 = ctx.r10.s64 + -9880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830152E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14076
	ctx.r11.s64 = ctx.r11.s64 + -14076;
	// addi r3,r9,2200
	ctx.r3.s64 = ctx.r9.s64 + 2200;
	// stw r11,16728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830152FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015310"))) PPC_WEAK_FUNC(sub_83015310);
PPC_FUNC_IMPL(__imp__sub_83015310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15960
	ctx.r3.s64 = ctx.r31.s64 + 15960;
	// addi r4,r10,-9852
	ctx.r4.s64 = ctx.r10.s64 + -9852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301534C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14068
	ctx.r11.s64 = ctx.r11.s64 + -14068;
	// addi r3,r9,2224
	ctx.r3.s64 = ctx.r9.s64 + 2224;
	// stw r11,15960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015364;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015378"))) PPC_WEAK_FUNC(sub_83015378);
PPC_FUNC_IMPL(__imp__sub_83015378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,17048
	ctx.r3.s64 = ctx.r31.s64 + 17048;
	// addi r4,r10,-9824
	ctx.r4.s64 = ctx.r10.s64 + -9824;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830153B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14060
	ctx.r11.s64 = ctx.r11.s64 + -14060;
	// addi r3,r9,2248
	ctx.r3.s64 = ctx.r9.s64 + 2248;
	// stw r11,17048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830153CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830153E0"))) PPC_WEAK_FUNC(sub_830153E0);
PPC_FUNC_IMPL(__imp__sub_830153E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15768
	ctx.r3.s64 = ctx.r31.s64 + 15768;
	// addi r4,r10,-9796
	ctx.r4.s64 = ctx.r10.s64 + -9796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301541C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14052
	ctx.r11.s64 = ctx.r11.s64 + -14052;
	// addi r3,r9,2272
	ctx.r3.s64 = ctx.r9.s64 + 2272;
	// stw r11,15768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015434;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015448"))) PPC_WEAK_FUNC(sub_83015448);
PPC_FUNC_IMPL(__imp__sub_83015448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15672
	ctx.r3.s64 = ctx.r31.s64 + 15672;
	// addi r4,r10,-9768
	ctx.r4.s64 = ctx.r10.s64 + -9768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015484;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14044
	ctx.r11.s64 = ctx.r11.s64 + -14044;
	// addi r3,r9,2296
	ctx.r3.s64 = ctx.r9.s64 + 2296;
	// stw r11,15672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301549C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830154B0"))) PPC_WEAK_FUNC(sub_830154B0);
PPC_FUNC_IMPL(__imp__sub_830154B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15896
	ctx.r3.s64 = ctx.r31.s64 + 15896;
	// addi r4,r10,-9740
	ctx.r4.s64 = ctx.r10.s64 + -9740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830154EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// addi r3,r9,2320
	ctx.r3.s64 = ctx.r9.s64 + 2320;
	// stw r11,15896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015504;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015518"))) PPC_WEAK_FUNC(sub_83015518);
PPC_FUNC_IMPL(__imp__sub_83015518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16920
	ctx.r3.s64 = ctx.r31.s64 + 16920;
	// addi r4,r10,-9712
	ctx.r4.s64 = ctx.r10.s64 + -9712;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015554;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14028
	ctx.r11.s64 = ctx.r11.s64 + -14028;
	// addi r3,r9,2344
	ctx.r3.s64 = ctx.r9.s64 + 2344;
	// stw r11,16920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301556C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015580"))) PPC_WEAK_FUNC(sub_83015580);
PPC_FUNC_IMPL(__imp__sub_83015580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15608
	ctx.r3.s64 = ctx.r31.s64 + 15608;
	// addi r4,r10,-9684
	ctx.r4.s64 = ctx.r10.s64 + -9684;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830155BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14020
	ctx.r11.s64 = ctx.r11.s64 + -14020;
	// addi r3,r9,2368
	ctx.r3.s64 = ctx.r9.s64 + 2368;
	// stw r11,15608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830155D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830155E8"))) PPC_WEAK_FUNC(sub_830155E8);
PPC_FUNC_IMPL(__imp__sub_830155E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15512
	ctx.r3.s64 = ctx.r31.s64 + 15512;
	// addi r4,r10,-9652
	ctx.r4.s64 = ctx.r10.s64 + -9652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015624;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14012
	ctx.r11.s64 = ctx.r11.s64 + -14012;
	// addi r3,r9,2392
	ctx.r3.s64 = ctx.r9.s64 + 2392;
	// stw r11,15512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301563C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015650"))) PPC_WEAK_FUNC(sub_83015650);
PPC_FUNC_IMPL(__imp__sub_83015650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15800
	ctx.r3.s64 = ctx.r31.s64 + 15800;
	// addi r4,r10,-9624
	ctx.r4.s64 = ctx.r10.s64 + -9624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301568C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-14004
	ctx.r11.s64 = ctx.r11.s64 + -14004;
	// addi r3,r9,2416
	ctx.r3.s64 = ctx.r9.s64 + 2416;
	// stw r11,15800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830156A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830156B8"))) PPC_WEAK_FUNC(sub_830156B8);
PPC_FUNC_IMPL(__imp__sub_830156B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16152
	ctx.r3.s64 = ctx.r31.s64 + 16152;
	// addi r4,r10,-9596
	ctx.r4.s64 = ctx.r10.s64 + -9596;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830156F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13996
	ctx.r11.s64 = ctx.r11.s64 + -13996;
	// addi r3,r9,2440
	ctx.r3.s64 = ctx.r9.s64 + 2440;
	// stw r11,16152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301570C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015720"))) PPC_WEAK_FUNC(sub_83015720);
PPC_FUNC_IMPL(__imp__sub_83015720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16664
	ctx.r3.s64 = ctx.r31.s64 + 16664;
	// addi r4,r10,-9564
	ctx.r4.s64 = ctx.r10.s64 + -9564;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301575C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13988
	ctx.r11.s64 = ctx.r11.s64 + -13988;
	// addi r3,r9,2464
	ctx.r3.s64 = ctx.r9.s64 + 2464;
	// stw r11,16664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015774;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015788"))) PPC_WEAK_FUNC(sub_83015788);
PPC_FUNC_IMPL(__imp__sub_83015788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16472
	ctx.r3.s64 = ctx.r31.s64 + 16472;
	// addi r4,r10,-9536
	ctx.r4.s64 = ctx.r10.s64 + -9536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830157C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13980
	ctx.r11.s64 = ctx.r11.s64 + -13980;
	// addi r3,r9,2488
	ctx.r3.s64 = ctx.r9.s64 + 2488;
	// stw r11,16472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830157DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830157F0"))) PPC_WEAK_FUNC(sub_830157F0);
PPC_FUNC_IMPL(__imp__sub_830157F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15832
	ctx.r3.s64 = ctx.r31.s64 + 15832;
	// addi r4,r10,-9508
	ctx.r4.s64 = ctx.r10.s64 + -9508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301582C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13972
	ctx.r11.s64 = ctx.r11.s64 + -13972;
	// addi r3,r9,2512
	ctx.r3.s64 = ctx.r9.s64 + 2512;
	// stw r11,15832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015844;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015858"))) PPC_WEAK_FUNC(sub_83015858);
PPC_FUNC_IMPL(__imp__sub_83015858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16312
	ctx.r3.s64 = ctx.r31.s64 + 16312;
	// addi r4,r10,-9480
	ctx.r4.s64 = ctx.r10.s64 + -9480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015894;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13964
	ctx.r11.s64 = ctx.r11.s64 + -13964;
	// addi r3,r9,2536
	ctx.r3.s64 = ctx.r9.s64 + 2536;
	// stw r11,16312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830158AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830158C0"))) PPC_WEAK_FUNC(sub_830158C0);
PPC_FUNC_IMPL(__imp__sub_830158C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15576
	ctx.r3.s64 = ctx.r31.s64 + 15576;
	// addi r4,r10,-9452
	ctx.r4.s64 = ctx.r10.s64 + -9452;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830158FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13956
	ctx.r11.s64 = ctx.r11.s64 + -13956;
	// addi r3,r9,2560
	ctx.r3.s64 = ctx.r9.s64 + 2560;
	// stw r11,15576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015914;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015928"))) PPC_WEAK_FUNC(sub_83015928);
PPC_FUNC_IMPL(__imp__sub_83015928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16536
	ctx.r3.s64 = ctx.r31.s64 + 16536;
	// addi r4,r10,-9424
	ctx.r4.s64 = ctx.r10.s64 + -9424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015964;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13948
	ctx.r11.s64 = ctx.r11.s64 + -13948;
	// addi r3,r9,2584
	ctx.r3.s64 = ctx.r9.s64 + 2584;
	// stw r11,16536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301597C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015990"))) PPC_WEAK_FUNC(sub_83015990);
PPC_FUNC_IMPL(__imp__sub_83015990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16568
	ctx.r3.s64 = ctx.r31.s64 + 16568;
	// addi r4,r10,-9396
	ctx.r4.s64 = ctx.r10.s64 + -9396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830159CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13940
	ctx.r11.s64 = ctx.r11.s64 + -13940;
	// addi r3,r9,2608
	ctx.r3.s64 = ctx.r9.s64 + 2608;
	// stw r11,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830159E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830159F8"))) PPC_WEAK_FUNC(sub_830159F8);
PPC_FUNC_IMPL(__imp__sub_830159F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16184
	ctx.r3.s64 = ctx.r31.s64 + 16184;
	// addi r4,r10,-9368
	ctx.r4.s64 = ctx.r10.s64 + -9368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015A34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13932
	ctx.r11.s64 = ctx.r11.s64 + -13932;
	// addi r3,r9,2632
	ctx.r3.s64 = ctx.r9.s64 + 2632;
	// stw r11,16184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015A4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015A60"))) PPC_WEAK_FUNC(sub_83015A60);
PPC_FUNC_IMPL(__imp__sub_83015A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15992
	ctx.r3.s64 = ctx.r31.s64 + 15992;
	// addi r4,r10,-9336
	ctx.r4.s64 = ctx.r10.s64 + -9336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015A9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13924
	ctx.r11.s64 = ctx.r11.s64 + -13924;
	// addi r3,r9,2656
	ctx.r3.s64 = ctx.r9.s64 + 2656;
	// stw r11,15992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015AB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015AC8"))) PPC_WEAK_FUNC(sub_83015AC8);
PPC_FUNC_IMPL(__imp__sub_83015AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15864
	ctx.r3.s64 = ctx.r31.s64 + 15864;
	// addi r4,r10,-9304
	ctx.r4.s64 = ctx.r10.s64 + -9304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015B04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13916
	ctx.r11.s64 = ctx.r11.s64 + -13916;
	// addi r3,r9,2680
	ctx.r3.s64 = ctx.r9.s64 + 2680;
	// stw r11,15864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015B1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015B30"))) PPC_WEAK_FUNC(sub_83015B30);
PPC_FUNC_IMPL(__imp__sub_83015B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15544
	ctx.r3.s64 = ctx.r31.s64 + 15544;
	// addi r4,r10,-9276
	ctx.r4.s64 = ctx.r10.s64 + -9276;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015B6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13908
	ctx.r11.s64 = ctx.r11.s64 + -13908;
	// addi r3,r9,2704
	ctx.r3.s64 = ctx.r9.s64 + 2704;
	// stw r11,15544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015B84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015B98"))) PPC_WEAK_FUNC(sub_83015B98);
PPC_FUNC_IMPL(__imp__sub_83015B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16024
	ctx.r3.s64 = ctx.r31.s64 + 16024;
	// addi r4,r10,-9244
	ctx.r4.s64 = ctx.r10.s64 + -9244;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015BD4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13900
	ctx.r11.s64 = ctx.r11.s64 + -13900;
	// addi r3,r9,2728
	ctx.r3.s64 = ctx.r9.s64 + 2728;
	// stw r11,16024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015BEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015C00"))) PPC_WEAK_FUNC(sub_83015C00);
PPC_FUNC_IMPL(__imp__sub_83015C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16792
	ctx.r3.s64 = ctx.r31.s64 + 16792;
	// addi r4,r10,-9212
	ctx.r4.s64 = ctx.r10.s64 + -9212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015C3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13892
	ctx.r11.s64 = ctx.r11.s64 + -13892;
	// addi r3,r9,2752
	ctx.r3.s64 = ctx.r9.s64 + 2752;
	// stw r11,16792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015C54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015C68"))) PPC_WEAK_FUNC(sub_83015C68);
PPC_FUNC_IMPL(__imp__sub_83015C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16056
	ctx.r3.s64 = ctx.r31.s64 + 16056;
	// addi r4,r10,-9180
	ctx.r4.s64 = ctx.r10.s64 + -9180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015CA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13884
	ctx.r11.s64 = ctx.r11.s64 + -13884;
	// addi r3,r9,2776
	ctx.r3.s64 = ctx.r9.s64 + 2776;
	// stw r11,16056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015CBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015CD0"))) PPC_WEAK_FUNC(sub_83015CD0);
PPC_FUNC_IMPL(__imp__sub_83015CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16280
	ctx.r3.s64 = ctx.r31.s64 + 16280;
	// addi r4,r10,-9152
	ctx.r4.s64 = ctx.r10.s64 + -9152;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015D0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13876
	ctx.r11.s64 = ctx.r11.s64 + -13876;
	// addi r3,r9,2800
	ctx.r3.s64 = ctx.r9.s64 + 2800;
	// stw r11,16280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015D24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015D38"))) PPC_WEAK_FUNC(sub_83015D38);
PPC_FUNC_IMPL(__imp__sub_83015D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16824
	ctx.r3.s64 = ctx.r31.s64 + 16824;
	// addi r4,r10,-9124
	ctx.r4.s64 = ctx.r10.s64 + -9124;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015D74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13868
	ctx.r11.s64 = ctx.r11.s64 + -13868;
	// addi r3,r9,2824
	ctx.r3.s64 = ctx.r9.s64 + 2824;
	// stw r11,16824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015D8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015DA0"))) PPC_WEAK_FUNC(sub_83015DA0);
PPC_FUNC_IMPL(__imp__sub_83015DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16952
	ctx.r3.s64 = ctx.r31.s64 + 16952;
	// addi r4,r10,-9096
	ctx.r4.s64 = ctx.r10.s64 + -9096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015DDC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13860
	ctx.r11.s64 = ctx.r11.s64 + -13860;
	// addi r3,r9,2848
	ctx.r3.s64 = ctx.r9.s64 + 2848;
	// stw r11,16952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015DF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015E08"))) PPC_WEAK_FUNC(sub_83015E08);
PPC_FUNC_IMPL(__imp__sub_83015E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16408
	ctx.r3.s64 = ctx.r31.s64 + 16408;
	// addi r4,r10,-9064
	ctx.r4.s64 = ctx.r10.s64 + -9064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015E44;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13852
	ctx.r11.s64 = ctx.r11.s64 + -13852;
	// addi r3,r9,2872
	ctx.r3.s64 = ctx.r9.s64 + 2872;
	// stw r11,16408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015E5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015E70"))) PPC_WEAK_FUNC(sub_83015E70);
PPC_FUNC_IMPL(__imp__sub_83015E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16376
	ctx.r3.s64 = ctx.r31.s64 + 16376;
	// addi r4,r10,-9036
	ctx.r4.s64 = ctx.r10.s64 + -9036;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015EAC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13844
	ctx.r11.s64 = ctx.r11.s64 + -13844;
	// addi r3,r9,2896
	ctx.r3.s64 = ctx.r9.s64 + 2896;
	// stw r11,16376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015EC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015ED8"))) PPC_WEAK_FUNC(sub_83015ED8);
PPC_FUNC_IMPL(__imp__sub_83015ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16088
	ctx.r3.s64 = ctx.r31.s64 + 16088;
	// addi r4,r10,-9008
	ctx.r4.s64 = ctx.r10.s64 + -9008;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015F14;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13836
	ctx.r11.s64 = ctx.r11.s64 + -13836;
	// addi r3,r9,2920
	ctx.r3.s64 = ctx.r9.s64 + 2920;
	// stw r11,16088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015F2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015F40"))) PPC_WEAK_FUNC(sub_83015F40);
PPC_FUNC_IMPL(__imp__sub_83015F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16248
	ctx.r3.s64 = ctx.r31.s64 + 16248;
	// addi r4,r10,-8980
	ctx.r4.s64 = ctx.r10.s64 + -8980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015F7C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13828
	ctx.r11.s64 = ctx.r11.s64 + -13828;
	// addi r3,r9,2944
	ctx.r3.s64 = ctx.r9.s64 + 2944;
	// stw r11,16248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015F94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015FA8"))) PPC_WEAK_FUNC(sub_83015FA8);
PPC_FUNC_IMPL(__imp__sub_83015FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,17112
	ctx.r3.s64 = ctx.r31.s64 + 17112;
	// addi r4,r10,-8952
	ctx.r4.s64 = ctx.r10.s64 + -8952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83015FE4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13820
	ctx.r11.s64 = ctx.r11.s64 + -13820;
	// addi r3,r9,2968
	ctx.r3.s64 = ctx.r9.s64 + 2968;
	// stw r11,17112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83015FFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016010"))) PPC_WEAK_FUNC(sub_83016010);
PPC_FUNC_IMPL(__imp__sub_83016010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15704
	ctx.r3.s64 = ctx.r31.s64 + 15704;
	// addi r4,r10,-8924
	ctx.r4.s64 = ctx.r10.s64 + -8924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301604C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13812
	ctx.r11.s64 = ctx.r11.s64 + -13812;
	// addi r3,r9,2992
	ctx.r3.s64 = ctx.r9.s64 + 2992;
	// stw r11,15704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016064;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016078"))) PPC_WEAK_FUNC(sub_83016078);
PPC_FUNC_IMPL(__imp__sub_83016078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15928
	ctx.r3.s64 = ctx.r31.s64 + 15928;
	// addi r4,r10,-8896
	ctx.r4.s64 = ctx.r10.s64 + -8896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830160B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13804
	ctx.r11.s64 = ctx.r11.s64 + -13804;
	// addi r3,r9,3016
	ctx.r3.s64 = ctx.r9.s64 + 3016;
	// stw r11,15928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830160CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830160E0"))) PPC_WEAK_FUNC(sub_830160E0);
PPC_FUNC_IMPL(__imp__sub_830160E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16216
	ctx.r3.s64 = ctx.r31.s64 + 16216;
	// addi r4,r10,-8864
	ctx.r4.s64 = ctx.r10.s64 + -8864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301611C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13796
	ctx.r11.s64 = ctx.r11.s64 + -13796;
	// addi r3,r9,3040
	ctx.r3.s64 = ctx.r9.s64 + 3040;
	// stw r11,16216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016134;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016148"))) PPC_WEAK_FUNC(sub_83016148);
PPC_FUNC_IMPL(__imp__sub_83016148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15640
	ctx.r3.s64 = ctx.r31.s64 + 15640;
	// addi r4,r10,-8832
	ctx.r4.s64 = ctx.r10.s64 + -8832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016184;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13788
	ctx.r11.s64 = ctx.r11.s64 + -13788;
	// addi r3,r9,3064
	ctx.r3.s64 = ctx.r9.s64 + 3064;
	// stw r11,15640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301619C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830161B0"))) PPC_WEAK_FUNC(sub_830161B0);
PPC_FUNC_IMPL(__imp__sub_830161B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16120
	ctx.r3.s64 = ctx.r31.s64 + 16120;
	// addi r4,r10,-8804
	ctx.r4.s64 = ctx.r10.s64 + -8804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830161EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13780
	ctx.r11.s64 = ctx.r11.s64 + -13780;
	// addi r3,r9,3088
	ctx.r3.s64 = ctx.r9.s64 + 3088;
	// stw r11,16120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016204;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016218"))) PPC_WEAK_FUNC(sub_83016218);
PPC_FUNC_IMPL(__imp__sub_83016218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16760
	ctx.r3.s64 = ctx.r31.s64 + 16760;
	// addi r4,r10,-8772
	ctx.r4.s64 = ctx.r10.s64 + -8772;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016254;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13772
	ctx.r11.s64 = ctx.r11.s64 + -13772;
	// addi r3,r9,3112
	ctx.r3.s64 = ctx.r9.s64 + 3112;
	// stw r11,16760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301626C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016280"))) PPC_WEAK_FUNC(sub_83016280);
PPC_FUNC_IMPL(__imp__sub_83016280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16344
	ctx.r3.s64 = ctx.r31.s64 + 16344;
	// addi r4,r10,-8740
	ctx.r4.s64 = ctx.r10.s64 + -8740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830162BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13764
	ctx.r11.s64 = ctx.r11.s64 + -13764;
	// addi r3,r9,3136
	ctx.r3.s64 = ctx.r9.s64 + 3136;
	// stw r11,16344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830162D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830162E8"))) PPC_WEAK_FUNC(sub_830162E8);
PPC_FUNC_IMPL(__imp__sub_830162E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16856
	ctx.r3.s64 = ctx.r31.s64 + 16856;
	// addi r4,r10,-8716
	ctx.r4.s64 = ctx.r10.s64 + -8716;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016324;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13756
	ctx.r11.s64 = ctx.r11.s64 + -13756;
	// addi r3,r9,3160
	ctx.r3.s64 = ctx.r9.s64 + 3160;
	// stw r11,16856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301633C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016350"))) PPC_WEAK_FUNC(sub_83016350);
PPC_FUNC_IMPL(__imp__sub_83016350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16504
	ctx.r3.s64 = ctx.r31.s64 + 16504;
	// addi r4,r10,-8688
	ctx.r4.s64 = ctx.r10.s64 + -8688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301638C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13748
	ctx.r11.s64 = ctx.r11.s64 + -13748;
	// addi r3,r9,3184
	ctx.r3.s64 = ctx.r9.s64 + 3184;
	// stw r11,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830163A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830163B8"))) PPC_WEAK_FUNC(sub_830163B8);
PPC_FUNC_IMPL(__imp__sub_830163B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16632
	ctx.r3.s64 = ctx.r31.s64 + 16632;
	// addi r4,r10,-8656
	ctx.r4.s64 = ctx.r10.s64 + -8656;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830163F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13740
	ctx.r11.s64 = ctx.r11.s64 + -13740;
	// addi r3,r9,3208
	ctx.r3.s64 = ctx.r9.s64 + 3208;
	// stw r11,16632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301640C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016420"))) PPC_WEAK_FUNC(sub_83016420);
PPC_FUNC_IMPL(__imp__sub_83016420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,17016
	ctx.r3.s64 = ctx.r31.s64 + 17016;
	// addi r4,r10,-8624
	ctx.r4.s64 = ctx.r10.s64 + -8624;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301645C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13732
	ctx.r11.s64 = ctx.r11.s64 + -13732;
	// addi r3,r9,3232
	ctx.r3.s64 = ctx.r9.s64 + 3232;
	// stw r11,17016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17016, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016474;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016488"))) PPC_WEAK_FUNC(sub_83016488);
PPC_FUNC_IMPL(__imp__sub_83016488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,15736
	ctx.r3.s64 = ctx.r31.s64 + 15736;
	// addi r4,r10,-8592
	ctx.r4.s64 = ctx.r10.s64 + -8592;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830164C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13724
	ctx.r11.s64 = ctx.r11.s64 + -13724;
	// addi r3,r9,3256
	ctx.r3.s64 = ctx.r9.s64 + 3256;
	// stw r11,15736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830164DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830164F0"))) PPC_WEAK_FUNC(sub_830164F0);
PPC_FUNC_IMPL(__imp__sub_830164F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,17080
	ctx.r3.s64 = ctx.r31.s64 + 17080;
	// addi r4,r10,-8560
	ctx.r4.s64 = ctx.r10.s64 + -8560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301652C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13716
	ctx.r11.s64 = ctx.r11.s64 + -13716;
	// addi r3,r9,3280
	ctx.r3.s64 = ctx.r9.s64 + 3280;
	// stw r11,17080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016544;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016558"))) PPC_WEAK_FUNC(sub_83016558);
PPC_FUNC_IMPL(__imp__sub_83016558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,16888
	ctx.r5.s64 = ctx.r11.s64 + 16888;
	// addi r3,r31,16600
	ctx.r3.s64 = ctx.r31.s64 + 16600;
	// addi r4,r10,-8532
	ctx.r4.s64 = ctx.r10.s64 + -8532;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016594;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-13708
	ctx.r11.s64 = ctx.r11.s64 + -13708;
	// addi r3,r9,3304
	ctx.r3.s64 = ctx.r9.s64 + 3304;
	// stw r11,16600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830165AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830165C0"))) PPC_WEAK_FUNC(sub_830165C0);
PPC_FUNC_IMPL(__imp__sub_830165C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18200
	ctx.r3.s64 = ctx.r31.s64 + 18200;
	// addi r4,r10,-4320
	ctx.r4.s64 = ctx.r10.s64 + -4320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830165FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8500
	ctx.r11.s64 = ctx.r11.s64 + -8500;
	// addi r3,r9,3328
	ctx.r3.s64 = ctx.r9.s64 + 3328;
	// stw r11,18200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016614;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016628"))) PPC_WEAK_FUNC(sub_83016628);
PPC_FUNC_IMPL(__imp__sub_83016628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17816
	ctx.r3.s64 = ctx.r31.s64 + 17816;
	// addi r4,r10,-4296
	ctx.r4.s64 = ctx.r10.s64 + -4296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016664;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8416
	ctx.r11.s64 = ctx.r11.s64 + -8416;
	// addi r3,r9,3352
	ctx.r3.s64 = ctx.r9.s64 + 3352;
	// stw r11,17816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301667C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016690"))) PPC_WEAK_FUNC(sub_83016690);
PPC_FUNC_IMPL(__imp__sub_83016690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18680
	ctx.r3.s64 = ctx.r31.s64 + 18680;
	// addi r4,r10,-4268
	ctx.r4.s64 = ctx.r10.s64 + -4268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830166CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8408
	ctx.r11.s64 = ctx.r11.s64 + -8408;
	// addi r3,r9,3376
	ctx.r3.s64 = ctx.r9.s64 + 3376;
	// stw r11,18680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18680, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830166E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830166F8"))) PPC_WEAK_FUNC(sub_830166F8);
PPC_FUNC_IMPL(__imp__sub_830166F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17432
	ctx.r3.s64 = ctx.r31.s64 + 17432;
	// addi r4,r10,-4236
	ctx.r4.s64 = ctx.r10.s64 + -4236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016734;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8400
	ctx.r11.s64 = ctx.r11.s64 + -8400;
	// addi r3,r9,3400
	ctx.r3.s64 = ctx.r9.s64 + 3400;
	// stw r11,17432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17432, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301674C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016760"))) PPC_WEAK_FUNC(sub_83016760);
PPC_FUNC_IMPL(__imp__sub_83016760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18040
	ctx.r3.s64 = ctx.r31.s64 + 18040;
	// addi r4,r10,-4204
	ctx.r4.s64 = ctx.r10.s64 + -4204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301679C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8392
	ctx.r11.s64 = ctx.r11.s64 + -8392;
	// addi r3,r9,3424
	ctx.r3.s64 = ctx.r9.s64 + 3424;
	// stw r11,18040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18040, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830167B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830167C8"))) PPC_WEAK_FUNC(sub_830167C8);
PPC_FUNC_IMPL(__imp__sub_830167C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18424
	ctx.r3.s64 = ctx.r31.s64 + 18424;
	// addi r4,r10,-4172
	ctx.r4.s64 = ctx.r10.s64 + -4172;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016804;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8384
	ctx.r11.s64 = ctx.r11.s64 + -8384;
	// addi r3,r9,3448
	ctx.r3.s64 = ctx.r9.s64 + 3448;
	// stw r11,18424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18424, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301681C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016830"))) PPC_WEAK_FUNC(sub_83016830);
PPC_FUNC_IMPL(__imp__sub_83016830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18520
	ctx.r3.s64 = ctx.r31.s64 + 18520;
	// addi r4,r10,-4140
	ctx.r4.s64 = ctx.r10.s64 + -4140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301686C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8376
	ctx.r11.s64 = ctx.r11.s64 + -8376;
	// addi r3,r9,3472
	ctx.r3.s64 = ctx.r9.s64 + 3472;
	// stw r11,18520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016884;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016898"))) PPC_WEAK_FUNC(sub_83016898);
PPC_FUNC_IMPL(__imp__sub_83016898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18328
	ctx.r3.s64 = ctx.r31.s64 + 18328;
	// addi r4,r10,-4112
	ctx.r4.s64 = ctx.r10.s64 + -4112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830168D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8368
	ctx.r11.s64 = ctx.r11.s64 + -8368;
	// addi r3,r9,3496
	ctx.r3.s64 = ctx.r9.s64 + 3496;
	// stw r11,18328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830168EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016900"))) PPC_WEAK_FUNC(sub_83016900);
PPC_FUNC_IMPL(__imp__sub_83016900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17336
	ctx.r3.s64 = ctx.r31.s64 + 17336;
	// addi r4,r10,-4080
	ctx.r4.s64 = ctx.r10.s64 + -4080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301693C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8360
	ctx.r11.s64 = ctx.r11.s64 + -8360;
	// addi r3,r9,3520
	ctx.r3.s64 = ctx.r9.s64 + 3520;
	// stw r11,17336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17336, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016954;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016968"))) PPC_WEAK_FUNC(sub_83016968);
PPC_FUNC_IMPL(__imp__sub_83016968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18136
	ctx.r3.s64 = ctx.r31.s64 + 18136;
	// addi r4,r10,-4048
	ctx.r4.s64 = ctx.r10.s64 + -4048;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830169A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8352
	ctx.r11.s64 = ctx.r11.s64 + -8352;
	// addi r3,r9,3544
	ctx.r3.s64 = ctx.r9.s64 + 3544;
	// stw r11,18136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18136, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830169BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830169D0"))) PPC_WEAK_FUNC(sub_830169D0);
PPC_FUNC_IMPL(__imp__sub_830169D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18360
	ctx.r3.s64 = ctx.r31.s64 + 18360;
	// addi r4,r10,-4016
	ctx.r4.s64 = ctx.r10.s64 + -4016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016A0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8344
	ctx.r11.s64 = ctx.r11.s64 + -8344;
	// addi r3,r9,3568
	ctx.r3.s64 = ctx.r9.s64 + 3568;
	// stw r11,18360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016A24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016A38"))) PPC_WEAK_FUNC(sub_83016A38);
PPC_FUNC_IMPL(__imp__sub_83016A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17944
	ctx.r3.s64 = ctx.r31.s64 + 17944;
	// addi r4,r10,-3984
	ctx.r4.s64 = ctx.r10.s64 + -3984;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016A74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8336
	ctx.r11.s64 = ctx.r11.s64 + -8336;
	// addi r3,r9,3592
	ctx.r3.s64 = ctx.r9.s64 + 3592;
	// stw r11,17944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17944, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016A8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016AA0"))) PPC_WEAK_FUNC(sub_83016AA0);
PPC_FUNC_IMPL(__imp__sub_83016AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18456
	ctx.r3.s64 = ctx.r31.s64 + 18456;
	// addi r4,r10,-3952
	ctx.r4.s64 = ctx.r10.s64 + -3952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016ADC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8328
	ctx.r11.s64 = ctx.r11.s64 + -8328;
	// addi r3,r9,3616
	ctx.r3.s64 = ctx.r9.s64 + 3616;
	// stw r11,18456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18456, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016AF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016B08"))) PPC_WEAK_FUNC(sub_83016B08);
PPC_FUNC_IMPL(__imp__sub_83016B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17208
	ctx.r3.s64 = ctx.r31.s64 + 17208;
	// addi r4,r10,-3916
	ctx.r4.s64 = ctx.r10.s64 + -3916;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016B44;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8320
	ctx.r11.s64 = ctx.r11.s64 + -8320;
	// addi r3,r9,3640
	ctx.r3.s64 = ctx.r9.s64 + 3640;
	// stw r11,17208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016B5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016B70"))) PPC_WEAK_FUNC(sub_83016B70);
PPC_FUNC_IMPL(__imp__sub_83016B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18008
	ctx.r3.s64 = ctx.r31.s64 + 18008;
	// addi r4,r10,-3888
	ctx.r4.s64 = ctx.r10.s64 + -3888;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016BAC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8312
	ctx.r11.s64 = ctx.r11.s64 + -8312;
	// addi r3,r9,3664
	ctx.r3.s64 = ctx.r9.s64 + 3664;
	// stw r11,18008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18008, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016BC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016BD8"))) PPC_WEAK_FUNC(sub_83016BD8);
PPC_FUNC_IMPL(__imp__sub_83016BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18552
	ctx.r3.s64 = ctx.r31.s64 + 18552;
	// addi r4,r10,-3860
	ctx.r4.s64 = ctx.r10.s64 + -3860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016C14;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// addi r3,r9,3688
	ctx.r3.s64 = ctx.r9.s64 + 3688;
	// stw r11,18552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18552, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016C2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016C40"))) PPC_WEAK_FUNC(sub_83016C40);
PPC_FUNC_IMPL(__imp__sub_83016C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17368
	ctx.r3.s64 = ctx.r31.s64 + 17368;
	// addi r4,r10,-3828
	ctx.r4.s64 = ctx.r10.s64 + -3828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016C7C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// addi r3,r9,3712
	ctx.r3.s64 = ctx.r9.s64 + 3712;
	// stw r11,17368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17368, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016C94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016CA8"))) PPC_WEAK_FUNC(sub_83016CA8);
PPC_FUNC_IMPL(__imp__sub_83016CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17656
	ctx.r3.s64 = ctx.r31.s64 + 17656;
	// addi r4,r10,-3796
	ctx.r4.s64 = ctx.r10.s64 + -3796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016CE4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8288
	ctx.r11.s64 = ctx.r11.s64 + -8288;
	// addi r3,r9,3736
	ctx.r3.s64 = ctx.r9.s64 + 3736;
	// stw r11,17656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016CFC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016D10"))) PPC_WEAK_FUNC(sub_83016D10);
PPC_FUNC_IMPL(__imp__sub_83016D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17272
	ctx.r3.s64 = ctx.r31.s64 + 17272;
	// addi r4,r10,-3764
	ctx.r4.s64 = ctx.r10.s64 + -3764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016D4C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8280
	ctx.r11.s64 = ctx.r11.s64 + -8280;
	// addi r3,r9,3760
	ctx.r3.s64 = ctx.r9.s64 + 3760;
	// stw r11,17272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17272, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016D64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016D78"))) PPC_WEAK_FUNC(sub_83016D78);
PPC_FUNC_IMPL(__imp__sub_83016D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18584
	ctx.r3.s64 = ctx.r31.s64 + 18584;
	// addi r4,r10,-3732
	ctx.r4.s64 = ctx.r10.s64 + -3732;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016DB4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8272
	ctx.r11.s64 = ctx.r11.s64 + -8272;
	// addi r3,r9,3784
	ctx.r3.s64 = ctx.r9.s64 + 3784;
	// stw r11,18584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18584, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016DCC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016DE0"))) PPC_WEAK_FUNC(sub_83016DE0);
PPC_FUNC_IMPL(__imp__sub_83016DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17304
	ctx.r3.s64 = ctx.r31.s64 + 17304;
	// addi r4,r10,-3700
	ctx.r4.s64 = ctx.r10.s64 + -3700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016E1C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8264
	ctx.r11.s64 = ctx.r11.s64 + -8264;
	// addi r3,r9,3808
	ctx.r3.s64 = ctx.r9.s64 + 3808;
	// stw r11,17304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016E34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016E48"))) PPC_WEAK_FUNC(sub_83016E48);
PPC_FUNC_IMPL(__imp__sub_83016E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18392
	ctx.r3.s64 = ctx.r31.s64 + 18392;
	// addi r4,r10,-3672
	ctx.r4.s64 = ctx.r10.s64 + -3672;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016E84;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8256
	ctx.r11.s64 = ctx.r11.s64 + -8256;
	// addi r3,r9,3832
	ctx.r3.s64 = ctx.r9.s64 + 3832;
	// stw r11,18392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016E9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016EB0"))) PPC_WEAK_FUNC(sub_83016EB0);
PPC_FUNC_IMPL(__imp__sub_83016EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18776
	ctx.r3.s64 = ctx.r31.s64 + 18776;
	// addi r4,r10,-3640
	ctx.r4.s64 = ctx.r10.s64 + -3640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016EEC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8248
	ctx.r11.s64 = ctx.r11.s64 + -8248;
	// addi r3,r9,3856
	ctx.r3.s64 = ctx.r9.s64 + 3856;
	// stw r11,18776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016F04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016F18"))) PPC_WEAK_FUNC(sub_83016F18);
PPC_FUNC_IMPL(__imp__sub_83016F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18488
	ctx.r3.s64 = ctx.r31.s64 + 18488;
	// addi r4,r10,-3608
	ctx.r4.s64 = ctx.r10.s64 + -3608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016F54;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8240
	ctx.r11.s64 = ctx.r11.s64 + -8240;
	// addi r3,r9,3880
	ctx.r3.s64 = ctx.r9.s64 + 3880;
	// stw r11,18488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016F6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016F80"))) PPC_WEAK_FUNC(sub_83016F80);
PPC_FUNC_IMPL(__imp__sub_83016F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18232
	ctx.r3.s64 = ctx.r31.s64 + 18232;
	// addi r4,r10,-3576
	ctx.r4.s64 = ctx.r10.s64 + -3576;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83016FBC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8232
	ctx.r11.s64 = ctx.r11.s64 + -8232;
	// addi r3,r9,3904
	ctx.r3.s64 = ctx.r9.s64 + 3904;
	// stw r11,18232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83016FD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016FE8"))) PPC_WEAK_FUNC(sub_83016FE8);
PPC_FUNC_IMPL(__imp__sub_83016FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18296
	ctx.r3.s64 = ctx.r31.s64 + 18296;
	// addi r4,r10,-3540
	ctx.r4.s64 = ctx.r10.s64 + -3540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017024;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8224
	ctx.r11.s64 = ctx.r11.s64 + -8224;
	// addi r3,r9,3928
	ctx.r3.s64 = ctx.r9.s64 + 3928;
	// stw r11,18296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301703C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017050"))) PPC_WEAK_FUNC(sub_83017050);
PPC_FUNC_IMPL(__imp__sub_83017050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17720
	ctx.r3.s64 = ctx.r31.s64 + 17720;
	// addi r4,r10,-3508
	ctx.r4.s64 = ctx.r10.s64 + -3508;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301708C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8216
	ctx.r11.s64 = ctx.r11.s64 + -8216;
	// addi r3,r9,3952
	ctx.r3.s64 = ctx.r9.s64 + 3952;
	// stw r11,17720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830170A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830170B8"))) PPC_WEAK_FUNC(sub_830170B8);
PPC_FUNC_IMPL(__imp__sub_830170B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18744
	ctx.r3.s64 = ctx.r31.s64 + 18744;
	// addi r4,r10,-3472
	ctx.r4.s64 = ctx.r10.s64 + -3472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830170F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8208
	ctx.r11.s64 = ctx.r11.s64 + -8208;
	// addi r3,r9,3976
	ctx.r3.s64 = ctx.r9.s64 + 3976;
	// stw r11,18744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18744, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301710C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017120"))) PPC_WEAK_FUNC(sub_83017120);
PPC_FUNC_IMPL(__imp__sub_83017120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18264
	ctx.r3.s64 = ctx.r31.s64 + 18264;
	// addi r4,r10,-3436
	ctx.r4.s64 = ctx.r10.s64 + -3436;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301715C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8200
	ctx.r11.s64 = ctx.r11.s64 + -8200;
	// addi r3,r9,4000
	ctx.r3.s64 = ctx.r9.s64 + 4000;
	// stw r11,18264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18264, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017174;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017188"))) PPC_WEAK_FUNC(sub_83017188);
PPC_FUNC_IMPL(__imp__sub_83017188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17592
	ctx.r3.s64 = ctx.r31.s64 + 17592;
	// addi r4,r10,-3400
	ctx.r4.s64 = ctx.r10.s64 + -3400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830171C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// addi r3,r9,4024
	ctx.r3.s64 = ctx.r9.s64 + 4024;
	// stw r11,17592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17592, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830171DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830171F0"))) PPC_WEAK_FUNC(sub_830171F0);
PPC_FUNC_IMPL(__imp__sub_830171F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17880
	ctx.r3.s64 = ctx.r31.s64 + 17880;
	// addi r4,r10,-3368
	ctx.r4.s64 = ctx.r10.s64 + -3368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301722C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8184
	ctx.r11.s64 = ctx.r11.s64 + -8184;
	// addi r3,r9,4048
	ctx.r3.s64 = ctx.r9.s64 + 4048;
	// stw r11,17880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017244;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017258"))) PPC_WEAK_FUNC(sub_83017258);
PPC_FUNC_IMPL(__imp__sub_83017258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18648
	ctx.r3.s64 = ctx.r31.s64 + 18648;
	// addi r4,r10,-3340
	ctx.r4.s64 = ctx.r10.s64 + -3340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017294;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8176
	ctx.r11.s64 = ctx.r11.s64 + -8176;
	// addi r3,r9,4072
	ctx.r3.s64 = ctx.r9.s64 + 4072;
	// stw r11,18648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18648, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830172AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830172C0"))) PPC_WEAK_FUNC(sub_830172C0);
PPC_FUNC_IMPL(__imp__sub_830172C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17912
	ctx.r3.s64 = ctx.r31.s64 + 17912;
	// addi r4,r10,-3308
	ctx.r4.s64 = ctx.r10.s64 + -3308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830172FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8168
	ctx.r11.s64 = ctx.r11.s64 + -8168;
	// addi r3,r9,4096
	ctx.r3.s64 = ctx.r9.s64 + 4096;
	// stw r11,17912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17912, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017314;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017328"))) PPC_WEAK_FUNC(sub_83017328);
PPC_FUNC_IMPL(__imp__sub_83017328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18072
	ctx.r3.s64 = ctx.r31.s64 + 18072;
	// addi r4,r10,-3272
	ctx.r4.s64 = ctx.r10.s64 + -3272;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017364;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8160
	ctx.r11.s64 = ctx.r11.s64 + -8160;
	// addi r3,r9,4120
	ctx.r3.s64 = ctx.r9.s64 + 4120;
	// stw r11,18072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301737C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017390"))) PPC_WEAK_FUNC(sub_83017390);
PPC_FUNC_IMPL(__imp__sub_83017390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18808
	ctx.r3.s64 = ctx.r31.s64 + 18808;
	// addi r4,r10,-3240
	ctx.r4.s64 = ctx.r10.s64 + -3240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830173CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8152
	ctx.r11.s64 = ctx.r11.s64 + -8152;
	// addi r3,r9,4144
	ctx.r3.s64 = ctx.r9.s64 + 4144;
	// stw r11,18808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830173E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830173F8"))) PPC_WEAK_FUNC(sub_830173F8);
PPC_FUNC_IMPL(__imp__sub_830173F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17176
	ctx.r3.s64 = ctx.r31.s64 + 17176;
	// addi r4,r10,-3212
	ctx.r4.s64 = ctx.r10.s64 + -3212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017434;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8144
	ctx.r11.s64 = ctx.r11.s64 + -8144;
	// addi r3,r9,4168
	ctx.r3.s64 = ctx.r9.s64 + 4168;
	// stw r11,17176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17176, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301744C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017460"))) PPC_WEAK_FUNC(sub_83017460);
PPC_FUNC_IMPL(__imp__sub_83017460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17240
	ctx.r3.s64 = ctx.r31.s64 + 17240;
	// addi r4,r10,-3180
	ctx.r4.s64 = ctx.r10.s64 + -3180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301749C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8136
	ctx.r11.s64 = ctx.r11.s64 + -8136;
	// addi r3,r9,4192
	ctx.r3.s64 = ctx.r9.s64 + 4192;
	// stw r11,17240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17240, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830174B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830174C8"))) PPC_WEAK_FUNC(sub_830174C8);
PPC_FUNC_IMPL(__imp__sub_830174C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17624
	ctx.r3.s64 = ctx.r31.s64 + 17624;
	// addi r4,r10,-3148
	ctx.r4.s64 = ctx.r10.s64 + -3148;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017504;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8128
	ctx.r11.s64 = ctx.r11.s64 + -8128;
	// addi r3,r9,4216
	ctx.r3.s64 = ctx.r9.s64 + 4216;
	// stw r11,17624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301751C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017530"))) PPC_WEAK_FUNC(sub_83017530);
PPC_FUNC_IMPL(__imp__sub_83017530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18712
	ctx.r3.s64 = ctx.r31.s64 + 18712;
	// addi r4,r10,-3116
	ctx.r4.s64 = ctx.r10.s64 + -3116;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301756C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8120
	ctx.r11.s64 = ctx.r11.s64 + -8120;
	// addi r3,r9,4240
	ctx.r3.s64 = ctx.r9.s64 + 4240;
	// stw r11,18712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017584;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017598"))) PPC_WEAK_FUNC(sub_83017598);
PPC_FUNC_IMPL(__imp__sub_83017598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18104
	ctx.r3.s64 = ctx.r31.s64 + 18104;
	// addi r4,r10,-3084
	ctx.r4.s64 = ctx.r10.s64 + -3084;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830175D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8112
	ctx.r11.s64 = ctx.r11.s64 + -8112;
	// addi r3,r9,4264
	ctx.r3.s64 = ctx.r9.s64 + 4264;
	// stw r11,18104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18104, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830175EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017600"))) PPC_WEAK_FUNC(sub_83017600);
PPC_FUNC_IMPL(__imp__sub_83017600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17496
	ctx.r3.s64 = ctx.r31.s64 + 17496;
	// addi r4,r10,-3052
	ctx.r4.s64 = ctx.r10.s64 + -3052;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301763C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8104
	ctx.r11.s64 = ctx.r11.s64 + -8104;
	// addi r3,r9,4288
	ctx.r3.s64 = ctx.r9.s64 + 4288;
	// stw r11,17496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17496, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017654;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017668"))) PPC_WEAK_FUNC(sub_83017668);
PPC_FUNC_IMPL(__imp__sub_83017668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17688
	ctx.r3.s64 = ctx.r31.s64 + 17688;
	// addi r4,r10,-3020
	ctx.r4.s64 = ctx.r10.s64 + -3020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830176A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8096
	ctx.r11.s64 = ctx.r11.s64 + -8096;
	// addi r3,r9,4312
	ctx.r3.s64 = ctx.r9.s64 + 4312;
	// stw r11,17688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830176BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830176D0"))) PPC_WEAK_FUNC(sub_830176D0);
PPC_FUNC_IMPL(__imp__sub_830176D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17976
	ctx.r3.s64 = ctx.r31.s64 + 17976;
	// addi r4,r10,-2988
	ctx.r4.s64 = ctx.r10.s64 + -2988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301770C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8088
	ctx.r11.s64 = ctx.r11.s64 + -8088;
	// addi r3,r9,4336
	ctx.r3.s64 = ctx.r9.s64 + 4336;
	// stw r11,17976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017724;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017738"))) PPC_WEAK_FUNC(sub_83017738);
PPC_FUNC_IMPL(__imp__sub_83017738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17560
	ctx.r3.s64 = ctx.r31.s64 + 17560;
	// addi r4,r10,-2952
	ctx.r4.s64 = ctx.r10.s64 + -2952;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017774;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8080
	ctx.r11.s64 = ctx.r11.s64 + -8080;
	// addi r3,r9,4360
	ctx.r3.s64 = ctx.r9.s64 + 4360;
	// stw r11,17560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301778C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830177A0"))) PPC_WEAK_FUNC(sub_830177A0);
PPC_FUNC_IMPL(__imp__sub_830177A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17784
	ctx.r3.s64 = ctx.r31.s64 + 17784;
	// addi r4,r10,-2920
	ctx.r4.s64 = ctx.r10.s64 + -2920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830177DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8072
	ctx.r11.s64 = ctx.r11.s64 + -8072;
	// addi r3,r9,4384
	ctx.r3.s64 = ctx.r9.s64 + 4384;
	// stw r11,17784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17784, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830177F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017808"))) PPC_WEAK_FUNC(sub_83017808);
PPC_FUNC_IMPL(__imp__sub_83017808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17400
	ctx.r3.s64 = ctx.r31.s64 + 17400;
	// addi r4,r10,-2892
	ctx.r4.s64 = ctx.r10.s64 + -2892;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017844;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8064
	ctx.r11.s64 = ctx.r11.s64 + -8064;
	// addi r3,r9,4408
	ctx.r3.s64 = ctx.r9.s64 + 4408;
	// stw r11,17400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301785C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017870"))) PPC_WEAK_FUNC(sub_83017870);
PPC_FUNC_IMPL(__imp__sub_83017870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17464
	ctx.r3.s64 = ctx.r31.s64 + 17464;
	// addi r4,r10,-2864
	ctx.r4.s64 = ctx.r10.s64 + -2864;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830178AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8056
	ctx.r11.s64 = ctx.r11.s64 + -8056;
	// addi r3,r9,4432
	ctx.r3.s64 = ctx.r9.s64 + 4432;
	// stw r11,17464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830178C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830178D8"))) PPC_WEAK_FUNC(sub_830178D8);
PPC_FUNC_IMPL(__imp__sub_830178D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17848
	ctx.r3.s64 = ctx.r31.s64 + 17848;
	// addi r4,r10,-2832
	ctx.r4.s64 = ctx.r10.s64 + -2832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017914;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8048
	ctx.r11.s64 = ctx.r11.s64 + -8048;
	// addi r3,r9,4456
	ctx.r3.s64 = ctx.r9.s64 + 4456;
	// stw r11,17848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17848, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301792C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017940"))) PPC_WEAK_FUNC(sub_83017940);
PPC_FUNC_IMPL(__imp__sub_83017940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17752
	ctx.r3.s64 = ctx.r31.s64 + 17752;
	// addi r4,r10,-2796
	ctx.r4.s64 = ctx.r10.s64 + -2796;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301797C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8040
	ctx.r11.s64 = ctx.r11.s64 + -8040;
	// addi r3,r9,4480
	ctx.r3.s64 = ctx.r9.s64 + 4480;
	// stw r11,17752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17752, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017994;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830179A8"))) PPC_WEAK_FUNC(sub_830179A8);
PPC_FUNC_IMPL(__imp__sub_830179A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18168
	ctx.r3.s64 = ctx.r31.s64 + 18168;
	// addi r4,r10,-2764
	ctx.r4.s64 = ctx.r10.s64 + -2764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830179E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8032
	ctx.r11.s64 = ctx.r11.s64 + -8032;
	// addi r3,r9,4504
	ctx.r3.s64 = ctx.r9.s64 + 4504;
	// stw r11,18168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18168, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830179FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017A10"))) PPC_WEAK_FUNC(sub_83017A10);
PPC_FUNC_IMPL(__imp__sub_83017A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,17528
	ctx.r3.s64 = ctx.r31.s64 + 17528;
	// addi r4,r10,-2728
	ctx.r4.s64 = ctx.r10.s64 + -2728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017A4C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8024
	ctx.r11.s64 = ctx.r11.s64 + -8024;
	// addi r3,r9,4528
	ctx.r3.s64 = ctx.r9.s64 + 4528;
	// stw r11,17528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17528, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017A64;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017A78"))) PPC_WEAK_FUNC(sub_83017A78);
PPC_FUNC_IMPL(__imp__sub_83017A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,18200
	ctx.r5.s64 = ctx.r11.s64 + 18200;
	// addi r3,r31,18616
	ctx.r3.s64 = ctx.r31.s64 + 18616;
	// addi r4,r10,-2696
	ctx.r4.s64 = ctx.r10.s64 + -2696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017AB4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-8016
	ctx.r11.s64 = ctx.r11.s64 + -8016;
	// addi r3,r9,4552
	ctx.r3.s64 = ctx.r9.s64 + 4552;
	// stw r11,18616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017ACC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017AE0"))) PPC_WEAK_FUNC(sub_83017AE0);
PPC_FUNC_IMPL(__imp__sub_83017AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18872
	ctx.r3.s64 = ctx.r31.s64 + 18872;
	// addi r4,r10,-2488
	ctx.r4.s64 = ctx.r10.s64 + -2488;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017B1C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2664
	ctx.r11.s64 = ctx.r11.s64 + -2664;
	// addi r3,r9,4576
	ctx.r3.s64 = ctx.r9.s64 + 4576;
	// stw r11,18872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18872, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017B34;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017B48"))) PPC_WEAK_FUNC(sub_83017B48);
PPC_FUNC_IMPL(__imp__sub_83017B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18840
	ctx.r3.s64 = ctx.r31.s64 + 18840;
	// addi r4,r10,-2464
	ctx.r4.s64 = ctx.r10.s64 + -2464;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,616
	ctx.r6.s64 = 616;
	// bl 0x82b38290
	ctx.lr = 0x83017B84;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2572
	ctx.r11.s64 = ctx.r11.s64 + -2572;
	// addi r3,r9,4600
	ctx.r3.s64 = ctx.r9.s64 + 4600;
	// stw r11,18840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017B9C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017BB0"))) PPC_WEAK_FUNC(sub_83017BB0);
PPC_FUNC_IMPL(__imp__sub_83017BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18904
	ctx.r3.s64 = ctx.r31.s64 + 18904;
	// addi r4,r10,-2340
	ctx.r4.s64 = ctx.r10.s64 + -2340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017BEC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2436
	ctx.r11.s64 = ctx.r11.s64 + -2436;
	// addi r3,r9,4624
	ctx.r3.s64 = ctx.r9.s64 + 4624;
	// stw r11,18904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017C04;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017C18"))) PPC_WEAK_FUNC(sub_83017C18);
PPC_FUNC_IMPL(__imp__sub_83017C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18936
	ctx.r3.s64 = ctx.r31.s64 + 18936;
	// addi r4,r10,-2216
	ctx.r4.s64 = ctx.r10.s64 + -2216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017C54;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2316
	ctx.r11.s64 = ctx.r11.s64 + -2316;
	// addi r3,r9,4648
	ctx.r3.s64 = ctx.r9.s64 + 4648;
	// stw r11,18936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18936, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017C6C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017C80"))) PPC_WEAK_FUNC(sub_83017C80);
PPC_FUNC_IMPL(__imp__sub_83017C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,18968
	ctx.r3.s64 = ctx.r31.s64 + 18968;
	// addi r4,r10,-2092
	ctx.r4.s64 = ctx.r10.s64 + -2092;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017CBC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2188
	ctx.r11.s64 = ctx.r11.s64 + -2188;
	// addi r3,r9,4672
	ctx.r3.s64 = ctx.r9.s64 + 4672;
	// stw r11,18968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18968, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017CD4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017CE8"))) PPC_WEAK_FUNC(sub_83017CE8);
PPC_FUNC_IMPL(__imp__sub_83017CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19000
	ctx.r3.s64 = ctx.r31.s64 + 19000;
	// addi r4,r10,-1972
	ctx.r4.s64 = ctx.r10.s64 + -1972;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017D24;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-2068
	ctx.r11.s64 = ctx.r11.s64 + -2068;
	// addi r3,r9,4696
	ctx.r3.s64 = ctx.r9.s64 + 4696;
	// stw r11,19000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19000, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017D3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017D50"))) PPC_WEAK_FUNC(sub_83017D50);
PPC_FUNC_IMPL(__imp__sub_83017D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19032
	ctx.r3.s64 = ctx.r31.s64 + 19032;
	// addi r4,r10,-1856
	ctx.r4.s64 = ctx.r10.s64 + -1856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017D8C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1948
	ctx.r11.s64 = ctx.r11.s64 + -1948;
	// addi r3,r9,4720
	ctx.r3.s64 = ctx.r9.s64 + 4720;
	// stw r11,19032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19032, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017DA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017DB8"))) PPC_WEAK_FUNC(sub_83017DB8);
PPC_FUNC_IMPL(__imp__sub_83017DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19064
	ctx.r3.s64 = ctx.r31.s64 + 19064;
	// addi r4,r10,-1740
	ctx.r4.s64 = ctx.r10.s64 + -1740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017DF4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1832
	ctx.r11.s64 = ctx.r11.s64 + -1832;
	// addi r3,r9,4744
	ctx.r3.s64 = ctx.r9.s64 + 4744;
	// stw r11,19064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19064, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017E0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017E20"))) PPC_WEAK_FUNC(sub_83017E20);
PPC_FUNC_IMPL(__imp__sub_83017E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19096
	ctx.r3.s64 = ctx.r31.s64 + 19096;
	// addi r4,r10,-896
	ctx.r4.s64 = ctx.r10.s64 + -896;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017E5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1720
	ctx.r11.s64 = ctx.r11.s64 + -1720;
	// addi r3,r9,4768
	ctx.r3.s64 = ctx.r9.s64 + 4768;
	// stw r11,19096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19096, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017E74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017E88"))) PPC_WEAK_FUNC(sub_83017E88);
PPC_FUNC_IMPL(__imp__sub_83017E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19096
	ctx.r5.s64 = ctx.r11.s64 + 19096;
	// addi r3,r31,19224
	ctx.r3.s64 = ctx.r31.s64 + 19224;
	// addi r4,r10,-876
	ctx.r4.s64 = ctx.r10.s64 + -876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017EC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1628
	ctx.r11.s64 = ctx.r11.s64 + -1628;
	// addi r3,r9,4792
	ctx.r3.s64 = ctx.r9.s64 + 4792;
	// stw r11,19224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017EDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017EF0"))) PPC_WEAK_FUNC(sub_83017EF0);
PPC_FUNC_IMPL(__imp__sub_83017EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19096
	ctx.r5.s64 = ctx.r11.s64 + 19096;
	// addi r3,r31,19192
	ctx.r3.s64 = ctx.r31.s64 + 19192;
	// addi r4,r10,-852
	ctx.r4.s64 = ctx.r10.s64 + -852;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017F2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1528
	ctx.r11.s64 = ctx.r11.s64 + -1528;
	// addi r3,r9,4816
	ctx.r3.s64 = ctx.r9.s64 + 4816;
	// stw r11,19192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017F44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017F58"))) PPC_WEAK_FUNC(sub_83017F58);
PPC_FUNC_IMPL(__imp__sub_83017F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19096
	ctx.r5.s64 = ctx.r11.s64 + 19096;
	// addi r3,r31,19160
	ctx.r3.s64 = ctx.r31.s64 + 19160;
	// addi r4,r10,-828
	ctx.r4.s64 = ctx.r10.s64 + -828;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017F94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1448
	ctx.r11.s64 = ctx.r11.s64 + -1448;
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// stw r11,19160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83017FAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017FC0"))) PPC_WEAK_FUNC(sub_83017FC0);
PPC_FUNC_IMPL(__imp__sub_83017FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19096
	ctx.r5.s64 = ctx.r11.s64 + 19096;
	// addi r3,r31,19128
	ctx.r3.s64 = ctx.r31.s64 + 19128;
	// addi r4,r10,-804
	ctx.r4.s64 = ctx.r10.s64 + -804;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83017FFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-1368
	ctx.r11.s64 = ctx.r11.s64 + -1368;
	// addi r3,r9,4864
	ctx.r3.s64 = ctx.r9.s64 + 4864;
	// stw r11,19128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19128, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018014;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018028"))) PPC_WEAK_FUNC(sub_83018028);
PPC_FUNC_IMPL(__imp__sub_83018028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19288
	ctx.r3.s64 = ctx.r31.s64 + 19288;
	// addi r4,r10,-336
	ctx.r4.s64 = ctx.r10.s64 + -336;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018064;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-780
	ctx.r11.s64 = ctx.r11.s64 + -780;
	// addi r3,r9,4888
	ctx.r3.s64 = ctx.r9.s64 + 4888;
	// stw r11,19288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301807C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018090"))) PPC_WEAK_FUNC(sub_83018090);
PPC_FUNC_IMPL(__imp__sub_83018090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19288
	ctx.r5.s64 = ctx.r11.s64 + 19288;
	// addi r3,r31,19256
	ctx.r3.s64 = ctx.r31.s64 + 19256;
	// addi r4,r10,-312
	ctx.r4.s64 = ctx.r10.s64 + -312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830180CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-680
	ctx.r11.s64 = ctx.r11.s64 + -680;
	// addi r3,r9,4912
	ctx.r3.s64 = ctx.r9.s64 + 4912;
	// stw r11,19256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19256, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830180E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830180F8"))) PPC_WEAK_FUNC(sub_830180F8);
PPC_FUNC_IMPL(__imp__sub_830180F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19288
	ctx.r5.s64 = ctx.r11.s64 + 19288;
	// addi r3,r31,19384
	ctx.r3.s64 = ctx.r31.s64 + 19384;
	// addi r4,r10,-284
	ctx.r4.s64 = ctx.r10.s64 + -284;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018134;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-580
	ctx.r11.s64 = ctx.r11.s64 + -580;
	// addi r3,r9,4936
	ctx.r3.s64 = ctx.r9.s64 + 4936;
	// stw r11,19384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301814C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018160"))) PPC_WEAK_FUNC(sub_83018160);
PPC_FUNC_IMPL(__imp__sub_83018160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19288
	ctx.r5.s64 = ctx.r11.s64 + 19288;
	// addi r3,r31,19352
	ctx.r3.s64 = ctx.r31.s64 + 19352;
	// addi r4,r10,-256
	ctx.r4.s64 = ctx.r10.s64 + -256;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301819C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-496
	ctx.r11.s64 = ctx.r11.s64 + -496;
	// addi r3,r9,4960
	ctx.r3.s64 = ctx.r9.s64 + 4960;
	// stw r11,19352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19352, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830181B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830181C8"))) PPC_WEAK_FUNC(sub_830181C8);
PPC_FUNC_IMPL(__imp__sub_830181C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19288
	ctx.r5.s64 = ctx.r11.s64 + 19288;
	// addi r3,r31,19320
	ctx.r3.s64 = ctx.r31.s64 + 19320;
	// addi r4,r10,-228
	ctx.r4.s64 = ctx.r10.s64 + -228;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018204;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-416
	ctx.r11.s64 = ctx.r11.s64 + -416;
	// addi r3,r9,4984
	ctx.r3.s64 = ctx.r9.s64 + 4984;
	// stw r11,19320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19320, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301821C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018230"))) PPC_WEAK_FUNC(sub_83018230);
PPC_FUNC_IMPL(__imp__sub_83018230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19416
	ctx.r3.s64 = ctx.r31.s64 + 19416;
	// addi r4,r10,-120
	ctx.r4.s64 = ctx.r10.s64 + -120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301826C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// addi r3,r9,5008
	ctx.r3.s64 = ctx.r9.s64 + 5008;
	// stw r11,19416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19416, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018284;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018298"))) PPC_WEAK_FUNC(sub_83018298);
PPC_FUNC_IMPL(__imp__sub_83018298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19448
	ctx.r3.s64 = ctx.r31.s64 + 19448;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830182D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// addi r3,r9,5032
	ctx.r3.s64 = ctx.r9.s64 + 5032;
	// stw r11,19448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19448, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830182EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018300"))) PPC_WEAK_FUNC(sub_83018300);
PPC_FUNC_IMPL(__imp__sub_83018300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19480
	ctx.r3.s64 = ctx.r31.s64 + 19480;
	// addi r4,r10,5548
	ctx.r4.s64 = ctx.r10.s64 + 5548;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301833C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r3,r9,5056
	ctx.r3.s64 = ctx.r9.s64 + 5056;
	// stw r11,19480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19480, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018354;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018368"))) PPC_WEAK_FUNC(sub_83018368);
PPC_FUNC_IMPL(__imp__sub_83018368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19512
	ctx.r3.s64 = ctx.r31.s64 + 19512;
	// addi r4,r10,5648
	ctx.r4.s64 = ctx.r10.s64 + 5648;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830183A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5568
	ctx.r11.s64 = ctx.r11.s64 + 5568;
	// addi r3,r9,5080
	ctx.r3.s64 = ctx.r9.s64 + 5080;
	// stw r11,19512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830183BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830183D0"))) PPC_WEAK_FUNC(sub_830183D0);
PPC_FUNC_IMPL(__imp__sub_830183D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19544
	ctx.r3.s64 = ctx.r31.s64 + 19544;
	// addi r4,r10,5808
	ctx.r4.s64 = ctx.r10.s64 + 5808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301840C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5672
	ctx.r11.s64 = ctx.r11.s64 + 5672;
	// addi r3,r9,5104
	ctx.r3.s64 = ctx.r9.s64 + 5104;
	// stw r11,19544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018424;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018438"))) PPC_WEAK_FUNC(sub_83018438);
PPC_FUNC_IMPL(__imp__sub_83018438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19608
	ctx.r3.s64 = ctx.r31.s64 + 19608;
	// addi r4,r10,6908
	ctx.r4.s64 = ctx.r10.s64 + 6908;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018474;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5828
	ctx.r11.s64 = ctx.r11.s64 + 5828;
	// addi r3,r9,5128
	ctx.r3.s64 = ctx.r9.s64 + 5128;
	// stw r11,19608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19608, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301848C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830184A0"))) PPC_WEAK_FUNC(sub_830184A0);
PPC_FUNC_IMPL(__imp__sub_830184A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// addi r3,r31,19704
	ctx.r3.s64 = ctx.r31.s64 + 19704;
	// addi r4,r10,6924
	ctx.r4.s64 = ctx.r10.s64 + 6924;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830184DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,5924
	ctx.r11.s64 = ctx.r11.s64 + 5924;
	// addi r3,r9,5152
	ctx.r3.s64 = ctx.r9.s64 + 5152;
	// stw r11,19704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19704, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830184F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018508"))) PPC_WEAK_FUNC(sub_83018508);
PPC_FUNC_IMPL(__imp__sub_83018508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// addi r3,r31,19672
	ctx.r3.s64 = ctx.r31.s64 + 19672;
	// addi r4,r10,6948
	ctx.r4.s64 = ctx.r10.s64 + 6948;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018544;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6024
	ctx.r11.s64 = ctx.r11.s64 + 6024;
	// addi r3,r9,5176
	ctx.r3.s64 = ctx.r9.s64 + 5176;
	// stw r11,19672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19672, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301855C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018570"))) PPC_WEAK_FUNC(sub_83018570);
PPC_FUNC_IMPL(__imp__sub_83018570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// addi r3,r31,19576
	ctx.r3.s64 = ctx.r31.s64 + 19576;
	// addi r4,r10,6968
	ctx.r4.s64 = ctx.r10.s64 + 6968;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830185AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6104
	ctx.r11.s64 = ctx.r11.s64 + 6104;
	// addi r3,r9,5200
	ctx.r3.s64 = ctx.r9.s64 + 5200;
	// stw r11,19576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19576, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830185C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830185D8"))) PPC_WEAK_FUNC(sub_830185D8);
PPC_FUNC_IMPL(__imp__sub_830185D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19608
	ctx.r5.s64 = ctx.r11.s64 + 19608;
	// addi r3,r31,19640
	ctx.r3.s64 = ctx.r31.s64 + 19640;
	// addi r4,r10,6992
	ctx.r4.s64 = ctx.r10.s64 + 6992;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018614;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r3,r9,5224
	ctx.r3.s64 = ctx.r9.s64 + 5224;
	// stw r11,19640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19640, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301862C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018640"))) PPC_WEAK_FUNC(sub_83018640);
PPC_FUNC_IMPL(__imp__sub_83018640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,19768
	ctx.r3.s64 = ctx.r31.s64 + 19768;
	// addi r4,r10,7456
	ctx.r4.s64 = ctx.r10.s64 + 7456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301867C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7016
	ctx.r11.s64 = ctx.r11.s64 + 7016;
	// addi r3,r9,5248
	ctx.r3.s64 = ctx.r9.s64 + 5248;
	// stw r11,19768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19768, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018694;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830186A8"))) PPC_WEAK_FUNC(sub_830186A8);
PPC_FUNC_IMPL(__imp__sub_830186A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19768
	ctx.r5.s64 = ctx.r11.s64 + 19768;
	// addi r3,r31,19800
	ctx.r3.s64 = ctx.r31.s64 + 19800;
	// addi r4,r10,7476
	ctx.r4.s64 = ctx.r10.s64 + 7476;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830186E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7112
	ctx.r11.s64 = ctx.r11.s64 + 7112;
	// addi r3,r9,5272
	ctx.r3.s64 = ctx.r9.s64 + 5272;
	// stw r11,19800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830186FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018710"))) PPC_WEAK_FUNC(sub_83018710);
PPC_FUNC_IMPL(__imp__sub_83018710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19768
	ctx.r5.s64 = ctx.r11.s64 + 19768;
	// addi r3,r31,19736
	ctx.r3.s64 = ctx.r31.s64 + 19736;
	// addi r4,r10,7504
	ctx.r4.s64 = ctx.r10.s64 + 7504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301874C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7212
	ctx.r11.s64 = ctx.r11.s64 + 7212;
	// addi r3,r9,5296
	ctx.r3.s64 = ctx.r9.s64 + 5296;
	// stw r11,19736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018764;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018778"))) PPC_WEAK_FUNC(sub_83018778);
PPC_FUNC_IMPL(__imp__sub_83018778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19768
	ctx.r5.s64 = ctx.r11.s64 + 19768;
	// addi r3,r31,19864
	ctx.r3.s64 = ctx.r31.s64 + 19864;
	// addi r4,r10,7528
	ctx.r4.s64 = ctx.r10.s64 + 7528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830187B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7296
	ctx.r11.s64 = ctx.r11.s64 + 7296;
	// addi r3,r9,5320
	ctx.r3.s64 = ctx.r9.s64 + 5320;
	// stw r11,19864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830187CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830187E0"))) PPC_WEAK_FUNC(sub_830187E0);
PPC_FUNC_IMPL(__imp__sub_830187E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,19768
	ctx.r5.s64 = ctx.r11.s64 + 19768;
	// addi r3,r31,19832
	ctx.r3.s64 = ctx.r31.s64 + 19832;
	// addi r4,r10,7552
	ctx.r4.s64 = ctx.r10.s64 + 7552;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301881C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7376
	ctx.r11.s64 = ctx.r11.s64 + 7376;
	// addi r3,r9,5344
	ctx.r3.s64 = ctx.r9.s64 + 5344;
	// stw r11,19832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018834;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018848"))) PPC_WEAK_FUNC(sub_83018848);
PPC_FUNC_IMPL(__imp__sub_83018848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20344
	ctx.r3.s64 = ctx.r31.s64 + 20344;
	// addi r4,r10,10744
	ctx.r4.s64 = ctx.r10.s64 + 10744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018884;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7580
	ctx.r11.s64 = ctx.r11.s64 + 7580;
	// addi r3,r9,5368
	ctx.r3.s64 = ctx.r9.s64 + 5368;
	// stw r11,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301889C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830188B0"))) PPC_WEAK_FUNC(sub_830188B0);
PPC_FUNC_IMPL(__imp__sub_830188B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,19960
	ctx.r3.s64 = ctx.r31.s64 + 19960;
	// addi r4,r10,10764
	ctx.r4.s64 = ctx.r10.s64 + 10764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830188EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7664
	ctx.r11.s64 = ctx.r11.s64 + 7664;
	// addi r3,r9,5392
	ctx.r3.s64 = ctx.r9.s64 + 5392;
	// stw r11,19960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018904;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018918"))) PPC_WEAK_FUNC(sub_83018918);
PPC_FUNC_IMPL(__imp__sub_83018918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20504
	ctx.r3.s64 = ctx.r31.s64 + 20504;
	// addi r4,r10,10792
	ctx.r4.s64 = ctx.r10.s64 + 10792;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018954;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7744
	ctx.r11.s64 = ctx.r11.s64 + 7744;
	// addi r3,r9,5416
	ctx.r3.s64 = ctx.r9.s64 + 5416;
	// stw r11,20504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20504, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301896C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018980"))) PPC_WEAK_FUNC(sub_83018980);
PPC_FUNC_IMPL(__imp__sub_83018980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,19928
	ctx.r3.s64 = ctx.r31.s64 + 19928;
	// addi r4,r10,10820
	ctx.r4.s64 = ctx.r10.s64 + 10820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830189BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7824
	ctx.r11.s64 = ctx.r11.s64 + 7824;
	// addi r3,r9,5440
	ctx.r3.s64 = ctx.r9.s64 + 5440;
	// stw r11,19928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830189D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830189E8"))) PPC_WEAK_FUNC(sub_830189E8);
PPC_FUNC_IMPL(__imp__sub_830189E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20632
	ctx.r3.s64 = ctx.r31.s64 + 20632;
	// addi r4,r10,10848
	ctx.r4.s64 = ctx.r10.s64 + 10848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018A24;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7904
	ctx.r11.s64 = ctx.r11.s64 + 7904;
	// addi r3,r9,5464
	ctx.r3.s64 = ctx.r9.s64 + 5464;
	// stw r11,20632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20632, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018A3C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018A50"))) PPC_WEAK_FUNC(sub_83018A50);
PPC_FUNC_IMPL(__imp__sub_83018A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20472
	ctx.r3.s64 = ctx.r31.s64 + 20472;
	// addi r4,r10,10876
	ctx.r4.s64 = ctx.r10.s64 + 10876;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018A8C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,7984
	ctx.r11.s64 = ctx.r11.s64 + 7984;
	// addi r3,r9,5488
	ctx.r3.s64 = ctx.r9.s64 + 5488;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018AA4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018AB8"))) PPC_WEAK_FUNC(sub_83018AB8);
PPC_FUNC_IMPL(__imp__sub_83018AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20280
	ctx.r3.s64 = ctx.r31.s64 + 20280;
	// addi r4,r10,10904
	ctx.r4.s64 = ctx.r10.s64 + 10904;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018AF4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8064
	ctx.r11.s64 = ctx.r11.s64 + 8064;
	// addi r3,r9,5512
	ctx.r3.s64 = ctx.r9.s64 + 5512;
	// stw r11,20280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20280, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018B0C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018B20"))) PPC_WEAK_FUNC(sub_83018B20);
PPC_FUNC_IMPL(__imp__sub_83018B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20184
	ctx.r3.s64 = ctx.r31.s64 + 20184;
	// addi r4,r10,10932
	ctx.r4.s64 = ctx.r10.s64 + 10932;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018B5C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8144
	ctx.r11.s64 = ctx.r11.s64 + 8144;
	// addi r3,r9,5536
	ctx.r3.s64 = ctx.r9.s64 + 5536;
	// stw r11,20184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20184, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018B74;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018B88"))) PPC_WEAK_FUNC(sub_83018B88);
PPC_FUNC_IMPL(__imp__sub_83018B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20120
	ctx.r3.s64 = ctx.r31.s64 + 20120;
	// addi r4,r10,10960
	ctx.r4.s64 = ctx.r10.s64 + 10960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018BC4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8224
	ctx.r11.s64 = ctx.r11.s64 + 8224;
	// addi r3,r9,5560
	ctx.r3.s64 = ctx.r9.s64 + 5560;
	// stw r11,20120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018BDC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018BF0"))) PPC_WEAK_FUNC(sub_83018BF0);
PPC_FUNC_IMPL(__imp__sub_83018BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,19896
	ctx.r3.s64 = ctx.r31.s64 + 19896;
	// addi r4,r10,10988
	ctx.r4.s64 = ctx.r10.s64 + 10988;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018C2C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8304
	ctx.r11.s64 = ctx.r11.s64 + 8304;
	// addi r3,r9,5584
	ctx.r3.s64 = ctx.r9.s64 + 5584;
	// stw r11,19896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19896, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018C44;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018C58"))) PPC_WEAK_FUNC(sub_83018C58);
PPC_FUNC_IMPL(__imp__sub_83018C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20440
	ctx.r3.s64 = ctx.r31.s64 + 20440;
	// addi r4,r10,11016
	ctx.r4.s64 = ctx.r10.s64 + 11016;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018C94;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8384
	ctx.r11.s64 = ctx.r11.s64 + 8384;
	// addi r3,r9,5608
	ctx.r3.s64 = ctx.r9.s64 + 5608;
	// stw r11,20440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20440, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018CAC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018CC0"))) PPC_WEAK_FUNC(sub_83018CC0);
PPC_FUNC_IMPL(__imp__sub_83018CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20152
	ctx.r3.s64 = ctx.r31.s64 + 20152;
	// addi r4,r10,11044
	ctx.r4.s64 = ctx.r10.s64 + 11044;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018CFC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8464
	ctx.r11.s64 = ctx.r11.s64 + 8464;
	// addi r3,r9,5632
	ctx.r3.s64 = ctx.r9.s64 + 5632;
	// stw r11,20152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20152, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018D14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018D28"))) PPC_WEAK_FUNC(sub_83018D28);
PPC_FUNC_IMPL(__imp__sub_83018D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20088
	ctx.r3.s64 = ctx.r31.s64 + 20088;
	// addi r4,r10,11072
	ctx.r4.s64 = ctx.r10.s64 + 11072;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018D64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// addi r3,r9,5656
	ctx.r3.s64 = ctx.r9.s64 + 5656;
	// stw r11,20088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20088, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018D7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018D90"))) PPC_WEAK_FUNC(sub_83018D90);
PPC_FUNC_IMPL(__imp__sub_83018D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20056
	ctx.r3.s64 = ctx.r31.s64 + 20056;
	// addi r4,r10,11100
	ctx.r4.s64 = ctx.r10.s64 + 11100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018DCC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8624
	ctx.r11.s64 = ctx.r11.s64 + 8624;
	// addi r3,r9,5680
	ctx.r3.s64 = ctx.r9.s64 + 5680;
	// stw r11,20056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018DE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018DF8"))) PPC_WEAK_FUNC(sub_83018DF8);
PPC_FUNC_IMPL(__imp__sub_83018DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20376
	ctx.r3.s64 = ctx.r31.s64 + 20376;
	// addi r4,r10,11128
	ctx.r4.s64 = ctx.r10.s64 + 11128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018E34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8704
	ctx.r11.s64 = ctx.r11.s64 + 8704;
	// addi r3,r9,5704
	ctx.r3.s64 = ctx.r9.s64 + 5704;
	// stw r11,20376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018E4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018E60"))) PPC_WEAK_FUNC(sub_83018E60);
PPC_FUNC_IMPL(__imp__sub_83018E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20312
	ctx.r3.s64 = ctx.r31.s64 + 20312;
	// addi r4,r10,11156
	ctx.r4.s64 = ctx.r10.s64 + 11156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018E9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8784
	ctx.r11.s64 = ctx.r11.s64 + 8784;
	// addi r3,r9,5728
	ctx.r3.s64 = ctx.r9.s64 + 5728;
	// stw r11,20312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20312, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018EB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018EC8"))) PPC_WEAK_FUNC(sub_83018EC8);
PPC_FUNC_IMPL(__imp__sub_83018EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20248
	ctx.r3.s64 = ctx.r31.s64 + 20248;
	// addi r4,r10,11184
	ctx.r4.s64 = ctx.r10.s64 + 11184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018F04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8864
	ctx.r11.s64 = ctx.r11.s64 + 8864;
	// addi r3,r9,5752
	ctx.r3.s64 = ctx.r9.s64 + 5752;
	// stw r11,20248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20248, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018F1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018F30"))) PPC_WEAK_FUNC(sub_83018F30);
PPC_FUNC_IMPL(__imp__sub_83018F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20408
	ctx.r3.s64 = ctx.r31.s64 + 20408;
	// addi r4,r10,11212
	ctx.r4.s64 = ctx.r10.s64 + 11212;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018F6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,8944
	ctx.r11.s64 = ctx.r11.s64 + 8944;
	// addi r3,r9,5776
	ctx.r3.s64 = ctx.r9.s64 + 5776;
	// stw r11,20408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018F84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018F98"))) PPC_WEAK_FUNC(sub_83018F98);
PPC_FUNC_IMPL(__imp__sub_83018F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,19992
	ctx.r3.s64 = ctx.r31.s64 + 19992;
	// addi r4,r10,11240
	ctx.r4.s64 = ctx.r10.s64 + 11240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83018FD4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9024
	ctx.r11.s64 = ctx.r11.s64 + 9024;
	// addi r3,r9,5800
	ctx.r3.s64 = ctx.r9.s64 + 5800;
	// stw r11,19992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83018FEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019000"))) PPC_WEAK_FUNC(sub_83019000);
PPC_FUNC_IMPL(__imp__sub_83019000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20216
	ctx.r3.s64 = ctx.r31.s64 + 20216;
	// addi r4,r10,11268
	ctx.r4.s64 = ctx.r10.s64 + 11268;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301903C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// addi r3,r9,5824
	ctx.r3.s64 = ctx.r9.s64 + 5824;
	// stw r11,20216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20216, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019054;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019068"))) PPC_WEAK_FUNC(sub_83019068);
PPC_FUNC_IMPL(__imp__sub_83019068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20536
	ctx.r3.s64 = ctx.r31.s64 + 20536;
	// addi r4,r10,11296
	ctx.r4.s64 = ctx.r10.s64 + 11296;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830190A4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// addi r3,r9,5848
	ctx.r3.s64 = ctx.r9.s64 + 5848;
	// stw r11,20536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20536, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830190BC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830190D0"))) PPC_WEAK_FUNC(sub_830190D0);
PPC_FUNC_IMPL(__imp__sub_830190D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20600
	ctx.r3.s64 = ctx.r31.s64 + 20600;
	// addi r4,r10,11324
	ctx.r4.s64 = ctx.r10.s64 + 11324;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301910C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// addi r3,r9,5872
	ctx.r3.s64 = ctx.r9.s64 + 5872;
	// stw r11,20600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20600, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019124;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019138"))) PPC_WEAK_FUNC(sub_83019138);
PPC_FUNC_IMPL(__imp__sub_83019138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20568
	ctx.r3.s64 = ctx.r31.s64 + 20568;
	// addi r4,r10,11352
	ctx.r4.s64 = ctx.r10.s64 + 11352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019174;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9344
	ctx.r11.s64 = ctx.r11.s64 + 9344;
	// addi r3,r9,5896
	ctx.r3.s64 = ctx.r9.s64 + 5896;
	// stw r11,20568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20568, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301918C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830191A0"))) PPC_WEAK_FUNC(sub_830191A0);
PPC_FUNC_IMPL(__imp__sub_830191A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20344
	ctx.r5.s64 = ctx.r11.s64 + 20344;
	// addi r3,r31,20024
	ctx.r3.s64 = ctx.r31.s64 + 20024;
	// addi r4,r10,11380
	ctx.r4.s64 = ctx.r10.s64 + 11380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830191DC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,9424
	ctx.r11.s64 = ctx.r11.s64 + 9424;
	// addi r3,r9,5920
	ctx.r3.s64 = ctx.r9.s64 + 5920;
	// stw r11,20024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830191F4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019208"))) PPC_WEAK_FUNC(sub_83019208);
PPC_FUNC_IMPL(__imp__sub_83019208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20664
	ctx.r3.s64 = ctx.r31.s64 + 20664;
	// addi r4,r10,11516
	ctx.r4.s64 = ctx.r10.s64 + 11516;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019244;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11408
	ctx.r11.s64 = ctx.r11.s64 + 11408;
	// addi r3,r9,5944
	ctx.r3.s64 = ctx.r9.s64 + 5944;
	// stw r11,20664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20664, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301925C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019270"))) PPC_WEAK_FUNC(sub_83019270);
PPC_FUNC_IMPL(__imp__sub_83019270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20696
	ctx.r3.s64 = ctx.r31.s64 + 20696;
	// addi r4,r10,11616
	ctx.r4.s64 = ctx.r10.s64 + 11616;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830192AC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11536
	ctx.r11.s64 = ctx.r11.s64 + 11536;
	// addi r3,r9,5968
	ctx.r3.s64 = ctx.r9.s64 + 5968;
	// stw r11,20696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20696, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830192C4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830192D8"))) PPC_WEAK_FUNC(sub_830192D8);
PPC_FUNC_IMPL(__imp__sub_830192D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20760
	ctx.r3.s64 = ctx.r31.s64 + 20760;
	// addi r4,r10,12064
	ctx.r4.s64 = ctx.r10.s64 + 12064;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019314;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11636
	ctx.r11.s64 = ctx.r11.s64 + 11636;
	// addi r3,r9,5992
	ctx.r3.s64 = ctx.r9.s64 + 5992;
	// stw r11,20760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301932C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019340"))) PPC_WEAK_FUNC(sub_83019340);
PPC_FUNC_IMPL(__imp__sub_83019340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,20760
	ctx.r5.s64 = ctx.r11.s64 + 20760;
	// addi r3,r31,20728
	ctx.r3.s64 = ctx.r31.s64 + 20728;
	// addi r4,r10,12080
	ctx.r4.s64 = ctx.r10.s64 + 12080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301937C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,11728
	ctx.r11.s64 = ctx.r11.s64 + 11728;
	// addi r3,r9,6016
	ctx.r3.s64 = ctx.r9.s64 + 6016;
	// stw r11,20728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20728, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019394;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830193A8"))) PPC_WEAK_FUNC(sub_830193A8);
PPC_FUNC_IMPL(__imp__sub_830193A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20792
	ctx.r3.s64 = ctx.r31.s64 + 20792;
	// addi r4,r10,12196
	ctx.r4.s64 = ctx.r10.s64 + 12196;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830193E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12100
	ctx.r11.s64 = ctx.r11.s64 + 12100;
	// addi r3,r9,6040
	ctx.r3.s64 = ctx.r9.s64 + 6040;
	// stw r11,20792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20792, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830193FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019410"))) PPC_WEAK_FUNC(sub_83019410);
PPC_FUNC_IMPL(__imp__sub_83019410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20824
	ctx.r3.s64 = ctx.r31.s64 + 20824;
	// addi r4,r10,12308
	ctx.r4.s64 = ctx.r10.s64 + 12308;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301944C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12216
	ctx.r11.s64 = ctx.r11.s64 + 12216;
	// addi r3,r9,6064
	ctx.r3.s64 = ctx.r9.s64 + 6064;
	// stw r11,20824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019464;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019478"))) PPC_WEAK_FUNC(sub_83019478);
PPC_FUNC_IMPL(__imp__sub_83019478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20856
	ctx.r3.s64 = ctx.r31.s64 + 20856;
	// addi r4,r10,12424
	ctx.r4.s64 = ctx.r10.s64 + 12424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830194B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12328
	ctx.r11.s64 = ctx.r11.s64 + 12328;
	// addi r3,r9,6088
	ctx.r3.s64 = ctx.r9.s64 + 6088;
	// stw r11,20856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20856, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830194CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830194E0"))) PPC_WEAK_FUNC(sub_830194E0);
PPC_FUNC_IMPL(__imp__sub_830194E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r5,r11,14552
	ctx.r5.s64 = ctx.r11.s64 + 14552;
	// addi r3,r31,20888
	ctx.r3.s64 = ctx.r31.s64 + 20888;
	// addi r4,r10,12544
	ctx.r4.s64 = ctx.r10.s64 + 12544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301951C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12448
	ctx.r11.s64 = ctx.r11.s64 + 12448;
	// addi r3,r9,6112
	ctx.r3.s64 = ctx.r9.s64 + 6112;
	// stw r11,20888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20888, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019534;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019548"))) PPC_WEAK_FUNC(sub_83019548);
PPC_FUNC_IMPL(__imp__sub_83019548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20920
	ctx.r3.s64 = ctx.r31.s64 + 20920;
	// addi r4,r10,12652
	ctx.r4.s64 = ctx.r10.s64 + 12652;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019584;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12560
	ctx.r11.s64 = ctx.r11.s64 + 12560;
	// addi r3,r9,6136
	ctx.r3.s64 = ctx.r9.s64 + 6136;
	// stw r11,20920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20920, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301959C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830195B0"))) PPC_WEAK_FUNC(sub_830195B0);
PPC_FUNC_IMPL(__imp__sub_830195B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,20952
	ctx.r3.s64 = ctx.r31.s64 + 20952;
	// addi r4,r10,12764
	ctx.r4.s64 = ctx.r10.s64 + 12764;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830195EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12672
	ctx.r11.s64 = ctx.r11.s64 + 12672;
	// addi r3,r9,6160
	ctx.r3.s64 = ctx.r9.s64 + 6160;
	// stw r11,20952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20952, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019604;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019618"))) PPC_WEAK_FUNC(sub_83019618);
PPC_FUNC_IMPL(__imp__sub_83019618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22808
	ctx.r3.s64 = ctx.r31.s64 + 22808;
	// addi r4,r10,30720
	ctx.r4.s64 = ctx.r10.s64 + 30720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019654;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12784
	ctx.r11.s64 = ctx.r11.s64 + 12784;
	// addi r3,r9,6184
	ctx.r3.s64 = ctx.r9.s64 + 6184;
	// stw r11,22808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22808, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301966C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019680"))) PPC_WEAK_FUNC(sub_83019680);
PPC_FUNC_IMPL(__imp__sub_83019680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23800
	ctx.r3.s64 = ctx.r31.s64 + 23800;
	// addi r4,r10,30740
	ctx.r4.s64 = ctx.r10.s64 + 30740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830196BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12876
	ctx.r11.s64 = ctx.r11.s64 + 12876;
	// addi r3,r9,6208
	ctx.r3.s64 = ctx.r9.s64 + 6208;
	// stw r11,23800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23800, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830196D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830196E8"))) PPC_WEAK_FUNC(sub_830196E8);
PPC_FUNC_IMPL(__imp__sub_830196E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25048
	ctx.r3.s64 = ctx.r31.s64 + 25048;
	// addi r4,r10,30760
	ctx.r4.s64 = ctx.r10.s64 + 30760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019724;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,12960
	ctx.r11.s64 = ctx.r11.s64 + 12960;
	// addi r3,r9,6232
	ctx.r3.s64 = ctx.r9.s64 + 6232;
	// stw r11,25048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25048, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301973C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019750"))) PPC_WEAK_FUNC(sub_83019750);
PPC_FUNC_IMPL(__imp__sub_83019750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25624
	ctx.r3.s64 = ctx.r31.s64 + 25624;
	// addi r4,r10,30780
	ctx.r4.s64 = ctx.r10.s64 + 30780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301978C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13040
	ctx.r11.s64 = ctx.r11.s64 + 13040;
	// addi r3,r9,6256
	ctx.r3.s64 = ctx.r9.s64 + 6256;
	// stw r11,25624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25624, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830197A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830197B8"))) PPC_WEAK_FUNC(sub_830197B8);
PPC_FUNC_IMPL(__imp__sub_830197B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22296
	ctx.r3.s64 = ctx.r31.s64 + 22296;
	// addi r4,r10,30800
	ctx.r4.s64 = ctx.r10.s64 + 30800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830197F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13120
	ctx.r11.s64 = ctx.r11.s64 + 13120;
	// addi r3,r9,6280
	ctx.r3.s64 = ctx.r9.s64 + 6280;
	// stw r11,22296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22296, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301980C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019820"))) PPC_WEAK_FUNC(sub_83019820);
PPC_FUNC_IMPL(__imp__sub_83019820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26616
	ctx.r3.s64 = ctx.r31.s64 + 26616;
	// addi r4,r10,30820
	ctx.r4.s64 = ctx.r10.s64 + 30820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301985C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13200
	ctx.r11.s64 = ctx.r11.s64 + 13200;
	// addi r3,r9,6304
	ctx.r3.s64 = ctx.r9.s64 + 6304;
	// stw r11,26616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019874;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019888"))) PPC_WEAK_FUNC(sub_83019888);
PPC_FUNC_IMPL(__imp__sub_83019888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22488
	ctx.r3.s64 = ctx.r31.s64 + 22488;
	// addi r4,r10,30840
	ctx.r4.s64 = ctx.r10.s64 + 30840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830198C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13280
	ctx.r11.s64 = ctx.r11.s64 + 13280;
	// addi r3,r9,6328
	ctx.r3.s64 = ctx.r9.s64 + 6328;
	// stw r11,22488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830198DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198F0"))) PPC_WEAK_FUNC(sub_830198F0);
PPC_FUNC_IMPL(__imp__sub_830198F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25400
	ctx.r3.s64 = ctx.r31.s64 + 25400;
	// addi r4,r10,30860
	ctx.r4.s64 = ctx.r10.s64 + 30860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301992C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13360
	ctx.r11.s64 = ctx.r11.s64 + 13360;
	// addi r3,r9,6352
	ctx.r3.s64 = ctx.r9.s64 + 6352;
	// stw r11,25400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019944;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019958"))) PPC_WEAK_FUNC(sub_83019958);
PPC_FUNC_IMPL(__imp__sub_83019958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22712
	ctx.r3.s64 = ctx.r31.s64 + 22712;
	// addi r4,r10,30880
	ctx.r4.s64 = ctx.r10.s64 + 30880;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019994;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// addi r3,r9,6376
	ctx.r3.s64 = ctx.r9.s64 + 6376;
	// stw r11,22712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x830199AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830199C0"))) PPC_WEAK_FUNC(sub_830199C0);
PPC_FUNC_IMPL(__imp__sub_830199C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23928
	ctx.r3.s64 = ctx.r31.s64 + 23928;
	// addi r4,r10,30900
	ctx.r4.s64 = ctx.r10.s64 + 30900;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x830199FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13520
	ctx.r11.s64 = ctx.r11.s64 + 13520;
	// addi r3,r9,6400
	ctx.r3.s64 = ctx.r9.s64 + 6400;
	// stw r11,23928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23928, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019A14;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019A28"))) PPC_WEAK_FUNC(sub_83019A28);
PPC_FUNC_IMPL(__imp__sub_83019A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24056
	ctx.r3.s64 = ctx.r31.s64 + 24056;
	// addi r4,r10,30920
	ctx.r4.s64 = ctx.r10.s64 + 30920;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019A64;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13600
	ctx.r11.s64 = ctx.r11.s64 + 13600;
	// addi r3,r9,6424
	ctx.r3.s64 = ctx.r9.s64 + 6424;
	// stw r11,24056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24056, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019A7C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019A90"))) PPC_WEAK_FUNC(sub_83019A90);
PPC_FUNC_IMPL(__imp__sub_83019A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26712
	ctx.r3.s64 = ctx.r31.s64 + 26712;
	// addi r4,r10,30940
	ctx.r4.s64 = ctx.r10.s64 + 30940;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019ACC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// addi r3,r9,6448
	ctx.r3.s64 = ctx.r9.s64 + 6448;
	// stw r11,26712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26712, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019AE4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019AF8"))) PPC_WEAK_FUNC(sub_83019AF8);
PPC_FUNC_IMPL(__imp__sub_83019AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25208
	ctx.r3.s64 = ctx.r31.s64 + 25208;
	// addi r4,r10,30960
	ctx.r4.s64 = ctx.r10.s64 + 30960;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019B34;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13760
	ctx.r11.s64 = ctx.r11.s64 + 13760;
	// addi r3,r9,6472
	ctx.r3.s64 = ctx.r9.s64 + 6472;
	// stw r11,25208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25208, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019B4C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019B60"))) PPC_WEAK_FUNC(sub_83019B60);
PPC_FUNC_IMPL(__imp__sub_83019B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26488
	ctx.r3.s64 = ctx.r31.s64 + 26488;
	// addi r4,r10,30980
	ctx.r4.s64 = ctx.r10.s64 + 30980;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019B9C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13840
	ctx.r11.s64 = ctx.r11.s64 + 13840;
	// addi r3,r9,6496
	ctx.r3.s64 = ctx.r9.s64 + 6496;
	// stw r11,26488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26488, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019BB4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019BC8"))) PPC_WEAK_FUNC(sub_83019BC8);
PPC_FUNC_IMPL(__imp__sub_83019BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23224
	ctx.r3.s64 = ctx.r31.s64 + 23224;
	// addi r4,r10,31000
	ctx.r4.s64 = ctx.r10.s64 + 31000;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019C04;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,13920
	ctx.r11.s64 = ctx.r11.s64 + 13920;
	// addi r3,r9,6520
	ctx.r3.s64 = ctx.r9.s64 + 6520;
	// stw r11,23224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23224, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019C1C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019C30"))) PPC_WEAK_FUNC(sub_83019C30);
PPC_FUNC_IMPL(__imp__sub_83019C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24408
	ctx.r3.s64 = ctx.r31.s64 + 24408;
	// addi r4,r10,31020
	ctx.r4.s64 = ctx.r10.s64 + 31020;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019C6C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14000
	ctx.r11.s64 = ctx.r11.s64 + 14000;
	// addi r3,r9,6544
	ctx.r3.s64 = ctx.r9.s64 + 6544;
	// stw r11,24408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24408, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019C84;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019C98"))) PPC_WEAK_FUNC(sub_83019C98);
PPC_FUNC_IMPL(__imp__sub_83019C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,27160
	ctx.r3.s64 = ctx.r31.s64 + 27160;
	// addi r4,r10,31040
	ctx.r4.s64 = ctx.r10.s64 + 31040;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019CD4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14080
	ctx.r11.s64 = ctx.r11.s64 + 14080;
	// addi r3,r9,6568
	ctx.r3.s64 = ctx.r9.s64 + 6568;
	// stw r11,27160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019CEC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D00"))) PPC_WEAK_FUNC(sub_83019D00);
PPC_FUNC_IMPL(__imp__sub_83019D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23992
	ctx.r3.s64 = ctx.r31.s64 + 23992;
	// addi r4,r10,31060
	ctx.r4.s64 = ctx.r10.s64 + 31060;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019D3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14160
	ctx.r11.s64 = ctx.r11.s64 + 14160;
	// addi r3,r9,6592
	ctx.r3.s64 = ctx.r9.s64 + 6592;
	// stw r11,23992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23992, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019D54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D68"))) PPC_WEAK_FUNC(sub_83019D68);
PPC_FUNC_IMPL(__imp__sub_83019D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26200
	ctx.r3.s64 = ctx.r31.s64 + 26200;
	// addi r4,r10,31080
	ctx.r4.s64 = ctx.r10.s64 + 31080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019DA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14240
	ctx.r11.s64 = ctx.r11.s64 + 14240;
	// addi r3,r9,6616
	ctx.r3.s64 = ctx.r9.s64 + 6616;
	// stw r11,26200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26200, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019DBC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019DD0"))) PPC_WEAK_FUNC(sub_83019DD0);
PPC_FUNC_IMPL(__imp__sub_83019DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25816
	ctx.r3.s64 = ctx.r31.s64 + 25816;
	// addi r4,r10,31100
	ctx.r4.s64 = ctx.r10.s64 + 31100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019E0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14320
	ctx.r11.s64 = ctx.r11.s64 + 14320;
	// addi r3,r9,6640
	ctx.r3.s64 = ctx.r9.s64 + 6640;
	// stw r11,25816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25816, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019E24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019E38"))) PPC_WEAK_FUNC(sub_83019E38);
PPC_FUNC_IMPL(__imp__sub_83019E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21112
	ctx.r3.s64 = ctx.r31.s64 + 21112;
	// addi r4,r10,31120
	ctx.r4.s64 = ctx.r10.s64 + 31120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019E74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14400
	ctx.r11.s64 = ctx.r11.s64 + 14400;
	// addi r3,r9,6664
	ctx.r3.s64 = ctx.r9.s64 + 6664;
	// stw r11,21112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21112, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019E8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019EA0"))) PPC_WEAK_FUNC(sub_83019EA0);
PPC_FUNC_IMPL(__imp__sub_83019EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24760
	ctx.r3.s64 = ctx.r31.s64 + 24760;
	// addi r4,r10,31140
	ctx.r4.s64 = ctx.r10.s64 + 31140;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019EDC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14480
	ctx.r11.s64 = ctx.r11.s64 + 14480;
	// addi r3,r9,6688
	ctx.r3.s64 = ctx.r9.s64 + 6688;
	// stw r11,24760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24760, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019EF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019F08"))) PPC_WEAK_FUNC(sub_83019F08);
PPC_FUNC_IMPL(__imp__sub_83019F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26776
	ctx.r3.s64 = ctx.r31.s64 + 26776;
	// addi r4,r10,31160
	ctx.r4.s64 = ctx.r10.s64 + 31160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019F44;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14560
	ctx.r11.s64 = ctx.r11.s64 + 14560;
	// addi r3,r9,6712
	ctx.r3.s64 = ctx.r9.s64 + 6712;
	// stw r11,26776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26776, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019F5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019F70"))) PPC_WEAK_FUNC(sub_83019F70);
PPC_FUNC_IMPL(__imp__sub_83019F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23544
	ctx.r3.s64 = ctx.r31.s64 + 23544;
	// addi r4,r10,31180
	ctx.r4.s64 = ctx.r10.s64 + 31180;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x83019FAC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14640
	ctx.r11.s64 = ctx.r11.s64 + 14640;
	// addi r3,r9,6736
	ctx.r3.s64 = ctx.r9.s64 + 6736;
	// stw r11,23544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23544, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x83019FC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019FD8"))) PPC_WEAK_FUNC(sub_83019FD8);
PPC_FUNC_IMPL(__imp__sub_83019FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,27384
	ctx.r3.s64 = ctx.r31.s64 + 27384;
	// addi r4,r10,31200
	ctx.r4.s64 = ctx.r10.s64 + 31200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A014;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14720
	ctx.r11.s64 = ctx.r11.s64 + 14720;
	// addi r3,r9,6760
	ctx.r3.s64 = ctx.r9.s64 + 6760;
	// stw r11,27384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27384, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A02C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A040"))) PPC_WEAK_FUNC(sub_8301A040);
PPC_FUNC_IMPL(__imp__sub_8301A040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24120
	ctx.r3.s64 = ctx.r31.s64 + 24120;
	// addi r4,r10,31220
	ctx.r4.s64 = ctx.r10.s64 + 31220;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A07C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14800
	ctx.r11.s64 = ctx.r11.s64 + 14800;
	// addi r3,r9,6784
	ctx.r3.s64 = ctx.r9.s64 + 6784;
	// stw r11,24120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24120, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A094;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A0A8"))) PPC_WEAK_FUNC(sub_8301A0A8);
PPC_FUNC_IMPL(__imp__sub_8301A0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26232
	ctx.r3.s64 = ctx.r31.s64 + 26232;
	// addi r4,r10,31240
	ctx.r4.s64 = ctx.r10.s64 + 31240;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A0E4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14880
	ctx.r11.s64 = ctx.r11.s64 + 14880;
	// addi r3,r9,6808
	ctx.r3.s64 = ctx.r9.s64 + 6808;
	// stw r11,26232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26232, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A0FC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A110"))) PPC_WEAK_FUNC(sub_8301A110);
PPC_FUNC_IMPL(__imp__sub_8301A110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,27864
	ctx.r3.s64 = ctx.r31.s64 + 27864;
	// addi r4,r10,31260
	ctx.r4.s64 = ctx.r10.s64 + 31260;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A14C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,14960
	ctx.r11.s64 = ctx.r11.s64 + 14960;
	// addi r3,r9,6832
	ctx.r3.s64 = ctx.r9.s64 + 6832;
	// stw r11,27864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27864, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A164;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A178"))) PPC_WEAK_FUNC(sub_8301A178);
PPC_FUNC_IMPL(__imp__sub_8301A178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25080
	ctx.r3.s64 = ctx.r31.s64 + 25080;
	// addi r4,r10,31280
	ctx.r4.s64 = ctx.r10.s64 + 31280;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A1B4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15040
	ctx.r11.s64 = ctx.r11.s64 + 15040;
	// addi r3,r9,6856
	ctx.r3.s64 = ctx.r9.s64 + 6856;
	// stw r11,25080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25080, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A1CC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A1E0"))) PPC_WEAK_FUNC(sub_8301A1E0);
PPC_FUNC_IMPL(__imp__sub_8301A1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25720
	ctx.r3.s64 = ctx.r31.s64 + 25720;
	// addi r4,r10,31300
	ctx.r4.s64 = ctx.r10.s64 + 31300;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A21C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15120
	ctx.r11.s64 = ctx.r11.s64 + 15120;
	// addi r3,r9,6880
	ctx.r3.s64 = ctx.r9.s64 + 6880;
	// stw r11,25720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25720, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A234;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A248"))) PPC_WEAK_FUNC(sub_8301A248);
PPC_FUNC_IMPL(__imp__sub_8301A248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22904
	ctx.r3.s64 = ctx.r31.s64 + 22904;
	// addi r4,r10,31320
	ctx.r4.s64 = ctx.r10.s64 + 31320;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A284;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15200
	ctx.r11.s64 = ctx.r11.s64 + 15200;
	// addi r3,r9,6904
	ctx.r3.s64 = ctx.r9.s64 + 6904;
	// stw r11,22904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22904, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A29C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A2B0"))) PPC_WEAK_FUNC(sub_8301A2B0);
PPC_FUNC_IMPL(__imp__sub_8301A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21880
	ctx.r3.s64 = ctx.r31.s64 + 21880;
	// addi r4,r10,31340
	ctx.r4.s64 = ctx.r10.s64 + 31340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A2EC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15280
	ctx.r11.s64 = ctx.r11.s64 + 15280;
	// addi r3,r9,6928
	ctx.r3.s64 = ctx.r9.s64 + 6928;
	// stw r11,21880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A304;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A318"))) PPC_WEAK_FUNC(sub_8301A318);
PPC_FUNC_IMPL(__imp__sub_8301A318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25464
	ctx.r3.s64 = ctx.r31.s64 + 25464;
	// addi r4,r10,31360
	ctx.r4.s64 = ctx.r10.s64 + 31360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A354;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// addi r3,r9,6952
	ctx.r3.s64 = ctx.r9.s64 + 6952;
	// stw r11,25464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25464, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A36C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A380"))) PPC_WEAK_FUNC(sub_8301A380);
PPC_FUNC_IMPL(__imp__sub_8301A380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22520
	ctx.r3.s64 = ctx.r31.s64 + 22520;
	// addi r4,r10,31380
	ctx.r4.s64 = ctx.r10.s64 + 31380;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A3BC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15440
	ctx.r11.s64 = ctx.r11.s64 + 15440;
	// addi r3,r9,6976
	ctx.r3.s64 = ctx.r9.s64 + 6976;
	// stw r11,22520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22520, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A3D4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A3E8"))) PPC_WEAK_FUNC(sub_8301A3E8);
PPC_FUNC_IMPL(__imp__sub_8301A3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,27736
	ctx.r3.s64 = ctx.r31.s64 + 27736;
	// addi r4,r10,31400
	ctx.r4.s64 = ctx.r10.s64 + 31400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A424;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15520
	ctx.r11.s64 = ctx.r11.s64 + 15520;
	// addi r3,r9,7000
	ctx.r3.s64 = ctx.r9.s64 + 7000;
	// stw r11,27736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27736, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A43C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A450"))) PPC_WEAK_FUNC(sub_8301A450);
PPC_FUNC_IMPL(__imp__sub_8301A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23832
	ctx.r3.s64 = ctx.r31.s64 + 23832;
	// addi r4,r10,31420
	ctx.r4.s64 = ctx.r10.s64 + 31420;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A48C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15600
	ctx.r11.s64 = ctx.r11.s64 + 15600;
	// addi r3,r9,7024
	ctx.r3.s64 = ctx.r9.s64 + 7024;
	// stw r11,23832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23832, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A4A4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A4B8"))) PPC_WEAK_FUNC(sub_8301A4B8);
PPC_FUNC_IMPL(__imp__sub_8301A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23288
	ctx.r3.s64 = ctx.r31.s64 + 23288;
	// addi r4,r10,31440
	ctx.r4.s64 = ctx.r10.s64 + 31440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A4F4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15680
	ctx.r11.s64 = ctx.r11.s64 + 15680;
	// addi r3,r9,7048
	ctx.r3.s64 = ctx.r9.s64 + 7048;
	// stw r11,23288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23288, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A50C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A520"))) PPC_WEAK_FUNC(sub_8301A520);
PPC_FUNC_IMPL(__imp__sub_8301A520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21560
	ctx.r3.s64 = ctx.r31.s64 + 21560;
	// addi r4,r10,31460
	ctx.r4.s64 = ctx.r10.s64 + 31460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A55C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15760
	ctx.r11.s64 = ctx.r11.s64 + 15760;
	// addi r3,r9,7072
	ctx.r3.s64 = ctx.r9.s64 + 7072;
	// stw r11,21560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21560, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A574;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A588"))) PPC_WEAK_FUNC(sub_8301A588);
PPC_FUNC_IMPL(__imp__sub_8301A588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24376
	ctx.r3.s64 = ctx.r31.s64 + 24376;
	// addi r4,r10,31480
	ctx.r4.s64 = ctx.r10.s64 + 31480;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A5C4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15840
	ctx.r11.s64 = ctx.r11.s64 + 15840;
	// addi r3,r9,7096
	ctx.r3.s64 = ctx.r9.s64 + 7096;
	// stw r11,24376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24376, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A5DC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A5F0"))) PPC_WEAK_FUNC(sub_8301A5F0);
PPC_FUNC_IMPL(__imp__sub_8301A5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23160
	ctx.r3.s64 = ctx.r31.s64 + 23160;
	// addi r4,r10,31500
	ctx.r4.s64 = ctx.r10.s64 + 31500;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A62C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,15920
	ctx.r11.s64 = ctx.r11.s64 + 15920;
	// addi r3,r9,7120
	ctx.r3.s64 = ctx.r9.s64 + 7120;
	// stw r11,23160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23160, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A644;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A658"))) PPC_WEAK_FUNC(sub_8301A658);
PPC_FUNC_IMPL(__imp__sub_8301A658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25304
	ctx.r3.s64 = ctx.r31.s64 + 25304;
	// addi r4,r10,31520
	ctx.r4.s64 = ctx.r10.s64 + 31520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A694;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// addi r3,r9,7144
	ctx.r3.s64 = ctx.r9.s64 + 7144;
	// stw r11,25304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25304, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A6AC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A6C0"))) PPC_WEAK_FUNC(sub_8301A6C0);
PPC_FUNC_IMPL(__imp__sub_8301A6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23512
	ctx.r3.s64 = ctx.r31.s64 + 23512;
	// addi r4,r10,31540
	ctx.r4.s64 = ctx.r10.s64 + 31540;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A6FC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// addi r3,r9,7168
	ctx.r3.s64 = ctx.r9.s64 + 7168;
	// stw r11,23512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23512, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A714;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A728"))) PPC_WEAK_FUNC(sub_8301A728);
PPC_FUNC_IMPL(__imp__sub_8301A728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21656
	ctx.r3.s64 = ctx.r31.s64 + 21656;
	// addi r4,r10,31560
	ctx.r4.s64 = ctx.r10.s64 + 31560;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A764;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16160
	ctx.r11.s64 = ctx.r11.s64 + 16160;
	// addi r3,r9,7192
	ctx.r3.s64 = ctx.r9.s64 + 7192;
	// stw r11,21656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21656, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A77C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A790"))) PPC_WEAK_FUNC(sub_8301A790);
PPC_FUNC_IMPL(__imp__sub_8301A790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,24824
	ctx.r3.s64 = ctx.r31.s64 + 24824;
	// addi r4,r10,31580
	ctx.r4.s64 = ctx.r10.s64 + 31580;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A7CC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16240
	ctx.r11.s64 = ctx.r11.s64 + 16240;
	// addi r3,r9,7216
	ctx.r3.s64 = ctx.r9.s64 + 7216;
	// stw r11,24824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24824, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A7E4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A7F8"))) PPC_WEAK_FUNC(sub_8301A7F8);
PPC_FUNC_IMPL(__imp__sub_8301A7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21400
	ctx.r3.s64 = ctx.r31.s64 + 21400;
	// addi r4,r10,31600
	ctx.r4.s64 = ctx.r10.s64 + 31600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A834;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16320
	ctx.r11.s64 = ctx.r11.s64 + 16320;
	// addi r3,r9,7240
	ctx.r3.s64 = ctx.r9.s64 + 7240;
	// stw r11,21400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21400, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A84C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A860"))) PPC_WEAK_FUNC(sub_8301A860);
PPC_FUNC_IMPL(__imp__sub_8301A860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26328
	ctx.r3.s64 = ctx.r31.s64 + 26328;
	// addi r4,r10,31620
	ctx.r4.s64 = ctx.r10.s64 + 31620;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A89C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16400
	ctx.r11.s64 = ctx.r11.s64 + 16400;
	// addi r3,r9,7264
	ctx.r3.s64 = ctx.r9.s64 + 7264;
	// stw r11,26328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A8B4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A8C8"))) PPC_WEAK_FUNC(sub_8301A8C8);
PPC_FUNC_IMPL(__imp__sub_8301A8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22616
	ctx.r3.s64 = ctx.r31.s64 + 22616;
	// addi r4,r10,31640
	ctx.r4.s64 = ctx.r10.s64 + 31640;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A904;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16480
	ctx.r11.s64 = ctx.r11.s64 + 16480;
	// addi r3,r9,7288
	ctx.r3.s64 = ctx.r9.s64 + 7288;
	// stw r11,22616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22616, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A91C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A930"))) PPC_WEAK_FUNC(sub_8301A930);
PPC_FUNC_IMPL(__imp__sub_8301A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26392
	ctx.r3.s64 = ctx.r31.s64 + 26392;
	// addi r4,r10,31660
	ctx.r4.s64 = ctx.r10.s64 + 31660;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A96C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16560
	ctx.r11.s64 = ctx.r11.s64 + 16560;
	// addi r3,r9,7312
	ctx.r3.s64 = ctx.r9.s64 + 7312;
	// stw r11,26392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26392, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A984;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A998"))) PPC_WEAK_FUNC(sub_8301A998);
PPC_FUNC_IMPL(__imp__sub_8301A998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,21688
	ctx.r3.s64 = ctx.r31.s64 + 21688;
	// addi r4,r10,31680
	ctx.r4.s64 = ctx.r10.s64 + 31680;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301A9D4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16640
	ctx.r11.s64 = ctx.r11.s64 + 16640;
	// addi r3,r9,7336
	ctx.r3.s64 = ctx.r9.s64 + 7336;
	// stw r11,21688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21688, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301A9EC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AA00"))) PPC_WEAK_FUNC(sub_8301AA00);
PPC_FUNC_IMPL(__imp__sub_8301AA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,28024
	ctx.r3.s64 = ctx.r31.s64 + 28024;
	// addi r4,r10,31700
	ctx.r4.s64 = ctx.r10.s64 + 31700;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AA3C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16720
	ctx.r11.s64 = ctx.r11.s64 + 16720;
	// addi r3,r9,7360
	ctx.r3.s64 = ctx.r9.s64 + 7360;
	// stw r11,28024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28024, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AA54;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AA68"))) PPC_WEAK_FUNC(sub_8301AA68);
PPC_FUNC_IMPL(__imp__sub_8301AA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25976
	ctx.r3.s64 = ctx.r31.s64 + 25976;
	// addi r4,r10,31720
	ctx.r4.s64 = ctx.r10.s64 + 31720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AAA4;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16800
	ctx.r11.s64 = ctx.r11.s64 + 16800;
	// addi r3,r9,7384
	ctx.r3.s64 = ctx.r9.s64 + 7384;
	// stw r11,25976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25976, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AABC;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AAD0"))) PPC_WEAK_FUNC(sub_8301AAD0);
PPC_FUNC_IMPL(__imp__sub_8301AAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22360
	ctx.r3.s64 = ctx.r31.s64 + 22360;
	// addi r4,r10,31740
	ctx.r4.s64 = ctx.r10.s64 + 31740;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AB0C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16880
	ctx.r11.s64 = ctx.r11.s64 + 16880;
	// addi r3,r9,7408
	ctx.r3.s64 = ctx.r9.s64 + 7408;
	// stw r11,22360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22360, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AB24;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AB38"))) PPC_WEAK_FUNC(sub_8301AB38);
PPC_FUNC_IMPL(__imp__sub_8301AB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26072
	ctx.r3.s64 = ctx.r31.s64 + 26072;
	// addi r4,r10,31760
	ctx.r4.s64 = ctx.r10.s64 + 31760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AB74;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,16960
	ctx.r11.s64 = ctx.r11.s64 + 16960;
	// addi r3,r9,7432
	ctx.r3.s64 = ctx.r9.s64 + 7432;
	// stw r11,26072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26072, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AB8C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ABA0"))) PPC_WEAK_FUNC(sub_8301ABA0);
PPC_FUNC_IMPL(__imp__sub_8301ABA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,26840
	ctx.r3.s64 = ctx.r31.s64 + 26840;
	// addi r4,r10,31780
	ctx.r4.s64 = ctx.r10.s64 + 31780;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301ABDC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17040
	ctx.r11.s64 = ctx.r11.s64 + 17040;
	// addi r3,r9,7456
	ctx.r3.s64 = ctx.r9.s64 + 7456;
	// stw r11,26840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26840, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301ABF4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AC08"))) PPC_WEAK_FUNC(sub_8301AC08);
PPC_FUNC_IMPL(__imp__sub_8301AC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,22328
	ctx.r3.s64 = ctx.r31.s64 + 22328;
	// addi r4,r10,31800
	ctx.r4.s64 = ctx.r10.s64 + 31800;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AC44;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17120
	ctx.r11.s64 = ctx.r11.s64 + 17120;
	// addi r3,r9,7480
	ctx.r3.s64 = ctx.r9.s64 + 7480;
	// stw r11,22328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22328, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AC5C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AC70"))) PPC_WEAK_FUNC(sub_8301AC70);
PPC_FUNC_IMPL(__imp__sub_8301AC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,23960
	ctx.r3.s64 = ctx.r31.s64 + 23960;
	// addi r4,r10,31820
	ctx.r4.s64 = ctx.r10.s64 + 31820;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301ACAC;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17200
	ctx.r11.s64 = ctx.r11.s64 + 17200;
	// addi r3,r9,7504
	ctx.r3.s64 = ctx.r9.s64 + 7504;
	// stw r11,23960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23960, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301ACC4;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301ACD8"))) PPC_WEAK_FUNC(sub_8301ACD8);
PPC_FUNC_IMPL(__imp__sub_8301ACD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,25880
	ctx.r3.s64 = ctx.r31.s64 + 25880;
	// addi r4,r10,31840
	ctx.r4.s64 = ctx.r10.s64 + 31840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AD14;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17280
	ctx.r11.s64 = ctx.r11.s64 + 17280;
	// addi r3,r9,7528
	ctx.r3.s64 = ctx.r9.s64 + 7528;
	// stw r11,25880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25880, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AD2C;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301AD40"))) PPC_WEAK_FUNC(sub_8301AD40);
PPC_FUNC_IMPL(__imp__sub_8301AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,27192
	ctx.r3.s64 = ctx.r31.s64 + 27192;
	// addi r4,r10,31860
	ctx.r4.s64 = ctx.r10.s64 + 31860;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,608
	ctx.r6.s64 = 608;
	// bl 0x82b38290
	ctx.lr = 0x8301AD7C;
	sub_82B38290(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-31996
	ctx.r9.s64 = -2096889856;
	// addi r11,r11,17360
	ctx.r11.s64 = ctx.r11.s64 + 17360;
	// addi r3,r9,7552
	ctx.r3.s64 = ctx.r9.s64 + 7552;
	// stw r11,27192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27192, ctx.r11.u32);
	// bl 0x82f06a08
	ctx.lr = 0x8301AD94;
	sub_82F06A08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}


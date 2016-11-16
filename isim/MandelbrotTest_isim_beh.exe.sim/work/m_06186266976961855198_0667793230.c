/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/bluelabuser/YODA_14-May_save/MandelbrotGen.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3776U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {240U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {307199, 0};
static unsigned int ng7[] = {1024U, 0U};
static unsigned int ng8[] = {319U, 0U};
static unsigned int ng9[] = {3856U, 0U};



static void Always_28_0(char *t0)
{
    char t8[8];
    char t32[8];
    char t37[8];
    char t42[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 4168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    if (t13 != 1U)
        goto LAB15;

LAB14:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB17:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB15:    t7 = (t8 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 1, t5, 32);
    t6 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);

LAB20:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 19, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB18:    xsi_set_current_line(47, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 1448);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng6)));
    memset(t32, 0, 8);
    t30 = (t23 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB23;

LAB22:    t31 = (t24 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t23) > *((unsigned int *)t24))
        goto LAB24;

LAB25:    t34 = (t32 + 4);
    t19 = *((unsigned int *)t34);
    t20 = (~(t19));
    t21 = *((unsigned int *)t32);
    t22 = (t21 & t20);
    t25 = (t22 != 0);
    if (t25 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(52, ng0);

LAB31:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;

LAB35:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB66;

LAB63:    if (t20 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t8) = 1;

LAB66:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB29:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(48, ng0);

LAB30:    xsi_set_current_line(49, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 19, 0LL);
    goto LAB29;

LAB34:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(53, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t23 = (t0 + 2728);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = (t0 + 2728);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 24, t30, 12, t34, 12);
    t35 = (t0 + 3368);
    xsi_vlogvar_assign_value(t35, t32, 0, 0, 24);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 12);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 24, t4, 12, t7, 12);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 24);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t7 = (t0 + 3688);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 12);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 12, t4, 12, t7, 12);
    t9 = (t0 + 3848);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 12);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 12, t4, 12, t5, 12);
    memset(t32, 0, 8);
    t6 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t6) != 0)
        goto LAB42;

LAB43:    t9 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB44;

LAB45:    memcpy(t48, t32, 8);

LAB46:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t48);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(69, ng0);

LAB62:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 24, t4, 12, t7, 12);
    t9 = (t0 + 3048);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 24);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_lshift(t8, 24, t4, 24, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 24);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t7 = (t0 + 2408);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 12, t8, 12, t10, 12);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t32, 0, 0, 12);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 12, t4, 12, t7, 12);
    t9 = (t0 + 1928);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 12, t8, 12, t23, 12);
    t24 = (t0 + 2728);
    xsi_vlogvar_assign_value(t24, t32, 0, 0, 12);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 12, t4, 12, t5, 12);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 12, 0LL);

LAB60:    goto LAB38;

LAB40:    *((unsigned int *)t32) = 1;
    goto LAB43;

LAB42:    t7 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    t10 = (t0 + 2568);
    t23 = (t10 + 56U);
    t24 = *((char **)t23);
    t30 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t31 = (t24 + 4);
    t33 = (t30 + 4);
    t20 = *((unsigned int *)t24);
    t21 = *((unsigned int *)t30);
    t22 = (t20 ^ t21);
    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t33);
    t27 = (t25 ^ t26);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t33);
    t39 = (t29 | t38);
    t40 = (~(t39));
    t41 = (t28 & t40);
    if (t41 != 0)
        goto LAB50;

LAB47:    if (t39 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t37) = 1;

LAB50:    memset(t42, 0, 8);
    t35 = (t37 + 4);
    t43 = *((unsigned int *)t35);
    t44 = (~(t43));
    t45 = *((unsigned int *)t37);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t35) != 0)
        goto LAB53;

LAB54:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t42);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = (t32 + 4);
    t53 = (t42 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t34 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t42) = 1;
    goto LAB54;

LAB53:    t36 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB54;

LAB55:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t32 + 4);
    t63 = (t42 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (~(t64));
    t66 = *((unsigned int *)t32);
    t67 = (t66 & t65);
    t68 = *((unsigned int *)t63);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (t70 & t69);
    t72 = (~(t67));
    t73 = (~(t71));
    t74 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t74 & t72);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & t73);
    goto LAB57;

LAB58:    xsi_set_current_line(61, ng0);

LAB61:    xsi_set_current_line(62, ng0);
    t82 = ((char*)((ng5)));
    t83 = (t0 + 1768);
    xsi_vlogvar_assign_value(t83, t82, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB65:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(78, ng0);

LAB70:    xsi_set_current_line(79, ng0);
    t23 = (t0 + 1928);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = (t0 + 2088);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 12, t30, 12, t34, 12);
    t35 = (t0 + 1928);
    xsi_vlogvar_assign_value(t35, t32, 0, 0, 12);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 12, t4, 12, t5, 12);
    t6 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB71;

LAB72:
LAB73:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 19, t4, 19, t5, 19);
    t6 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 19, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB69;

LAB71:    xsi_set_current_line(80, ng0);

LAB74:    xsi_set_current_line(81, ng0);
    t7 = (t0 + 2408);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t23 = (t0 + 2248);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 12, t10, 12, t30, 12);
    t31 = (t0 + 2408);
    xsi_vlogvar_assign_value(t31, t32, 0, 0, 12);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 12, t4, 12, t5, 12);
    t6 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB75;

LAB76:
LAB77:    goto LAB73;

LAB75:    xsi_set_current_line(84, ng0);

LAB78:    xsi_set_current_line(85, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 2408);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 12);
    goto LAB77;

}


extern void work_m_06186266976961855198_0667793230_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_06186266976961855198_0667793230", "isim/MandelbrotTest_isim_beh.exe.sim/work/m_06186266976961855198_0667793230.didat");
	xsi_register_executes(pe);
}

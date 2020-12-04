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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//Mac/Macintosh HD/Users/ammaralfaifi/projects/verilog/proj_201840840_06/proj/timer.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {9U, 0U};
static int ng3[] = {1, 0};



static void Cont_12_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_13_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 7416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1848U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB4:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    memset(t5, 0, 8);
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t17);
    t20 = (t18 | t19);
    if (t20 != 15U)
        goto LAB7;

LAB6:    if (*((unsigned int *)t17) == 0)
        goto LAB8;

LAB9:    t21 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    t61 = *((unsigned int *)t4);
    t62 = (~(t61));
    t63 = *((unsigned int *)t29);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t29) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t67, 8);

LAB22:    t68 = (t0 + 8672);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 15U;
    t74 = t73;
    t75 = (t3 + 4);
    t76 = *((unsigned int *)t3);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans(t68, 0, 3);
    t81 = (t0 + 8480);
    *((int *)t81) = 1;

LAB1:    return;
LAB5:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t2) = (t13 | t14);
    goto LAB4;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 1688U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t37 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 & 15U);
    if (t42 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t36) != 0)
        goto LAB25;

LAB26:    memset(t34, 0, 8);
    t44 = (t35 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t35);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t44) != 0)
        goto LAB29;

LAB30:    t51 = (t34 + 4);
    t52 = *((unsigned int *)t34);
    t53 = *((unsigned int *)t51);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB31;

LAB32:    t56 = *((unsigned int *)t34);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t51) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t34) > 0)
        goto LAB37;

LAB38:    memcpy(t33, t60, 8);

LAB39:    goto LAB15;

LAB16:    t65 = (t0 + 1848U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng3)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_minus(t67, 32, t66, 4, t65, 32);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t67, 32);
    goto LAB22;

LAB20:    memcpy(t3, t33, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB25:    t43 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t34) = 1;
    goto LAB30;

LAB29:    t50 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB30;

LAB31:    t55 = ((char*)((ng2)));
    goto LAB32;

LAB33:    t60 = ((char*)((ng1)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t33, 32, t55, 32, t60, 32);
    goto LAB39;

LAB37:    memcpy(t33, t55, 8);
    goto LAB39;

}

static void Cont_14_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t6[8];
    char t35[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 7664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1848U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB4:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 15U);
    memset(t5, 0, 8);
    t17 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t17);
    t20 = (t18 | t19);
    if (t20 != 15U)
        goto LAB7;

LAB6:    if (*((unsigned int *)t17) == 0)
        goto LAB8;

LAB9:    t21 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t29) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t42, 8);

LAB22:    t40 = (t0 + 8736);
    t43 = (t40 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 15U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t40, 0, 3);
    t55 = (t0 + 8496);
    *((int *)t55) = 1;

LAB1:    return;
LAB5:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t2) = (t13 | t14);
    goto LAB4;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 1688U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t34, 4, t33, 32);
    goto LAB15;

LAB16:    t40 = (t0 + 1688U);
    t41 = *((char **)t40);
    memcpy(t42, t41, 8);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB22;

LAB20:    memcpy(t3, t35, 8);
    goto LAB22;

}

static void Cont_15_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t2 = (t0 + 5048U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t32 = (t0 + 8800);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0);
    t45 = (t0 + 8512);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Cont_16_4(char *t0)
{
    char t5[8];
    char t32[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 8160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t34 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (~(t35));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t33) == 0)
        goto LAB7;

LAB9:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;

LAB10:    t41 = (t32 + 4);
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t32) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB12;

LAB11:    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    t52 = *((unsigned int *)t5);
    t53 = *((unsigned int *)t32);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t5 + 4);
    t56 = (t32 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB13;

LAB14:
LAB15:    t83 = (t0 + 8864);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t51 + 4);
    t91 = *((unsigned int *)t51);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 0);
    t96 = (t0 + 8528);
    *((int *)t96) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

LAB7:    *((unsigned int *)t32) = 1;
    goto LAB10;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t32) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB11;

LAB13:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t5 + 4);
    t66 = (t32 + 4);
    t67 = *((unsigned int *)t5);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t32);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB15;

}


extern void work_m_00000000001230339366_1678943863_init()
{
	static char *pe[] = {(void *)Cont_12_0,(void *)Cont_13_1,(void *)Cont_14_2,(void *)Cont_15_3,(void *)Cont_16_4};
	xsi_register_didat("work_m_00000000001230339366_1678943863", "isim/timer_isim_beh.exe.sim/work/m_00000000001230339366_1678943863.didat");
	xsi_register_executes(pe);
}

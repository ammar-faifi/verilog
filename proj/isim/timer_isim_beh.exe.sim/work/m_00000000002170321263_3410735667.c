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
static const char *ng0 = "C:/Users/samia/Desktop/C0E203/proj_201840840_06/proj/DISP7SEG.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {64U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {121U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {36U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {48U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {25U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {18U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {2U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {120U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {0U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {16U, 0U};
static int ng21[] = {10, 0};
static unsigned int ng22[] = {8U, 0U};
static int ng23[] = {11, 0};
static unsigned int ng24[] = {3U, 0U};
static int ng25[] = {12, 0};
static unsigned int ng26[] = {70U, 0U};
static int ng27[] = {13, 0};
static unsigned int ng28[] = {33U, 0U};
static int ng29[] = {14, 0};
static unsigned int ng30[] = {6U, 0U};
static unsigned int ng31[] = {14U, 0U};



static void Always_60_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t18[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t3) = t13;
    memset(t18, 0, 8);
    t7 = (t21 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB103;

LAB101:    if (*((unsigned int *)t7) == 0)
        goto LAB100;

LAB102:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;

LAB103:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t2, 7);
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);
    t17 = ((char*)((ng2)));
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 4);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    memset(t18, 0, 8);
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t21);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t29) == 0)
        goto LAB40;

LAB42:    t35 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t35) = 1;

LAB43:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t17, 7);
    t36 = (t0 + 1448);
    xsi_vlogvar_assign_value(t36, t16, 0, 0, 8);
    goto LAB39;

LAB9:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t14) == 0)
        goto LAB44;

LAB46:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB47:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t14) == 0)
        goto LAB48;

LAB50:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB51:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB13:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB55;

LAB53:    if (*((unsigned int *)t14) == 0)
        goto LAB52;

LAB54:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB55:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB15:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t14) == 0)
        goto LAB56;

LAB58:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB59:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB17:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t14) == 0)
        goto LAB60;

LAB62:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB63:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB19:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t14) == 0)
        goto LAB64;

LAB66:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB67:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB21:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB71;

LAB69:    if (*((unsigned int *)t14) == 0)
        goto LAB68;

LAB70:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB71:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB23:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t14) == 0)
        goto LAB72;

LAB74:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB75:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB25:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t14) == 0)
        goto LAB76;

LAB78:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB79:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB27:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB83;

LAB81:    if (*((unsigned int *)t14) == 0)
        goto LAB80;

LAB82:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB83:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB29:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t14) == 0)
        goto LAB84;

LAB86:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB87:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB31:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t14) == 0)
        goto LAB88;

LAB90:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB91:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB33:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t14) == 0)
        goto LAB92;

LAB94:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB95:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB35:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t21) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    memset(t18, 0, 8);
    t14 = (t21 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB99;

LAB97:    if (*((unsigned int *)t14) == 0)
        goto LAB96;

LAB98:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;

LAB99:    xsi_vlogtype_concat(t16, 8, 8, 2U, t18, 1, t3, 7);
    t19 = (t0 + 1448);
    xsi_vlogvar_assign_value(t19, t16, 0, 0, 8);
    goto LAB39;

LAB40:    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t18) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t18) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t18) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t18) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t18) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t18) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t18) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t18) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t18) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t18) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t18) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t18) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t18) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t18) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t18) = 1;
    goto LAB103;

}


extern void work_m_00000000002170321263_3410735667_init()
{
	static char *pe[] = {(void *)Always_60_0};
	xsi_register_didat("work_m_00000000002170321263_3410735667", "isim/timer_isim_beh.exe.sim/work/m_00000000002170321263_3410735667.didat");
	xsi_register_executes(pe);
}

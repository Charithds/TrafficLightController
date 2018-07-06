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
static const char *ng0 = "C:/Users/Charith/Documents/TrafficLight/TrafficLight/FSM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {24U, 0U};
static unsigned int ng4[] = {40U, 0U};
static unsigned int ng5[] = {73U, 0U};
static unsigned int ng6[] = {66U, 0U};
static unsigned int ng7[] = {68U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {2U, 0U};



static void Initial_52_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(52, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4064);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 7, 0LL);

LAB1:    return;
}

static void Always_63_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 5744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 4224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t18 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 32);
    if (t18 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(108, ng0);

LAB48:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB26:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 2704U);
    t10 = *((char **)t7);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(70, ng0);

LAB31:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB29:    goto LAB25;

LAB9:    xsi_set_current_line(75, ng0);

LAB32:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 3, 0LL);
    goto LAB25;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(79, ng0);

LAB33:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2544U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);

LAB38:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB36:    goto LAB25;

LAB15:    xsi_set_current_line(88, ng0);

LAB39:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 3, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(92, ng0);

LAB40:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2704U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(96, ng0);

LAB45:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB43:    goto LAB25;

LAB19:    xsi_set_current_line(101, ng0);

LAB46:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 3, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(105, ng0);

LAB47:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t2 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 3, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(67, ng0);

LAB30:    xsi_set_current_line(68, ng0);
    t16 = (t0 + 744);
    t17 = *((char **)t16);
    t16 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t16, t17, 0, 0, 3, 0LL);
    goto LAB29;

LAB34:    xsi_set_current_line(80, ng0);

LAB37:    xsi_set_current_line(81, ng0);
    t7 = (t0 + 1016);
    t8 = *((char **)t7);
    t7 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 3, 0LL);
    goto LAB36;

LAB41:    xsi_set_current_line(93, ng0);

LAB44:    xsi_set_current_line(94, ng0);
    t5 = (t0 + 1288);
    t7 = *((char **)t5);
    t5 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 3, 0LL);
    goto LAB43;

}

static void Always_116_2(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 5992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(134, ng0);

LAB24:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(124, ng0);

LAB9:    xsi_set_current_line(125, ng0);
    t11 = (t0 + 4384);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB20;

LAB17:    if (t20 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t15) = 1;

LAB20:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB8;

LAB12:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(129, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB16;

LAB19:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(131, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Always_140_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    int t12;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 6240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
    t4 = (t0 + 4224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t11 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 32);
    if (t11 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t6, 3, t5, 32);
    if (t12 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t11 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 32);
    if (t11 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(143, ng0);
    t7 = ((char*)((ng3)));
    t10 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 7, 0LL);
    goto LAB23;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 7, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 7, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 7, 0LL);
    goto LAB23;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 7, 0LL);
    goto LAB23;

}

static void Always_156_4(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t11;
    int t12;
    int t13;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    t3 = (t0 + 6488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 4384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 32);
    if (t12 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 744);
    t5 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t6, 3, t5, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 32);
    if (t12 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t6, 3, t5, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(158, ng0);

LAB24:    xsi_set_current_line(159, ng0);
    t7 = ((char*)((ng8)));
    memcpy(t10, t7, 8);
    t11 = (t0 + 4544);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 3, 0LL);
    goto LAB23;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    xsi_set_current_line(161, ng0);

LAB25:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng9)));
    memcpy(t10, t2, 8);
    t7 = (t0 + 4544);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 3, 0LL);
    goto LAB23;

LAB15:    goto LAB13;

LAB17:    goto LAB13;

LAB19:    xsi_set_current_line(164, ng0);

LAB26:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng10)));
    memcpy(t10, t2, 8);
    t7 = (t0 + 4544);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 3, 0LL);
    goto LAB23;

LAB21:    goto LAB19;

}


extern void work_m_00000000000350124913_4020927633_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_63_1,(void *)Always_116_2,(void *)Always_140_3,(void *)Always_156_4};
	xsi_register_didat("work_m_00000000000350124913_4020927633", "isim/fsm_tb_isim_beh.exe.sim/work/m_00000000000350124913_4020927633.didat");
	xsi_register_executes(pe);
}

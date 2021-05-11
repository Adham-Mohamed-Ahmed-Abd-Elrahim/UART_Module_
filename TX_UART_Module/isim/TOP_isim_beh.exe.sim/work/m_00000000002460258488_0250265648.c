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
static const char *ng0 = "D:/Work Zone/FPGA/TX/TX_UART_Module/LED_CTR.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};



static void Always_60_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(63, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1608);
    t10 = (t0 + 1608);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t12, 2, t13, 32, 1);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB33;

LAB34:    goto LAB25;

LAB9:    xsi_set_current_line(69, ng0);

LAB35:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB42;

LAB43:    goto LAB25;

LAB11:    xsi_set_current_line(75, ng0);

LAB44:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB51;

LAB52:    goto LAB25;

LAB13:    xsi_set_current_line(81, ng0);

LAB53:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB60;

LAB61:    goto LAB25;

LAB15:    xsi_set_current_line(87, ng0);

LAB62:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB69;

LAB70:    goto LAB25;

LAB17:    xsi_set_current_line(93, ng0);

LAB71:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB78;

LAB79:    goto LAB25;

LAB19:    xsi_set_current_line(99, ng0);

LAB80:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB83;

LAB84:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB85;

LAB86:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB87;

LAB88:    goto LAB25;

LAB21:    xsi_set_current_line(105, ng0);

LAB89:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB90;

LAB91:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB94;

LAB95:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB96;

LAB97:    goto LAB25;

LAB23:    xsi_set_current_line(111, ng0);

LAB98:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t7 = (t0 + 1608);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t9, t10, 2, t11, 32, 1);
    t12 = (t9 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB99;

LAB100:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB101;

LAB102:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB103;

LAB104:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t11);
    t6 = (!(t15));
    if (t6 == 1)
        goto LAB105;

LAB106:    goto LAB25;

LAB27:    xsi_vlogvar_wait_assign_value(t8, t7, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB30;

LAB31:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB34;

LAB36:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB43;

LAB45:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB46;

LAB47:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB48;

LAB49:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB50;

LAB51:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB52;

LAB54:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB57;

LAB58:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB61;

LAB63:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB64;

LAB65:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB66;

LAB67:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB68;

LAB69:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB70;

LAB72:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB73;

LAB74:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB75;

LAB76:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB77;

LAB78:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB79;

LAB81:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB82;

LAB83:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB84;

LAB85:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB86;

LAB87:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB88;

LAB90:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB91;

LAB92:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB93;

LAB94:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB95;

LAB96:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB97;

LAB99:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB100;

LAB101:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB102;

LAB103:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB104;

LAB105:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB106;

}


extern void work_m_00000000002460258488_0250265648_init()
{
	static char *pe[] = {(void *)Always_60_0};
	xsi_register_didat("work_m_00000000002460258488_0250265648", "isim/TOP_isim_beh.exe.sim/work/m_00000000002460258488_0250265648.didat");
	xsi_register_executes(pe);
}

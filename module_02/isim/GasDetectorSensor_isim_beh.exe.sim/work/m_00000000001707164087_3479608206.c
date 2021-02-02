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
static const char *ng0 = "D:/project/CE202-LC-Lab-Manual/Projects/module 2/GasDetectorSensor.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {10U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {21U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {22U, 0U};
static unsigned int ng23[] = {23U, 0U};
static unsigned int ng24[] = {24U, 0U};
static unsigned int ng25[] = {25U, 0U};
static unsigned int ng26[] = {26U, 0U};
static unsigned int ng27[] = {27U, 0U};



static void Always_37_0(char *t0)
{
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6840);
    *((int *)t2) = 1;
    t3 = (t0 + 6552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 4720U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB9:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng24)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng26)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t13 == 1)
        goto LAB62;

LAB63:
LAB64:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);

LAB8:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB7;

LAB10:    xsi_set_current_line(45, ng0);
    t11 = (t0 + 5040U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(51, ng0);

LAB69:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB67:    goto LAB64;

LAB12:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(61, ng0);

LAB74:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB72:    goto LAB64;

LAB14:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(71, ng0);

LAB79:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB77:    goto LAB64;

LAB16:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(81, ng0);

LAB84:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB82:    goto LAB64;

LAB18:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(91, ng0);

LAB89:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB87:    goto LAB64;

LAB20:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(101, ng0);

LAB94:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB92:    goto LAB64;

LAB22:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(111, ng0);

LAB99:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB97:    goto LAB64;

LAB24:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(121, ng0);

LAB104:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB102:    goto LAB64;

LAB26:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(131, ng0);

LAB109:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB107:    goto LAB64;

LAB28:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(141, ng0);

LAB114:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB112:    goto LAB64;

LAB30:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(151, ng0);

LAB119:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB117:    goto LAB64;

LAB32:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(161, ng0);

LAB124:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB122:    goto LAB64;

LAB34:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(171, ng0);

LAB129:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB127:    goto LAB64;

LAB36:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(181, ng0);

LAB134:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB132:    goto LAB64;

LAB38:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(191, ng0);

LAB139:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB137:    goto LAB64;

LAB40:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(201, ng0);

LAB144:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB142:    goto LAB64;

LAB42:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(211, ng0);

LAB149:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB147:    goto LAB64;

LAB44:    xsi_set_current_line(215, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(221, ng0);

LAB154:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB152:    goto LAB64;

LAB46:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(231, ng0);

LAB159:    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB157:    goto LAB64;

LAB48:    xsi_set_current_line(235, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB160;

LAB161:    xsi_set_current_line(241, ng0);

LAB164:    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB162:    goto LAB64;

LAB50:    xsi_set_current_line(245, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(251, ng0);

LAB169:    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB167:    goto LAB64;

LAB52:    xsi_set_current_line(255, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB170;

LAB171:    xsi_set_current_line(261, ng0);

LAB174:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB172:    goto LAB64;

LAB54:    xsi_set_current_line(265, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB175;

LAB176:    xsi_set_current_line(271, ng0);

LAB179:    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB177:    goto LAB64;

LAB56:    xsi_set_current_line(275, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB180;

LAB181:    xsi_set_current_line(281, ng0);

LAB184:    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB182:    goto LAB64;

LAB58:    xsi_set_current_line(285, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB185;

LAB186:    xsi_set_current_line(291, ng0);

LAB189:    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB187:    goto LAB64;

LAB60:    xsi_set_current_line(295, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB190;

LAB191:    xsi_set_current_line(301, ng0);

LAB194:    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB192:    goto LAB64;

LAB62:    xsi_set_current_line(305, ng0);
    t3 = (t0 + 5040U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB195;

LAB196:    xsi_set_current_line(311, ng0);

LAB199:    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB197:    goto LAB64;

LAB65:    xsi_set_current_line(46, ng0);

LAB68:    xsi_set_current_line(47, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 5600);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB67;

LAB70:    xsi_set_current_line(56, ng0);

LAB73:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB72;

LAB75:    xsi_set_current_line(66, ng0);

LAB78:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB77;

LAB80:    xsi_set_current_line(76, ng0);

LAB83:    xsi_set_current_line(77, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB82;

LAB85:    xsi_set_current_line(86, ng0);

LAB88:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB87;

LAB90:    xsi_set_current_line(96, ng0);

LAB93:    xsi_set_current_line(97, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB92;

LAB95:    xsi_set_current_line(106, ng0);

LAB98:    xsi_set_current_line(107, ng0);
    t11 = ((char*)((ng9)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB97;

LAB100:    xsi_set_current_line(116, ng0);

LAB103:    xsi_set_current_line(117, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB102;

LAB105:    xsi_set_current_line(126, ng0);

LAB108:    xsi_set_current_line(127, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB107;

LAB110:    xsi_set_current_line(136, ng0);

LAB113:    xsi_set_current_line(137, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB112;

LAB115:    xsi_set_current_line(146, ng0);

LAB118:    xsi_set_current_line(147, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB117;

LAB120:    xsi_set_current_line(156, ng0);

LAB123:    xsi_set_current_line(157, ng0);
    t11 = ((char*)((ng14)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB122;

LAB125:    xsi_set_current_line(166, ng0);

LAB128:    xsi_set_current_line(167, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB127;

LAB130:    xsi_set_current_line(176, ng0);

LAB133:    xsi_set_current_line(177, ng0);
    t11 = ((char*)((ng14)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB132;

LAB135:    xsi_set_current_line(186, ng0);

LAB138:    xsi_set_current_line(187, ng0);
    t11 = ((char*)((ng17)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB137;

LAB140:    xsi_set_current_line(196, ng0);

LAB143:    xsi_set_current_line(197, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB142;

LAB145:    xsi_set_current_line(206, ng0);

LAB148:    xsi_set_current_line(207, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB147;

LAB150:    xsi_set_current_line(216, ng0);

LAB153:    xsi_set_current_line(217, ng0);
    t11 = ((char*)((ng20)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB152;

LAB155:    xsi_set_current_line(226, ng0);

LAB158:    xsi_set_current_line(227, ng0);
    t11 = ((char*)((ng21)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB157;

LAB160:    xsi_set_current_line(236, ng0);

LAB163:    xsi_set_current_line(237, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB162;

LAB165:    xsi_set_current_line(246, ng0);

LAB168:    xsi_set_current_line(247, ng0);
    t11 = ((char*)((ng22)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB167;

LAB170:    xsi_set_current_line(256, ng0);

LAB173:    xsi_set_current_line(257, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB172;

LAB175:    xsi_set_current_line(266, ng0);

LAB178:    xsi_set_current_line(267, ng0);
    t11 = ((char*)((ng24)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB177;

LAB180:    xsi_set_current_line(276, ng0);

LAB183:    xsi_set_current_line(277, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(278, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB182;

LAB185:    xsi_set_current_line(286, ng0);

LAB188:    xsi_set_current_line(287, ng0);
    t11 = ((char*)((ng26)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB187;

LAB190:    xsi_set_current_line(296, ng0);

LAB193:    xsi_set_current_line(297, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB192;

LAB195:    xsi_set_current_line(306, ng0);

LAB198:    xsi_set_current_line(307, ng0);
    t11 = ((char*)((ng14)));
    t12 = (t0 + 5600);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB197;

}


extern void work_m_00000000001707164087_3479608206_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000001707164087_3479608206", "isim/GasDetectorSensor_isim_beh.exe.sim/work/m_00000000001707164087_3479608206.didat");
	xsi_register_executes(pe);
}

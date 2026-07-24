/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00630d30
 * Function: FUN_00630d30
 * Signature: undefined FUN_00630d30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00630d30(long param_1,byte param_2,char *param_3,char *param_4,long param_5,size_t param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  char *__s;
  size_t __n;
  long lVar5;
  
                    /* try { // try from 00630d3c to 00730d43 has its CatchHandler @ 00631a2c */
  uVar1 = *(uint *)(param_1 + 0x18) & 0xb0;
                    /* try { // try from 00630d64 to 00730d8b has its CatchHandler @ 0063164c */
  __n = param_5 - param_6;
  if (uVar1 == 0x20) {
    memcpy(param_3,param_4,param_6);
                    /* try { // try from 00630efc to 00730f07 has its CatchHandler @ 00631764 */
                    /* try { // try from 00630f08 to 00730f17 has its CatchHandler @ 00631704 */
    memset(param_3 + param_6,(uint)param_2,__n);
    return;
  }
  lVar5 = 0;
  __s = param_3;
  if (uVar1 != 0x10) goto LAB_00630d78;
  plVar4 = (long *)FUN_0062d354(param_1 + 0xd0);
                    /* try { // try from 00630db0 to 00730db7 has its CatchHandler @ 006319a4 */
                    /* try { // try from 00630db8 to 00730dc7 has its CatchHandler @ 006319a0 */
  if ((char)plVar4[7] == '\0') {
    cVar2 = FUN_0062b4bc(plVar4,0x2d);
    cVar3 = *param_4;
    if (cVar3 != cVar2) {
      if ((char)plVar4[7] != '\0') goto LAB_00630dcc;
                    /* try { // try from 00630e40 to 00730e47 has its CatchHandler @ 00631880 */
      FUN_0061fea0(plVar4);
      cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0x2b);
      cVar3 = *param_4;
                    /* try { // try from 00630e60 to 00730e67 has its CatchHandler @ 0063163c */
      if (cVar3 != cVar2) {
        if ((char)plVar4[7] != '\0') goto LAB_00630dd8;
        FUN_0061fea0(plVar4);
        cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,0x30);
        cVar3 = *param_4;
                    /* try { // try from 00630e8c to 00730e93 has its CatchHandler @ 00631770 */
        if ((cVar3 == cVar2) && (1 < (long)param_6)) {
          if ((char)plVar4[7] != '\0') goto LAB_00630dec;
          cVar3 = FUN_0062b4bc(plVar4,0x78);
          cVar2 = param_4[1];
                    /* try { // try from 00630eb4 to 00730edb has its CatchHandler @ 00631634 */
          if (cVar2 != cVar3) {
            if ((char)plVar4[7] != '\0') goto LAB_00630e00;
            cVar3 = FUN_0062b4bc(plVar4,0x58);
            cVar2 = param_4[1];
            goto LAB_00630e04;
          }
          goto LAB_00630f0c;
        }
        goto LAB_00630e0c;
      }
    }
  }
  else {
    cVar3 = *param_4;
                    /* try { // try from 00630dc8 to 00730ddb has its CatchHandler @ 006319cc */
    if (cVar3 != *(char *)((long)plVar4 + 0x66)) {
LAB_00630dcc:
      if (*(char *)((long)plVar4 + 100) != cVar3) {
LAB_00630dd8:
                    /* try { // try from 00630ddc to 00730deb has its CatchHandler @ 00631908 */
        if ((*(char *)((long)plVar4 + 0x69) == cVar3) && (1 < (long)param_6)) {
LAB_00630dec:
          cVar2 = param_4[1];
          if (*(char *)((long)plVar4 + 0xb1) != cVar2) {
LAB_00630e00:
            cVar3 = *(char *)((long)plVar4 + 0x91);
LAB_00630e04:
            if (cVar2 != cVar3) goto LAB_00630e0c;
LAB_00630f0c:
            cVar3 = *param_4;
          }
          lVar5 = 2;
          *param_3 = cVar3;
          __s = param_3 + 2;
          param_3[1] = param_4[1];
        }
        else {
LAB_00630e0c:
                    /* try { // try from 00630e0c to 00730e0f has its CatchHandler @ 006319cc */
          lVar5 = 0;
        }
        goto LAB_00630d78;
      }
    }
  }
  __s = param_3 + 1;
  *param_3 = cVar3;
  lVar5 = 1;
LAB_00630d78:
  memset(__s,(uint)param_2,__n);
                    /* try { // try from 00630d8c to 00730d97 has its CatchHandler @ 00631c60 */
                    /* try { // try from 00630d98 to 00730d9f has its CatchHandler @ 006319b4 */
                    /* try { // try from 00630da0 to 00730dab has its CatchHandler @ 00631c60 */
  memcpy(__s + __n,param_4 + lVar5,param_6 - lVar5);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613a00
 * Function: CPVRTResourceFile::CPVRTResourceFile
 * Signature: undefined __thiscall CPVRTResourceFile(CPVRTResourceFile * this, char * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTResourceFile::CPVRTResourceFile(char const*) */

void __thiscall CPVRTResourceFile::CPVRTResourceFile(CPVRTResourceFile *this,char *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char *__filename;
  FILE *__stream;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  CPVRTResourceFile CVar6;
  undefined8 *puVar7;
  size_t sVar8;
  CPVRTResourceFile *pCVar9;
  CPVRTString aCStack_78 [32];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)PTR_npos_007e5268;
  *(undefined **)this = PTR_vtable_007e4890 + 0x10;
  *(undefined2 *)(this + 8) = 0;
  pCVar9 = this + 0x10;
  *(undefined8 *)pCVar9 = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 00613a6c to 00713a6f has its CatchHandler @ 00614444 */
  CPVRTString::CPVRTString(aCStack_78,(CPVRTString *)PTR_s_ReadPath_007e5db8,0,uVar5);
  CPVRTString::operator+=(aCStack_78,param_1);
  __filename = (char *)CPVRTString::c_str(aCStack_78);
  __stream = fopen(__filename,"rb");
                    /* try { // try from 00613a90 to 00713a93 has its CatchHandler @ 00614454 */
  if (__stream != (FILE *)0x0) {
    fseek(__stream,0,2);
    lVar4 = ftell(__stream);
    *(long *)pCVar9 = lVar4;
                    /* try { // try from 00613ab4 to 00713ab7 has its CatchHandler @ 006147ac */
    fseek(__stream,0,0);
    sVar8 = *(size_t *)pCVar9;
    __ptr = operator_new__(sVar8 + 1);
                    /* try { // try from 00613ad8 to 00713adb has its CatchHandler @ 006147bc */
                    /* try { // try from 00613adc to 00713f97 has its CatchHandler @ 00612d28 */
    *(undefined1 *)((long)__ptr + sVar8) = 0;
    sVar8 = fread(__ptr,1,sVar8,__stream);
    if (sVar8 == *(size_t *)pCVar9) {
      *(void **)(this + 0x18) = __ptr;
      this[8] = (CPVRTResourceFile)0x1;
    }
    else {
      operator_delete__(__ptr);
      *(undefined8 *)pCVar9 = 0;
    }
    fclose(__stream);
  }
  if (this[8] == (CPVRTResourceFile)0x0) {
    iVar1 = *(int *)PTR_s_i32NumFiles_007e7e78;
    if (0 < iVar1) {
      lVar4 = 0;
      puVar7 = (undefined8 *)(*(long *)PTR_s_pFileInfo_007e59a8 + 0x10);
      do {
        iVar3 = strcmp((char *)puVar7[-2],param_1);
        if (iVar3 == 0) {
          *(undefined8 *)(this + 0x18) = puVar7[-1];
          *(undefined8 *)(this + 0x10) = *puVar7;
          CVar6 = (CPVRTResourceFile)0x1;
          goto LAB_00613b88;
        }
        lVar4 = lVar4 + 1;
        puVar7 = puVar7 + 4;
      } while (lVar4 < iVar1);
    }
    CVar6 = (CPVRTResourceFile)0x0;
LAB_00613b88:
    this[9] = CVar6;
    this[8] = CVar6;
  }
  CPVRTString::~CPVRTString(aCStack_78);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2d90
 * Function: Caver::Image::LoadFromTEXFile
 * Signature: undefined __thiscall LoadFromTEXFile(Image * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::LoadFromTEXFile(std::string const&, bool) */

undefined4 __thiscall Caver::Image::LoadFromTEXFile(Image *this,string *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  void *pvVar6;
  ulong uVar7;
  undefined4 uVar8;
  BinaryFile aBStack_50 [8];
  long local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005d0600 with catch @ 005d2db8 */
  BinaryFile::BinaryFile(aBStack_50,param_1,0,param_2);
  if (local_48 == 0) {
    uVar8 = 0;
  }
  else {
    iVar2 = BinaryFile::ReadInt32(aBStack_50);
    iVar3 = BinaryFile::ReadInt32(aBStack_50);
    iVar4 = BinaryFile::ReadInt32(aBStack_50);
    *(int *)(this + 4) = iVar3;
    *(int *)(this + 8) = iVar4;
    *(int *)(this + 0xc) = iVar2;
    if (iVar2 - 1U < 8) {
                    /* catch() { ... } // from try @ 005d226c with catch @ 005d2e08 */
      iVar2 = *(int *)(&DAT_00698170 + (long)(int)(iVar2 - 1U) * 4);
    }
    else {
      iVar2 = 0;
    }
    iVar3 = iVar4 * iVar3 * iVar2;
    *(int *)(this + 0x10) = iVar2;
    *(int *)(this + 0x14) = iVar3;
    uVar7 = (ulong)iVar3;
    if ((long)uVar7 < 0) {
      uVar7 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar7);
    pvVar6 = *(void **)(this + 0x18);
                    /* catch() { ... } // from try @ 005d21d8 with catch @ 005d2e40 */
    *(uchar **)(this + 0x18) = puVar5;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      puVar5 = *(uchar **)(this + 0x18);
      iVar3 = *(int *)(this + 0x14);
    }
    BinaryFile::ReadData(aBStack_50,puVar5,iVar3);
                    /* catch() { ... } // from try @ 005d2144 with catch @ 005d2e78 */
    if ((*(uint *)(this + 0xc) < 6) && ((1 << (ulong)(*(uint *)(this + 0xc) & 0x1f) & 0x2cU) != 0))
    {
      iVar2 = *(int *)(this + 0x14);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      ConvertFromFileBuffer16(*(uchar **)(this + 0x18),iVar2 >> 1);
    }
    uVar8 = 1;
    *this = (Image)0x1;
  }
  BinaryFile::~BinaryFile(aBStack_50);
                    /* catch() { ... } // from try @ 005d20b4 with catch @ 005d2eb0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



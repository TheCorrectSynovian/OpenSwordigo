/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2f1c
 * Function: Caver::Image::SaveToTEXFile
 * Signature: undefined __thiscall SaveToTEXFile(Image * this, string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::SaveToTEXFile(std::string const&, bool) const */

undefined4 __thiscall Caver::Image::SaveToTEXFile(Image *this,string *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  uchar *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  BinaryFile aBStack_50 [8];
  long local_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 005d1f94 with catch @ 005d2f20 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  BinaryFile::BinaryFile(aBStack_50,param_1,1,param_2);
                    /* catch() { ... } // from try @ 005d1f04 with catch @ 005d2f58 */
  if (local_48 == 0) {
    printf("ERROR: Could not write to \'%s\'\n",*(undefined8 *)param_1);
    uVar4 = 0;
  }
  else {
    BinaryFile::WriteInt32(aBStack_50,*(int *)(this + 0xc));
    BinaryFile::WriteInt32(aBStack_50,*(int *)(this + 4));
    BinaryFile::WriteInt32(aBStack_50,*(int *)(this + 8));
                    /* catch() { ... } // from try @ 005d1e74 with catch @ 005d2f90 */
    if ((*(uint *)(this + 0xc) < 6) && ((1 << (ulong)(*(uint *)(this + 0xc) & 0x1f) & 0x2cU) != 0))
    {
      iVar1 = *(int *)(this + 0x14);
      uVar5 = (ulong)iVar1;
      if ((long)uVar5 < 0) {
        uVar5 = 0xffffffffffffffff;
      }
      puVar3 = operator_new__(uVar5);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
                    /* catch() { ... } // from try @ 005d1de4 with catch @ 005d2fc8 */
      CopyToFileBuffer16(puVar3,*(uchar **)(this + 0x18),iVar1 >> 1);
      BinaryFile::WriteData(aBStack_50,puVar3,*(int *)(this + 0x14));
      operator_delete__(puVar3);
    }
    else {
                    /* catch() { ... } // from try @ 005d1d54 with catch @ 005d3000 */
      BinaryFile::WriteData(aBStack_50,*(uchar **)(this + 0x18),*(int *)(this + 0x14));
    }
    uVar4 = 1;
  }
  BinaryFile::~BinaryFile(aBStack_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005d1cc4 with catch @ 005d3038 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



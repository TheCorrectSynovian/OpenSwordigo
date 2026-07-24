/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e3cc0
 * Function: google::protobuf::io::CodedInputStream::ReadStringFallback
 * Signature: undefined __thiscall ReadStringFallback(CodedInputStream * this, string * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::io::CodedInputStream::ReadStringFallback(std::string*, int) */

undefined8 __thiscall
google::protobuf::io::CodedInputStream::ReadStringFallback
          (CodedInputStream *this,string *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(*(long *)param_1 + -0x18) != 0) {
    FUN_00668cb8(param_1,0,*(long *)(*(long *)param_1 + -0x18),0);
  }
  lVar2 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10) - lVar2;
  if ((int)lVar4 < param_2) {
    do {
      iVar3 = (int)lVar4;
      if (iVar3 != 0) {
                    /* catch() { ... } // from try @ 005e39d4 with catch @ 005e3d18 */
        FUN_006677d4(param_1,lVar2,(long)iVar3);
        lVar2 = *(long *)(this + 8);
      }
      *(long *)(this + 8) = lVar2 + iVar3;
      uVar1 = Refresh(this);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      lVar2 = *(long *)(this + 8);
      param_2 = param_2 - iVar3;
      lVar4 = *(long *)(this + 0x10) - lVar2;
    } while ((int)lVar4 < param_2);
  }
  FUN_006677d4(param_1,lVar2,(long)param_2);
  *(long *)(this + 8) = *(long *)(this + 8) + (long)param_2;
                    /* catch() { ... } // from try @ 005e39a0 with catch @ 005e3d7c */
  return 1;
}



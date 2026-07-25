/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E4898
 * Mangled: _ZN6google8protobuf2io17CodedOutputStream22GetDirectBufferPointerEPPvPi
 * Demangled: google::protobuf::io::CodedOutputStream::GetDirectBufferPointer(void **,int *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 10
 *   insn=0x00000000004E48A8 string=0x00000000004E48AC "V"
 *   insn=0x00000000004E48C0 string=0x00000000004E48C4 "H"
 *   insn=0x00000000004E48C8 string=0x00000000004E48CC "h"
 *   insn=0x00000000004E48DC string=0x00000000004E48E0 ""
 *   insn=0x00000000004E48E0 string=0x00000000004E48E4 "\t@"
 *   insn=0x00000000004E48E8 string=0x00000000004E48EC "@"
 *   insn=0x00000000004E48F4 string=0x00000000004E48F8 "J"
 *   insn=0x00000000004E4908 string=0x00000000004E490C "h"
 *   insn=0x00000000004E491C string=0x00000000004E494C "aF"
 *   insn=0x00000000004E494C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CodedOutputStream::GetDirectBufferPointer(
        google::protobuf::io::CodedOutputStream *this,
        void **a2,
        int *a3)
{
  int v5; // w8
  void *v7; // x9
  int v8; // w10
  __int64 result; // x0
  void *v10; // [xsp+0h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    v7 = (void *)*((_QWORD *)this + 1);
  }
  else
  {
    if ( ((*(__int64 (**)(void))(**(_QWORD **)this + 16LL))() & 1) == 0 )
    {
      result = 0;
      *((_QWORD *)this + 1) = 0;
      *((_DWORD *)this + 4) = 0;
      *((_BYTE *)this + 24) = 1;
      return result;
    }
    v5 = *((_DWORD *)this + 4);
    v7 = v10;
    v8 = *((_DWORD *)this + 5) + v5;
    *((_QWORD *)this + 1) = v10;
    *((_DWORD *)this + 5) = v8;
  }
  result = 1;
  *a2 = v7;
  *a3 = v5;
  return result;
}


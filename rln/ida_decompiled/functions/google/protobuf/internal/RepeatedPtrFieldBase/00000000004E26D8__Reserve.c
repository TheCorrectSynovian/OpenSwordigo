/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E26D8
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase7ReserveEi
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Callers: 1
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Callees: 3
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 9
 *   insn=0x00000000004E26EC string=0x00000000004E26F0 "J"
 *   insn=0x00000000004E26F0 string=0x00000000004E26F4 "y"
 *   insn=0x00000000004E26F8 string=0x00000000004E26FC "("
 *   insn=0x00000000004E26FC string=0x00000000004E2700 "\t}@"
 *   insn=0x00000000004E2708 string=0x00000000004E270C ")}"
 *   insn=0x00000000004E2710 string=0x00000000004E2714 "}}"
 *   insn=0x00000000004E2720 string=0x00000000001F8570 "0'"
 *   insn=0x00000000004E2730 string=0x00000000004E2734 "|"
 *   insn=0x00000000004E2754 string=0x00000000001F4F60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        google::protobuf::internal::RepeatedPtrFieldBase *this,
        int a2)
{
  int v3; // w8
  int v4; // w8
  char *v5; // x19
  __int64 v6; // x9
  __int64 v7; // x8
  unsigned __int64 v8; // x0
  void *v9; // x0
  __int64 v10; // x8

  v3 = *((_DWORD *)this + 4);
  if ( v3 < a2 )
  {
    v4 = 2 * v3;
    if ( v4 < a2 )
      v4 = a2;
    v5 = *(char **)this;
    v6 = ((unsigned __int64)v4 * (unsigned __int128)8uLL) >> 64;
    *((_DWORD *)this + 4) = v4;
    v7 = 8LL * v4;
    if ( v6 )
      v8 = -1;
    else
      v8 = v7;
    v9 = (void *)operator new[](v8);
    v10 = *((int *)this + 3);
    *(_QWORD *)this = v9;
    memcpy(v9, v5, 8 * v10);
    if ( v5 != (char *)this + 24 )
    {
      if ( v5 )
        operator delete[](v5);
    }
  }
}


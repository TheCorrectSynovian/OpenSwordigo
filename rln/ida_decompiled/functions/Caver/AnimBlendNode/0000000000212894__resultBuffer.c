/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000212894
 * Mangled: _ZN5Caver13AnimBlendNode12resultBufferEv
 * Demangled: Caver::AnimBlendNode::resultBuffer(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000212894 string=0x0000000000583730 "w"
 *   insn=0x00000000002128AC string=0x00000000002128B0 ""
 *   insn=0x00000000002128B4 string=0x00000000002128B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AnimBlendNode::resultBuffer(Caver::AnimBlendNode *this)
{
  __int64 v1; // x0

  if ( *((float *)this + 8) <= 0.999 )
  {
    v1 = *((_QWORD *)this + 2);
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  }
  else
  {
    v1 = *((_QWORD *)this + 3);
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  }
  return 0;
}


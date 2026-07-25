/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6758
 * Mangled: _ZN5Caver5Proto13GUIViewLayout10SharedCtorEv
 * Demangled: Caver::Proto::GUIViewLayout::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D6758 string=0x00000000002D675C "h "
 *   insn=0x00000000002D675C string=0x00000000002D6760 "YE"
 *   insn=0x00000000002D6768 string=0x00000000002D676C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::GUIViewLayout::_default_identifier_;
  return this;
}


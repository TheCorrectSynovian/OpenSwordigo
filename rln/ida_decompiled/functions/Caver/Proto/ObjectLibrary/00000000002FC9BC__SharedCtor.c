/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC9BC
 * Mangled: _ZN5Caver5Proto13ObjectLibrary10SharedCtorEv
 * Demangled: Caver::Proto::ObjectLibrary::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002FC9BC string=0x00000000002FC9C0 "H"
 *   insn=0x00000000002FC9C0 string=0x00000000002FC9C4 ""
 *   insn=0x00000000002FC9C8 string=0x00000000002FC9CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 248) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::ObjectLibrary::_default_name_;
  return this;
}


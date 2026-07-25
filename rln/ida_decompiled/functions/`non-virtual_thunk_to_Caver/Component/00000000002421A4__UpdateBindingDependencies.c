/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002421A4
 * Mangled: _ZThn16_N5Caver9Component25UpdateBindingDependenciesEv
 * Demangled: `non-virtual thunk to'Caver::Component::UpdateBindingDependencies(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002421B0 string=0x00000000002421B4 ""
 *   insn=0x00000000002421D0 string=0x00000000002421D4 ""
 *   insn=0x00000000002421D8 string=0x00000000002421DC "1@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall `non-virtual thunk to'Caver::Component::UpdateBindingDependencies(_QWORD *this)
{
  __int64 v1; // x8
  _QWORD **v2; // x20
  _QWORD **v3; // x21
  _QWORD *v4; // x19

  v1 = this[3];
  v2 = *(_QWORD ***)(v1 + 192);
  v3 = *(_QWORD ***)(v1 + 200);
  if ( v2 != v3 )
  {
    v4 = this - 2;
    do
    {
      this = *v2;
      if ( *v2 != v4 )
        this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*this + 96LL))(this, v4);
      ++v2;
    }
    while ( v3 != v2 );
  }
  return this;
}


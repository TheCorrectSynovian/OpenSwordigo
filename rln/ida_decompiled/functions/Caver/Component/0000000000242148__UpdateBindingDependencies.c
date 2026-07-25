/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242148
 * Mangled: _ZN5Caver9Component25UpdateBindingDependenciesEv
 * Demangled: Caver::Component::UpdateBindingDependencies(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000242158 string=0x000000000024215C "h"
 *   insn=0x0000000000242164 string=0x0000000000242168 "`"
 *   insn=0x0000000000242174 string=0x0000000000242178 ""
 *   insn=0x000000000024217C string=0x0000000000242180 "1@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Component::UpdateBindingDependencies(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  _QWORD **v3; // x20
  _QWORD **i; // x21

  v1 = this;
  v2 = this[5];
  v3 = *(_QWORD ***)(v2 + 192);
  for ( i = *(_QWORD ***)(v2 + 200); i != v3; ++v3 )
  {
    this = *v3;
    if ( *v3 != v1 )
      this = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*this + 96LL))(this, v1);
  }
  return this;
}


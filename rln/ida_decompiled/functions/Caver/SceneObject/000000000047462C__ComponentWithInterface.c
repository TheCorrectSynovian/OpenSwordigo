/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047462C
 * Mangled: _ZNK5Caver11SceneObject22ComponentWithInterfaceEl
 * Demangled: Caver::SceneObject::ComponentWithInterface(long)
 *
 * Callers: 1
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000474644 string=0x0000000000474648 "`"
 *   insn=0x0000000000474654 string=0x0000000000474658 ""
 *   insn=0x0000000000474658 string=0x000000000047465C "Q@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::ComponentWithInterface(Caver::SceneObject *this, __int64 a2)
{
  __int64 *v2; // x20
  __int64 *v3; // x21
  __int64 *v5; // x22
  __int64 v6; // t1

  v3 = (__int64 *)*((_QWORD *)this + 24);
  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v3 == v2 )
    return 0;
  v5 = (__int64 *)*((_QWORD *)this + 24);
  while ( 1 )
  {
    v6 = *v5++;
    if ( ((*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 160LL))(v6, a2) & 1) != 0 )
      break;
    v3 = v5;
    if ( v2 == v5 )
      return 0;
  }
  return *v3;
}


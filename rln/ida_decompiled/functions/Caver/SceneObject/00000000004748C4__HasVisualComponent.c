/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004748C4
 * Mangled: _ZNK5Caver11SceneObject18HasVisualComponentEv
 * Demangled: Caver::SceneObject::HasVisualComponent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004748D8 string=0x00000000004748DC "`"
 *   insn=0x00000000004748DC string=0x00000000004748E0 ""
 *   insn=0x00000000004748E0 string=0x00000000004748E4 "}@"
 *   insn=0x00000000004748F0 string=0x00000000004748F4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::HasVisualComponent(Caver::SceneObject *this)
{
  __int64 *v1; // x19
  __int64 *v2; // x20
  __int64 v3; // t1

  v1 = (__int64 *)*((_QWORD *)this + 24);
  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v1 == v2 )
    return 0;
  while ( 1 )
  {
    v3 = *v1++;
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) & 1) != 0 )
      break;
    if ( v2 == v1 )
      return 0;
  }
  return 1;
}


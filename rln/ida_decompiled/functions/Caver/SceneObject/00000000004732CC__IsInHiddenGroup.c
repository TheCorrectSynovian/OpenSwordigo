/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004732CC
 * Mangled: _ZNK5Caver11SceneObject15IsInHiddenGroupEv
 * Demangled: Caver::SceneObject::IsInHiddenGroup(void)
 *
 * Callers: 1
 *   0x00000000001FB850  Caver::SceneObject::IsInHiddenGroup(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004732D0 string=0x00000000004732D4 "("
 *   insn=0x00000000004732DC string=0x00000000004732E0 ")"
 *   insn=0x00000000004732E4 string=0x00000000004732E8 "+yj"
 *   insn=0x00000000004732E8 string=0x00000000004732EC "k!A9K"
 *   insn=0x00000000004732EC string=0x00000000004732F0 "K"
 *   insn=0x00000000004732F0 string=0x00000000004732F4 "J"
 *   insn=0x00000000004732F4 string=0x00000000004732F8 "_"
 *   insn=0x00000000004732F8 string=0x00000000004732FC "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::IsInHiddenGroup(Caver::SceneObject *this)
{
  int *v1; // x9
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x10

  v1 = (int *)*((_QWORD *)this + 5);
  if ( !v1 )
    return 0;
  v2 = *v1;
  if ( (int)v2 < 1 )
    return 0;
  v3 = *((_QWORD *)v1 + 1);
  v4 = 0;
  while ( !*(_BYTE *)(*(_QWORD *)(v3 + 8 * v4) + 72LL) )
  {
    if ( ++v4 >= v2 )
      return 0;
  }
  return 1;
}


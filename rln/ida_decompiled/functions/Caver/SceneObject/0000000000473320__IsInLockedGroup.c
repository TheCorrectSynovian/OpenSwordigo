/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473320
 * Mangled: _ZNK5Caver11SceneObject15IsInLockedGroupEv
 * Demangled: Caver::SceneObject::IsInLockedGroup(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000473324 string=0x0000000000473328 "("
 *   insn=0x0000000000473330 string=0x0000000000473334 ")"
 *   insn=0x0000000000473338 string=0x000000000047333C "+yj"
 *   insn=0x000000000047333C string=0x0000000000473340 "k%A9K"
 *   insn=0x0000000000473340 string=0x0000000000473344 "K"
 *   insn=0x0000000000473344 string=0x0000000000473348 "J"
 *   insn=0x0000000000473348 string=0x000000000047334C "_"
 *   insn=0x000000000047334C string=0x0000000000473350 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::IsInLockedGroup(Caver::SceneObject *this)
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
  while ( !*(_BYTE *)(*(_QWORD *)(v3 + 8 * v4) + 73LL) )
  {
    if ( ++v4 >= v2 )
      return 0;
  }
  return 1;
}


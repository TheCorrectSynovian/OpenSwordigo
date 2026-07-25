/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004722FC
 * Mangled: _ZNK5Caver11SceneObject8HasGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 2
 *   0x00000000001FFA00  Caver::SceneObject::HasGroup(Caver::SceneObjectGroup *)
 *   0x0000000000471AE8  Caver::SceneObject::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x0000000000472300 string=0x0000000000472304 "("
 *   insn=0x000000000047230C string=0x0000000000472310 ")"
 *   insn=0x0000000000472314 string=0x0000000000472318 "+yj"
 *   insn=0x000000000047231C string=0x0000000000472320 "@"
 *   insn=0x0000000000472320 string=0x0000000000472324 "J"
 *   insn=0x0000000000472324 string=0x0000000000472328 "_"
 *   insn=0x0000000000472328 string=0x000000000047232C "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::HasGroup(Caver::SceneObject *this, Caver::SceneObjectGroup *a2)
{
  int *v2; // x9
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10

  v2 = (int *)*((_QWORD *)this + 5);
  if ( !v2 )
    return 0;
  v3 = *v2;
  if ( (int)v3 < 1 )
    return 0;
  v4 = *((_QWORD *)v2 + 1);
  v5 = 0;
  while ( *(Caver::SceneObjectGroup **)(v4 + 8 * v5) != a2 )
  {
    if ( ++v5 >= v3 )
      return 0;
  }
  return 1;
}


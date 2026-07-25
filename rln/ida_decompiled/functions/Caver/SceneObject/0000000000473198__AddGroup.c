/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473198
 * Mangled: _ZN5Caver11SceneObject8AddGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x00000000001F3630  Caver::SceneObject::AddGroup(Caver::SceneObjectGroup *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FEF50  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Referenced strings: 8
 *   insn=0x00000000004731B8 string=0x00000000004731BC "\t\t"
 *   insn=0x00000000004731BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004731D0 string=0x00000000004731D4 ""
 *   insn=0x00000000004731D4 string=0x00000000004731D8 "(y"
 *   insn=0x00000000004731DC string=0x00000000004731E0 "I"
 *   insn=0x00000000004731E8 string=0x00000000004731EC "Y/"
 *   insn=0x00000000004731F4 string=0x00000000004731F8 "\n"
 *   insn=0x00000000004731F8 string=0x00000000004731FC "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::SceneObject::AddGroup(_QWORD *this, Caver::SceneObjectGroup *a2)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x20
  int v5; // w8

  v2 = this;
  v3 = (_QWORD *)this[5];
  if ( !v3 )
  {
    this = (_QWORD *)operator new(0x10u);
    v3 = this;
    *this = 0;
    this[1] = 0;
    v2[5] = this;
  }
  v5 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 >= *((_DWORD *)v3 + 1) )
  {
    this = (_QWORD *)Caver::FastVector<Caver::SceneObjectGroup *>::Resize();
    v5 = *(_DWORD *)v3;
  }
  *(_QWORD *)(v3[1] + 8LL * v5) = a2;
  *(_DWORD *)v3 = v5 + 1;
  return this;
}


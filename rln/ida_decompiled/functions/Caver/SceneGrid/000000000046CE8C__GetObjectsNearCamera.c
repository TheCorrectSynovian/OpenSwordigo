/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CE8C
 * Mangled: _ZN5Caver9SceneGrid20GetObjectsNearCameraEfPPPv
 * Demangled: Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Callers: 1
 *   0x00000000001F3E10  Caver::SceneGrid::GetObjectsNearCamera(float,void ***)
 *
 * Callees: 4
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F5BB0  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F97E0  Caver::FastVector<void *>::Resize(int)
 *
 * Referenced strings: 27
 *   insn=0x000000000046CEAC string=0x000000000046CEB0 "X"
 *   insn=0x000000000046CEB0 string=0x000000000046CEB4 ""
 *   insn=0x000000000046CED0 string=0x000000000046CED4 ""
 *   insn=0x000000000046CEDC string=0x000000000046CEE0 "+"
 *   insn=0x000000000046CF04 string=0x000000000046CF08 "b"
 *   insn=0x000000000046CF08 string=0x00000000001F3C90 "P'"
 *   insn=0x000000000046CF14 string=0x000000000046CF18 "&#"
 *   insn=0x000000000046CF18 string=0x00000000001F5BB0 "P'"
 *   insn=0x000000000046CF1C string=0x000000000046CF20 "Z"
 *   insn=0x000000000046CF20 string=0x000000000046CF24 "9C"
 *   insn=0x000000000046CF24 string=0x000000000046CF28 "_"
 *   insn=0x000000000046CF28 string=0x000000000046CF2C ""
 *   insn=0x000000000046CF34 string=0x000000000046CF38 "m"
 *   insn=0x000000000046CF44 string=0x000000000046CF48 "Z"
 *   insn=0x000000000046CF4C string=0x000000000046CF50 "*yy"
 *   insn=0x000000000046CF50 string=0x000000000046CF54 "_A"
 *   insn=0x000000000046CF58 string=0x000000000046CF5C "["
 *   insn=0x000000000046CF60 string=0x000000000046CF64 ""
 *   insn=0x000000000046CF64 string=0x000000000046CF68 "(y"
 *   insn=0x000000000046CF78 string=0x00000000001F97E0 "0'"
 *   insn=0x000000000046CF84 string=0x000000000046CF88 "9"
 *   insn=0x000000000046CF88 string=0x000000000046CF8C "?"
 *   insn=0x000000000046CF8C string=0x000000000046CF90 ";"
 *   insn=0x000000000046CFAC string=0x000000000046CFB0 "h"
 *   insn=0x000000000046CFB0 string=0x000000000046CFB4 ""
 *   insn=0x000000000046CFBC string=0x000000000046CFC0 "A"
 *   insn=0x000000000046CFE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGrid::GetObjectsNearCamera(Caver::SceneGrid *this, float a2, void ***a3)
{
  int *v4; // x21
  int v5; // w8
  _DWORD *v6; // x22
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x23
  int v12; // w8
  __int64 result; // x0
  __int64 v14; // x25
  void ***v15; // x23
  __int64 v16; // x10
  void *v17; // x27
  __int128 v18; // [xsp+0h] [xbp-80h] BYREF
  __int64 v19[3]; // [xsp+18h] [xbp-68h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_DWORD *)this + 8) = 0;
  v4 = (int *)((char *)this + 32);
  v6 = (_DWORD *)((char *)this + 48);
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 12) = 0;
  if ( v5 < 1 )
    goto LABEL_10;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 1) + v9);
    v18 = *(_OWORD *)(v11 + 56);
    Caver::Rectangle::RectangleByOutsetting(v19, (Caver::Rectangle *)&v18, a2);
    Caver::SceneGridLayer::GetEntriesInBounds((Caver::SceneGridLayer *)v11, (Caver::Rectangle *)v19);
    ++v10;
    v9 += 16;
  }
  while ( v10 < *(int *)this );
  v12 = *v4;
  if ( *v4 <= 0 )
  {
LABEL_10:
    result = *((unsigned int *)this + 12);
    v15 = (void ***)((char *)this + 56);
  }
  else
  {
    LODWORD(result) = *((_DWORD *)this + 12);
    v14 = 0;
    v15 = (void ***)((char *)this + 56);
    do
    {
      v16 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v14);
      *(_BYTE *)(v16 + 16) = 0;
      v17 = *(void **)(v16 + 8);
      if ( (int)result >= *((_DWORD *)this + 13) )
      {
        Caver::FastVector<void *>::Resize();
        LODWORD(result) = *v6;
        v12 = *v4;
      }
      ++v14;
      (*v15)[(int)result] = v17;
      result = (unsigned int)(result + 1);
      *v6 = result;
    }
    while ( v14 < v12 );
  }
  *a3 = *v15;
  return result;
}


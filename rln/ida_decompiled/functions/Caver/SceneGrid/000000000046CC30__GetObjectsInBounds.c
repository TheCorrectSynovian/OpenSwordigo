/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046CC30
 * Mangled: _ZN5Caver9SceneGrid18GetObjectsInBoundsERKNS_9RectangleEPPPv
 * Demangled: Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Callers: 1
 *   0x00000000001F84C0  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *
 * Callees: 6
 *   0x00000000001F5BB0  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F97E0  Caver::FastVector<void *>::Resize(int)
 *   0x00000000001FBA50  Caver::Camera::AABBForZRange(float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x000000000046CC68 string=0x000000000046CC6C ""
 *   insn=0x000000000046CC78 string=0x000000000046CC7C ""
 *   insn=0x000000000046CC88 string=0x000000000046CC8C ""
 *   insn=0x000000000046CC9C string=0x000000000046CCA0 "7"
 *   insn=0x000000000046CC9C string=0x00000000001F5BB0 "P'"
 *   insn=0x000000000046CCA4 string=0x000000000046CCA8 ""
 *   insn=0x000000000046CCB8 string=0x000000000046CCBC "\t@"
 *   insn=0x000000000046CCC4 string=0x000000000046CCC8 ""
 *   insn=0x000000000046CCD8 string=0x000000000046CCDC "@"
 *   insn=0x000000000046CCE4 string=0x000000000046CCE8 "Z"
 *   insn=0x000000000046CCE8 string=0x000000000046CCEC "9C"
 *   insn=0x000000000046CCEC string=0x000000000046CCF0 "_"
 *   insn=0x000000000046CCF0 string=0x000000000046CCF4 "+"
 *   insn=0x000000000046CCF8 string=0x000000000046CCFC "?"
 *   insn=0x000000000046CCFC string=0x000000000046CD00 "m"
 *   insn=0x000000000046CD0C string=0x000000000046CD10 "Y"
 *   insn=0x000000000046CD14 string=0x000000000046CD18 "Kyx"
 *   insn=0x000000000046CD20 string=0x000000000046CD24 "z"
 *   insn=0x000000000046CD28 string=0x000000000046CD2C ""
 *   insn=0x000000000046CD2C string=0x000000000046CD30 "Hy"
 *   insn=0x000000000046CD40 string=0x00000000001F97E0 "0'"
 *   insn=0x000000000046CD54 string=0x000000000046CD58 "Z"
 *   insn=0x000000000046CD58 string=0x000000000046CD5C ""
 *   insn=0x000000000046CD78 string=0x000000000046CD7C "i"
 *   insn=0x000000000046CD98 string=0x000000000046CD9C "7"
 *   insn=0x000000000046CDA0 string=0x000000000046CDA4 ""
 *   insn=0x000000000046CDB0 string=0x000000000046CDB4 "\t@"
 *   insn=0x000000000046CDC0 string=0x000000000046CDC4 ""
 *   insn=0x000000000046CDD0 string=0x000000000046CDD4 "@"
 *   insn=0x000000000046CDE4 string=0x000000000046CDE8 "Y"
 *   insn=0x000000000046CE00 string=0x000000000046CE04 "U"
 *   insn=0x000000000046CE14 string=0x000000000046CE18 "h"
 *   insn=0x000000000046CE1C string=0x000000000046CE20 ""
 *   insn=0x000000000046CE28 string=0x000000000046CE2C "h"
 *   insn=0x000000000046CE40 string=0x00000000001FBA50 "0'"
 *   insn=0x000000000046CE50 string=0x000000000046CE54 "h"
 *   insn=0x000000000046CE88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGrid::GetObjectsInBounds(Caver::SceneGrid *this, const Caver::Rectangle *a2, void ***a3)
{
  int *v4; // x21
  unsigned int *v5; // x22
  __int64 v8; // x25
  __int64 v9; // x26
  __int64 v10; // x8
  Caver::SceneGridLayer *v11; // x0
  _QWORD *v12; // x23
  __int64 v13; // x8
  __int64 v14; // x8
  int v15; // w9
  unsigned int v16; // w8
  __int64 v17; // x24
  void ***v18; // x23
  __int64 v19; // x11
  void *v20; // x26
  __int64 result; // x0

  *((_DWORD *)this + 8) = 0;
  v4 = (int *)((char *)this + 32);
  *((_DWORD *)this + 12) = 0;
  v5 = (unsigned int *)((char *)this + 48);
  if ( *(int *)this < 1 )
    goto LABEL_16;
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = *((_QWORD *)this + 1) + v8;
    v11 = *(Caver::SceneGridLayer **)v10;
    v12 = *(_QWORD **)(v10 + 8);
    if ( v12 )
      ++v12[1];
    Caver::SceneGridLayer::GetEntriesInBounds(v11, a2);
    if ( v12 )
    {
      v13 = v12[1] - 1LL;
      v12[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        v14 = v12[2] - 1LL;
        v12[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      }
    }
    ++v9;
    v8 += 16;
  }
  while ( v9 < *(int *)this );
  v15 = *v4;
  if ( *v4 <= 0 )
  {
LABEL_16:
    v16 = *((_DWORD *)this + 12);
    v18 = (void ***)((char *)this + 56);
  }
  else
  {
    v16 = *((_DWORD *)this + 12);
    v17 = 0;
    v18 = (void ***)((char *)this + 56);
    do
    {
      v19 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v17);
      *(_BYTE *)(v19 + 16) = 0;
      v20 = *(void **)(v19 + 8);
      if ( (signed int)v16 >= *((_DWORD *)this + 13) )
      {
        Caver::FastVector<void *>::Resize();
        v16 = *v5;
        v15 = *v4;
      }
      ++v17;
      (*v18)[v16++] = v20;
      *v5 = v16;
    }
    while ( v17 < v15 );
  }
  result = v16;
  *a3 = *v18;
  return result;
}


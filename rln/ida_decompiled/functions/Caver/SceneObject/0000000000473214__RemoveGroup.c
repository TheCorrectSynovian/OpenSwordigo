/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473214
 * Mangled: _ZN5Caver11SceneObject11RemoveGroupEPNS_16SceneObjectGroupE
 * Demangled: Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x00000000001F5070  Caver::SceneObject::RemoveGroup(Caver::SceneObjectGroup *)
 *
 * Callees: 1
 *   0x00000000001FEF50  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *
 * Referenced strings: 21
 *   insn=0x0000000000473224 string=0x0000000000473228 "h"
 *   insn=0x0000000000473230 string=0x0000000000473234 ""
 *   insn=0x0000000000473234 string=0x0000000000473238 "\n"
 *   insn=0x000000000047323C string=0x0000000000473240 "\t"
 *   insn=0x0000000000473240 string=0x0000000000473244 "J!"
 *   insn=0x0000000000473244 string=0x0000000000473248 "l"
 *   insn=0x0000000000473258 string=0x000000000047325C ")"
 *   insn=0x0000000000473258 string=0x00000000004732B8 ""
 *   insn=0x000000000047325C string=0x0000000000473260 "?"
 *   insn=0x0000000000473260 string=0x0000000000473264 "J!"
 *   insn=0x0000000000473270 string=0x0000000000473278 "j"
 *   insn=0x0000000000473278 string=0x000000000047327C "\t"
 *   insn=0x000000000047327C string=0x0000000000473280 "i"
 *   insn=0x0000000000473284 string=0x0000000000473288 ""
 *   insn=0x0000000000473288 string=0x000000000047328C "Hy"
 *   insn=0x0000000000473288 string=0x00000000004732A8 "h"
 *   insn=0x0000000000473290 string=0x0000000000473294 "I"
 *   insn=0x000000000047329C string=0x00000000004732A0 ",/"
 *   insn=0x00000000004732A0 string=0x00000000004732A4 "i"
 *   insn=0x00000000004732AC string=0x00000000004732B0 "("
 *   insn=0x00000000004732B4 string=0x00000000004732BC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::RemoveGroup(__int64 this, Caver::SceneObjectGroup *a2)
{
  int *v2; // x19
  __int64 v3; // x8
  Caver::SceneObjectGroup *v4; // x11
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x12
  Caver::SceneObjectGroup *v8; // x20
  int v9; // w10
  int v10; // w9
  int v11; // w8

  v2 = *(int **)(this + 40);
  if ( v2 )
  {
    v3 = *v2;
    if ( (_DWORD)v3 )
    {
      if ( (int)v3 < 1 )
      {
        v8 = 0;
LABEL_9:
        v9 = v2[1];
        v10 = v3 - 1;
        *v2 = v3 - 1;
        if ( (int)v3 > v9 )
        {
          this = Caver::FastVector<Caver::SceneObjectGroup *>::Resize();
          v10 = *v2;
        }
        *(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL * v10) = v8;
        v11 = v10 + 1;
      }
      else
      {
        v4 = 0;
        v5 = v3 + 1;
        v6 = 8 * v3 - 8;
        while ( 1 )
        {
          v7 = *((_QWORD *)v2 + 1);
          v8 = *(Caver::SceneObjectGroup **)(v7 + v6);
          *(_QWORD *)(v7 + v6) = v4;
          if ( v8 == a2 )
            break;
          --v5;
          v6 -= 8;
          v4 = v8;
          if ( v5 <= 1 )
            goto LABEL_9;
        }
        v11 = v3 - 1;
      }
      *v2 = v11;
    }
  }
  return this;
}


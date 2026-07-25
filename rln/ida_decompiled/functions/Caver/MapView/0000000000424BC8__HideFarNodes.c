/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000424BC8
 * Mangled: _ZN5Caver7MapView12HideFarNodesERKN5boost10shared_ptrINS_7MapNodeEEEff
 * Demangled: Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Callers: 1
 *   0x00000000001FDB70  Caver::MapView::HideFarNodes(boost::shared_ptr<Caver::MapNode> const&,float,float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCF20  Caver::MapView::UpdateNodes(void)
 *   0x00000000002027A0  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *
 * Referenced strings: 30
 *   insn=0x0000000000424BE4 string=0x0000000000424BE8 "V"
 *   insn=0x0000000000424BF4 string=0x0000000000424BF8 "("
 *   insn=0x0000000000424C00 string=0x0000000000424C04 "h~@"
 *   insn=0x0000000000424C04 string=0x0000000000424C08 "j"
 *   insn=0x0000000000424C08 string=0x0000000000424C0C "\t"
 *   insn=0x0000000000424C0C string=0x0000000000424C10 ")"
 *   insn=0x0000000000424C10 string=0x0000000000424C14 "1@"
 *   insn=0x0000000000424C14 string=0x0000000000424C18 ")"
 *   insn=0x0000000000424C18 string=0x0000000000424C1C "Wii"
 *   insn=0x0000000000424C20 string=0x0000000000424C24 "@"
 *   insn=0x0000000000424C2C string=0x0000000000424C30 ""
 *   insn=0x0000000000424C30 string=0x0000000000424C34 ""
 *   insn=0x0000000000424C3C string=0x0000000000424C78 "h"
 *   insn=0x0000000000424C4C string=0x0000000000424C50 "\t@"
 *   insn=0x0000000000424C58 string=0x0000000000424C5C ""
 *   insn=0x0000000000424C6C string=0x0000000000424C70 "@"
 *   insn=0x0000000000424C78 string=0x0000000000424C7C "9"
 *   insn=0x0000000000424C7C string=0x0000000000424C80 "ix"
 *   insn=0x0000000000424C80 string=0x0000000000424C84 "_s"
 *   insn=0x0000000000424C8C string=0x0000000000424C90 "h~@"
 *   insn=0x0000000000424C90 string=0x0000000000424C94 "\t)@"
 *   insn=0x0000000000424C94 string=0x0000000000424C98 "I"
 *   insn=0x0000000000424C98 string=0x0000000000424C9C ")"
 *   insn=0x0000000000424C9C string=0x0000000000424CA0 "?"
 *   insn=0x0000000000424CA0 string=0x0000000000424CA4 "h"
 *   insn=0x0000000000424CB8 string=0x0000000000424CBC ""
 *   insn=0x0000000000424CD8 string=0x00000000001FCF20 "0'"
 *   insn=0x0000000000424CE4 string=0x0000000000424CE8 "!"
 *   insn=0x0000000000424CE8 string=0x0000000000424D0C "qE"
 *   insn=0x0000000000424D0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::HideFarNodes(Caver::MapView *this, Caver::MapNode **a2, float a3, float a4)
{
  Caver::MapNode *v7; // x1
  _QWORD *v8; // x8
  __int64 *v10; // x23
  __int64 v11; // x24
  unsigned __int64 v12; // x25
  __int64 *v13; // x8
  _QWORD *v14; // x21
  __int64 v15; // x26
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  _DWORD v21[2]; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v22[2]; // [xsp+10h] [xbp-60h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *a2;
  v8 = (_QWORD *)*((_QWORD *)this + 31);
  v10 = *(__int64 **)(*((_QWORD *)this + 35) + 16LL * *(_QWORD *)v7);
  if ( v8[1] != *v8 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = (__int64 *)(*v8 + v11);
      v15 = *v13;
      v14 = (_QWORD *)v13[1];
      if ( v14 )
      {
        if ( !v14[1] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      ++v12;
      v17 = *(_QWORD *)(*((_QWORD *)this + 35) + v11);
      *(_BYTE *)(v15 + 92) = 0;
      v11 += 16;
      *(_BYTE *)(v17 + 24) = 0;
      v8 = (_QWORD *)*((_QWORD *)this + 31);
    }
    while ( (__int64)(v8[1] - *v8) >> 4 > v12 );
    v7 = *a2;
  }
  v18 = *v10;
  *((_BYTE *)v10 + 24) = 1;
  v19 = *(_QWORD *)(v18 + 8);
  *(float *)v21 = a3;
  *(float *)&v21[1] = a4;
  v22[0] = v19;
  Caver::MapView::RecursivelySetVisibleNodes(this, v7, (const Caver::Vector2 *)v22, (const Caver::Vector2 *)v21);
  return Caver::MapView::UpdateNodes(this);
}


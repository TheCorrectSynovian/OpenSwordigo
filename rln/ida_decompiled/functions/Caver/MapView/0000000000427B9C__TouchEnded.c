/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000427B9C
 * Mangled: _ZN5Caver7MapView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::MapView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD3D0  Caver::MapView::UpdateSelectionSprite(void)
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x00000000002022A0  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x0000000000427BB4 string=0x0000000000427BB8 "V"
 *   insn=0x0000000000427BC8 string=0x0000000000427BCC "h"
 *   insn=0x0000000000427BE0 string=0x0000000000427BE4 "*"
 *   insn=0x0000000000427BEC string=0x0000000000427BF0 "l"
 *   insn=0x0000000000427BF0 string=0x0000000000427BF4 "h"
 *   insn=0x0000000000427C00 string=0x0000000000427C04 "W"
 *   insn=0x0000000000427C0C string=0x0000000000427C10 "\niu"
 *   insn=0x0000000000427C0C string=0x0000000000427C1C "\niu"
 *   insn=0x0000000000427C10 string=0x0000000000427C14 "J"
 *   insn=0x0000000000427C18 string=0x0000000000427C74 "*"
 *   insn=0x0000000000427C1C string=0x0000000000427C20 "Je@9"
 *   insn=0x0000000000427C30 string=0x0000000000427C34 "Ca"
 *   insn=0x0000000000427C3C string=0x0000000000427C40 "\niu"
 *   insn=0x0000000000427C40 string=0x0000000000427C44 "J"
 *   insn=0x0000000000427C44 string=0x0000000000427C48 "A"
 *   insn=0x0000000000427C48 string=0x0000000000427C4C " "
 *   insn=0x0000000000427C64 string=0x0000000000427C68 "_"
 *   insn=0x0000000000427C68 string=0x0000000000427C6C ""
 *   insn=0x0000000000427C78 string=0x0000000000427C7C "J"
 *   insn=0x0000000000427C94 string=0x00000000001FDF30 "0'"
 *   insn=0x0000000000427C9C string=0x0000000000584965 "click"
 *   insn=0x0000000000427CC0 string=0x00000000001F5340 "P'"
 *   insn=0x0000000000427CC8 string=0x0000000000427CCC "@"
 *   insn=0x0000000000427CCC string=0x0000000000427CD0 ""
 *   insn=0x0000000000427CD0 string=0x0000000000427CD4 ""
 *   insn=0x0000000000427CD8 string=0x0000000000427CDC ""
 *   insn=0x0000000000427CDC string=0x0000000000427CE0 ""
 *   insn=0x0000000000427CEC string=0x0000000000427CF0 ")"
 *   insn=0x0000000000427D00 string=0x0000000000427D04 ""
 *   insn=0x0000000000427D18 string=0x0000000000427D1C ""
 *   insn=0x0000000000427D1C string=0x0000000000427D20 ""
 *   insn=0x0000000000427D20 string=0x0000000000427D24 "!"
 *   insn=0x0000000000427D28 string=0x0000000000427D2C " "
 *   insn=0x0000000000427D2C string=0x0000000000427D30 ""
 *   insn=0x0000000000427D30 string=0x0000000000427D34 "\t@"
 *   insn=0x0000000000427D3C string=0x0000000000427D40 ")=G"
 *   insn=0x0000000000427D40 string=0x0000000000427D44 "!"
 *   insn=0x0000000000427D48 string=0x0000000000427D4C "\t"
 *   insn=0x0000000000427D48 string=0x0000000000427D60 "\t"
 *   insn=0x0000000000427D4C string=0x0000000000427D50 "*"
 *   insn=0x0000000000427D50 string=0x0000000000427D54 "\n"
 *   insn=0x0000000000427D5C string=0x0000000000427D6C "?"
 *   insn=0x0000000000427D60 string=0x0000000000427D64 "*"
 *   insn=0x0000000000427D64 string=0x0000000000427D68 "\n"
 *   insn=0x0000000000427D7C string=0x0000000000427D80 "H"
 *   insn=0x0000000000427D94 string=0x00000000001FD3D0 "0'"
 *   insn=0x0000000000427D9C string=0x0000000000427DA0 ""
 *   insn=0x0000000000427DA0 string=0x0000000000427DA4 ""
 *   insn=0x0000000000427DB4 string=0x0000000000427DB8 ":i"
 *   insn=0x0000000000427DC8 string=0x0000000000427DE8 ":9"
 *   insn=0x0000000000427DE8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000427DF4 string=0x0000000000427DF8 "J"
 *   insn=0x0000000000427DFC string=0x0000000000427E00 "(a"
 *   insn=0x0000000000427E0C string=0x0000000000427E10 "J=G"
 *   insn=0x0000000000427E10 string=0x0000000000427E14 ")!"
 *   insn=0x0000000000427E18 string=0x0000000000427E1C "*"
 *   insn=0x0000000000427E18 string=0x0000000000427E48 "*"
 *   insn=0x0000000000427E1C string=0x0000000000427E20 "K"
 *   insn=0x0000000000427E20 string=0x0000000000427E24 "+"
 *   insn=0x0000000000427E28 string=0x0000000000427E2C "_"
 *   insn=0x0000000000427E38 string=0x0000000000427E3C "Z\t"
 *   insn=0x0000000000427E48 string=0x0000000000427E4C "K"
 *   insn=0x0000000000427E4C string=0x0000000000427E50 "+"
 *   insn=0x0000000000427E50 string=0x0000000000427E54 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::TouchEnded(Caver::MapView *this, const Caver::FWTouch *a2)
{
  Caver::MapView *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  float v6; // s8
  __int64 v7; // x21
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x23
  float32x2_t v10; // d0
  float v11; // s0
  unsigned __int64 v12; // x10
  __int64 v13; // x0
  int v14; // w8
  void *v15; // x0
  __int64 v16; // x0
  void (*v17)(void); // x8
  __int64 v18; // x0
  unsigned int *v19; // x8
  int v20; // w9
  void (***v21)(void); // x0
  __int64 v23; // [xsp+8h] [xbp-68h] BYREF
  __int64 v24; // [xsp+10h] [xbp-60h]
  float32x2_t v25[3]; // [xsp+18h] [xbp-58h] BYREF

  v3 = this;
  v25[2] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)a2 != *((_QWORD *)this + 125) )
    return Caver::GUIResponder::TouchEnded(v3, a2);
  v4 = *((_QWORD *)this + 35);
  v5 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 125) = 0;
  if ( v5 == v4 )
    goto LABEL_19;
  v6 = 3.4028e38;
  v7 = 0;
  v8 = 0;
  v9 = (v5 - v4) >> 4;
  do
  {
    if ( !*((_BYTE *)v3 + 1048) || *(_BYTE *)(*(_QWORD *)(v4 + v7) + 41LL) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v4 + v7) + 25LL) )
      {
        this = (Caver::MapView *)Caver::FWTouch::LocationInView((__int64 *)v25, a2, v3);
        v4 = *((_QWORD *)v3 + 35);
        v5 = *((_QWORD *)v3 + 36);
        v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(**(_QWORD **)(v4 + v7) + 8LL), v25[0]).n64_u64[0];
        v11 = vaddv_f32(vmul_f32(v10, v10));
        if ( v11 < 900.0 && v11 < v6 )
        {
          v6 = v11;
          v9 = v8;
        }
      }
    }
    ++v8;
    v12 = (v5 - v4) >> 4;
    v7 += 16;
  }
  while ( v8 < v12 );
  if ( v9 >= v12 )
  {
LABEL_19:
    v18 = *((_QWORD *)v3 + 30);
    if ( !v18 )
      return Caver::GUIResponder::TouchEnded(v3, a2);
    v17 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
    goto LABEL_29;
  }
  Caver::AudioSystem::sharedSystem(this);
  sub_566BB8((int)&v23, "click");
  Caver::AudioSystem::PlaySoundEffectWithName();
  v13 = v24;
  if ( v24 )
  {
    v14 = *(_DWORD *)(v24 + 8) - 1;
    *(_DWORD *)(v24 + 8) = v14;
    if ( !v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v15 = (void *)(v23 - 24);
  if ( (__int64 *)(v23 - 24) == &qword_6FD2E0 )
    goto LABEL_15;
  v19 = (unsigned int *)(v23 - 8);
  if ( &pthread_create )
  {
    do
      v20 = __ldaxr(v19);
    while ( __stlxr(v20 - 1, v19) );
  }
  else
  {
    v20 = (*v19)--;
  }
  if ( v20 > 0 )
  {
LABEL_15:
    if ( !*((_BYTE *)v3 + 1016) )
      goto LABEL_27;
    goto LABEL_16;
  }
  operator delete(v15);
  if ( *((_BYTE *)v3 + 1016) )
  {
LABEL_16:
    if ( v9 != *((_QWORD *)v3 + 128) )
      goto LABEL_27;
    v16 = *((_QWORD *)v3 + 30);
    if ( !v16 )
      return Caver::GUIResponder::TouchEnded(v3, a2);
    v17 = *(void (**)(void))(*(_QWORD *)v16 + 8LL);
LABEL_29:
    v17();
    return Caver::GUIResponder::TouchEnded(v3, a2);
  }
LABEL_27:
  *((_BYTE *)v3 + 1016) = 1;
  *((_QWORD *)v3 + 128) = v9;
  Caver::MapView::UpdateSelectionSprite(v3);
  v21 = (void (***)(void))*((_QWORD *)v3 + 30);
  if ( v21 )
  {
    v17 = **v21;
    goto LABEL_29;
  }
  return Caver::GUIResponder::TouchEnded(v3, a2);
}


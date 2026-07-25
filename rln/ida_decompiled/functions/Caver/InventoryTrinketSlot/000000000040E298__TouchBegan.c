/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E298
 * Mangled: _ZN5Caver20InventoryTrinketSlot10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::InventoryTrinketSlot::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F5340  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x000000000040E2AC string=0x000000000040E2B0 "V"
 *   insn=0x000000000040E2C0 string=0x000000000040E2C4 "h"
 *   insn=0x000000000040E2C8 string=0x000000000040E2CC "u"
 *   insn=0x000000000040E2D0 string=0x000000000040E2D4 "("
 *   insn=0x000000000040E2DC string=0x000000000040E2E0 "\t@"
 *   insn=0x000000000040E2E8 string=0x000000000040E2EC ""
 *   insn=0x000000000040E304 string=0x000000000040E308 "h"
 *   insn=0x000000000040E314 string=0x000000000040E318 "ibE9h"
 *   insn=0x000000000040E318 string=0x000000000040E31C "h"
 *   insn=0x000000000040E31C string=0x000000000040E320 "i"
 *   insn=0x000000000040E320 string=0x000000000040E32C "h"
 *   insn=0x000000000040E328 string=0x000000000040E338 "`"
 *   insn=0x000000000040E338 string=0x000000000040E33C "y"
 *   insn=0x000000000040E33C string=0x00000000001F5920 "P'"
 *   insn=0x000000000040E340 string=0x00000000001FDF30 "0'"
 *   insn=0x000000000040E348 string=0x0000000000584965 "click"
 *   insn=0x000000000040E36C string=0x00000000001F5340 "P'"
 *   insn=0x000000000040E374 string=0x000000000040E378 "@"
 *   insn=0x000000000040E378 string=0x000000000040E37C ""
 *   insn=0x000000000040E37C string=0x000000000040E380 ""
 *   insn=0x000000000040E384 string=0x000000000040E388 ""
 *   insn=0x000000000040E388 string=0x000000000040E38C ""
 *   insn=0x000000000040E398 string=0x000000000040E39C ")"
 *   insn=0x000000000040E3A4 string=0x000000000040E3A8 "!"
 *   insn=0x000000000040E3D8 string=0x000000000040E3DC "@"
 *   insn=0x000000000040E3EC string=0x000000000040E3F0 ")=G"
 *   insn=0x000000000040E3F0 string=0x000000000040E3F4 "!"
 *   insn=0x000000000040E3F8 string=0x000000000040E3FC "\t"
 *   insn=0x000000000040E3F8 string=0x000000000040E410 "\t"
 *   insn=0x000000000040E3FC string=0x000000000040E400 "*"
 *   insn=0x000000000040E400 string=0x000000000040E404 "\n"
 *   insn=0x000000000040E40C string=0x000000000040E41C "?"
 *   insn=0x000000000040E410 string=0x000000000040E414 "*"
 *   insn=0x000000000040E414 string=0x000000000040E418 "\n"
 *   insn=0x000000000040E41C string=0x000000000040E420 "l"
 *   insn=0x000000000040E430 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000040E43C string=0x000000000040E440 "J"
 *   insn=0x000000000040E444 string=0x000000000040E448 "(a"
 *   insn=0x000000000040E454 string=0x000000000040E458 "J=G"
 *   insn=0x000000000040E458 string=0x000000000040E45C ")!"
 *   insn=0x000000000040E460 string=0x000000000040E464 "*"
 *   insn=0x000000000040E460 string=0x000000000040E490 "*"
 *   insn=0x000000000040E464 string=0x000000000040E468 "K"
 *   insn=0x000000000040E468 string=0x000000000040E46C "+"
 *   insn=0x000000000040E470 string=0x000000000040E474 "_"
 *   insn=0x000000000040E490 string=0x000000000040E494 "K"
 *   insn=0x000000000040E494 string=0x000000000040E498 "+"
 *   insn=0x000000000040E498 string=0x000000000040E49C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryTrinketSlot::TouchBegan(Caver::InventoryTrinketSlot *this, const Caver::FWTouch *a2)
{
  __int64 v4; // x8
  _QWORD *v5; // x21
  __int64 v6; // x23
  __int64 v7; // x8
  int v8; // w9
  char v9; // w1
  Caver::AudioSystem *v10; // x0
  int v11; // w8
  void *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  _DWORD *v15; // [xsp+10h] [xbp-50h]
  __int64 v16[3]; // [xsp+18h] [xbp-48h] BYREF

  v16[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)this + 34);
  v6 = *(_QWORD *)(v4 + 256);
  v5 = *(_QWORD **)(v4 + 264);
  if ( !v5 || v5[1] || ((*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5), v7 = v5[2] - 1LL, (v5[2] = v7) != 0) )
  {
    if ( !v6 )
      return;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    if ( !v6 )
      return;
  }
  *((_QWORD *)this + 41) = *(_QWORD *)a2;
  Caver::FWTouch::LocationInView(v16, a2, this);
  v8 = *((unsigned __int8 *)this + 344);
  *((_QWORD *)this + 42) = v16[0];
  if ( v8 )
    v9 = 1;
  else
    v9 = *((_QWORD *)this + 41) != 0;
  v10 = (Caver::AudioSystem *)Caver::MenuItemSlot::SetSelected(*((Caver::MenuItemSlot **)this + 34), v9);
  Caver::AudioSystem::sharedSystem(v10);
  sub_566BB8((int)v16, "click");
  Caver::AudioSystem::PlaySoundEffectWithName();
  if ( v15 )
  {
    v11 = v15[2] - 1;
    v15[2] = v11;
    if ( !v11 )
      (*(void (__fastcall **)())(*(_QWORD *)v15 + 8LL))();
  }
  v12 = (void *)(v16[0] - 24);
  if ( (__int64 *)(v16[0] - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v16[0] - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v12);
  }
}


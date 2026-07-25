/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DD450
 * Mangled: _ZN5Caver11ItemOverlay17InitWithGameStateERKN5boost10shared_ptrINS_9GameStateEEE
 * Demangled: Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callers: 2
 *   0x00000000001F4B10  Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callees: 8
 *   0x00000000001F3590  Caver::CharacterState::GetItemsOfType(Caver::ItemType,std::vector<boost::shared_ptr<Caver::Item>,std::allocator<boost::shared_ptr<Caver::Item>>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEA20  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FF5F0  Caver::ItemOverlay::UpdateItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003DD66C  Caver::ItemOverlay::IsOverlayItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x00000000003DD460 string=0x00000000003DD464 "V"
 *   insn=0x00000000003DD474 string=0x00000000003DD478 "i"@"
 *   insn=0x00000000003DD47C string=0x00000000003DD480 "\n"
 *   insn=0x00000000003DD480 string=0x00000000003DD484 "J"
 *   insn=0x00000000003DD484 string=0x00000000003DD488 "\n"
 *   insn=0x00000000003DD490 string=0x00000000003DD494 "5"
 *   insn=0x00000000003DD494 string=0x00000000003DD4D8 "h"
 *   insn=0x00000000003DD498 string=0x00000000003DD49C ""
 *   insn=0x00000000003DD4AC string=0x00000000003DD4B0 "\t@"
 *   insn=0x00000000003DD4B8 string=0x00000000003DD4BC ""
 *   insn=0x00000000003DD4CC string=0x00000000003DD4D0 "@"
 *   insn=0x00000000003DD4EC string=0x00000000003DD4F0 "(X"
 *   insn=0x00000000003DD4F0 string=0x00000000001F3590 "P'"
 *   insn=0x00000000003DD4F8 string=0x00000000003DD4FC "`"
 *   insn=0x00000000003DD4FC string=0x00000000003DD588 "s"
 *   insn=0x00000000003DD500 string=0x00000000003DD504 "G"
 *   insn=0x00000000003DD508 string=0x00000000003DD518 "sB"
 *   insn=0x00000000003DD510 string=0x00000000003DD514 "7"
 *   insn=0x00000000003DD530 string=0x00000000003DD534 "4"
 *   insn=0x00000000003DD538 string=0x00000000003DD53C ""
 *   insn=0x00000000003DD548 string=0x00000000003DD54C "\t@"
 *   insn=0x00000000003DD558 string=0x00000000003DD55C ""
 *   insn=0x00000000003DD568 string=0x00000000003DD56C "@"
 *   insn=0x00000000003DD58C string=0x00000000003DD590 "Hg"
 *   insn=0x00000000003DD590 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DD5A0 string=0x00000000003DD5B8 "Fc"
 *   insn=0x00000000003DD5B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003DD5C4 string=0x00000000003DD5C8 "h"
 *   insn=0x00000000003DD5CC string=0x00000000003DD5D0 "8g"
 *   insn=0x00000000003DD5EC string=0x00000000003DD5F0 "5"
 *   insn=0x00000000003DD5F4 string=0x00000000003DD5F8 ""
 *   insn=0x00000000003DD604 string=0x00000000003DD608 "\t@"
 *   insn=0x00000000003DD614 string=0x00000000003DD618 ""
 *   insn=0x00000000003DD624 string=0x00000000003DD628 "@"
 *   insn=0x00000000003DD654 string=0x00000000003DD658 "h"
 *   insn=0x00000000003DD664 string=0x00000000003DD668 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemOverlay::InitWithGameState(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8

  _ReadStatusReg(TPIDR_EL0);
  v3 = *a2;
  v2 = a2[1];
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v4 = *(_QWORD **)(a1 + 248);
  *(_QWORD *)(a1 + 240) = v3;
  *(_QWORD *)(a1 + 248) = v2;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  Caver::CharacterState::GetItemsOfType();
}


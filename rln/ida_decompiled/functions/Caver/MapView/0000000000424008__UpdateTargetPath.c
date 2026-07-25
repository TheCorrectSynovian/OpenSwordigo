/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000424008
 * Mangled: _ZN5Caver7MapView16UpdateTargetPathEv
 * Demangled: Caver::MapView::UpdateTargetPath(void)
 *
 * Callers: 2
 *   0x00000000001F8BC0  Caver::MapView::UpdateTargetPath(void)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 14
 *   0x00000000001F40E0  Caver::GameState::CurrentGuideTarget(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9310  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001F9830  Caver::Sprite::Clear(void)
 *   0x00000000001FA3A0  Caver::Map::UnflagAllNodes(void)
 *   0x00000000001FCC50  Caver::Map::FindPath(std::string const&,std::string const&)
 *   0x00000000001FCF20  Caver::MapView::UpdateNodes(void)
 *   0x0000000000202260  Caver::Map::NodeForName(std::string const&)
 *   0x00000000002027A0  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 222
 *   insn=0x0000000000424018 string=0x000000000042401C "V"
 *   insn=0x0000000000424028 string=0x000000000042402C "h"
 *   insn=0x000000000042402C string=0x0000000000424030 "\t!G9I"
 *   insn=0x0000000000424030 string=0x0000000000424034 "I"
 *   insn=0x0000000000424034 string=0x0000000000424038 "iJA"
 *   insn=0x0000000000424034 string=0x00000000004240DC "`"
 *   insn=0x0000000000424038 string=0x000000000042403C "\t\t"
 *   insn=0x000000000042403C string=0x0000000000424040 "u"
 *   insn=0x0000000000424048 string=0x000000000042404C "hJA"
 *   insn=0x0000000000424048 string=0x00000000001F9830 "0'"
 *   insn=0x000000000042404C string=0x0000000000424050 "H"
 *   insn=0x0000000000424054 string=0x0000000000424058 "h"
 *   insn=0x0000000000424058 string=0x000000000042405C ""
 *   insn=0x0000000000424068 string=0x0000000000424070 "(y"
 *   insn=0x0000000000424068 string=0x0000000000594820 "\"
 *   insn=0x0000000000424070 string=0x0000000000424074 ""
 *   insn=0x0000000000424078 string=0x000000000042407C "t"
 *   insn=0x0000000000424078 string=0x000000000042436C "t"
 *   insn=0x0000000000424078 string=0x0000000000424378 "t"
 *   insn=0x0000000000424084 string=0x0000000000424088 ""
 *   insn=0x0000000000424090 string=0x0000000000424094 "4"
 *   insn=0x0000000000424094 string=0x0000000000424098 ""
 *   insn=0x0000000000424098 string=0x000000000042409C "bB\n"
 *   insn=0x00000000004240B4 string=0x00000000001F9310 "0'"
 *   insn=0x00000000004240B8 string=0x00000000004240BC ""
 *   insn=0x00000000004240CC string=0x00000000004240D0 ""
 *   insn=0x00000000004240E0 string=0x00000000004240E4 "tNA"
 *   insn=0x00000000004240E8 string=0x00000000004240EC "`"
 *   insn=0x00000000004240EC string=0x00000000004240F0 "4"
 *   insn=0x00000000004240F4 string=0x00000000004240F8 ""
 *   insn=0x0000000000424108 string=0x000000000042410C "\t@"
 *   insn=0x0000000000424114 string=0x0000000000424118 ""
 *   insn=0x0000000000424128 string=0x000000000042412C "@"
 *   insn=0x0000000000424140 string=0x0000000000424144 "a"
 *   insn=0x0000000000424160 string=0x000000000042419C "5"
 *   insn=0x0000000000424170 string=0x0000000000424174 "\t@"
 *   insn=0x000000000042417C string=0x0000000000424180 ""
 *   insn=0x0000000000424190 string=0x0000000000424194 "@"
 *   insn=0x000000000042419C string=0x00000000004241A0 "`"
 *   insn=0x00000000004241A8 string=0x00000000001F40E0 "P'"
 *   insn=0x00000000004241B0 string=0x00000000004241B4 ""
 *   insn=0x00000000004241B4 string=0x00000000004241B8 "i"
 *   insn=0x00000000004241B8 string=0x00000000004241BC "u~@"
 *   insn=0x00000000004241BC string=0x00000000004241C0 "h"
 *   insn=0x00000000004241C0 string=0x00000000004241C4 "(QW"
 *   insn=0x00000000004241CC string=0x00000000004241D0 ")"
 *   insn=0x0000000000424204 string=0x00000000001FCC50 "0'"
 *   insn=0x000000000042420C string=0x0000000000424210 "\n"
 *   insn=0x000000000042420C string=0x000000000042421C "uNA"
 *   insn=0x0000000000424210 string=0x0000000000424214 "J"
 *   insn=0x0000000000424214 string=0x0000000000424218 "\n"
 *   insn=0x000000000042421C string=0x0000000000424220 "iJ"
 *   insn=0x0000000000424220 string=0x0000000000424224 "hN"
 *   insn=0x0000000000424224 string=0x0000000000424228 "5"
 *   insn=0x000000000042422C string=0x0000000000424230 ""
 *   insn=0x000000000042423C string=0x0000000000424240 "\t@"
 *   insn=0x000000000042424C string=0x0000000000424250 ""
 *   insn=0x000000000042425C string=0x0000000000424260 "@"
 *   insn=0x000000000042426C string=0x0000000000424270 "5"
 *   insn=0x0000000000424274 string=0x0000000000424278 ""
 *   insn=0x0000000000424284 string=0x0000000000424288 "\t@"
 *   insn=0x0000000000424294 string=0x0000000000424298 ""
 *   insn=0x00000000004242A4 string=0x00000000004242A8 "@"
 *   insn=0x00000000004242C8 string=0x0000000000424384 "\t"
 *   insn=0x00000000004242D8 string=0x00000000004242DC "4"
 *   insn=0x00000000004242D8 string=0x00000000004243A8 "\t"
 *   insn=0x00000000004242E0 string=0x00000000004242E4 ""
 *   insn=0x00000000004242F0 string=0x00000000004242F4 "\t@"
 *   insn=0x0000000000424300 string=0x0000000000424304 ""
 *   insn=0x0000000000424310 string=0x0000000000424314 "@"
 *   insn=0x0000000000424328 string=0x000000000042432C ""
 *   insn=0x0000000000424330 string=0x0000000000424334 "a"
 *   insn=0x000000000042433C string=0x0000000000424340 "\t@"
 *   insn=0x0000000000424348 string=0x000000000042434C ""
 *   insn=0x0000000000424350 string=0x0000000000424354 "a"
 *   insn=0x000000000042435C string=0x0000000000424360 "@"
 *   insn=0x0000000000424364 string=0x0000000000424368 "6"
 *   insn=0x0000000000424370 string=0x0000000000424374 "G"
 *   insn=0x0000000000424378 string=0x000000000042437C "T"
 *   insn=0x000000000042437C string=0x0000000000424380 "D"
 *   insn=0x0000000000424384 string=0x0000000000424388 ")=G"
 *   insn=0x0000000000424388 string=0x000000000042438C "!"
 *   insn=0x0000000000424390 string=0x0000000000424394 "\t"
 *   insn=0x0000000000424390 string=0x00000000004243CC "\t"
 *   insn=0x0000000000424394 string=0x0000000000424398 "*"
 *   insn=0x0000000000424398 string=0x000000000042439C "\n"
 *   insn=0x00000000004243A0 string=0x00000000004243A4 ""
 *   insn=0x00000000004243A4 string=0x00000000004243D8 "?"
 *   insn=0x00000000004243A8 string=0x00000000004243AC ")=G"
 *   insn=0x00000000004243AC string=0x00000000004243B0 "!"
 *   insn=0x00000000004243B4 string=0x00000000004243B8 "\t"
 *   insn=0x00000000004243B4 string=0x00000000004243EC "\t"
 *   insn=0x00000000004243B8 string=0x00000000004243BC "*"
 *   insn=0x00000000004243BC string=0x00000000004243C0 "\n"
 *   insn=0x00000000004243C8 string=0x00000000004243F8 "?"
 *   insn=0x00000000004243CC string=0x00000000004243D0 "*"
 *   insn=0x00000000004243D0 string=0x00000000004243D4 "\n"
 *   insn=0x00000000004243EC string=0x00000000004243F0 "*"
 *   insn=0x00000000004243F0 string=0x00000000004243F4 "\n"
 *   insn=0x0000000000424410 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000042441C string=0x0000000000424420 "w"
 *   insn=0x0000000000424430 string=0x0000000000424434 ""
 *   insn=0x0000000000424440 string=0x0000000000424444 "\t@"
 *   insn=0x0000000000424450 string=0x0000000000424454 ""
 *   insn=0x0000000000424460 string=0x0000000000424464 "@"
 *   insn=0x000000000042446C string=0x0000000000424470 ""
 *   insn=0x0000000000424474 string=0x0000000000424478 ""
 *   insn=0x0000000000424480 string=0x0000000000424484 "+"
 *   insn=0x000000000042448C string=0x0000000000424490 "\t"
 *   insn=0x0000000000424490 string=0x0000000000424494 ")"
 *   insn=0x00000000004244A0 string=0x000000000042457C "\t"
 *   insn=0x00000000004244A4 string=0x00000000004244A8 "\t"
 *   insn=0x00000000004244A8 string=0x00000000004244AC ")"
 *   insn=0x00000000004244B8 string=0x00000000004244BC "\t"
 *   insn=0x00000000004244B8 string=0x00000000004244EC "4"
 *   insn=0x00000000004244BC string=0x00000000004244C0 ")=G"
 *   insn=0x00000000004244C0 string=0x00000000004244C4 "!"
 *   insn=0x00000000004244C8 string=0x00000000004244CC "\t"
 *   insn=0x00000000004244C8 string=0x00000000004245C0 "\t"
 *   insn=0x00000000004244CC string=0x00000000004244D0 "*"
 *   insn=0x00000000004244D0 string=0x00000000004244D4 "\n"
 *   insn=0x00000000004244D8 string=0x00000000004244DC "?"
 *   insn=0x00000000004244DC string=0x00000000004244E0 "l"
 *   insn=0x00000000004244F0 string=0x00000000004244F4 ""
 *   insn=0x0000000000424500 string=0x0000000000424504 "\t@"
 *   insn=0x0000000000424510 string=0x0000000000424514 ""
 *   insn=0x0000000000424520 string=0x0000000000424524 "@"
 *   insn=0x0000000000424530 string=0x0000000000424534 "T"
 *   insn=0x0000000000424538 string=0x000000000042453C ""
 *   insn=0x0000000000424548 string=0x000000000042454C "\t@"
 *   insn=0x0000000000424558 string=0x000000000042455C ""
 *   insn=0x0000000000424568 string=0x000000000042456C "@"
 *   insn=0x0000000000424574 string=0x0000000000424578 "!"
 *   insn=0x000000000042457C string=0x0000000000424580 ")=G"
 *   insn=0x0000000000424580 string=0x0000000000424584 "!"
 *   insn=0x0000000000424588 string=0x000000000042458C "\t"
 *   insn=0x0000000000424588 string=0x00000000004245A0 "\t"
 *   insn=0x000000000042458C string=0x0000000000424590 "*"
 *   insn=0x0000000000424590 string=0x0000000000424594 "\n"
 *   insn=0x000000000042459C string=0x00000000004245AC "?"
 *   insn=0x00000000004245A0 string=0x00000000004245A4 "*"
 *   insn=0x00000000004245A4 string=0x00000000004245A8 "\n"
 *   insn=0x00000000004245B4 string=0x00000000004245B8 "{"
 *   insn=0x00000000004245C0 string=0x00000000004245C4 "*"
 *   insn=0x00000000004245C4 string=0x00000000004245C8 "\n"
 *   insn=0x00000000004245C8 string=0x00000000004245CC "?"
 *   insn=0x00000000004245DC string=0x00000000004245E0 ""
 *   insn=0x00000000004245EC string=0x00000000004245F0 ""
 *   insn=0x0000000000424600 string=0x0000000000424604 "R"
 *   insn=0x0000000000424628 string=0x000000000042462C "U"
 *   insn=0x0000000000424638 string=0x000000000042463C "`~@"
 *   insn=0x000000000042463C string=0x0000000000424640 "XW"
 *   insn=0x0000000000424640 string=0x0000000000424644 "t~@"
 *   insn=0x0000000000424640 string=0x00000000001FA3A0 "0'"
 *   insn=0x0000000000424648 string=0x000000000042464C "*"
 *   insn=0x0000000000424650 string=0x0000000000424654 "l"
 *   insn=0x0000000000424654 string=0x0000000000424658 "J"
 *   insn=0x0000000000424658 string=0x000000000042465C "_"
 *   insn=0x000000000042465C string=0x0000000000424660 "M"
 *   insn=0x0000000000424664 string=0x0000000000424668 "h"
 *   insn=0x000000000042468C string=0x0000000000424690 "?b"
 *   insn=0x0000000000424690 string=0x0000000000424694 "a"
 *   insn=0x000000000042469C string=0x00000000004246B8 "?"
 *   insn=0x00000000004246A4 string=0x00000000004246A8 "k"
 *   insn=0x00000000004246A8 string=0x00000000004246AC "_"
 *   insn=0x00000000004246B8 string=0x00000000004246BC "`"
 *   insn=0x00000000004246CC string=0x00000000004246D0 ""
 *   insn=0x00000000004246DC string=0x00000000004246E0 ""
 *   insn=0x00000000004246E0 string=0x00000000004246E4 "@"
 *   insn=0x00000000004246E4 string=0x00000000004247E4 "h"
 *   insn=0x00000000004246E8 string=0x00000000004246EC "\n"
 *   insn=0x00000000004246EC string=0x00000000004246F0 "\t!@"
 *   insn=0x00000000004246EC string=0x000000000042482C "t~@"
 *   insn=0x00000000004246F4 string=0x00000000004246F8 ""
 *   insn=0x00000000004246F8 string=0x00000000004246FC "(w"
 *   insn=0x00000000004246FC string=0x0000000000424700 "!u"
 *   insn=0x0000000000424718 string=0x000000000042471C "i"
 *   insn=0x000000000042471C string=0x0000000000424720 "{"
 *   insn=0x0000000000424720 string=0x0000000000424724 ""
 *   insn=0x0000000000424724 string=0x0000000000424728 ""
 *   insn=0x0000000000424728 string=0x000000000042472C "<ih"
 *   insn=0x000000000042472C string=0x0000000000424730 "4"
 *   insn=0x0000000000424734 string=0x0000000000424738 ""
 *   insn=0x0000000000424744 string=0x0000000000424748 "\t@"
 *   insn=0x0000000000424754 string=0x0000000000424758 ""
 *   insn=0x0000000000424764 string=0x0000000000424768 "@"
 *   insn=0x0000000000424780 string=0x00000000004247A0 "!"
 *   insn=0x0000000000424784 string=0x0000000000424788 "!"
 *   insn=0x0000000000424788 string=0x000000000042478C "h"
 *   insn=0x0000000000424790 string=0x0000000000424794 "ii"
 *   insn=0x0000000000424794 string=0x0000000000424798 "\ta"
 *   insn=0x000000000042479C string=0x000000000042480C ":"
 *   insn=0x00000000004247A4 string=0x00000000004247A8 "\t"
 *   insn=0x00000000004247A4 string=0x00000000004247BC "\t"
 *   insn=0x00000000004247A8 string=0x00000000004247AC "*"
 *   insn=0x00000000004247AC string=0x00000000004247B0 "\n"
 *   insn=0x00000000004247B8 string=0x00000000004247C8 "?"
 *   insn=0x00000000004247BC string=0x00000000004247C0 "*"
 *   insn=0x00000000004247C0 string=0x00000000004247C4 "\n"
 *   insn=0x00000000004247E4 string=0x00000000004247E8 ""
 *   insn=0x00000000004247E8 string=0x00000000004247EC "h"
 *   insn=0x00000000004247F0 string=0x00000000004247F4 "*"
 *   insn=0x00000000004247F8 string=0x00000000004247FC "\ne@9j"
 *   insn=0x00000000004247FC string=0x0000000000424800 "j"
 *   insn=0x0000000000424800 string=0x0000000000424804 "\nu@9\n"
 *   insn=0x0000000000424804 string=0x0000000000424808 "\n"
 *   insn=0x0000000000424808 string=0x00000000004246E8 "hJA"
 *   insn=0x0000000000424834 string=0x0000000000424838 "("
 *   insn=0x0000000000424838 string=0x000000000042483C ""
 *   insn=0x0000000000424840 string=0x0000000000424844 ""
 *   insn=0x000000000042484C string=0x00000000001FCF20 "0'"
 *   insn=0x0000000000424858 string=0x000000000042485C "A"
 *   insn=0x000000000042488C string=0x0000000000424890 "(a"
 *   insn=0x0000000000424898 string=0x000000000042489C ")!"
 *   insn=0x00000000004248A0 string=0x00000000004248A4 "*"
 *   insn=0x00000000004248A0 string=0x00000000004248D0 "*"
 *   insn=0x00000000004248A4 string=0x00000000004248A8 "K"
 *   insn=0x00000000004248A8 string=0x00000000004248AC "+"
 *   insn=0x00000000004248B0 string=0x00000000004248B4 "_"
 *   insn=0x00000000004248D0 string=0x00000000004248D4 "K"
 *   insn=0x00000000004248D4 string=0x00000000004248D8 "+"
 *   insn=0x00000000004248D8 string=0x00000000004248DC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapView::UpdateTargetPath(Caver::MapView *this)
{
  __int64 v2; // x8
  __int64 result; // x0
  _DWORD *v4; // x20
  int v5; // w8
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  _QWORD *v14; // x20
  _QWORD *v15; // x8
  __int64 v16; // x9
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x8
  void *v23; // x0
  void *v24; // x0
  __int64 v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x20
  __int64 v28; // x8
  __int64 v29; // x8
  unsigned int *v30; // x8
  int v31; // w9
  unsigned int *v32; // x8
  int v33; // w9
  __int64 v34; // [xsp+A8h] [xbp-60h] BYREF
  _QWORD v35[2]; // [xsp+B0h] [xbp-58h] BYREF
  _QWORD *v36; // [xsp+C0h] [xbp-48h]
  _DWORD *v37; // [xsp+C8h] [xbp-40h] BYREF
  _QWORD *v38; // [xsp+D0h] [xbp-38h]
  __int64 v39; // [xsp+E0h] [xbp-28h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((_QWORD *)this + 33);
  if ( *(_BYTE *)(v2 + 456) )
  {
    if ( *((_QWORD *)this + 82) )
      goto LABEL_3;
    v10 = *(_QWORD *)(v2 + 368);
    v9 = *(_QWORD **)(v2 + 376);
    if ( v9 )
    {
      if ( !v9[1] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v11 = v9[2] - 1LL;
        v9[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
    if ( !v10 )
      goto LABEL_3;
    Caver::GameState::CurrentGuideTarget((__int64 *)&v37, *((Caver::GameState **)this + 33));
    if ( v37 )
    {
      v12 = *((_QWORD *)this + 33);
      *((_DWORD *)this + 168) = *v37;
      v13 = *(_QWORD *)(v12 + 368);
      v14 = *(_QWORD **)(v12 + 376);
      if ( v14 )
        ++v14[1];
      sub_56A528(v35, v13 + 16);
      sub_56A528(&v34, v37 + 4);
      Caver::Map::FindPath();
      v16 = v35[1];
      v15 = v36;
      if ( v36 )
        ++v36[1];
      v17 = (_QWORD *)*((_QWORD *)this + 83);
      *((_QWORD *)this + 82) = v16;
      *((_QWORD *)this + 83) = v15;
      if ( v17 )
      {
        v18 = v17[1] - 1LL;
        v17[1] = v18;
        if ( !v18 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
          v19 = v17[2] - 1LL;
          v17[2] = v19;
          if ( !v19 )
            (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
        }
      }
      v20 = v36;
      if ( v36 )
      {
        v21 = v36[1] - 1LL;
        v36[1] = v21;
        if ( !v21 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
          v22 = v20[2] - 1LL;
          v20[2] = v22;
          if ( !v22 )
            (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
        }
      }
      v23 = (void *)(v34 - 24);
      if ( (__int64 *)(v34 - 24) != &qword_6FD2E0 )
      {
        v30 = (unsigned int *)(v34 - 8);
        if ( &pthread_create )
        {
          do
            v31 = __ldaxr(v30);
          while ( __stlxr(v31 - 1, v30) );
        }
        else
        {
          v31 = (*v30)--;
        }
        if ( v31 <= 0 )
          operator delete(v23);
      }
      v24 = (void *)(v35[0] - 24LL);
      if ( (__int64 *)(v35[0] - 24LL) != &qword_6FD2E0 )
      {
        v32 = (unsigned int *)(v35[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v33 = __ldaxr(v32);
          while ( __stlxr(v33 - 1, v32) );
        }
        else
        {
          v33 = (*v32)--;
        }
        if ( v33 <= 0 )
        {
          operator delete(v24);
          if ( !v14 )
            goto LABEL_40;
LABEL_37:
          v25 = v14[1] - 1LL;
          v14[1] = v25;
          if ( !v25 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
            v26 = v14[2] - 1LL;
            v14[2] = v26;
            if ( !v26 )
              (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
          }
          goto LABEL_40;
        }
      }
      if ( v14 )
        goto LABEL_37;
    }
LABEL_40:
    v27 = v38;
    if ( v38 )
    {
      v28 = v38[1] - 1LL;
      v38[1] = v28;
      if ( !v28 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
        v29 = v27[2] - 1LL;
        v27[2] = v29;
        if ( !v29 )
          (*(void (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
      }
    }
LABEL_3:
    result = Caver::Sprite::Clear((Caver::MapView *)((char *)this + 568));
    if ( *((_QWORD *)this + 82) )
    {
      v37 = 0;
      switch ( *((_DWORD *)this + 168) )
      {
        case 1:
        case 2:
          v4 = (_DWORD *)*((_QWORD *)this + 119);
          if ( !v4 )
            goto LABEL_7;
          goto LABEL_6;
        case 3:
          v4 = (_DWORD *)*((_QWORD *)this + 120);
          if ( !v4 )
            goto LABEL_7;
          goto LABEL_6;
        case 4:
          v4 = (_DWORD *)*((_QWORD *)this + 118);
          if ( !v4 )
            goto LABEL_7;
LABEL_6:
          ++v4[2];
LABEL_7:
          v37 = v4;
          if ( v4 )
          {
            result = Caver::MapView::AddPathToSprite();
            v5 = v4[2] - 1;
            v4[2] = v5;
            if ( !v5 )
              result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
          }
          break;
        default:
          return result;
      }
    }
    return result;
  }
  result = Caver::Sprite::Clear((Caver::MapView *)((char *)this + 568));
  v6 = (_QWORD *)*((_QWORD *)this + 83);
  *((_OWORD *)this + 41) = 0u;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  *((_DWORD *)this + 168) = 0;
  return result;
}


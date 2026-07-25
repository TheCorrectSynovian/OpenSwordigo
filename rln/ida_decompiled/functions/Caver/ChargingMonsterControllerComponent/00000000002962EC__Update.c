/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002962EC
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002037B0  Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Callees: 7
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8F80  Caver::MonsterEntityComponent::SetDamageEnabled(bool)
 *   0x00000000001FBEF0  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000002037B0  Caver::ChargingMonsterControllerComponent::Update(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 222
 *   insn=0x0000000000296304 string=0x0000000000296308 "hB@"
 *   insn=0x0000000000296310 string=0x0000000000296314 "`"
 *   insn=0x0000000000296310 string=0x000000000029632C "hN@"
 *   insn=0x000000000029631C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000296320 string=0x0000000000296324 "hB@"
 *   insn=0x0000000000296330 string=0x0000000000296334 "`""
 *   insn=0x0000000000296340 string=0x0000000000296344 "hN@"
 *   insn=0x0000000000296350 string=0x0000000000296354 "@"
 *   insn=0x0000000000296350 string=0x0000000000296364 "t"
 *   insn=0x0000000000296358 string=0x000000000029635C ""
 *   insn=0x0000000000296358 string=0x00000000002963F0 "u2"
 *   insn=0x000000000029635C string=0x0000000000296360 "!"
 *   insn=0x0000000000296360 string=0x00000000002963E4 ""
 *   insn=0x0000000000296370 string=0x0000000000296374 ")\t"
 *   insn=0x0000000000296378 string=0x000000000029637C ""
 *   insn=0x00000000002963A0 string=0x00000000002963A4 " "
 *   insn=0x00000000002963A4 string=0x00000000002963A8 "@"
 *   insn=0x00000000002963A4 string=0x00000000002963C8 "U"
 *   insn=0x00000000002963A8 string=0x00000000002963AC ""
 *   insn=0x00000000002963AC string=0x00000000002963B0 ""
 *   insn=0x00000000002963B4 string=0x00000000002963B8 ""
 *   insn=0x00000000002963B8 string=0x00000000002963BC ""
 *   insn=0x00000000002963CC string=0x00000000002963D0 ""
 *   insn=0x00000000002963F8 string=0x00000000002963FC " "
 *   insn=0x0000000000296400 string=0x0000000000296404 "hJA"
 *   insn=0x0000000000296408 string=0x000000000029640C "`B@"
 *   insn=0x0000000000296408 string=0x0000000000296460 "`B@"
 *   insn=0x000000000029640C string=0x0000000000296410 "`"
 *   insn=0x0000000000296410 string=0x000000000029641C "`"
 *   insn=0x0000000000296424 string=0x0000000000296428 "`B@"
 *   insn=0x0000000000296428 string=0x000000000029642C "hJA"
 *   insn=0x0000000000296434 string=0x0000000000296438 "@"
 *   insn=0x0000000000296438 string=0x000000000029643C "tJ"
 *   insn=0x0000000000296440 string=0x0000000000296444 "`"
 *   insn=0x000000000029644C string=0x0000000000296450 "`B@"
 *   insn=0x0000000000296458 string=0x00000000001FD020 "0'"
 *   insn=0x0000000000296464 string=0x0000000000296468 "`"
 *   insn=0x0000000000296464 string=0x0000000000296478 "h"
 *   insn=0x0000000000296470 string=0x0000000000296474 "`B@"
 *   insn=0x000000000029647C string=0x0000000000296480 "5D"
 *   insn=0x000000000029648C string=0x0000000000296490 "  "
 *   insn=0x0000000000296494 string=0x0000000000296498 "@B9"
 *   insn=0x00000000002964A4 string=0x00000000002964AC "j"
 *   insn=0x00000000002964AC string=0x00000000002964B0 "h"
 *   insn=0x00000000002964B0 string=0x00000000002964B4 "iR"
 *   insn=0x00000000002964B8 string=0x00000000002964BC "H"
 *   insn=0x00000000002964BC string=0x00000000002966A4 "`B@"
 *   insn=0x00000000002964C0 string=0x00000000002964C4 "`NA"
 *   insn=0x00000000002964C4 string=0x00000000002964C8 "!"
 *   insn=0x00000000002964D0 string=0x00000000002964D4 "i"
 *   insn=0x00000000002964D8 string=0x00000000002964DC "!q@"
 *   insn=0x00000000002964DC string=0x00000000002964E0 "8!"
 *   insn=0x00000000002964E4 string=0x00000000002964E8 "`"
 *   insn=0x00000000002964E4 string=0x00000000002964F8 "p@"
 *   insn=0x00000000002964EC string=0x00000000002964F0 "|"
 *   insn=0x00000000002964F0 string=0x00000000002964F4 "`B@"
 *   insn=0x0000000000296500 string=0x0000000000296504 "  "
 *   insn=0x0000000000296508 string=0x000000000029650C "i"
 *   insn=0x000000000029650C string=0x0000000000296510 "`>A"
 *   insn=0x0000000000296510 string=0x0000000000296514 "!"
 *   insn=0x0000000000296520 string=0x0000000000296524 "`"
 *   insn=0x0000000000296520 string=0x0000000000296538 "iJA"
 *   insn=0x0000000000296528 string=0x000000000029652C "m"
 *   insn=0x000000000029652C string=0x0000000000296530 "`B@"
 *   insn=0x0000000000296530 string=0x0000000000296534 "p@"
 *   insn=0x0000000000296538 string=0x000000000029653C "?"
 *   insn=0x000000000029653C string=0x0000000000296540 "`"
 *   insn=0x0000000000296544 string=0x0000000000296548 "tJ"
 *   insn=0x000000000029654C string=0x0000000000296550 "`"
 *   insn=0x0000000000296554 string=0x0000000000296558 "b"
 *   insn=0x0000000000296558 string=0x000000000029655C "`B@"
 *   insn=0x000000000029656C string=0x0000000000296570 "M"
 *   insn=0x0000000000296578 string=0x000000000029657C "]"
 *   insn=0x000000000029657C string=0x00000000001FBEF0 "0'"
 *   insn=0x0000000000296584 string=0x0000000000296588 "\t\t@"
 *   insn=0x0000000000296584 string=0x0000000000296594 "`"
 *   insn=0x0000000000296588 string=0x000000000029658C ")"
 *   insn=0x000000000029658C string=0x0000000000296590 "\t\t"
 *   insn=0x0000000000296594 string=0x0000000000296598 "h"
 *   insn=0x0000000000296598 string=0x000000000029659C " "
 *   insn=0x000000000029659C string=0x00000000002965A0 "\t@"
 *   insn=0x00000000002965A0 string=0x00000000002965A4 ")"
 *   insn=0x00000000002965A4 string=0x00000000002965A8 "\t"
 *   insn=0x00000000002965AC string=0x00000000002965B0 ""
 *   insn=0x00000000002965B0 string=0x00000000002965B4 ""
 *   insn=0x00000000002965B8 string=0x00000000002965BC "h"
 *   insn=0x00000000002965C0 string=0x000000000029669C "h"
 *   insn=0x00000000002965C8 string=0x00000000002965CC "!"
 *   insn=0x00000000002965D0 string=0x00000000002965D4 "M"
 *   insn=0x00000000002965D4 string=0x00000000002965D8 "i"
 *   insn=0x00000000002965DC string=0x00000000002965E0 "hB@"
 *   insn=0x00000000002965E0 string=0x00000000002965E4 "!9@"
 *   insn=0x00000000002965E4 string=0x00000000002965E8 "\t"
 *   insn=0x00000000002965EC string=0x00000000002965F0 "`"
 *   insn=0x00000000002965F4 string=0x00000000002965F8 ":"
 *   insn=0x0000000000296600 string=0x0000000000296604 "!"
 *   insn=0x0000000000296608 string=0x000000000029660C "<"
 *   insn=0x000000000029660C string=0x0000000000296610 "h"
 *   insn=0x0000000000296610 string=0x0000000000296614 ""
 *   insn=0x0000000000296614 string=0x0000000000296618 "("
 *   insn=0x0000000000296618 string=0x000000000029661C "h"
 *   insn=0x000000000029661C string=0x0000000000296620 "("
 *   insn=0x0000000000296620 string=0x0000000000296624 "`~@"
 *   insn=0x0000000000296628 string=0x000000000029662C "`"
 *   insn=0x0000000000296628 string=0x0000000000296640 ""
 *   insn=0x0000000000296630 string=0x0000000000296634 "+"
 *   insn=0x0000000000296634 string=0x0000000000296638 "`~@"
 *   insn=0x0000000000296640 string=0x0000000000296644 ""
 *   insn=0x000000000029664C string=0x0000000000296650 "`~@"
 *   insn=0x0000000000296654 string=0x0000000000296658 "`"
 *   insn=0x0000000000296654 string=0x0000000000296668 ""
 *   insn=0x000000000029665C string=0x0000000000296660 " "
 *   insn=0x0000000000296660 string=0x0000000000296664 "`~@"
 *   insn=0x0000000000296668 string=0x000000000029666C ""
 *   insn=0x0000000000296674 string=0x0000000000296678 "h"
 *   insn=0x0000000000296688 string=0x000000000029668C "h"
 *   insn=0x000000000029668C string=0x0000000000296690 "\tY"
 *   insn=0x0000000000296690 string=0x0000000000296694 "jb"
 *   insn=0x000000000029669C string=0x00000000002966A0 "h"
 *   insn=0x00000000002966A0 string=0x000000000029680C "h"
 *   insn=0x00000000002966A4 string=0x00000000002966A8 "t"
 *   insn=0x00000000002966A8 string=0x00000000002966AC "`"
 *   insn=0x00000000002966AC string=0x00000000002966B0 "dF9"
 *   insn=0x00000000002966AC string=0x00000000002966D8 "`"
 *   insn=0x00000000002966B4 string=0x00000000002966F0 ""
 *   insn=0x00000000002966B8 string=0x0000000000296710 "h"
 *   insn=0x00000000002966BC string=0x00000000002966C0 "`"
 *   insn=0x00000000002966C8 string=0x00000000002966CC "`B@"
 *   insn=0x00000000002966E0 string=0x00000000002966E4 "`B@"
 *   insn=0x00000000002966E4 string=0x00000000002966E8 "dF9t"
 *   insn=0x00000000002966E8 string=0x00000000002966EC "t"
 *   insn=0x00000000002966F4 string=0x00000000002966F8 "`"
 *   insn=0x0000000000296700 string=0x0000000000296704 "`B@"
 *   insn=0x000000000029670C string=0x00000000001F8F80 "0'"
 *   insn=0x0000000000296710 string=0x0000000000296714 "H"
 *   insn=0x0000000000296714 string=0x0000000000296718 "h"
 *   insn=0x0000000000296714 string=0x000000000029673C "hJA"
 *   insn=0x000000000029671C string=0x0000000000296720 "hJA"
 *   insn=0x000000000029671C string=0x0000000000296754 "`~@"
 *   insn=0x0000000000296724 string=0x0000000000296728 "`*A"
 *   insn=0x0000000000296728 string=0x000000000029672C "h.A"
 *   insn=0x0000000000296730 string=0x0000000000296734 "\t!"
 *   insn=0x0000000000296734 string=0x0000000000296738 "r"
 *   insn=0x0000000000296738 string=0x0000000000296900 "`:A"
 *   insn=0x0000000000296740 string=0x0000000000296744 "`"
 *   insn=0x0000000000296748 string=0x000000000029674C "\t!"
 *   insn=0x0000000000296750 string=0x000000000029679C "`6A"
 *   insn=0x0000000000296758 string=0x000000000029675C "t"
 *   insn=0x0000000000296758 string=0x0000000000296774 ""
 *   insn=0x0000000000296768 string=0x000000000029676C "`~@"
 *   insn=0x0000000000296774 string=0x0000000000296778 ""
 *   insn=0x0000000000296780 string=0x0000000000296784 "`~@"
 *   insn=0x0000000000296784 string=0x0000000000296788 "@"
 *   insn=0x0000000000296788 string=0x000000000029678C "`\t"
 *   insn=0x000000000029678C string=0x0000000000296790 "t"
 *   insn=0x000000000029678C string=0x00000000002968B8 ""
 *   insn=0x0000000000296790 string=0x0000000000296794 "E"
 *   insn=0x00000000002967A4 string=0x00000000002967A8 "mI"
 *   insn=0x00000000002967AC string=0x00000000002967B0 "`6"
 *   insn=0x00000000002967B0 string=0x00000000002967B4 "`B@"
 *   insn=0x00000000002967B8 string=0x00000000002967BC "t"
 *   insn=0x00000000002967B8 string=0x0000000000296918 "\t "
 *   insn=0x00000000002967C8 string=0x00000000002967CC "`B@"
 *   insn=0x00000000002967CC string=0x00000000002967D0 "\t"
 *   insn=0x00000000002967D0 string=0x00000000002967D4 "`"
 *   insn=0x00000000002967D4 string=0x00000000002967D8 ""
 *   insn=0x00000000002967D8 string=0x00000000002967DC "P"
 *   insn=0x00000000002967DC string=0x000000000029691C ""
 *   insn=0x00000000002967E8 string=0x00000000002967EC "`B@"
 *   insn=0x00000000002967EC string=0x00000000002967F0 ""
 *   insn=0x00000000002967F0 string=0x00000000002967F4 "@\t"
 *   insn=0x00000000002967F4 string=0x00000000002967F8 "`"
 *   insn=0x0000000000296800 string=0x0000000000296804 "`B@"
 *   insn=0x0000000000296804 string=0x0000000000296808 "E"
 *   insn=0x0000000000296820 string=0x0000000000296824 ""
 *   insn=0x0000000000296824 string=0x0000000000296828 "`B@"
 *   insn=0x000000000029682C string=0x0000000000296830 "`"
 *   insn=0x0000000000296838 string=0x000000000029683C "`B@"
 *   insn=0x000000000029684C string=0x0000000000296850 "  "
 *   insn=0x0000000000296854 string=0x0000000000296858 "@B9H"
 *   insn=0x0000000000296858 string=0x000000000029685C "H"
 *   insn=0x000000000029685C string=0x0000000000296860 "h"
 *   insn=0x0000000000296860 string=0x0000000000296864 "a"
 *   insn=0x0000000000296870 string=0x0000000000296874 "hJA"
 *   insn=0x0000000000296870 string=0x0000000000296988 "b"
 *   insn=0x0000000000296878 string=0x000000000029687C "@"
 *   insn=0x0000000000296884 string=0x0000000000296888 "hJ"
 *   insn=0x0000000000296888 string=0x000000000029688C "I"
 *   insn=0x0000000000296894 string=0x0000000000296898 "`>"
 *   insn=0x00000000002968A0 string=0x00000000002968A4 ""
 *   insn=0x00000000002968B0 string=0x00000000002968B4 "`~@"
 *   insn=0x00000000002968B8 string=0x00000000002968BC ""
 *   insn=0x00000000002968C4 string=0x0000000000587828 "33s?"
 *   insn=0x00000000002968D8 string=0x00000000002968DC "h"
 *   insn=0x00000000002968D8 string=0x0000000000296968 "h"
 *   insn=0x00000000002968E0 string=0x00000000002968E4 "\t"
 *   insn=0x00000000002968E4 string=0x00000000002968E8 "i"
 *   insn=0x00000000002968E8 string=0x00000000002968EC "hJA"
 *   insn=0x00000000002968F4 string=0x00000000002968F8 "mI"
 *   insn=0x0000000000296908 string=0x000000000029690C "`:"
 *   insn=0x000000000029690C string=0x0000000000296910 "`B@"
 *   insn=0x0000000000296910 string=0x0000000000296914 "@"
 *   insn=0x0000000000296920 string=0x0000000000296924 "e@"
 *   insn=0x0000000000296928 string=0x000000000029692C "`N@"
 *   insn=0x0000000000296930 string=0x0000000000296934 "`""
 *   insn=0x0000000000296930 string=0x0000000000296944 ""
 *   insn=0x0000000000296938 string=0x000000000029693C "i"
 *   insn=0x000000000029693C string=0x0000000000296940 "`N@"
 *   insn=0x0000000000296960 string=0x0000000000296964 " "
 *   insn=0x0000000000296970 string=0x0000000000296974 "mI"
 *   insn=0x0000000000296978 string=0x000000000029697C "`B@"
 *   insn=0x0000000000296988 string=0x000000000029698C "!(""
 *   insn=0x0000000000296994 string=0x0000000000296998 "hJA"
 *   insn=0x000000000029699C string=0x00000000002969A0 " "
 *   insn=0x00000000002969A0 string=0x00000000002969A4 ""
 *   insn=0x00000000002969A4 string=0x00000000002969A8 "hJ"
 *   insn=0x00000000002969B4 string=0x00000000002969B8 ";"
 *   insn=0x00000000002969BC string=0x00000000002969C0 "5"
 *   insn=0x00000000002969C4 string=0x00000000002969C8 ""
 *   insn=0x00000000002969D4 string=0x00000000002969D8 ""
 *   insn=0x00000000002969E8 string=0x00000000002969EC "X"
 *   insn=0x00000000002969F0 string=0x00000000002969F4 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::Update(
        Caver::ChargingMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x0
  __int64 v6; // x8
  __int64 *v7; // x20
  char v8; // w21
  _DWORD *v9; // x0
  int v10; // w8
  int v11; // w8
  float *v12; // x21
  Caver::EntityComponent *v13; // x0
  int v14; // w8
  int v15; // w20
  __int64 v16; // x0
  bool v17; // w9
  int v18; // w10
  float32x2_t *v19; // x8
  float v20; // s8
  int v21; // w8
  float v22; // s0
  int v23; // w20
  __int64 NearestEnemy; // x0
  _DWORD *v25; // x0
  int v26; // w9
  float32x2_t v27; // d9
  unsigned __int64 v28; // d0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int8 *v32; // x0
  int v33; // w20
  int v34; // w8
  bool v35; // w1
  int v36; // w8
  int v37; // s8
  float v38; // s9
  int v39; // w8
  __int64 v40; // x0
  Caver::ComponentOutletBase *v41; // x20
  __int64 v42; // x8
  __int64 v43; // x0
  float v44; // s8
  __int64 v45; // x0
  __int64 v46; // x0
  float v47; // s1
  float v48; // s0
  int v49; // w1
  __int64 v50; // x0
  long double v51; // [xsp+0h] [xbp-40h]

  v51 = a2;
  if ( *((_QWORD *)this + 16)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::ChargingMonsterControllerComponent *)((char *)this + 112),
                   this),
        *(_QWORD *)&a2 = *(_QWORD *)&v51,
        *((_QWORD *)this + 16)) )
  {
    v4 = *((_QWORD *)this + 19);
    if ( v4
      || (result = Caver::ComponentOutletBase::Connect(
                     (Caver::ChargingMonsterControllerComponent *)((char *)this + 136),
                     this),
          *(_QWORD *)&a2 = *(_QWORD *)&v51,
          (v4 = *((_QWORD *)this + 19)) != 0) )
    {
      v5 = *(__int64 **)(v4 + 160);
      if ( v5 )
      {
        if ( !*((_DWORD *)v5 + 2) )
        {
          v6 = *v5;
LABEL_18:
          (*(void (__fastcall **)(__int64 *))(v6 + 8))(v5);
          *(_QWORD *)&a2 = *(_QWORD *)&v51;
        }
      }
      else
      {
        v7 = (__int64 *)*((_QWORD *)this + 35);
        if ( v7 )
        {
          v8 = 0;
          *((_DWORD *)v7 + 2) += 2;
        }
        else
        {
          v8 = 1;
        }
        v9 = *(_DWORD **)(v4 + 160);
        *(_QWORD *)(v4 + 160) = v7;
        if ( v9 )
        {
          v10 = v9[2] - 1;
          v9[2] = v10;
          if ( !v10 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
            *(_QWORD *)&a2 = *(_QWORD *)&v51;
          }
        }
        if ( (v8 & 1) == 0 )
        {
          v11 = *((_DWORD *)v7 + 2) - 1;
          *((_DWORD *)v7 + 2) = v11;
          if ( !v11 )
          {
            v6 = *v7;
            v5 = v7;
            goto LABEL_18;
          }
        }
      }
      v12 = (float *)((char *)this + 332);
      *(float32x2_t *)((char *)this + 332) = vadd_f32(
                                               vdup_lane_s32(*(int32x2_t *)&a2, 0),
                                               *(float32x2_t *)((char *)this + 332));
      if ( !*((_DWORD *)this + 82) )
      {
        v13 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
        if ( v13 )
        {
          v14 = 0;
        }
        else
        {
          Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
          v13 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          v14 = *((_DWORD *)this + 82);
        }
        v15 = *((_DWORD *)v13 + 28);
        if ( v14 != v15 )
        {
          *((_DWORD *)this + 82) = v15;
          if ( !v13 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v13 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          }
          Caver::EntityComponent::SetFacingDirection(v13, v15);
          *v12 = 0.0;
        }
      }
      v16 = *((_QWORD *)this + 16);
      if ( !v16 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
        v16 = *((_QWORD *)this + 16);
      }
      v17 = *(float *)(v16 + 128) < 0.1 && *(float *)(v16 + 140) > 0.0 && *(_BYTE *)(v16 + 144) == 0;
      v18 = *((unsigned __int8 *)this + 304);
      v19 = (float32x2_t *)*((_QWORD *)this + 40);
      *((_BYTE *)this + 340) = v17;
      if ( v18 )
      {
        if ( v19 && *((float *)this + 83) > 1.2 )
        {
          v20 = v19[14].n64_f32[0] - *(float *)(*((_QWORD *)this + 5) + 112LL);
          if ( !v16 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v16 = *((_QWORD *)this + 16);
          }
          v21 = *(_DWORD *)(v16 + 112);
          if ( (float)(v20 * (float)v21) < 0.0 )
          {
            v22 = *((float *)this + 79);
            if ( v22 <= 0.4 )
            {
              *((float *)this + 79) = v22 + *(float *)&v51;
            }
            else
            {
              if ( !v16 )
              {
                Caver::ComponentOutletBase::Connect(
                  (Caver::ChargingMonsterControllerComponent *)((char *)this + 112),
                  this);
                v16 = *((_QWORD *)this + 16);
                v21 = *(_DWORD *)(v16 + 112);
              }
              if ( *((_DWORD *)this + 82) + v21 )
              {
                v23 = -v21;
                *((_DWORD *)this + 82) = -v21;
                if ( !v16 )
                {
                  Caver::ComponentOutletBase::Connect(
                    (Caver::ChargingMonsterControllerComponent *)((char *)this + 112),
                    this);
                  v16 = *((_QWORD *)this + 16);
                }
                Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)v16, v23);
                *v12 = 0.0;
              }
              *((_DWORD *)this + 79) = 0;
            }
          }
        }
      }
      else
      {
        if ( v19 )
          goto LABEL_58;
        NearestEnemy = Caver::MonsterControllerComponent::FindNearestEnemy(this);
        v19 = (float32x2_t *)NearestEnemy;
        if ( NearestEnemy )
          ++*(_DWORD *)(NearestEnemy + 8);
        v25 = (_DWORD *)*((_QWORD *)this + 40);
        *((_QWORD *)this + 40) = v19;
        if ( v25 )
        {
          v26 = v25[2] - 1;
          v25[2] = v26;
          if ( !v26 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 8LL))(v25);
            v19 = (float32x2_t *)*((_QWORD *)this + 40);
          }
        }
        if ( v19 )
        {
LABEL_58:
          if ( *v12 > 1.2 )
          {
            v27.n64_u64[0] = vsub_f32(v19[14], *(float32x2_t *)(*((_QWORD *)this + 5) + 112LL)).n64_u64[0];
            if ( !*((_QWORD *)this + 16) )
              Caver::ComponentOutletBase::Connect(
                (Caver::ChargingMonsterControllerComponent *)((char *)this + 112),
                this);
            v28 = vcgt_f32((float32x2_t)0x42C80000437A0000LL, vabs_f32(v27)).n64_u64[0];
            if ( (v28 & 0x100000000LL) != 0 && (v28 & 1) != 0 )
            {
              if ( *((_BYTE *)this + 304) )
                goto LABEL_67;
              v29 = *((_QWORD *)this + 31);
              if ( v29
                || (Caver::ComponentOutletBase::Connect(
                      (Caver::ChargingMonsterControllerComponent *)((char *)this + 232),
                      this),
                    (v29 = *((_QWORD *)this + 31)) != 0) )
              {
                if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 264LL))(v29) )
                {
                  v30 = *((_QWORD *)this + 31);
                  if ( !v30 )
                  {
                    Caver::ComponentOutletBase::Connect(
                      (Caver::ChargingMonsterControllerComponent *)((char *)this + 232),
                      this);
                    v30 = *((_QWORD *)this + 31);
                  }
                  *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 264LL))(v30) + 12) = 0;
                  v31 = *((_QWORD *)this + 36);
                  *(_DWORD *)(v31 + 32) = 0;
                  *(_BYTE *)(v31 + 45) = 0;
                  *(_WORD *)(*((_QWORD *)this + 35) + 44LL) = 256;
                  *((_WORD *)this + 152) = 1;
                  *((_QWORD *)this + 39) = 0;
                }
              }
            }
          }
        }
        if ( !*((_BYTE *)this + 304) && *((_DWORD *)this + 42) && *v12 > 1.2 )
        {
          v46 = *((_QWORD *)this + 16);
          if ( !v46 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v46 = *((_QWORD *)this + 16);
          }
          if ( *(float *)(v46 + 128) < 0.1 && *(float *)(v46 + 140) > 0.0 && !*(_BYTE *)(v46 + 144) )
          {
            v47 = *((float *)this + 46);
            v48 = *(float *)(*((_QWORD *)this + 5) + 112LL);
            if ( v48 >= v47 )
            {
              if ( v48 <= (float)(v47 + *((float *)this + 48)) || *((_DWORD *)this + 82) == -1 )
                goto LABEL_67;
              *((_DWORD *)this + 82) = -1;
              v49 = -1;
            }
            else
            {
              if ( *((_DWORD *)this + 82) == 1 )
                goto LABEL_67;
              v49 = 1;
              *((_DWORD *)this + 82) = 1;
            }
            Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)v46, v49);
            *((_DWORD *)this + 83) = 0;
          }
        }
      }
LABEL_67:
      v32 = (unsigned __int8 *)*((_QWORD *)this + 16);
      v33 = *((unsigned __int8 *)this + 305);
      if ( v32 )
      {
        v34 = v32[409];
        if ( *((_BYTE *)this + 305) )
        {
LABEL_69:
          if ( v34 )
            goto LABEL_79;
          if ( !v32 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v32 = (unsigned __int8 *)*((_QWORD *)this + 16);
          }
          v35 = 1;
          goto LABEL_78;
        }
      }
      else
      {
        Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
        v32 = (unsigned __int8 *)*((_QWORD *)this + 16);
        v34 = v32[409];
        if ( v33 )
          goto LABEL_69;
      }
      if ( !v34 )
        goto LABEL_79;
      if ( !v32 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
        v32 = (unsigned __int8 *)*((_QWORD *)this + 16);
      }
      v35 = 0;
LABEL_78:
      Caver::MonsterEntityComponent::SetDamageEnabled((Caver::MonsterEntityComponent *)v32, v35);
LABEL_79:
      if ( !*((_BYTE *)this + 304) )
      {
        v39 = *((_DWORD *)this + 82);
        if ( v39 )
          v38 = *((float *)this + 50) * (float)v39;
        else
          v38 = 0.0;
        v37 = 1145569280;
        *((float *)this + 77) = *((float *)this + 77) + *(float *)&v51;
        v45 = *((_QWORD *)this + 16);
        if ( v45 )
          goto LABEL_112;
        goto LABEL_91;
      }
      if ( *((_BYTE *)this + 305) )
        goto LABEL_81;
      v40 = *((_QWORD *)this + 31);
      if ( v40
        || (v41 = (Caver::ChargingMonsterControllerComponent *)((char *)this + 232),
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 232), this),
            (v40 = *((_QWORD *)this + 31)) != 0) )
      {
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 264LL))(v40);
        v43 = *((_QWORD *)this + 31);
        v44 = *(float *)(v42 + 12);
        if ( v43 )
        {
LABEL_108:
          if ( v44 > (float)(*(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 264LL))(v43) + 40) * 0.95) )
          {
            *(_BYTE *)(*((_QWORD *)this + 36) + 45LL) = 1;
            *((_BYTE *)this + 305) = 1;
            v36 = *((_DWORD *)this + 82);
            if ( v36 )
              goto LABEL_82;
            goto LABEL_110;
          }
          if ( !*((_BYTE *)this + 305) )
          {
            v37 = 1145569280;
            v38 = 0.0;
            v45 = *((_QWORD *)this + 16);
            if ( v45 )
              goto LABEL_112;
            goto LABEL_91;
          }
LABEL_81:
          v36 = *((_DWORD *)this + 82);
          if ( v36 )
          {
LABEL_82:
            v37 = *((_DWORD *)this + 75);
            v38 = *((float *)this + 74) * (float)v36;
            goto LABEL_111;
          }
LABEL_110:
          v37 = 1145569280;
          v38 = 0.0;
LABEL_111:
          *((float *)this + 78) = *((float *)this + 78) + *(float *)&v51;
          v45 = *((_QWORD *)this + 16);
          if ( v45 )
          {
LABEL_112:
            *(float *)(v45 + 176) = v38;
            *(_DWORD *)(v45 + 180) = v37;
LABEL_113:
            (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v45 + 200LL))(v45, v51);
            v50 = *((_QWORD *)this + 19);
            if ( !v50 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::ChargingMonsterControllerComponent *)((char *)this + 136),
                this);
              v50 = *((_QWORD *)this + 19);
            }
            return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v50 + 200LL))(v50, v51);
          }
LABEL_91:
          Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
          v45 = *((_QWORD *)this + 16);
          *(float *)(v45 + 176) = v38;
          if ( v45 )
          {
            *(_DWORD *)(v45 + 180) = v37;
          }
          else
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v45 = *((_QWORD *)this + 16);
            *(_DWORD *)(v45 + 180) = v37;
            if ( !v45 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::ChargingMonsterControllerComponent *)((char *)this + 112),
                this);
              v45 = *((_QWORD *)this + 16);
            }
          }
          goto LABEL_113;
        }
        v41 = (Caver::ChargingMonsterControllerComponent *)((char *)this + 232);
      }
      else
      {
        v44 = 0.0;
      }
      Caver::ComponentOutletBase::Connect(v41, this);
      v43 = *((_QWORD *)this + 31);
      goto LABEL_108;
    }
  }
  return result;
}


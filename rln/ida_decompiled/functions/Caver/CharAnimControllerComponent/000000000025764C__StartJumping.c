/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025764C
 * Mangled: _ZN5Caver27CharAnimControllerComponent12StartJumpingEb
 * Demangled: Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Callers: 1
 *   0x00000000001FE020  Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Callees: 3
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 80
 *   insn=0x000000000025765C string=0x0000000000257660 "h"
 *   insn=0x0000000000257660 string=0x0000000000257664 "H"
 *   insn=0x0000000000257668 string=0x000000000025766C "`"
 *   insn=0x0000000000257668 string=0x0000000000257708 "`~@"
 *   insn=0x0000000000257670 string=0x0000000000257674 "`"
 *   insn=0x0000000000257670 string=0x0000000000257688 ""
 *   insn=0x000000000025767C string=0x0000000000257680 "`"
 *   insn=0x000000000025767C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000257680 string=0x0000000000257684 "@"
 *   insn=0x0000000000257684 string=0x000000000025782C "h"
 *   insn=0x0000000000257688 string=0x000000000025768C ""
 *   insn=0x0000000000257694 string=0x0000000000257698 "`"
 *   insn=0x000000000025769C string=0x00000000002576A0 "`"
 *   insn=0x000000000025769C string=0x00000000002576B0 ""
 *   insn=0x00000000002576A8 string=0x00000000002576AC "`"
 *   insn=0x00000000002576B0 string=0x00000000002576B4 ""
 *   insn=0x00000000002576BC string=0x00000000002576C0 "`"
 *   insn=0x00000000002576C0 string=0x00000000002576C4 "u"
 *   insn=0x00000000002576C8 string=0x00000000002576CC "`"
 *   insn=0x00000000002576C8 string=0x00000000002576E0 ""
 *   insn=0x00000000002576D4 string=0x00000000002576D8 "`"
 *   insn=0x00000000002576D8 string=0x00000000002576DC "@"
 *   insn=0x00000000002576E0 string=0x00000000002576E4 ""
 *   insn=0x00000000002576F8 string=0x00000000002576FC "\t"
 *   insn=0x0000000000257700 string=0x0000000000257704 "*"
 *   insn=0x000000000025770C string=0x0000000000257710 "`"
 *   insn=0x000000000025770C string=0x0000000000257724 ""
 *   insn=0x0000000000257718 string=0x000000000025771C "`~@"
 *   insn=0x000000000025771C string=0x0000000000257720 "`"
 *   insn=0x0000000000257724 string=0x0000000000257728 ""
 *   insn=0x0000000000257730 string=0x0000000000257734 "`~@"
 *   insn=0x0000000000257738 string=0x000000000025773C "`"
 *   insn=0x0000000000257738 string=0x000000000025774C ""
 *   insn=0x0000000000257744 string=0x0000000000257748 "`~@"
 *   insn=0x000000000025774C string=0x0000000000257750 ""
 *   insn=0x0000000000257758 string=0x000000000025775C "`~@"
 *   insn=0x000000000025775C string=0x0000000000257760 "u"
 *   insn=0x0000000000257764 string=0x0000000000257768 "`"
 *   insn=0x0000000000257764 string=0x000000000025777C ""
 *   insn=0x0000000000257770 string=0x0000000000257774 "`~@"
 *   insn=0x000000000025777C string=0x0000000000257780 ""
 *   insn=0x0000000000257794 string=0x0000000000257798 "\t"
 *   insn=0x00000000002577B4 string=0x00000000002577B8 "@"
 *   insn=0x00000000002577B4 string=0x0000000000257808 "6"
 *   insn=0x00000000002577B8 string=0x00000000002577BC ""
 *   insn=0x00000000002577BC string=0x00000000002577C0 ""
 *   insn=0x00000000002577C0 string=0x00000000002577C4 "!"
 *   insn=0x00000000002577C4 string=0x00000000002577C8 ""
 *   insn=0x00000000002577C8 string=0x00000000002577CC ""
 *   insn=0x00000000002577D0 string=0x00000000002577D4 ""
 *   insn=0x00000000002577E8 string=0x00000000002577EC "@"
 *   insn=0x00000000002577EC string=0x00000000002577F0 ""
 *   insn=0x00000000002577F0 string=0x00000000002577F4 ""
 *   insn=0x00000000002577F8 string=0x00000000002577FC ""
 *   insn=0x00000000002577FC string=0x0000000000257800 ""
 *   insn=0x000000000025780C string=0x0000000000257810 ""
 *   insn=0x0000000000257820 string=0x0000000000257824 ""
 *   insn=0x0000000000257830 string=0x0000000000257834 "\tY"
 *   insn=0x0000000000257834 string=0x0000000000257838 "h"
 *   insn=0x000000000025783C string=0x0000000000257840 ") "
 *   insn=0x0000000000257844 string=0x0000000000257848 "\tY"
 *   insn=0x0000000000257864 string=0x0000000000257868 ""
 *   insn=0x0000000000257874 string=0x0000000000257878 ""
 *   insn=0x0000000000257880 string=0x0000000000257884 ""
 *   insn=0x0000000000257888 string=0x000000000025788C "6"
 *   insn=0x0000000000257890 string=0x0000000000257894 ""
 *   insn=0x00000000002578A0 string=0x00000000002578A4 ""
 *   insn=0x00000000002578B8 string=0x00000000002578BC ""
 *   insn=0x00000000002578BC string=0x00000000002578C0 "i"
 *   insn=0x00000000002578C0 string=0x00000000002578C4 "!5G"
 *   insn=0x00000000002578C0 string=0x0000000000583734 "o"
 *   insn=0x00000000002578CC string=0x00000000002578D0 "e"
 *   insn=0x00000000002578D0 string=0x00000000002578DC ""
 *   insn=0x00000000002578DC string=0x00000000002578E0 "i"
 *   insn=0x00000000002578E0 string=0x00000000002578E4 "!1G"
 *   insn=0x00000000002578E0 string=0x0000000000583730 "w"
 *   insn=0x00000000002578EC string=0x00000000002578F0 "m"
 *   insn=0x0000000000257904 string=0x0000000000257908 ""
 *   insn=0x0000000000257908 string=0x000000000025790C ""
 *   insn=0x0000000000257910 string=0x0000000000257914 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::StartJumping(__int64 this, char a2)
{
  _QWORD *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  _DWORD *v7; // x20
  char v8; // w22
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x21
  __int64 v12; // x0
  int v13; // w8
  int v14; // w8
  int v15; // w8
  __int64 v16; // x8

  v2 = (_QWORD *)this;
  if ( *(_QWORD *)(this + 344) )
  {
    if ( (a2 & 1) != 0 )
    {
      this = *(_QWORD *)(this + 272);
      if ( !this )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 32), (const Caver::Component *)v2);
        this = v2[34];
        if ( !this )
          goto LABEL_34;
      }
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 264LL))(this);
      if ( !this )
        goto LABEL_34;
      v3 = v2[34];
      if ( !v3 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 32), (const Caver::Component *)v2);
        v3 = v2[34];
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) + 12) = 0;
      v4 = v2[34];
      v5 = v2[42];
      if ( v4
        || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 32), (const Caver::Component *)v2),
            (v4 = v2[34]) != 0) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4);
        v7 = (_DWORD *)v6;
        if ( v6 )
        {
          v8 = 0;
          *(_DWORD *)(v6 + 8) += 2;
LABEL_23:
          this = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(v5 + 16) = v7;
          if ( this )
          {
            v13 = *(_DWORD *)(this + 8) - 1;
            *(_DWORD *)(this + 8) = v13;
            if ( !v13 )
LABEL_30:
              this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
          }
LABEL_31:
          if ( (v8 & 1) == 0 )
          {
            v15 = v7[2] - 1;
            v7[2] = v15;
            if ( !v15 )
              this = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
          }
LABEL_34:
          *(_WORD *)(v2[43] + 44LL) = 256;
          v16 = v2[42];
          if ( v16 )
          {
            *(_DWORD *)(v16 + 32) = 0;
            *(_WORD *)(v16 + 44) = 257;
          }
          return this;
        }
      }
      else
      {
        v7 = 0;
      }
      v8 = 1;
      goto LABEL_23;
    }
    this = *(_QWORD *)(this + 248);
    if ( !this )
    {
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 29), (const Caver::Component *)v2);
      this = v2[31];
      if ( !this )
        goto LABEL_34;
    }
    this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 264LL))(this);
    if ( !this )
      goto LABEL_34;
    v9 = v2[31];
    if ( !v9 )
    {
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 29), (const Caver::Component *)v2);
      v9 = v2[31];
    }
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 264LL))(v9) + 12) = 0;
    v10 = v2[31];
    v11 = v2[42];
    if ( v10
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 29), (const Caver::Component *)v2),
          (v10 = v2[31]) != 0) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10);
      v7 = (_DWORD *)v12;
      if ( v12 )
      {
        v8 = 0;
        *(_DWORD *)(v12 + 8) += 2;
LABEL_28:
        this = *(_QWORD *)(v11 + 16);
        *(_QWORD *)(v11 + 16) = v7;
        if ( this )
        {
          v14 = *(_DWORD *)(this + 8) - 1;
          *(_DWORD *)(this + 8) = v14;
          if ( !v14 )
            goto LABEL_30;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v7 = 0;
    }
    v8 = 1;
    goto LABEL_28;
  }
  return this;
}


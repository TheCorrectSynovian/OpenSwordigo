/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000232AD8
 * Mangled: _ZN5Caver16ProgramComponent13HandleMessageEiPv
 * Demangled: Caver::ProgramComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F99C0  Caver::ProgramState::Abort(void)
 *   0x00000000002009F0  Caver::ProgramComponent::Execute(void)
 *
 * Referenced strings: 45
 *   insn=0x0000000000232AE0 string=0x0000000000232AE4 "("
 *   insn=0x0000000000232AEC string=0x0000000000232AF0 "h"
 *   insn=0x0000000000232AF4 string=0x0000000000232AFC "(y"
 *   insn=0x0000000000232AFC string=0x0000000000232B00 ""
 *   insn=0x0000000000232B04 string=0x0000000000232B08 "hv@"
 *   insn=0x0000000000232B04 string=0x0000000000232B78 "hv@"
 *   insn=0x0000000000232B04 string=0x0000000000232BA0 "hZ@"
 *   insn=0x0000000000232B04 string=0x0000000000232C14 "hv@"
 *   insn=0x0000000000232B04 string=0x0000000000232C24 "I"
 *   insn=0x0000000000232B04 string=0x0000000000232C3C "hv@"
 *   insn=0x0000000000232B0C string=0x0000000000232B10 " \n"
 *   insn=0x0000000000232B10 string=0x0000000000232B14 "`Z@"
 *   insn=0x0000000000232B14 string=0x0000000000232B18 " \n"
 *   insn=0x0000000000232B18 string=0x0000000000232B1C "LA9"
 *   insn=0x0000000000232B24 string=0x0000000000232B28 "t^@"
 *   insn=0x0000000000232B24 string=0x00000000001F99C0 "0'"
 *   insn=0x0000000000232B2C string=0x0000000000232B30 "t\t"
 *   insn=0x0000000000232B34 string=0x0000000000232B38 ""
 *   insn=0x0000000000232B48 string=0x0000000000232B4C "\t@"
 *   insn=0x0000000000232B54 string=0x0000000000232B58 ""
 *   insn=0x0000000000232B68 string=0x0000000000232B6C "@"
 *   insn=0x0000000000232B70 string=0x0000000000232B74 ":"
 *   insn=0x0000000000232B80 string=0x0000000000232B84 "hZ@"
 *   insn=0x0000000000232B84 string=0x0000000000232B88 "h"
 *   insn=0x0000000000232B88 string=0x0000000000232B8C "\tMA9)"
 *   insn=0x0000000000232B8C string=0x0000000000232B90 ")"
 *   insn=0x0000000000232B94 string=0x0000000000232B98 "\tE"
 *   insn=0x0000000000232B98 string=0x0000000000232B9C "0"
 *   insn=0x0000000000232BA4 string=0x0000000000232BA8 "MA9"
 *   insn=0x0000000000232BA4 string=0x0000000000232BFC "hv@"
 *   insn=0x0000000000232BAC string=0x0000000000232BB0 "t^@"
 *   insn=0x0000000000232BB4 string=0x0000000000232BB8 "4"
 *   insn=0x0000000000232BBC string=0x0000000000232BC0 ""
 *   insn=0x0000000000232BD0 string=0x0000000000232BD4 "\t@"
 *   insn=0x0000000000232BDC string=0x0000000000232BE0 ""
 *   insn=0x0000000000232BF0 string=0x0000000000232BF4 "@"
 *   insn=0x0000000000232C00 string=0x0000000000232C04 "@"
 *   insn=0x0000000000232C04 string=0x0000000000232C6C "hZ@"
 *   insn=0x0000000000232C08 string=0x0000000000232C0C "@"
 *   insn=0x0000000000232C24 string=0x0000000000232C28 "hv@"
 *   insn=0x0000000000232C28 string=0x0000000000232C2C "\t"
 *   insn=0x0000000000232C34 string=0x0000000000232C38 "\t"
 *   insn=0x0000000000232C4C string=0x0000000000232C50 "a"
 *   insn=0x0000000000232C54 string=0x0000000000232C58 "f7"
 *   insn=0x0000000000232C6C string=0x0000000000232C70 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProgramComponent::HandleMessage(Caver::ProgramComponent *this, int a2, _BYTE *a3)
{
  Caver::ProgramState *v4; // x0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w8
  int v14; // w8
  __int64 v16; // x8

  switch ( a2 )
  {
    case 2:
      if ( *((_DWORD *)this + 29) == 7 )
        goto LABEL_30;
      v4 = (Caver::ProgramState *)*((_QWORD *)this + 22);
      if ( v4 )
      {
        if ( !*((_BYTE *)v4 + 83) )
        {
          Caver::ProgramState::Abort(v4);
          v5 = (_QWORD *)*((_QWORD *)this + 23);
          *((_QWORD *)this + 22) = 0;
          *((_QWORD *)this + 23) = 0;
          if ( v5 )
          {
            v6 = v5[1] - 1LL;
            v5[1] = v6;
            if ( !v6 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
              v7 = v5[2] - 1LL;
              v5[2] = v7;
              if ( !v7 )
                (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
            }
          }
        }
      }
      break;
    case 5:
      if ( *((_DWORD *)this + 29) == 1 )
      {
        v8 = *((_QWORD *)this + 22);
        if ( !v8 || *(_BYTE *)(v8 + 83) )
          goto LABEL_30;
        *(_BYTE *)(v8 + 81) = 1;
      }
      break;
    case 6:
      v9 = *((_QWORD *)this + 22);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 83) )
        {
          v10 = (_QWORD *)*((_QWORD *)this + 23);
          *((_QWORD *)this + 22) = 0;
          *((_QWORD *)this + 23) = 0;
          if ( v10 )
          {
            v11 = v10[1] - 1LL;
            v10[1] = v11;
            if ( !v11 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
              v12 = v10[2] - 1LL;
              v10[2] = v12;
              if ( !v12 )
                (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
            }
          }
        }
      }
      v13 = *((_DWORD *)this + 29);
      if ( v13 == 1 )
      {
        v16 = *((_QWORD *)this + 22);
        if ( v16 )
          *(_BYTE *)(v16 + 81) = 0;
      }
      else if ( v13 == 2 )
      {
        goto LABEL_30;
      }
      break;
    case 13:
      if ( *((_DWORD *)this + 29) == 10 )
        goto LABEL_30;
      break;
    case 14:
      v14 = *((_DWORD *)this + 29);
      if ( a3[36] )
      {
        if ( v14 == 9 )
          goto LABEL_30;
      }
      else if ( v14 == 8 )
      {
        goto LABEL_30;
      }
      break;
    case 20:
      if ( *((_DWORD *)this + 29) == 4 )
LABEL_30:
        Caver::ProgramComponent::Execute(this);
      break;
    default:
      return 0;
  }
  return 0;
}


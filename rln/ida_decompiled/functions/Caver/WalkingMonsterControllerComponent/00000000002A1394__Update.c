/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1394
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::WalkingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FA000  Caver::WalkingMonsterControllerComponent::Update(float)
 *
 * Callees: 5
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FA000  Caver::WalkingMonsterControllerComponent::Update(float)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 106
 *   insn=0x00000000002A13A8 string=0x00000000002A13AC "hB@"
 *   insn=0x00000000002A13AC string=0x00000000002A13B0 ""
 *   insn=0x00000000002A13B4 string=0x00000000002A13B8 "`"
 *   insn=0x00000000002A13B4 string=0x00000000002A13CC "uN@"
 *   insn=0x00000000002A13C0 string=0x00000000002A13C4 "hB@"
 *   insn=0x00000000002A13C0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A13C4 string=0x00000000002A13C8 "("
 *   insn=0x00000000002A13D0 string=0x00000000002A13D4 "`""
 *   insn=0x00000000002A13DC string=0x00000000002A13E0 "uN@"
 *   insn=0x00000000002A13E0 string=0x00000000002A13E4 "U"
 *   insn=0x00000000002A13EC string=0x00000000002A13F0 "@"
 *   insn=0x00000000002A13EC string=0x00000000002A1400 "`r@"
 *   insn=0x00000000002A13F0 string=0x00000000002A13F4 ""
 *   insn=0x00000000002A13F4 string=0x00000000002A13F8 ""
 *   insn=0x00000000002A13F4 string=0x00000000002A1474 "h"
 *   insn=0x00000000002A13FC string=0x00000000002A146C ""
 *   insn=0x00000000002A1404 string=0x00000000002A1408 ""
 *   insn=0x00000000002A1404 string=0x00000000002A14A0 "`B"
 *   insn=0x00000000002A1408 string=0x00000000002A140C ""
 *   insn=0x00000000002A141C string=0x00000000002A1420 "\t"
 *   insn=0x00000000002A1430 string=0x00000000002A1434 "@"
 *   insn=0x00000000002A1430 string=0x00000000002A1450 "4"
 *   insn=0x00000000002A1434 string=0x00000000002A1438 ""
 *   insn=0x00000000002A1438 string=0x00000000002A143C ""
 *   insn=0x00000000002A1440 string=0x00000000002A1444 ""
 *   insn=0x00000000002A1444 string=0x00000000002A1448 ""
 *   insn=0x00000000002A1454 string=0x00000000002A1458 ""
 *   insn=0x00000000002A1478 string=0x00000000002A147C "`B@"
 *   insn=0x00000000002A1478 string=0x00000000002A1528 "h"
 *   insn=0x00000000002A147C string=0x00000000002A1480 "@"
 *   insn=0x00000000002A1480 string=0x00000000002A14E8 "`"
 *   insn=0x00000000002A14A8 string=0x00000000002A14AC "`r@"
 *   insn=0x00000000002A14AC string=0x00000000002A14B0 " "
 *   insn=0x00000000002A14B0 string=0x00000000002A14B4 "uN@"
 *   insn=0x00000000002A14B8 string=0x00000000002A14BC "`""
 *   insn=0x00000000002A14C4 string=0x00000000002A14C8 "`r@"
 *   insn=0x00000000002A14C8 string=0x00000000002A14CC "uN@"
 *   insn=0x00000000002A14D0 string=0x00000000002A14D4 "`B"
 *   insn=0x00000000002A14DC string=0x00000000002A14E0 "`r@"
 *   insn=0x00000000002A14EC string=0x00000000002A14F0 "|Y"
 *   insn=0x00000000002A14F0 string=0x00000000002A14F4 "`B@"
 *   insn=0x00000000002A14F4 string=0x00000000002A14F8 "h"
 *   insn=0x00000000002A1500 string=0x00000000002A1504 " "
 *   insn=0x00000000002A1504 string=0x00000000002A1508 "t"
 *   insn=0x00000000002A150C string=0x00000000002A1510 "`"
 *   insn=0x00000000002A1514 string=0x00000000002A1518 "rY"
 *   insn=0x00000000002A1518 string=0x00000000002A151C "`B@"
 *   insn=0x00000000002A1524 string=0x00000000001FD020 "0'"
 *   insn=0x00000000002A1528 string=0x00000000002A152C "("
 *   insn=0x00000000002A152C string=0x00000000002A1530 "`B@"
 *   insn=0x00000000002A152C string=0x00000000002A1570 "h"
 *   insn=0x00000000002A1534 string=0x00000000002A1538 "`"
 *   insn=0x00000000002A1534 string=0x00000000002A1548 ""
 *   insn=0x00000000002A153C string=0x00000000002A1540 "hY"
 *   insn=0x00000000002A1540 string=0x00000000002A1544 "`B@"
 *   insn=0x00000000002A155C string=0x00000000002A1560 "  "
 *   insn=0x00000000002A1560 string=0x00000000002A1564 "m"
 *   insn=0x00000000002A1564 string=0x00000000002A1568 "@B9H"
 *   insn=0x00000000002A1568 string=0x00000000002A156C "H"
 *   insn=0x00000000002A156C string=0x00000000002A1594 "h"
 *   insn=0x00000000002A1570 string=0x00000000002A1574 "("
 *   insn=0x00000000002A1574 string=0x00000000002A1578 "`"
 *   insn=0x00000000002A157C string=0x00000000002A1580 "\t!"
 *   insn=0x00000000002A1580 string=0x00000000002A1584 "`B@"
 *   insn=0x00000000002A1588 string=0x00000000002A158C "\t"
 *   insn=0x00000000002A1588 string=0x00000000002A1604 "t"
 *   insn=0x00000000002A158C string=0x00000000002A1590 "$"
 *   insn=0x00000000002A1590 string=0x00000000002A1620 ""
 *   insn=0x00000000002A1594 string=0x00000000002A1598 "a"
 *   insn=0x00000000002A15A4 string=0x00000000002A15A8 "h"
 *   insn=0x00000000002A15A4 string=0x00000000002A15C4 "b"
 *   insn=0x00000000002A15B0 string=0x00000000002A15B4 " "
 *   insn=0x00000000002A15B4 string=0x00000000002A15B8 "h"
 *   insn=0x00000000002A15BC string=0x00000000002A15C0 ""
 *   insn=0x00000000002A15C4 string=0x00000000002A15C8 "!(""
 *   insn=0x00000000002A15CC string=0x00000000002A15D0 ""
 *   insn=0x00000000002A15D0 string=0x00000000002A15D4 "h"
 *   insn=0x00000000002A15D8 string=0x00000000002A15DC ""
 *   insn=0x00000000002A15E4 string=0x00000000002A15E8 "h"
 *   insn=0x00000000002A15EC string=0x00000000002A15F0 "h"
 *   insn=0x00000000002A15F0 string=0x00000000002A15F4 "("
 *   insn=0x00000000002A15F8 string=0x00000000002A15FC "`B@"
 *   insn=0x00000000002A15FC string=0x00000000002A1600 "`"
 *   insn=0x00000000002A160C string=0x00000000002A1610 "4Y"
 *   insn=0x00000000002A1610 string=0x00000000002A1614 "`B@"
 *   insn=0x00000000002A1614 string=0x00000000002A1618 "\t"
 *   insn=0x00000000002A1620 string=0x00000000002A1628 ""
 *   insn=0x00000000002A1628 string=0x00000000002A162C ""
 *   insn=0x00000000002A1630 string=0x00000000002A1634 "e@"
 *   insn=0x00000000002A1638 string=0x00000000002A163C "`N@"
 *   insn=0x00000000002A1640 string=0x00000000002A1644 "`""
 *   insn=0x00000000002A1640 string=0x00000000002A1654 ""
 *   insn=0x00000000002A1648 string=0x00000000002A164C "%Y"
 *   insn=0x00000000002A164C string=0x00000000002A1650 "`N@"
 *   insn=0x00000000002A166C string=0x00000000002A1670 " "
 *   insn=0x00000000002A167C string=0x00000000002A1680 "`B@"
 *   insn=0x00000000002A1680 string=0x00000000002A1684 ""
 *   insn=0x00000000002A1684 string=0x00000000002A168C ""
 *   insn=0x00000000002A1690 string=0x00000000002A1694 "`"
 *   insn=0x00000000002A169C string=0x00000000002A16A0 "`B@"
 *   insn=0x00000000002A16A8 string=0x00000000002A16AC "4"
 *   insn=0x00000000002A16B0 string=0x00000000002A16B4 ""
 *   insn=0x00000000002A16C0 string=0x00000000002A16C4 ""
 *   insn=0x00000000002A16D0 string=0x00000000002A16D4 "|"
 *   insn=0x00000000002A16DC string=0x00000000002A16E0 "Hb"
 *   insn=0x00000000002A16E0 string=0x00000000001FA000 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WalkingMonsterControllerComponent::Update(
        Caver::WalkingMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x20
  _DWORD *v11; // x0
  int v12; // w8
  int v13; // w8
  Caver::EntityComponent *v14; // x0
  int v15; // w8
  int v16; // w20
  __int64 v17; // x0
  int v18; // w8
  float v19; // s9
  __int64 v20; // x0
  float v21; // s1
  float v22; // s0
  int v23; // w1
  __int64 v24; // x0

  if ( *((_QWORD *)this + 16)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::WalkingMonsterControllerComponent *)((char *)this + 112),
                   this),
        *((_QWORD *)this + 16)) )
  {
    v5 = *((_QWORD *)this + 19);
    if ( v5
      || (result = Caver::ComponentOutletBase::Connect(
                     (Caver::WalkingMonsterControllerComponent *)((char *)this + 136),
                     this),
          (v5 = *((_QWORD *)this + 19)) != 0) )
    {
      v6 = *(_QWORD *)(v5 + 160);
      if ( v6 )
      {
        if ( !*(_DWORD *)(v6 + 8) )
        {
          v7 = *(_QWORD *)v6;
LABEL_17:
          (*(void (__fastcall **)(__int64))(v7 + 8))(v6);
        }
      }
      else
      {
        v8 = *((_QWORD *)this + 28);
        if ( !v8 )
        {
          Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 208), this);
          v8 = *((_QWORD *)this + 28);
          if ( !v8 )
            goto LABEL_18;
          v5 = *((_QWORD *)this + 19);
          if ( !v5 )
          {
            Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 136), this);
            v8 = *((_QWORD *)this + 28);
            v5 = *((_QWORD *)this + 19);
            if ( !v8 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::WalkingMonsterControllerComponent *)((char *)this + 208),
                this);
              v8 = *((_QWORD *)this + 28);
            }
          }
        }
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
        v10 = v9;
        if ( v9 )
          *(_DWORD *)(v9 + 8) += 2;
        v11 = *(_DWORD **)(v5 + 160);
        *(_QWORD *)(v5 + 160) = v10;
        if ( v11 )
        {
          v12 = v11[2] - 1;
          v11[2] = v12;
          if ( !v12 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        if ( v10 )
        {
          v13 = *(_DWORD *)(v10 + 8) - 1;
          *(_DWORD *)(v10 + 8) = v13;
          if ( !v13 )
          {
            v7 = *(_QWORD *)v10;
            v6 = v10;
            goto LABEL_17;
          }
        }
      }
LABEL_18:
      if ( !*((_DWORD *)this + 58) )
      {
        v14 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
        if ( v14 )
        {
          v15 = 0;
        }
        else
        {
          Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
          v14 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          v15 = *((_DWORD *)this + 58);
        }
        v16 = *((_DWORD *)v14 + 28);
        if ( v15 != v16 )
        {
          *((_DWORD *)this + 58) = v16;
          if ( !v14 )
          {
            Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
            v14 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          }
          Caver::EntityComponent::SetFacingDirection(v14, v16);
        }
      }
      if ( !*((_DWORD *)this + 42) )
        goto LABEL_37;
      v17 = *((_QWORD *)this + 16);
      if ( !v17 )
      {
        Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
        v17 = *((_QWORD *)this + 16);
      }
      if ( *(float *)(v17 + 128) >= 0.1 || *(float *)(v17 + 140) <= 0.0 || *(_BYTE *)(v17 + 144) )
      {
LABEL_37:
        v18 = *((_DWORD *)this + 58);
        if ( v18 )
          goto LABEL_38;
LABEL_47:
        v19 = 0.0;
        v20 = *((_QWORD *)this + 16);
        if ( v20 )
          goto LABEL_39;
        goto LABEL_48;
      }
      v21 = *((float *)this + 46);
      v22 = *(float *)(*((_QWORD *)this + 5) + 112LL);
      if ( v22 >= v21 )
      {
        if ( v22 <= (float)(v21 + *((float *)this + 48)) )
          goto LABEL_37;
        v18 = -1;
        if ( *((_DWORD *)this + 58) == -1 )
        {
LABEL_38:
          v19 = *((float *)this + 50) * (float)v18;
          v20 = *((_QWORD *)this + 16);
          if ( v20 )
          {
LABEL_39:
            *(float *)(v20 + 176) = v19;
            goto LABEL_49;
          }
LABEL_48:
          Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
          v20 = *((_QWORD *)this + 16);
          *(float *)(v20 + 176) = v19;
          if ( !v20 )
          {
            Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 112), this);
            v20 = *((_QWORD *)this + 16);
            *(_DWORD *)(v20 + 180) = 1153138688;
            if ( !v20 )
            {
              Caver::ComponentOutletBase::Connect(
                (Caver::WalkingMonsterControllerComponent *)((char *)this + 112),
                this);
              v20 = *((_QWORD *)this + 16);
            }
            goto LABEL_50;
          }
LABEL_49:
          *(_DWORD *)(v20 + 180) = 1153138688;
LABEL_50:
          (*(void (__fastcall **)(__int64, long double))(*(_QWORD *)v20 + 200LL))(v20, a2);
          v24 = *((_QWORD *)this + 19);
          if ( !v24 )
          {
            Caver::ComponentOutletBase::Connect((Caver::WalkingMonsterControllerComponent *)((char *)this + 136), this);
            v24 = *((_QWORD *)this + 19);
          }
          return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)v24 + 200LL))(v24, a2);
        }
        v23 = -1;
        *((_DWORD *)this + 58) = -1;
      }
      else
      {
        v18 = 1;
        if ( *((_DWORD *)this + 58) == 1 )
          goto LABEL_38;
        *((_DWORD *)this + 58) = 1;
        v23 = 1;
      }
      Caver::EntityComponent::SetFacingDirection((Caver::EntityComponent *)v17, v23);
      v18 = *((_DWORD *)this + 58);
      if ( !v18 )
        goto LABEL_47;
      goto LABEL_38;
    }
  }
  return result;
}


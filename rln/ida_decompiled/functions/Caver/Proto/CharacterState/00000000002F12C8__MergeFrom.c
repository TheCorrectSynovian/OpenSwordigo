/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F12C8
 * Mangled: _ZN5Caver5Proto14CharacterState9MergeFromERKS1_
 * Demangled: Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Callers: 1
 *   0x00000000001FC770  Caver::Proto::CharacterState::MergeFrom(Caver::Proto::CharacterState const&)
 *
 * Callees: 12
 *   0x00000000001F3D10  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5940  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *   0x00000000001FA1F0  google::protobuf::internal::LogMessage::~LogMessage()
 *   0x00000000001FA500  google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &)
 *   0x00000000001FB3D0  google::protobuf::RepeatedPtrField<std::string>::MergeFrom(google::protobuf::RepeatedPtrField<std::string> const&)
 *   0x00000000001FC210  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 111
 *   insn=0x00000000002F12D8 string=0x00000000002F12DC "V"
 *   insn=0x00000000002F12F8 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002F1308 string=0x00000000002F130C "9"
 *   insn=0x00000000002F130C string=0x00000000001F63F0 "0'"
 *   insn=0x00000000002F1310 string=0x000000000058A3F2 "CHECK failed: (&from) != (this): "
 *   insn=0x00000000002F131C string=0x00000000001FC210 "0'"
 *   insn=0x00000000002F1324 string=0x00000000002F1328 "v$"
 *   insn=0x00000000002F1328 string=0x00000000001FA500 "0'"
 *   insn=0x00000000002F1330 string=0x00000000001FA1F0 "0'"
 *   insn=0x00000000002F1334 string=0x00000000002F1338 "a"
 *   insn=0x00000000002F1338 string=0x00000000002F133C "u\n"
 *   insn=0x00000000002F133C string=0x00000000001F3D10 "P'"
 *   insn=0x00000000002F1340 string=0x00000000002F1344 "a"
 *   insn=0x00000000002F1344 string=0x00000000002F1348 ""("
 *   insn=0x00000000002F1348 string=0x00000000002F134C "h"
 *   insn=0x00000000002F1348 string=0x00000000001FB3D0 "0'"
 *   insn=0x00000000002F1354 string=0x00000000002F1358 "("
 *   insn=0x00000000002F1360 string=0x00000000002F1364 "h"
 *   insn=0x00000000002F1364 string=0x00000000002F1368 "("
 *   insn=0x00000000002F136C string=0x00000000002F1370 "H87"
 *   insn=0x00000000002F137C string=0x00000000002F1380 "P7h"
 *   insn=0x00000000002F1380 string=0x00000000002F1384 "h"
 *   insn=0x00000000002F1388 string=0x00000000002F138C "("
 *   insn=0x00000000002F139C string=0x00000000002F13A0 "i"
 *   insn=0x00000000002F13A0 string=0x00000000002F13A4 ""
 *   insn=0x00000000002F13AC string=0x00000000002F13B0 "h"
 *   insn=0x00000000002F13B0 string=0x00000000002F13B4 "h"
 *   insn=0x00000000002F13B8 string=0x00000000002F13BC "i"
 *   insn=0x00000000002F13BC string=0x00000000002F13C0 ""
 *   insn=0x00000000002F13C8 string=0x00000000002F13CC "h"
 *   insn=0x00000000002F13D4 string=0x00000000002F13D8 "i"
 *   insn=0x00000000002F13D8 string=0x00000000002F13DC ""
 *   insn=0x00000000002F13E4 string=0x00000000002F13E8 "h"
 *   insn=0x00000000002F13F0 string=0x00000000002F13F4 "i"
 *   insn=0x00000000002F13F4 string=0x00000000002F13F8 ""
 *   insn=0x00000000002F1400 string=0x00000000002F1404 "h"
 *   insn=0x00000000002F1404 string=0x00000000002F1408 "("
 *   insn=0x00000000002F140C string=0x00000000002F1410 "i"
 *   insn=0x00000000002F1410 string=0x00000000002F1414 ""
 *   insn=0x00000000002F141C string=0x00000000002F1420 "h"
 *   insn=0x00000000002F1420 string=0x00000000002F1424 "h"
 *   insn=0x00000000002F1430 string=0x00000000002F1434 "u.@"
 *   insn=0x00000000002F1434 string=0x00000000002F1438 ")yC"
 *   insn=0x00000000002F1438 string=0x00000000002F143C ""
 *   insn=0x00000000002F144C string=0x00000000002F1450 "d"
 *   insn=0x00000000002F1450 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F1454 string=0x00000000002F1458 ""
 *   insn=0x00000000002F1458 string=0x00000000002F145C "a"
 *   insn=0x00000000002F145C string=0x00000000002F1460 ""
 *   insn=0x00000000002F146C string=0x00000000002F1470 "h"
 *   insn=0x00000000002F1470 string=0x00000000002F1474 ""
 *   insn=0x00000000002F1480 string=0x00000000002F1484 "u2@"
 *   insn=0x00000000002F1484 string=0x00000000002F1488 ")"
 *   insn=0x00000000002F1488 string=0x00000000002F148C ""
 *   insn=0x00000000002F149C string=0x00000000002F14A0 "P"
 *   insn=0x00000000002F14A4 string=0x00000000002F14A8 ""
 *   insn=0x00000000002F14A8 string=0x00000000002F14AC "a"
 *   insn=0x00000000002F14AC string=0x00000000002F14B0 ""
 *   insn=0x00000000002F14B8 string=0x00000000002F14BC "{"
 *   insn=0x00000000002F14BC string=0x00000000002F14C0 "h"
 *   insn=0x00000000002F14C8 string=0x00000000002F14CC "c"
 *   insn=0x00000000002F14D8 string=0x00000000002F14DC "uR@"
 *   insn=0x00000000002F14DC string=0x00000000002F14E0 ")u@"
 *   insn=0x00000000002F14E0 string=0x00000000002F14E4 ""
 *   insn=0x00000000002F14F4 string=0x00000000002F14F8 ":"
 *   insn=0x00000000002F14FC string=0x00000000002F1500 ""
 *   insn=0x00000000002F1500 string=0x00000000002F1504 "a"
 *   insn=0x00000000002F1504 string=0x00000000002F1508 ""
 *   insn=0x00000000002F1510 string=0x00000000002F1514 "e"
 *   insn=0x00000000002F1514 string=0x00000000002F1518 "h"
 *   insn=0x00000000002F1518 string=0x00000000002F151C "H"
 *   insn=0x00000000002F1528 string=0x00000000002F152C "uV@"
 *   insn=0x00000000002F152C string=0x00000000002F1530 ")"
 *   insn=0x00000000002F1530 string=0x00000000002F1534 ""
 *   insn=0x00000000002F1544 string=0x00000000002F1548 "&"
 *   insn=0x00000000002F154C string=0x00000000002F1550 ""
 *   insn=0x00000000002F1550 string=0x00000000002F1554 "a"
 *   insn=0x00000000002F1554 string=0x00000000002F1558 ""
 *   insn=0x00000000002F1560 string=0x00000000002F1564 "Q"
 *   insn=0x00000000002F1564 string=0x00000000002F1568 "h"
 *   insn=0x00000000002F1578 string=0x00000000002F157C "uZ@"
 *   insn=0x00000000002F157C string=0x00000000002F1580 ")"
 *   insn=0x00000000002F1580 string=0x00000000002F1584 ""
 *   insn=0x00000000002F159C string=0x00000000002F15A0 ""
 *   insn=0x00000000002F15A0 string=0x00000000002F15A4 "a"
 *   insn=0x00000000002F15A4 string=0x00000000002F15A8 ""
 *   insn=0x00000000002F15B0 string=0x00000000002F15B4 "="
 *   insn=0x00000000002F15B4 string=0x00000000002F15B8 "h"
 *   insn=0x00000000002F15C8 string=0x00000000002F15CC "u^@"
 *   insn=0x00000000002F15CC string=0x00000000002F15D0 ")"
 *   insn=0x00000000002F15D0 string=0x00000000002F15D4 ""
 *   insn=0x00000000002F15EC string=0x00000000002F15F0 ""
 *   insn=0x00000000002F15F0 string=0x00000000002F15F4 "a"
 *   insn=0x00000000002F15F4 string=0x00000000002F15F8 ""
 *   insn=0x00000000002F1600 string=0x00000000002F1604 ")"
 *   insn=0x00000000002F1604 string=0x00000000002F1608 "h"
 *   insn=0x00000000002F1608 string=0x00000000002F160C "("
 *   insn=0x00000000002F1610 string=0x00000000002F1614 "i"
 *   insn=0x00000000002F1614 string=0x00000000002F1618 ""
 *   insn=0x00000000002F1620 string=0x00000000002F1624 "h"
 *   insn=0x00000000002F1624 string=0x00000000002F1628 "h"
 *   insn=0x00000000002F162C string=0x00000000002F1630 "i"
 *   insn=0x00000000002F1630 string=0x00000000002F1634 ""
 *   insn=0x00000000002F163C string=0x00000000002F1640 "h"
 *   insn=0x00000000002F1648 string=0x00000000002F164C "i"
 *   insn=0x00000000002F164C string=0x00000000002F1650 ""
 *   insn=0x00000000002F167C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F1690 string=0x00000000002F1694 ".s"
 *   insn=0x00000000002F16AC string=0x00000000002F16B0 "@"
 *   insn=0x00000000002F16B8 string=0x00000000002F16BC ""
 *   insn=0x00000000002F16D4 string=0x00000000001F5940 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharacterState::MergeFrom(
        Caver::Proto::CharacterState *this,
        const Caver::Proto::CharacterState *a2)
{
  __int64 result; // x0
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w9
  int v10; // w9
  __int64 *v11; // x0
  __int64 *v12; // x0
  __int64 *v13; // x0
  __int64 *v14; // x0
  __int64 *v15; // x0
  __int64 *v16; // x0
  int v17; // w9
  int v18; // w9
  int v19; // w8
  _BYTE v20[32]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v21; // [xsp+48h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == this )
  {
    google::protobuf::internal::LogMessage::LogMessage();
    google::protobuf::internal::LogMessage::operator<<((int)v20, "CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v20);
  }
  google::protobuf::RepeatedPtrField<Caver::Proto::CharacterState_ItemState>::MergeFrom();
  result = google::protobuf::RepeatedPtrField<std::string>::MergeFrom();
  v5 = *((_DWORD *)a2 + 51);
  if ( !(_BYTE)v5 )
    goto LABEL_11;
  if ( (v5 & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 51) |= 1u;
    *((_DWORD *)this + 3) = v6;
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 2) == 0 )
    {
LABEL_6:
      if ( (v5 & 4) == 0 )
        goto LABEL_7;
      goto LABEL_22;
    }
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_6;
  }
  v7 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 51) |= 2u;
  *((_DWORD *)this + 4) = v7;
  v5 = *((_DWORD *)a2 + 51);
  if ( (v5 & 4) == 0 )
  {
LABEL_7:
    if ( (v5 & 8) == 0 )
      goto LABEL_8;
    goto LABEL_23;
  }
LABEL_22:
  v8 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 51) |= 4u;
  *((_DWORD *)this + 5) = v8;
  v5 = *((_DWORD *)a2 + 51);
  if ( (v5 & 8) == 0 )
  {
LABEL_8:
    if ( (v5 & 0x10) == 0 )
      goto LABEL_9;
    goto LABEL_24;
  }
LABEL_23:
  v9 = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 51) |= 8u;
  *((_DWORD *)this + 6) = v9;
  v5 = *((_DWORD *)a2 + 51);
  if ( (v5 & 0x10) == 0 )
  {
LABEL_9:
    if ( (v5 & 0x40) == 0 )
      goto LABEL_10;
    goto LABEL_25;
  }
LABEL_24:
  v10 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 51) |= 0x10u;
  *((_DWORD *)this + 7) = v10;
  v5 = *((_DWORD *)a2 + 51);
  if ( (v5 & 0x40) != 0 )
  {
LABEL_25:
    v11 = (__int64 *)*((_QWORD *)this + 11);
    *((_DWORD *)this + 51) |= 0x40u;
    if ( v11 == &Caver::Proto::CharacterState::_default_equipped_weapon_ )
    {
      v11 = (__int64 *)operator new(8u);
      *v11 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 11) = v11;
    }
    result = sub_56A6A8(v11);
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 0x80) != 0 )
      goto LABEL_28;
LABEL_11:
    if ( (v5 & 0x1FE00) == 0 )
      return result;
LABEL_12:
    if ( (v5 & 0x200) != 0 )
    {
      v13 = (__int64 *)*((_QWORD *)this + 20);
      *((_DWORD *)this + 51) |= 0x200u;
      if ( v13 == &Caver::Proto::CharacterState::_default_current_skill_ )
      {
        v13 = (__int64 *)operator new(8u);
        *v13 = (__int64)&byte_6FD2F8;
        *((_QWORD *)this + 20) = v13;
      }
      result = sub_56A6A8(v13);
      v5 = *((_DWORD *)a2 + 51);
      if ( (v5 & 0x400) == 0 )
      {
LABEL_14:
        if ( (v5 & 0x800) == 0 )
          goto LABEL_15;
        goto LABEL_38;
      }
    }
    else if ( (v5 & 0x400) == 0 )
    {
      goto LABEL_14;
    }
    v14 = (__int64 *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 51) |= 0x400u;
    if ( v14 == &Caver::Proto::CharacterState::_default_weapon_trinket_ )
    {
      v14 = (__int64 *)operator new(8u);
      *v14 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 21) = v14;
    }
    result = sub_56A6A8(v14);
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 0x800) == 0 )
    {
LABEL_15:
      if ( (v5 & 0x1000) == 0 )
        goto LABEL_16;
      goto LABEL_41;
    }
LABEL_38:
    v15 = (__int64 *)*((_QWORD *)this + 22);
    *((_DWORD *)this + 51) |= 0x800u;
    if ( v15 == &Caver::Proto::CharacterState::_default_armor_trinket_ )
    {
      v15 = (__int64 *)operator new(8u);
      *v15 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 22) = v15;
    }
    result = sub_56A6A8(v15);
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 0x1000) == 0 )
    {
LABEL_16:
      if ( (v5 & 0x2000) == 0 )
        goto LABEL_17;
      goto LABEL_44;
    }
LABEL_41:
    v16 = (__int64 *)*((_QWORD *)this + 23);
    *((_DWORD *)this + 51) |= 0x1000u;
    if ( v16 == &Caver::Proto::CharacterState::_default_skill_trinket_ )
    {
      v16 = (__int64 *)operator new(8u);
      *v16 = (__int64)&byte_6FD2F8;
      *((_QWORD *)this + 23) = v16;
    }
    result = sub_56A6A8(v16);
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 0x2000) == 0 )
    {
LABEL_17:
      if ( (v5 & 0x4000) == 0 )
        goto LABEL_18;
      goto LABEL_45;
    }
LABEL_44:
    v17 = *((_DWORD *)a2 + 48);
    *((_DWORD *)this + 51) |= 0x2000u;
    *((_DWORD *)this + 48) = v17;
    v5 = *((_DWORD *)a2 + 51);
    if ( (v5 & 0x4000) == 0 )
    {
LABEL_18:
      if ( (v5 & 0x8000) == 0 )
        return result;
LABEL_46:
      v19 = *((_DWORD *)this + 51) | 0x8000;
      *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
      *((_DWORD *)this + 51) = v19;
      return result;
    }
LABEL_45:
    v18 = *((_DWORD *)a2 + 49);
    *((_DWORD *)this + 51) |= 0x4000u;
    *((_DWORD *)this + 49) = v18;
    if ( (*((_DWORD *)a2 + 51) & 0x8000) == 0 )
      return result;
    goto LABEL_46;
  }
LABEL_10:
  if ( (v5 & 0x80) == 0 )
    goto LABEL_11;
LABEL_28:
  v12 = (__int64 *)*((_QWORD *)this + 12);
  *((_DWORD *)this + 51) |= 0x80u;
  if ( v12 == &Caver::Proto::CharacterState::_default_equipped_armor_ )
  {
    v12 = (__int64 *)operator new(8u);
    *v12 = (__int64)&byte_6FD2F8;
    *((_QWORD *)this + 12) = v12;
  }
  result = sub_56A6A8(v12);
  v5 = *((_DWORD *)a2 + 51);
  if ( (v5 & 0x1FE00) != 0 )
    goto LABEL_12;
  return result;
}


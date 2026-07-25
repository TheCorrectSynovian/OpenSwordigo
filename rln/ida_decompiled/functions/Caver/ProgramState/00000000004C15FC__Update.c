/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C15FC
 * Mangled: _ZN5Caver12ProgramState6UpdateEf
 * Demangled: Caver::ProgramState::Update(float)
 *
 * Callers: 2
 *   0x00000000001F88A0  Caver::ProgramState::Update(float)
 *   0x00000000004C15FC  Caver::ProgramState::Update(float)
 *
 * Callees: 6
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F5160  Caver::SceneObject::updateSpeedMultiplier(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB600  lua_resume(lua_State *,int)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x000000000052A9C8  sub_52A9C8
 *
 * Referenced strings: 40
 *   insn=0x00000000004C1614 string=0x00000000004C1618 "hFA9"
 *   insn=0x00000000004C1618 string=0x00000000004C161C ""
 *   insn=0x00000000004C161C string=0x00000000004C1620 "h"
 *   insn=0x00000000004C1620 string=0x00000000004C1624 "hJA9"
 *   insn=0x00000000004C1620 string=0x00000000004C162C "`"
 *   insn=0x00000000004C162C string=0x00000000004C1630 "`"
 *   insn=0x00000000004C1630 string=0x00000000004C163C "hJ@"
 *   insn=0x00000000004C1634 string=0x00000000004C1638 "("
 *   insn=0x00000000004C1634 string=0x00000000001F5160 "P'"
 *   insn=0x00000000004C163C string=0x00000000004C1640 "`V@"
 *   insn=0x00000000004C1644 string=0x00000000004C1648 "\t "
 *   insn=0x00000000004C164C string=0x00000000004C1650 "`N@"
 *   insn=0x00000000004C1654 string=0x00000000004C1658 "  "
 *   insn=0x00000000004C1658 string=0x00000000004C165C "`N"
 *   insn=0x00000000004C165C string=0x00000000004C1660 "%"
 *   insn=0x00000000004C1660 string=0x00000000004C1664 "`"
 *   insn=0x00000000004C1670 string=0x00000000001FB600 "0'"
 *   insn=0x00000000004C1674 string=0x00000000004C1678 "`"
 *   insn=0x00000000004C167C string=0x00000000004C1680 "hN"
 *   insn=0x00000000004C168C string=0x00000000004C1690 "@"
 *   insn=0x00000000004C1690 string=0x00000000004C1694 "hBA9"
 *   insn=0x00000000004C1698 string=0x00000000004C169C "h"
 *   insn=0x00000000004C169C string=0x00000000004C16A0 "HA9"
 *   insn=0x00000000004C16A4 string=0x00000000004C16B4 "LA9"
 *   insn=0x00000000004C16B8 string=0x00000000004C16BC ""
 *   insn=0x00000000004C16C0 string=0x00000000004C16C4 "("
 *   insn=0x00000000004C16C4 string=0x00000000004C16C8 "\t\t@"
 *   insn=0x00000000004C16C8 string=0x00000000004C16CC ")"
 *   insn=0x00000000004C16CC string=0x00000000004C16D0 "\t\t"
 *   insn=0x00000000004C16D4 string=0x00000000004C16D8 "\t"
 *   insn=0x00000000004C16DC string=0x00000000004C16E0 ")"
 *   insn=0x00000000004C16E0 string=0x00000000004C16E4 " "
 *   insn=0x00000000004C16F4 string=0x00000000004C16F8 "5"
 *   insn=0x00000000004C16FC string=0x00000000004C1700 ""
 *   insn=0x00000000004C1710 string=0x00000000004C1714 "\t@"
 *   insn=0x00000000004C171C string=0x00000000004C1720 ""
 *   insn=0x00000000004C1730 string=0x00000000004C1734 "@"
 *   insn=0x00000000004C1740 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C1770 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004C1774 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramState::Update(Caver::ProgramState *this, float a2)
{
  Caver::SceneObject *v4; // x0
  float v5; // s0
  float v6; // s8
  float v7; // s0
  Caver::ProgramState **v8; // x20
  Caver::ProgramState *v9; // x0
  _DWORD *v10; // x8
  int v11; // w9
  Caver::ProgramState *v12; // x23
  Caver::ProgramState *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x8

  if ( *((_BYTE *)this + 81) || *((_BYTE *)this + 82) )
  {
    v4 = (Caver::SceneObject *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      Caver::SceneObject::updateSpeedMultiplier(v4);
      a2 = v5 * a2;
    }
    v6 = a2 * *((float *)this + 21);
    if ( *((_DWORD *)this + 18) == 1 )
    {
      v7 = *((float *)this + 19) - v6;
      *((float *)this + 19) = v7;
      if ( v7 < 0.0 )
      {
        *((_DWORD *)this + 18) = 0;
        if ( (unsigned int)lua_resume() != 1 )
          *((_BYTE *)this + 83) = 1;
      }
    }
    v8 = (Caver::ProgramState **)*((_QWORD *)this + 2);
    if ( (Caver::ProgramState **)((char *)this + 16) != v8 )
    {
      do
      {
        v9 = v8[2];
        if ( !*((_BYTE *)this + 80) || *((_BYTE *)v9 + 82) )
        {
          Caver::ProgramState::Update(v9, v6);
          v9 = v8[2];
        }
        if ( *((_BYTE *)v9 + 83) )
        {
          v10 = (_DWORD *)*((_QWORD *)v9 + 4);
          *((_QWORD *)v9 + 4) = 0;
          if ( v10 )
          {
            v11 = v10[2] - 1;
            v10[2] = v11;
            if ( !v11 )
              (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v10 + 8LL))(v10, v10);
          }
          v12 = *v8;
          sub_52A9C8(v8);
          v13 = v8[3];
          if ( v13 )
          {
            v14 = *((_QWORD *)v13 + 1) - 1LL;
            *((_QWORD *)v13 + 1) = v14;
            if ( !v14 )
            {
              (*(void (__fastcall **)(Caver::ProgramState *))(*(_QWORD *)v13 + 16LL))(v13);
              v15 = *((_QWORD *)v13 + 2) - 1LL;
              *((_QWORD *)v13 + 2) = v15;
              if ( !v15 )
                (*(void (__fastcall **)(Caver::ProgramState *))(*(_QWORD *)v13 + 24LL))(v13);
            }
          }
          operator delete(v8);
        }
        else
        {
          v12 = *v8;
        }
        v8 = (Caver::ProgramState **)v12;
      }
      while ( (Caver::ProgramState *)((char *)this + 16) != v12 );
    }
  }
}


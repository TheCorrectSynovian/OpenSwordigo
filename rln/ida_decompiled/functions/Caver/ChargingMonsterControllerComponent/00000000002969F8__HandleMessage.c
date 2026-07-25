/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002969F8
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::ChargingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FD260  Caver::MonsterControllerComponent::UpdateRoamBounds(void)
 *
 * Referenced strings: 57
 *   insn=0x0000000000296A00 string=0x0000000000296A04 "("
 *   insn=0x0000000000296A14 string=0x0000000000296A1C "(y"
 *   insn=0x0000000000296A14 string=0x00000000005890D0 "X"
 *   insn=0x0000000000296A1C string=0x0000000000296A20 ""
 *   insn=0x0000000000296A24 string=0x0000000000296A28 "h"
 *   insn=0x0000000000296A24 string=0x0000000000296A3C "h"
 *   insn=0x0000000000296A24 string=0x0000000000296A5C "h"
 *   insn=0x0000000000296A2C string=0x0000000000296A30 "h"
 *   insn=0x0000000000296A38 string=0x0000000000296A44 "h"
 *   insn=0x0000000000296A3C string=0x0000000000296A40 "\n"
 *   insn=0x0000000000296A44 string=0x0000000000296A48 ") "
 *   insn=0x0000000000296A48 string=0x0000000000296A4C "\tY"
 *   insn=0x0000000000296A54 string=0x0000000000296A58 "J"
 *   insn=0x0000000000296A5C string=0x0000000000296A60 "@,@"
 *   insn=0x0000000000296A5C string=0x0000000000584430 "333?"
 *   insn=0x0000000000296A68 string=0x0000000000296A6C "("
 *   insn=0x0000000000296A6C string=0x0000000000296B30 "hB@"
 *   insn=0x0000000000296A70 string=0x0000000000587F44 "fff"
 *   insn=0x0000000000296A7C string=0x0000000000296A80 "i"
 *   insn=0x0000000000296A80 string=0x0000000000296A84 "H(@"
 *   insn=0x0000000000296A84 string=0x0000000000296A88 "\t"
 *   insn=0x0000000000296A88 string=0x0000000000296A8C "a:A"
 *   insn=0x0000000000296A90 string=0x0000000000296A94 "  ""
 *   insn=0x0000000000296A98 string=0x0000000000296A9C "aRA"
 *   insn=0x0000000000296A98 string=0x0000000000296ACC "i"
 *   insn=0x0000000000296AA0 string=0x0000000000296AA4 "  ""
 *   insn=0x0000000000296AA4 string=0x0000000000296AA8 "-"
 *   insn=0x0000000000296AA8 string=0x0000000000296AAC "i"
 *   insn=0x0000000000296AAC string=0x0000000000296AB0 "!AI"
 *   insn=0x0000000000296AB0 string=0x0000000000296AB4 "i"
 *   insn=0x0000000000296AB8 string=0x0000000000296ABC "B!"
 *   insn=0x0000000000296AC0 string=0x0000000000296AC4 """
 *   insn=0x0000000000296AD0 string=0x0000000000296AD4 "i"
 *   insn=0x0000000000296AD4 string=0x0000000000296AD8 "* "
 *   insn=0x0000000000296AD8 string=0x0000000000296ADC "*Y"
 *   insn=0x0000000000296AE8 string=0x0000000000296AEC "hJA"
 *   insn=0x0000000000296AEC string=0x0000000000296AF0 "  "
 *   insn=0x0000000000296AF0 string=0x0000000000296AF4 "\t"
 *   insn=0x0000000000296AF4 string=0x0000000000296AF8 "4E"
 *   insn=0x0000000000296AFC string=0x0000000000296B00 "`"
 *   insn=0x0000000000296B00 string=0x0000000000296B04 "`B@"
 *   insn=0x0000000000296B04 string=0x0000000000296B08 "tJ"
 *   insn=0x0000000000296B0C string=0x0000000000296B10 "`"
 *   insn=0x0000000000296B18 string=0x0000000000296B1C "`B@"
 *   insn=0x0000000000296B18 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000296B20 string=0x0000000000296B24 "?"
 *   insn=0x0000000000296B24 string=0x00000000001FD020 "0'"
 *   insn=0x0000000000296B34 string=0x0000000000296B38 "`"
 *   insn=0x0000000000296B34 string=0x0000000000296B48 "i"
 *   insn=0x0000000000296B40 string=0x0000000000296B44 "hB@"
 *   insn=0x0000000000296B4C string=0x0000000000296B50 "!5D"
 *   insn=0x0000000000296B54 string=0x0000000000296B58 "E"
 *   insn=0x0000000000296B5C string=0x0000000000296B60 "  "
 *   insn=0x0000000000296B64 string=0x0000000000296B68 "AB9"
 *   insn=0x0000000000296B6C string=0x0000000000296B70 "hRE9h"
 *   insn=0x0000000000296B70 string=0x0000000000296B74 "h"
 *   insn=0x0000000000296B7C string=0x00000000001FD260 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::HandleMessage(
        Caver::ChargingMonsterControllerComponent *this,
        int a2,
        float *a3)
{
  float v4; // s0
  float v5; // w8
  __int64 v6; // x9
  int v7; // w20
  Caver::EntityComponent *v8; // x0
  __int64 v9; // x8

  switch ( a2 )
  {
    case 6:
    case 12:
      if ( *((_BYTE *)this + 304) )
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 104LL) = 0;
        goto LABEL_5;
      }
      return 0;
    case 10:
      if ( *((_BYTE *)this + 304) )
      {
LABEL_5:
        *(_WORD *)(*((_QWORD *)this + 35) + 44LL) = 257;
        *((_WORD *)this + 152) = 0;
        *((_DWORD *)this + 77) = 0;
      }
      return 0;
    case 21:
      v4 = a3[11];
      if ( v4 > 0.7 || v4 <= -0.9 )
        goto LABEL_22;
      v5 = a3[10];
      if ( !*((_BYTE *)this + 305) )
        goto LABEL_14;
      if ( *((float *)this + 78) <= 0.5 || *((float *)this + 84) <= 3.0 )
      {
        if ( *((_BYTE *)this + 304) )
        {
          *(_WORD *)(*((_QWORD *)this + 35) + 44LL) = 257;
          *((_WORD *)this + 152) = 0;
          *((_DWORD *)this + 77) = 0;
        }
LABEL_14:
        if ( v5 >= 0.0 )
          v7 = 1;
        else
          v7 = -1;
        if ( *((_DWORD *)this + 82) != v7 )
        {
          v8 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          *((_DWORD *)this + 82) = v7;
          if ( !v8 )
          {
            Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
            v8 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          }
          Caver::EntityComponent::SetFacingDirection(v8, v7);
          *((_DWORD *)this + 83) = 0;
        }
      }
      else
      {
        v6 = *((_QWORD *)this + 5);
        *(float *)(v6 + 104) = v5 * 200.0;
        *(float *)(v6 + 108) = v4 * 200.0;
      }
      *((_DWORD *)this + 84) = 0;
LABEL_22:
      v9 = *((_QWORD *)this + 16);
      if ( !v9 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ChargingMonsterControllerComponent *)((char *)this + 112), this);
        v9 = *((_QWORD *)this + 16);
      }
      if ( *(float *)(v9 + 128) < 0.1 && *(float *)(v9 + 140) > 0.0 && !*(_BYTE *)(v9 + 144) && !*((_BYTE *)this + 340) )
        Caver::MonsterControllerComponent::UpdateRoamBounds(this);
      return 0;
    default:
      return 0;
  }
}


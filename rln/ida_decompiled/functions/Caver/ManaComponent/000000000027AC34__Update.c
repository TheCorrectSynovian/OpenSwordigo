/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AC34
 * Mangled: _ZN5Caver13ManaComponent6UpdateEf
 * Demangled: Caver::ManaComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FD2B0  Caver::ManaComponent::Update(float)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *
 * Referenced strings: 35
 *   insn=0x000000000027AC44 string=0x000000000027AC48 "a~@"
 *   insn=0x000000000027AC4C string=0x000000000027AC50 "!( "
 *   insn=0x000000000027AC50 string=0x000000000027AC54 "  ""
 *   insn=0x000000000027AC54 string=0x000000000027AC58 "a~"
 *   insn=0x000000000027AC5C string=0x000000000027AC60 "h&N)"
 *   insn=0x000000000027AC5C string=0x000000000027AC8C "hz@"
 *   insn=0x000000000027AC64 string=0x000000000027AC68 "*"
 *   insn=0x000000000027AC6C string=0x000000000027AC70 "!(#"
 *   insn=0x000000000027AC70 string=0x000000000027AC74 "\t"
 *   insn=0x000000000027AC74 string=0x000000000027AC78 "  ""
 *   insn=0x000000000027AC78 string=0x000000000027AC7C ")}"
 *   insn=0x000000000027AC7C string=0x000000000027AC80 "J"
 *   insn=0x000000000027AC80 string=0x000000000027AC84 "a~"
 *   insn=0x000000000027AC84 string=0x000000000027AC88 "iv"
 *   insn=0x000000000027AC90 string=0x000000000027AC94 "k"
 *   insn=0x000000000027AC94 string=0x000000000027AC98 "h&N)?"
 *   insn=0x000000000027AC98 string=0x000000000027AC9C "?"
 *   insn=0x000000000027AC9C string=0x000000000027ACA0 "\n"
 *   insn=0x000000000027ACA0 string=0x000000000027ACA4 "a"
 *   insn=0x000000000027ACA4 string=0x000000000027ACA8 ""
 *   insn=0x000000000027ACA8 string=0x000000000027ACAC " ( "
 *   insn=0x000000000027ACB0 string=0x000000000027ACB4 "`"
 *   insn=0x000000000027ACB4 string=0x000000000027ACB8 "k"
 *   insn=0x000000000027ACC0 string=0x000000000027ACC8 ")"
 *   insn=0x000000000027ACCC string=0x000000000027ACD0 "("
 *   insn=0x000000000027ACD0 string=0x000000000027ACD4 "}"
 *   insn=0x000000000027ACDC string=0x000000000027ACE0 "hv"
 *   insn=0x000000000027ACE0 string=0x000000000027ACE4 "?"
 *   insn=0x000000000027ACE4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027ACF8 string=0x000000000027ACFC ""
 *   insn=0x000000000027ACFC string=0x000000000027AD00 "?"
 *   insn=0x000000000027AD04 string=0x000000000027AD08 "\t"
 *   insn=0x000000000027AD0C string=0x000000000027AD10 "`"
 *   insn=0x000000000027AD14 string=0x000000000027AD18 "j"
 *   insn=0x000000000027AD18 string=0x000000000027ACC4 "h&N))"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ManaComponent::Update(Caver::ManaComponent *this, float a2)
{
  float v3; // s1
  int v4; // w9
  int v5; // w9
  int v6; // w8
  int v7; // w9
  float v8; // s0
  int v9; // w9
  Caver::GameEvent *v10; // x0
  Caver::GameEvent *v11; // x1

  v3 = *((float *)this + 31) + a2;
  *((float *)this + 31) = v3;
  if ( v3 >= 1.5 )
  {
    v4 = *((_DWORD *)this + 29);
    do
    {
      v3 = v3 + -1.5;
      if ( *((_DWORD *)this + 28) > v4 + 1 )
        v5 = v4 + 1;
      else
        v5 = *((_DWORD *)this + 28);
      v4 = v5 & ~(v5 >> 31);
    }
    while ( v3 >= 1.5 );
    *((float *)this + 31) = v3;
    *((_DWORD *)this + 29) = v4;
  }
  if ( *((int *)this + 30) < 1 || (v6 = *((_DWORD *)this + 28), v7 = *((_DWORD *)this + 29), v7 >= v6) )
  {
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    v8 = *((float *)this + 32) + a2;
    *((float *)this + 32) = v8;
    if ( v8 >= 4.0 )
    {
      while ( 1 )
      {
        v9 = v7 + 4;
        if ( v6 > v9 )
          v6 = v9;
        *((_DWORD *)this + 32) = 0;
        *((_DWORD *)this + 29) = v6 & ~(v6 >> 31);
        v10 = (Caver::GameEvent *)operator new(0x68u);
        *(_DWORD *)v10 = 6;
        *((_QWORD *)v10 + 2) = 0;
        *((_QWORD *)v10 + 3) = 0;
        *((_QWORD *)v10 + 4) = (char *)v10 + 16;
        *((_QWORD *)v10 + 5) = (char *)v10 + 16;
        *((_QWORD *)v10 + 6) = 0;
        *((_QWORD *)v10 + 8) = 0;
        *((_QWORD *)v10 + 9) = 0;
        *((_QWORD *)v10 + 10) = (char *)v10 + 64;
        *((_QWORD *)v10 + 11) = (char *)v10 + 64;
        *((_QWORD *)v10 + 12) = 0;
        Caver::GameEvent::SendEvent(v10, v11);
        if ( *((float *)this + 32) < 4.0 )
          break;
        v6 = *((_DWORD *)this + 28);
        v7 = *((_DWORD *)this + 29);
      }
    }
  }
}


/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000298D2C
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent7ProcessEPSt6vectorIN5boost13intrusive_ptrINS_9ComponentEEESaIS5_EE
 * Demangled: Caver::LeapingMonsterControllerComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 11
 *   insn=0x0000000000298D38 string=0x0000000000298D3C "hr@"
 *   insn=0x0000000000298D40 string=0x0000000000298D44 "`B"
 *   insn=0x0000000000298D40 string=0x0000000000298D58 "I@"
 *   insn=0x0000000000298D48 string=0x0000000000298D4C "e{"
 *   insn=0x0000000000298D4C string=0x0000000000298D50 "hr@"
 *   insn=0x0000000000298D4C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000298D50 string=0x0000000000298D54 "("
 *   insn=0x0000000000298D58 string=0x0000000000298D5C "i"
 *   insn=0x0000000000298D5C string=0x0000000000298D60 "`"
 *   insn=0x0000000000298D60 string=0x0000000000298D64 "!-H"
 *   insn=0x0000000000298D6C string=0x0000000000298D70 "@ "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LeapingMonsterControllerComponent::Process(Caver::Component *a1)
{
  __int64 v2; // x8

  v2 = *((_QWORD *)a1 + 28);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 208), a1), (v2 = *((_QWORD *)a1 + 28)) != 0) )
  {
    *(float *)(*(_QWORD *)(v2 + 144) + 48LL) = *(float *)(*(_QWORD *)(v2 + 144) + 48LL)
                                             * (float)(*((float *)a1 + 50) / 100.0);
  }
  return 1;
}


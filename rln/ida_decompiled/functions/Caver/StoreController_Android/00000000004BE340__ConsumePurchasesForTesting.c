/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BE340
 * Mangled: _ZN5Caver23StoreController_Android26ConsumePurchasesForTestingEv
 * Demangled: Caver::StoreController_Android::ConsumePurchasesForTesting(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002038E0  Caver::AndroidConsumePurchasesForTesting(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController_Android::ConsumePurchasesForTesting(Caver::StoreController_Android *this)
{
  return Caver::AndroidConsumePurchasesForTesting(this);
}


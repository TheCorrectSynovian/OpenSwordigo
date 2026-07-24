/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b71dc
 * Function: boost::detail::sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<boost::random::mersenne_twister<unsigned int, 32, 624, 397, 31,
   2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u> >::dispose() */

void __thiscall
boost::detail::
sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
::dispose(sp_counted_impl_p<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>
          *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



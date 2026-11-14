#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__msg__DeliveryStatus() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__msg__DeliveryStatus__init(msg: *mut DeliveryStatus) -> bool;
    fn warehouse_interfaces__msg__DeliveryStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryStatus>, size: usize) -> bool;
    fn warehouse_interfaces__msg__DeliveryStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryStatus>);
    fn warehouse_interfaces__msg__DeliveryStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryStatus>) -> bool;
}

// Corresponds to warehouse_interfaces__msg__DeliveryStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub package_count: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,

}

impl DeliveryStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_MOVING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_DELIVERING: u8 = 2;

}


impl Default for DeliveryStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__msg__DeliveryStatus__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__msg__DeliveryStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__msg__DeliveryStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__msg__DeliveryStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__msg__DeliveryStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryStatus where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/msg/DeliveryStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__msg__DeliveryStatus() }
  }
}



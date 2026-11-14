#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__srv__LoadPackage_Request() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__srv__LoadPackage_Request__init(msg: *mut LoadPackage_Request) -> bool;
    fn warehouse_interfaces__srv__LoadPackage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Request>, size: usize) -> bool;
    fn warehouse_interfaces__srv__LoadPackage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Request>);
    fn warehouse_interfaces__srv__LoadPackage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadPackage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Request>) -> bool;
}

// Corresponds to warehouse_interfaces__srv__LoadPackage_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadPackage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub package_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub weight: f32,

}



impl Default for LoadPackage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__srv__LoadPackage_Request__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__srv__LoadPackage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadPackage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadPackage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadPackage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/srv/LoadPackage_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__srv__LoadPackage_Request() }
  }
}


#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__srv__LoadPackage_Response() -> *const std::ffi::c_void;
}

#[link(name = "warehouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn warehouse_interfaces__srv__LoadPackage_Response__init(msg: *mut LoadPackage_Response) -> bool;
    fn warehouse_interfaces__srv__LoadPackage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Response>, size: usize) -> bool;
    fn warehouse_interfaces__srv__LoadPackage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Response>);
    fn warehouse_interfaces__srv__LoadPackage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadPackage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadPackage_Response>) -> bool;
}

// Corresponds to warehouse_interfaces__srv__LoadPackage_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadPackage_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_packages: u8,

}



impl Default for LoadPackage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !warehouse_interfaces__srv__LoadPackage_Response__init(&mut msg as *mut _) {
        panic!("Call to warehouse_interfaces__srv__LoadPackage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadPackage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { warehouse_interfaces__srv__LoadPackage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadPackage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadPackage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "warehouse_interfaces/srv/LoadPackage_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__warehouse_interfaces__srv__LoadPackage_Response() }
  }
}






#[link(name = "warehouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__srv__LoadPackage() -> *const std::ffi::c_void;
}

// Corresponds to warehouse_interfaces__srv__LoadPackage
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadPackage;

impl rosidl_runtime_rs::Service for LoadPackage {
    type Request = LoadPackage_Request;
    type Response = LoadPackage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__warehouse_interfaces__srv__LoadPackage() }
    }
}



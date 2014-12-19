// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

// Begin prologue.
//
//
// End prologue.

#include "pidf+xml-sskel.hxx"

namespace pidf
{
  // note_sskel
  //

  void note_sskel::
  lang_serializer (::namespace_::lang_sskel& lang)
  {
    this->lang_serializer_ = &lang;
  }

  void note_sskel::
  serializers (::namespace_::lang_sskel& lang)
  {
    this->lang_serializer_ = &lang;
  }

  note_sskel::
  note_sskel (::xml_schema::string_sskel* tiein)
  : ::xml_schema::string_sskel (tiein, 0),
    note_impl_ (0),
    lang_serializer_ (0)
  {
  }

  note_sskel::
  note_sskel (note_sskel* impl, void*)
  : ::xml_schema::string_sskel (impl, 0),
    note_impl_ (impl),
    lang_serializer_ (0)
  {
  }

  // presence_sskel
  //

  void presence_sskel::
  entity_serializer (::xml_schema::uri_sskel& entity)
  {
    this->entity_serializer_ = &entity;
  }

  void presence_sskel::
  tuple_serializer (::pidf::tuple_sskel& s)
  {
    this->tuple_serializer_ = &s;
  }

  void presence_sskel::
  tuple_serializer (::xml_schema::serializer_map& m)
  {
    this->tuple_serializer_map_ = &m;
  }

  void presence_sskel::
  note_serializer (::pidf::note_sskel& s)
  {
    this->note_serializer_ = &s;
  }

  void presence_sskel::
  note_serializer (::xml_schema::serializer_map& m)
  {
    this->note_serializer_map_ = &m;
  }

  void presence_sskel::
  serializers (::xml_schema::uri_sskel& entity,
               ::pidf::tuple_sskel& tuple,
               ::pidf::note_sskel& note)
  {
    this->entity_serializer_ = &entity;
    this->tuple_serializer_ = &tuple;
    this->note_serializer_ = &note;
  }

  void presence_sskel::
  serializer_maps (::xml_schema::serializer_map& tuple,
                   ::xml_schema::serializer_map& note)
  {
    this->tuple_serializer_map_ = &tuple;
    this->note_serializer_map_ = &note;
  }

  presence_sskel::
  presence_sskel ()
  : presence_impl_ (0),
    entity_serializer_ (0),
    tuple_serializer_ (0),
    tuple_serializer_map_ (0),
    note_serializer_ (0),
    note_serializer_map_ (0)
  {
  }

  presence_sskel::
  presence_sskel (presence_sskel* impl, void*)
  : ::xsde::cxx::serializer::validating::complex_content (impl, 0),
    presence_impl_ (impl),
    entity_serializer_ (0),
    tuple_serializer_ (0),
    tuple_serializer_map_ (0),
    note_serializer_ (0),
    note_serializer_map_ (0)
  {
  }

  // basic_sskel
  //

  basic_sskel::
  basic_sskel (::xml_schema::string_sskel* tiein)
  : ::xml_schema::string_sskel (tiein, 0),
    basic_impl_ (0)
  {
    this->_enumeration_facet (_xsde_basic_sskel_enums_, 2UL);
  }

  basic_sskel::
  basic_sskel (basic_sskel* impl, void*)
  : ::xml_schema::string_sskel (impl, 0),
    basic_impl_ (impl)
  {
    this->_enumeration_facet (_xsde_basic_sskel_enums_, 2UL);
  }

  // status_sskel
  //

  void status_sskel::
  basic_serializer (::pidf::basic_sskel& s)
  {
    this->basic_serializer_ = &s;
  }

  void status_sskel::
  basic_serializer (::xml_schema::serializer_map& m)
  {
    this->basic_serializer_map_ = &m;
  }

  void status_sskel::
  serializers (::pidf::basic_sskel& basic)
  {
    this->basic_serializer_ = &basic;
  }

  void status_sskel::
  serializer_maps (::xml_schema::serializer_map& basic)
  {
    this->basic_serializer_map_ = &basic;
  }

  status_sskel::
  status_sskel ()
  : status_impl_ (0),
    basic_serializer_ (0),
    basic_serializer_map_ (0)
  {
  }

  status_sskel::
  status_sskel (status_sskel* impl, void*)
  : ::xsde::cxx::serializer::validating::complex_content (impl, 0),
    status_impl_ (impl),
    basic_serializer_ (0),
    basic_serializer_map_ (0)
  {
  }

  // qvalue_sskel
  //

  qvalue_sskel::
  qvalue_sskel (::xml_schema::decimal_sskel* tiein)
  : ::xml_schema::decimal_sskel (tiein, 0),
    qvalue_impl_ (0)
  {
  }

  qvalue_sskel::
  qvalue_sskel (qvalue_sskel* impl, void*)
  : ::xml_schema::decimal_sskel (impl, 0),
    qvalue_impl_ (impl)
  {
  }

  // contact_sskel
  //

  void contact_sskel::
  priority_serializer (::pidf::qvalue_sskel& priority)
  {
    this->priority_serializer_ = &priority;
  }

  void contact_sskel::
  serializers (::pidf::qvalue_sskel& priority)
  {
    this->priority_serializer_ = &priority;
  }

  contact_sskel::
  contact_sskel (::xml_schema::uri_sskel* tiein)
  : ::xml_schema::uri_sskel (tiein, 0),
    contact_impl_ (0),
    priority_serializer_ (0)
  {
  }

  contact_sskel::
  contact_sskel (contact_sskel* impl, void*)
  : ::xml_schema::uri_sskel (impl, 0),
    contact_impl_ (impl),
    priority_serializer_ (0)
  {
  }

  // tuple_sskel
  //

  void tuple_sskel::
  id_serializer (::xml_schema::id_sskel& id)
  {
    this->id_serializer_ = &id;
  }

  void tuple_sskel::
  status_serializer (::pidf::status_sskel& s)
  {
    this->status_serializer_ = &s;
  }

  void tuple_sskel::
  status_serializer (::xml_schema::serializer_map& m)
  {
    this->status_serializer_map_ = &m;
  }

  void tuple_sskel::
  contact_serializer (::pidf::contact_sskel& s)
  {
    this->contact_serializer_ = &s;
  }

  void tuple_sskel::
  contact_serializer (::xml_schema::serializer_map& m)
  {
    this->contact_serializer_map_ = &m;
  }

  void tuple_sskel::
  note_serializer (::pidf::note_sskel& s)
  {
    this->note_serializer_ = &s;
  }

  void tuple_sskel::
  note_serializer (::xml_schema::serializer_map& m)
  {
    this->note_serializer_map_ = &m;
  }

  void tuple_sskel::
  timestamp_serializer (::xml_schema::date_time_sskel& s)
  {
    this->timestamp_serializer_ = &s;
  }

  void tuple_sskel::
  timestamp_serializer (::xml_schema::serializer_map& m)
  {
    this->timestamp_serializer_map_ = &m;
  }

  void tuple_sskel::
  serializers (::xml_schema::id_sskel& id,
               ::pidf::status_sskel& status,
               ::pidf::contact_sskel& contact,
               ::pidf::note_sskel& note,
               ::xml_schema::date_time_sskel& timestamp)
  {
    this->id_serializer_ = &id;
    this->status_serializer_ = &status;
    this->contact_serializer_ = &contact;
    this->note_serializer_ = &note;
    this->timestamp_serializer_ = &timestamp;
  }

  void tuple_sskel::
  serializer_maps (::xml_schema::serializer_map& status,
                   ::xml_schema::serializer_map& contact,
                   ::xml_schema::serializer_map& note,
                   ::xml_schema::serializer_map& timestamp)
  {
    this->status_serializer_map_ = &status;
    this->contact_serializer_map_ = &contact;
    this->note_serializer_map_ = &note;
    this->timestamp_serializer_map_ = &timestamp;
  }

  tuple_sskel::
  tuple_sskel ()
  : tuple_impl_ (0),
    id_serializer_ (0),
    status_serializer_ (0),
    status_serializer_map_ (0),
    contact_serializer_ (0),
    contact_serializer_map_ (0),
    note_serializer_ (0),
    note_serializer_map_ (0),
    timestamp_serializer_ (0),
    timestamp_serializer_map_ (0)
  {
  }

  tuple_sskel::
  tuple_sskel (tuple_sskel* impl, void*)
  : ::xsde::cxx::serializer::validating::complex_content (impl, 0),
    tuple_impl_ (impl),
    id_serializer_ (0),
    status_serializer_ (0),
    status_serializer_map_ (0),
    contact_serializer_ (0),
    contact_serializer_map_ (0),
    note_serializer_ (0),
    note_serializer_map_ (0),
    timestamp_serializer_ (0),
    timestamp_serializer_map_ (0)
  {
  }
}

#include <assert.h>

#include <string.h>
#include <xsde/cxx/serializer/substitution-map.hxx>
#include <xsde/cxx/serializer/validating/inheritance-map.hxx>

static
const ::xsde::cxx::serializer::substitution_map_init
_xsde_substitution_map_init_;

static
const ::xsde::cxx::serializer::validating::inheritance_map_init
_xsde_inheritance_map_init_;

namespace pidf
{
  // note_sskel
  //

  bool note_sskel::
  lang_present ()
  {
    return this->note_impl_ ? this->note_impl_->lang_present () : false;
  }

  void note_sskel::
  _reset ()
  {
    typedef ::xml_schema::string_sskel base;
    base::_reset ();

    if (this->lang_serializer_)
      this->lang_serializer_->_reset ();
  }

  const char* note_sskel::
  _static_type ()
  {
    return "note urn:ietf:params:xml:ns:pidf";
  }

  const char* note_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  static
  const ::xsde::cxx::serializer::validating::inheritance_map_entry
  _xsde_note_sskel_inheritance_map_entry_ (
    note_sskel::_static_type (),
    ::xml_schema::string_sskel::_static_type ());

  void note_sskel::
  pre (const ::std::string& x)
  {
    assert (this->string_impl_);
    this->string_impl_->pre (x);
  }

  // presence_sskel
  //

  bool presence_sskel::
  tuple_next ()
  {
    return this->presence_impl_ ? this->presence_impl_->tuple_next () : false;
  }

  bool presence_sskel::
  note_next ()
  {
    return this->presence_impl_ ? this->presence_impl_->note_next () : false;
  }

  bool presence_sskel::
  any_next ()
  {
    return this->presence_impl_ ? this->presence_impl_->any_next () : false;
  }

  void presence_sskel::
  any (::std::string& ns, ::std::string& n)
  {
    if (this->presence_impl_)
      this->presence_impl_->any (ns, n);
  }

  void presence_sskel::
  serialize_any ()
  {
    if (this->presence_impl_)
      this->presence_impl_->serialize_any ();
  }

  void presence_sskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::xsde::cxx::serializer::validating::complex_content base;
    base::_reset ();

    if (this->entity_serializer_)
      this->entity_serializer_->_reset ();

    this->resetting_ = true;

    if (this->tuple_serializer_)
      this->tuple_serializer_->_reset ();

    if (this->tuple_serializer_map_)
      this->tuple_serializer_map_->reset ();

    if (this->note_serializer_)
      this->note_serializer_->_reset ();

    if (this->note_serializer_map_)
      this->note_serializer_map_->reset ();

    this->resetting_ = false;
  }

  const char* presence_sskel::
  _static_type ()
  {
    return "presence urn:ietf:params:xml:ns:pidf";
  }

  const char* presence_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  // basic_sskel
  //

  const char* basic_sskel::
  _static_type ()
  {
    return "basic urn:ietf:params:xml:ns:pidf";
  }

  const char* basic_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  static
  const ::xsde::cxx::serializer::validating::inheritance_map_entry
  _xsde_basic_sskel_inheritance_map_entry_ (
    basic_sskel::_static_type (),
    ::xml_schema::string_sskel::_static_type ());

  void basic_sskel::
  pre (const ::std::string& x)
  {
    assert (this->string_impl_);
    this->string_impl_->pre (x);
  }

  const char* const basic_sskel::_xsde_basic_sskel_enums_[2UL] = 
  {
    "closed",
    "open"
  };

  // status_sskel
  //

  bool status_sskel::
  basic_present ()
  {
    return this->status_impl_ ? this->status_impl_->basic_present () : false;
  }

  bool status_sskel::
  any_next ()
  {
    return this->status_impl_ ? this->status_impl_->any_next () : false;
  }

  void status_sskel::
  any (::std::string& ns, ::std::string& n)
  {
    if (this->status_impl_)
      this->status_impl_->any (ns, n);
  }

  void status_sskel::
  serialize_any ()
  {
    if (this->status_impl_)
      this->status_impl_->serialize_any ();
  }

  void status_sskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::xsde::cxx::serializer::validating::complex_content base;
    base::_reset ();

    this->resetting_ = true;

    if (this->basic_serializer_)
      this->basic_serializer_->_reset ();

    if (this->basic_serializer_map_)
      this->basic_serializer_map_->reset ();

    this->resetting_ = false;
  }

  const char* status_sskel::
  _static_type ()
  {
    return "status urn:ietf:params:xml:ns:pidf";
  }

  const char* status_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  // qvalue_sskel
  //

  const char* qvalue_sskel::
  _static_type ()
  {
    return "qvalue urn:ietf:params:xml:ns:pidf";
  }

  const char* qvalue_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  static
  const ::xsde::cxx::serializer::validating::inheritance_map_entry
  _xsde_qvalue_sskel_inheritance_map_entry_ (
    qvalue_sskel::_static_type (),
    ::xml_schema::decimal_sskel::_static_type ());

  void qvalue_sskel::
  pre (double x)
  {
    assert (this->decimal_impl_);
    this->decimal_impl_->pre (x);
  }

  // contact_sskel
  //

  bool contact_sskel::
  priority_present ()
  {
    return this->contact_impl_ ? this->contact_impl_->priority_present () : false;
  }

  void contact_sskel::
  _reset ()
  {
    typedef ::xml_schema::uri_sskel base;
    base::_reset ();

    if (this->priority_serializer_)
      this->priority_serializer_->_reset ();
  }

  const char* contact_sskel::
  _static_type ()
  {
    return "contact urn:ietf:params:xml:ns:pidf";
  }

  const char* contact_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }

  static
  const ::xsde::cxx::serializer::validating::inheritance_map_entry
  _xsde_contact_sskel_inheritance_map_entry_ (
    contact_sskel::_static_type (),
    ::xml_schema::uri_sskel::_static_type ());

  void contact_sskel::
  pre (const ::std::string& x)
  {
    assert (this->uri_impl_);
    this->uri_impl_->pre (x);
  }

  // tuple_sskel
  //

  bool tuple_sskel::
  any_next ()
  {
    return this->tuple_impl_ ? this->tuple_impl_->any_next () : false;
  }

  void tuple_sskel::
  any (::std::string& ns, ::std::string& n)
  {
    if (this->tuple_impl_)
      this->tuple_impl_->any (ns, n);
  }

  void tuple_sskel::
  serialize_any ()
  {
    if (this->tuple_impl_)
      this->tuple_impl_->serialize_any ();
  }

  bool tuple_sskel::
  contact_present ()
  {
    return this->tuple_impl_ ? this->tuple_impl_->contact_present () : false;
  }

  bool tuple_sskel::
  note_next ()
  {
    return this->tuple_impl_ ? this->tuple_impl_->note_next () : false;
  }

  bool tuple_sskel::
  timestamp_present ()
  {
    return this->tuple_impl_ ? this->tuple_impl_->timestamp_present () : false;
  }

  void tuple_sskel::
  _reset ()
  {
    if (this->resetting_)
      return;

    typedef ::xsde::cxx::serializer::validating::complex_content base;
    base::_reset ();

    if (this->id_serializer_)
      this->id_serializer_->_reset ();

    this->resetting_ = true;

    if (this->status_serializer_)
      this->status_serializer_->_reset ();

    if (this->status_serializer_map_)
      this->status_serializer_map_->reset ();

    if (this->contact_serializer_)
      this->contact_serializer_->_reset ();

    if (this->contact_serializer_map_)
      this->contact_serializer_map_->reset ();

    if (this->note_serializer_)
      this->note_serializer_->_reset ();

    if (this->note_serializer_map_)
      this->note_serializer_map_->reset ();

    if (this->timestamp_serializer_)
      this->timestamp_serializer_->_reset ();

    if (this->timestamp_serializer_map_)
      this->timestamp_serializer_map_->reset ();

    this->resetting_ = false;
  }

  const char* tuple_sskel::
  _static_type ()
  {
    return "tuple urn:ietf:params:xml:ns:pidf";
  }

  const char* tuple_sskel::
  _dynamic_type () const
  {
    return _static_type ();
  }
}

namespace pidf
{
  // Element validation and serialization for presence_sskel.
  //
  void presence_sskel::
  _serialize_content ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    // tuple
    //
    while (this->tuple_next ())
    {
      ctx.type_id (0);
      const ::pidf::tuple& r = this->tuple ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::tuple_sskel* s = 0;

      if (t == 0 && this->tuple_serializer_ != 0)
        s = this->tuple_serializer_;
      else if (this->tuple_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->tuple_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::tuple_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::tuple_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "tuple");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }

    // note
    //
    while (this->note_next ())
    {
      ctx.type_id (0);
      const ::pidf::note& r = this->note ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::note_sskel* s = 0;

      if (t == 0 && this->note_serializer_ != 0)
        s = this->note_serializer_;
      else if (this->note_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->note_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::note_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::note_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "note");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }

    while (this->any_next ())
    {
      ::std::string ns, name;
      this->any (ns, name);

      if ((!ns.empty () && ns != "urn:ietf:params:xml:ns:pidf"))
      {
        if (ns.empty ())
        {
          this->_start_element (name.c_str ());
        }
        else
        {
          this->_start_element (ns.c_str (), name.c_str ());
        }

        this->serialize_any ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::unexpected_element);
        return;
      }
    }
  }

  // Element validation and serialization for status_sskel.
  //
  void status_sskel::
  _serialize_content ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    // basic
    //
    if (this->basic_present ())
    {
      ctx.type_id (0);
      const ::pidf::basic& r = this->basic ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::basic_sskel* s = 0;

      if (t == 0 && this->basic_serializer_ != 0)
        s = this->basic_serializer_;
      else if (this->basic_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->basic_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::basic_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::basic_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "basic");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }

    while (this->any_next ())
    {
      ::std::string ns, name;
      this->any (ns, name);

      if ((!ns.empty () && ns != "urn:ietf:params:xml:ns:pidf"))
      {
        if (ns.empty ())
        {
          this->_start_element (name.c_str ());
        }
        else
        {
          this->_start_element (ns.c_str (), name.c_str ());
        }

        this->serialize_any ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::unexpected_element);
        return;
      }
    }
  }

  // Element validation and serialization for tuple_sskel.
  //
  void tuple_sskel::
  _serialize_content ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    // status
    //
    {
      ctx.type_id (0);
      const ::pidf::status& r = this->status ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::status_sskel* s = 0;

      if (t == 0 && this->status_serializer_ != 0)
        s = this->status_serializer_;
      else if (this->status_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->status_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::status_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::status_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "status");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::expected_element);
        return;
      }
    }

    while (this->any_next ())
    {
      ::std::string ns, name;
      this->any (ns, name);

      if ((!ns.empty () && ns != "urn:ietf:params:xml:ns:pidf"))
      {
        if (ns.empty ())
        {
          this->_start_element (name.c_str ());
        }
        else
        {
          this->_start_element (ns.c_str (), name.c_str ());
        }

        this->serialize_any ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::unexpected_element);
        return;
      }
    }

    // contact
    //
    if (this->contact_present ())
    {
      ctx.type_id (0);
      const ::pidf::contact& r = this->contact ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::contact_sskel* s = 0;

      if (t == 0 && this->contact_serializer_ != 0)
        s = this->contact_serializer_;
      else if (this->contact_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->contact_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::contact_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::contact_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "contact");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }

    // note
    //
    while (this->note_next ())
    {
      ctx.type_id (0);
      const ::pidf::note& r = this->note ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::pidf::note_sskel* s = 0;

      if (t == 0 && this->note_serializer_ != 0)
        s = this->note_serializer_;
      else if (this->note_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->note_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::pidf::note_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::pidf::note_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "note");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }

    // timestamp
    //
    if (this->timestamp_present ())
    {
      ctx.type_id (0);
      const ::xml_schema::date_time& r = this->timestamp ();

      const void* t = ctx.type_id ();
      const char* dt = 0;
      ::xml_schema::date_time_sskel* s = 0;

      if (t == 0 && this->timestamp_serializer_ != 0)
        s = this->timestamp_serializer_;
      else if (this->timestamp_serializer_map_ != 0)
      {
        ::xml_schema::serializer_base* b = this->timestamp_serializer_map_->find (t);

        if (b != 0)
        {
          dt = b->_dynamic_type ();
          const char* st = ::xml_schema::date_time_sskel::_static_type ();

          if (strcmp (dt, st) == 0)
            dt = 0;

          if (dt != 0 && !::xsde::cxx::serializer::validating::inheritance_map_instance ().check (dt, st))
          {
            ctx.schema_error (::xsde::cxx::schema_error::not_derived);
            return;
          }

          s = static_cast< ::xml_schema::date_time_sskel* > (b);
        }
      }

      if (s)
      {
        s->pre (r);
        this->_start_element ("urn:ietf:params:xml:ns:pidf", "timestamp");
        if (dt != 0)
          this->_set_type (dt);

        s->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        s->_serialize_attributes ();

        if (ctx.error_type ())
          return;

        s->_serialize_content ();

        if (ctx.error_type ())
          return;

        s->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_element ();
        s->post ();
      }
    }
  }
}

namespace pidf
{
  // Attribute validation and serialization for note_sskel.
  //
  void note_sskel::
  _serialize_attributes ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    typedef ::xml_schema::string_sskel base;
    base::_serialize_attributes ();

    if (ctx.error_type ())
      return;

    // lang
    //
    if (this->lang_present ())
    {
      const ::namespace_::lang& r = this->lang ();

      if (this->lang_serializer_)
      {
        this->lang_serializer_->pre (r);
        this->_start_attribute ("http://www.w3.org/XML/1998/namespace", "lang");
        this->lang_serializer_->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        this->lang_serializer_->_serialize_content ();

        if (ctx.error_type ())
          return;

        this->lang_serializer_->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_attribute ();
        this->lang_serializer_->post ();
      }
    }
  }

  // Attribute validation and serialization for presence_sskel.
  //
  void presence_sskel::
  _serialize_attributes ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    // entity
    //
    {
      const ::std::string& r = this->entity ();

      if (this->entity_serializer_)
      {
        this->entity_serializer_->pre (r);
        this->_start_attribute ("entity");
        this->entity_serializer_->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        this->entity_serializer_->_serialize_content ();

        if (ctx.error_type ())
          return;

        this->entity_serializer_->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_attribute ();
        this->entity_serializer_->post ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::expected_attribute);
        return;
      }
    }
  }

  // Attribute validation and serialization for contact_sskel.
  //
  void contact_sskel::
  _serialize_attributes ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    typedef ::xml_schema::uri_sskel base;
    base::_serialize_attributes ();

    if (ctx.error_type ())
      return;

    // priority
    //
    if (this->priority_present ())
    {
      const ::pidf::qvalue& r = this->priority ();

      if (this->priority_serializer_)
      {
        this->priority_serializer_->pre (r);
        this->_start_attribute ("priority");
        this->priority_serializer_->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        this->priority_serializer_->_serialize_content ();

        if (ctx.error_type ())
          return;

        this->priority_serializer_->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_attribute ();
        this->priority_serializer_->post ();
      }
    }
  }

  // Attribute validation and serialization for tuple_sskel.
  //
  void tuple_sskel::
  _serialize_attributes ()
  {
    ::xsde::cxx::serializer::context& ctx = this->_context ();

    // id
    //
    {
      const ::std::string& r = this->id ();

      if (this->id_serializer_)
      {
        this->id_serializer_->pre (r);
        this->_start_attribute ("id");
        this->id_serializer_->_pre_impl (ctx);

        if (ctx.error_type ())
          return;

        this->id_serializer_->_serialize_content ();

        if (ctx.error_type ())
          return;

        this->id_serializer_->_post_impl ();

        if (ctx.error_type ())
          return;

        this->_end_attribute ();
        this->id_serializer_->post ();
      }
      else
      {
        this->_schema_error (::xsde::cxx::schema_error::expected_attribute);
        return;
      }
    }
  }
}

// Begin epilogue.
//
//
// End epilogue.

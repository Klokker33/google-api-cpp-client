// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_SPONSOR_H_
#define  GOOGLE_YOUTUBE_API_SPONSOR_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/sponsor_snippet.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * A sponsor resource represents a sponsor for a YouTube channel. A sponsor
 * provides recurring monetary support to a creator and receives special
 * benefits.
 *
 * @ingroup DataObject
 */
class Sponsor : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Sponsor* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Sponsor(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Sponsor(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Sponsor();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::Sponsor</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::Sponsor");
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID that YouTube assigns to uniquely identify the sponsor.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#sponsor".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const SponsorSnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the sponsor.
   *
   * @return The result can be modified to change the attribute value.
   */
  SponsorSnippet mutable_snippet();

 private:
  void operator=(const Sponsor&);
};  // Sponsor
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_SPONSOR_H_

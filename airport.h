#pragma once

#include <string>
#include <iostream>

struct Airport {

public:
  Airport(const std::string& id,  const std::string& name,  const std::string& city, const std::string& country, 
          double longitude, double latitude, size_t index) : kID_(id), kName_(name), kCity_(city), kCountry_(country),
          kLongitude_(longitude), kLatitude_(latitude), kIndex_(index) {};

  /**
   * getter functions 
   */
  inline const std::string& GetID() const { return kID_; }

  inline const std::string& GetName() const { return kName_; }

  inline const std::string& GetCity() const { return kCity_; }

  inline const std::string& GetCountry() const { return kCountry_; }

  inline double GetLatitude() const { return kLatitude_; }

  inline double GetLongitude() const { return kLongitude_; }

  inline double GetIndex() const { return kIndex_; }

  /**
   * Puts key information of airport into outstream object
   */
  friend std::ostream& operator<<(std::ostream& os, const Airport& airport) { 
    return os << airport.kID_ << ", " << airport.kName_ << ", " << airport.kCity_ << ", " 
              << airport.kLongitude_ << ", " << airport.kLatitude_; 
  }

private:

  /**
   * @kLatitude_ : latitude of airport
   * @kLongitude_ : longitude of airport
   * @kCity_ : name of city airport is in
   * @kCountry_ : country airport is in
   * @kName_ : name of airport
   * @kID_ : 3-letter IATA code
   * @kIndex_ : index of vertex in graph
   */
  const std::string kID_;
  const std::string kName_;
  const std::string kCity_;
  const std::string kCountry_;
  const double kLongitude_;
  const double kLatitude_;
  const size_t kIndex_;
};